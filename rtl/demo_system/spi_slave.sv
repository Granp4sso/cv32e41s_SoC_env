// Copyright 2023 University of Naples, Federico II
// Date: 09 October 2023

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Engineer:        Stefano Mercogliano - stefano.mercogliano@unina.it          //
//                                                                              //
//                                                                              //
// Description:     SPI Slave Interface                                         // 
//                  This interface only works in rx. It cannot provide any      //
//                  answer to the master. it can be used as a baseline to       //
//                  support command-based spi communication.                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

module spi_slave #(
  parameter int unsigned SPIClockScale = 8,
  parameter bit CPOL = 0,
  parameter bit CPHA = 0
)(
    input               clk_i,
    input               rst_ni,

    // This simple slave only recieves over MOSI
    input logic         spi_slave_mosi_i,
    input logic         spi_slave_clk_i,
    input logic         spi_slave_cs_i,

    output  logic [7:0] fifo_data_o,
    output logic        fifo_push_o
  );

  // ClocksPerBaud: Clock cycles in between two SPI SCLK cycles (DEFAULT:4)
  localparam int unsigned ClocksPerBaud = SPIClockScale;
  // ToggleCount: The point which SCK would toggle (DEFAULT:2)
  localparam int unsigned ToggleCount = ClocksPerBaud / 2;
  // CountWidth: Width of the implemented counter for generating SCK (DEFAULT:1)
  localparam int unsigned CountWidth = $clog2(ToggleCount);

  ////////////////////////
  // Signal Definition  //
  ////////////////////////

  typedef enum logic[1:0] {
    SPI_IDLE,
    SPI_RECV,
    SPI_STOP
  } spi_state_e;

  typedef enum logic[1:0] {
    ED_IDLE,
    ED_WAIT_FOR_LEADING,
    ED_WAIT_FOR_TRAILING
  } ed_state_e; // SPI clock detector FSM

  //////////////////////////////////
  // SPI Clock Edges Detector FSM //
  //////////////////////////////////

  ed_state_e ed_state_q, ed_state_d;
  logic trailing_edge_q, trailing_edge_d;
  logic leading_edge_q, leading_edge_d;

  always_comb begin

    trailing_edge_d = 1'b0;
    leading_edge_d = 1'b0;
    ed_state_d = ed_state_q;

    case (ed_state_q)
      ED_IDLE: begin
        // Chip Select low starts comunication
        // Remember, CPOL = 0 means leading = 1 and trailing = 0, CPOL = 1 is viceversa
        ed_state_d = (~spi_slave_cs_i) ? ED_WAIT_FOR_LEADING : ED_IDLE;
      end
      ED_WAIT_FOR_LEADING: begin 
        trailing_edge_d = 1'b0;
        leading_edge_d = (spi_slave_clk_i == ~CPOL) ? 1'b1 : 1'b0;
        ed_state_d = (spi_slave_clk_i == ~CPOL) ? ED_WAIT_FOR_TRAILING : ED_WAIT_FOR_LEADING;
      end
      ED_WAIT_FOR_TRAILING: begin
        leading_edge_d  = 1'b0;
        trailing_edge_d = (spi_slave_clk_i != ~CPOL) ? 1'b1 : 1'b0;
        ed_state_d      = (spi_slave_clk_i != ~CPOL) ? ((bit_counter_q == 3'b000) ? ED_IDLE : ED_WAIT_FOR_LEADING) : ED_WAIT_FOR_TRAILING;
      end
      default: begin
      end
    endcase
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      ed_state_q      <= ED_IDLE;
    end else begin
      ed_state_q      <= ed_state_d;
    end
  end

  //////////////////
  // FSM process  //
  //////////////////

  // When start_i is asserted we expect data to be available until the stop signal is provided

  spi_state_e spi_state_q, spi_state_d;
  logic [2:0] bit_counter_q, bit_counter_d;
  logic [7:0] recieved_byte_d, recieved_byte_q;

  always_comb begin

    fifo_push_o    = 1'b0;
    fifo_data_o    = '0;
    bit_counter_d  = 3'b111; 
    recieved_byte_d = recieved_byte_q;
    spi_state_d        = spi_state_q;

    case (spi_state_q)
      SPI_IDLE: begin
        spi_state_d = (~spi_slave_cs_i) ? SPI_RECV : SPI_IDLE;
      end
      SPI_RECV: begin 
        //MSB recieving
        recieved_byte_d = {recieved_byte_q[6:0], spi_slave_mosi_i};

        if (bit_counter_q == 3'b000) spi_state_d = SPI_STOP;
        else bit_counter_d = bit_counter_q - 3'd1;

      end
      SPI_STOP: begin
        fifo_push_o     = 1'b1;
        fifo_data_o     = recieved_byte_q;
        spi_state_d     = SPI_IDLE;
      end
      default: begin
      end
    endcase
  end

  generate
    // If CPHA is HIGH, incoming data will be sampled on the trailing edge
    if (CPHA) begin
      always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
          recieved_byte_q  <= '0;
          bit_counter_q   <= 3'b111;
          spi_state_q         <= SPI_IDLE;
          // Data will be sampled on the trailing edge
        end else if (trailing_edge_d || spi_state_q == SPI_IDLE || spi_state_q == SPI_STOP) begin
          recieved_byte_q <= (spi_state_q == SPI_RECV) ? recieved_byte_d : '0;
          bit_counter_q   <= bit_counter_d;
          spi_state_q         <= spi_state_d;
        end
      end
    // If CPHA is LOW, incoming data will be sampled on the leading edge
    end else begin
      always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
          recieved_byte_q  <= '0;
          bit_counter_q   <= 3'b111;
          spi_state_q         <= SPI_IDLE;
        // Set current byte half a cycle before transmitting it.
        end else if (leading_edge_d || spi_state_q == SPI_IDLE || spi_state_q == SPI_STOP) begin
          recieved_byte_q <= (spi_state_q == SPI_RECV) ? recieved_byte_d : '0;
          bit_counter_q   <= bit_counter_d;
          spi_state_q         <= spi_state_d;
        end
      end
    end
  endgenerate


endmodule