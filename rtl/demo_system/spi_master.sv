// Copyright 2023 University of Naples, Federico II
// Date: 09 October 2023

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// Engineer:       Stefano Mercogliano - stefano.mercogliano@unina.it         //
//                                                                            //
//                                                                            //
// Description:    SPI Master Interface                                       //        
//                 This SPI interface allows for the master to transmit an    //
//                 arbitrary number of bytes. However rx is not possible.     //
//                 it can be used as a baseline to support command-based      //
//                 spi communication.                                         //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


module spi_master #(
  parameter int unsigned SPIClockScale = 8,
  parameter bit CPOL = 0,
  parameter bit CPHA = 0
)(
    input               clk_i,
    input               rst_ni,

    // This simple master only writes over MOSI
    output logic        spi_master_mosi_o,
    output logic        spi_master_clk_o,
    output logic        spi_master_cs_o,

    input  logic        start_i,
    input  logic [7:0]  fifo_data_i,
    output logic        fifo_next_req_o
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
    IDLE,
    START,
    SEND,
    STOP
   } spi_state_e;

  spi_state_e state_q, state_d;
  logic [CountWidth-1:0] limit, count;
  logic sck, count_at_limit, sck_pos, sck_neg;

  logic sck_en;

  assign sck_en = (state_q == SEND);
  assign limit = CountWidth'(ToggleCount - 1);
  assign count_at_limit = (count >= limit);

  //////////////////////////
  // SPI Clock Generation //
  //////////////////////////

  always_ff @(posedge clk_i or negedge rst_ni) begin: spi_clk_gen
    // Do not start clock related logic unless we are starting
    // SPI transmission or already at SEND state.
    if (!rst_ni) begin
      count <= '0;
      sck <= CPOL;
    end else if (!(sck_en||start_i)) begin
      count <= '0;
      sck <= CPOL;
    // In the case of counter reaching to the limit, toggle SCK and start over.
    end else if (count_at_limit) begin
      count <= '0;
      sck <= ~sck;
    end else if (sck_en) begin
      count <= count + 1'b1;
    end
  end

  // Only send clock to the pad when we are at the SEND state.
  assign spi_master_clk_o = sck_en ? sck : CPOL;
  // Set to HIGH at the posedge of the serial clock, used internally.
  assign sck_pos = count_at_limit && !sck;
  // Set to HIGH at the negedge of the serial clock, used internally.
  assign sck_neg = count_at_limit && sck;

  //////////////////
  // FSM process  //
  //////////////////

  // When start_i is asserted we expect data to be available until the stop signal is provided

  logic [2:0] bit_counter_q, bit_counter_d;
  logic [7:0] current_byte_q, current_byte_d, recieved_byte_d, recieved_byte_q;


  always_comb begin
    spi_master_mosi_o = 1'b0;
    spi_master_cs_o   = ~start_i;
    fifo_next_req_o   = 1'b0;

    bit_counter_d  = bit_counter_q;
    current_byte_d = current_byte_q;
    state_d        = state_q;

    case (state_q)
      IDLE: begin
        state_d = (start_i) ? SEND : IDLE;
      end
      SEND: begin // This state lasts 8 x ClocksPerBaud clock cycles
        //MSB sending
        spi_master_mosi_o = current_byte_q[7];
        current_byte_d = {current_byte_q[6:0], 1'b0};

        if (bit_counter_q == 3'b000) state_d = STOP;
        else bit_counter_d = bit_counter_q - 3'd1;

      end
      STOP: begin
        fifo_next_req_o = 1'b1;
        state_d         = IDLE;
      end
      default: begin
      end
    endcase
  end

  generate
    // If CPHA is HIGH, incoming data will be sampled on the falling edge while outgoing
    // data will get shifted out on the rising edge.
    if (CPHA) begin
      always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
          current_byte_q  <= '0;
          bit_counter_q   <= 3'b111;
          state_q         <= IDLE;
        end else if (sck_pos || state_q == IDLE) begin
          bit_counter_q   <= bit_counter_d;
          state_q         <= state_d;
          current_byte_q <= (state_q == IDLE) ? fifo_data_i : current_byte_d;
        end
      end
    // If CPHA is LOW, incoming data will be sampled on the rising edge while outgoing
    // data will get shifted out on the falling edge.
    end else begin
      always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
          current_byte_q  <= '0;
          bit_counter_q   <= 3'b111;
          state_q         <= IDLE;
        // Set current byte half a cycle before transmitting it.
        end else if (sck_neg || state_q == IDLE) begin
          current_byte_q <= (state_q == IDLE) ? fifo_data_i : current_byte_d;
          bit_counter_q   <= bit_counter_d;
          state_q         <= state_d;
        end
      end
    end
  endgenerate


endmodule