// Copyright 2023 University of Naples, Federico II
// Date: 09 October 2023

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// Engineer:       Stefano Mercogliano - stefano.mercogliano@unina.it         //
//                                                                            //
//                                                                            //
// Description:    SPI Top Module                                             //   
//                 It implements a Master interface and a Slave interface.    //
//                 At the moment no interrupts are supported for the RX       //
//                 interface, but in the future it might.                     //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//   __    ___ _____                    _       _       //
//  / _\  / _ \\_   \   /\/\   ___   __| |_   _| | ___  //
//  \ \  / /_)/ / /\/  /    \ / _ \ / _` | | | | |/ _ \ //
//  _\ \/ ___/\/ /_   / /\/\ \ (_) | (_| | |_| | |  __/ //
//  \__/\/   \____/   \/    \/\___/ \__,_|\__,_|_|\___| //
//                                                      //
//////////////////////////////////////////////////////////


module spi_top #(
  parameter int unsigned ClockFrequency = 50_000_000,
  parameter int unsigned BaudRate = 12_500_000,
  parameter CPOL = 0,
  parameter CPHA = 0
) (
    input logic clk_i,
    input logic rst_ni,

    input  logic        device_req_i,
  /* verilator lint_off UNUSED */
    input  logic [31:0] device_addr_i,
    input  logic        device_we_i,
  /* verilator lint_off UNUSED */
    input  logic [3:0]  device_be_i,
  /* verilator lint_off UNUSED */
    input  logic [31:0] device_wdata_i,
    output logic        device_rvalid_o,
    output logic [31:0] device_rdata_o,

    // Master interface
    input  logic spi_master_miso_i,
    output logic spi_master_mosi_o,
    output logic spi_master_clk_o,
    output logic spi_master_cs_o,

    // Slave Interface
    output logic spi_slave_miso_o,
    input  logic spi_slave_mosi_i,
    input  logic spi_slave_clk_i,
    input  logic spi_slave_cs_i
  );

  //////////////////////////
  // INTERNAL PARAMETERS  //
  //////////////////////////

  localparam logic [11:0] SPI_MASTER_TX_REG   = 12'h00;
  localparam logic [11:0] SPI_MASTER_RX_REG   = 12'h04;
  localparam logic [11:0] SPI_SLAVE_TX_REG    = 12'h08;
  localparam logic [11:0] SPI_SLAVE_RX_REG    = 12'h0c;
  localparam logic [11:0] SPI_STATUS_REG      = 12'h10;

  //////////////////////////
  // INTERNAL SIGNALS     //
  //////////////////////////

  // Registers
  // They are just flags because registers behaviour is directly
  // abstraced by FIFOs

  logic spi_master_rx_q,  spi_master_rx_d;
  logic spi_slave_rx_q,   spi_slave_rx_d;
  logic spi_status_q,     spi_status_d;

  // Internal request address
  logic [11:0] spi_addr_int;

  // Master FIFO signals

  logic       master_tx_fifo_wvalid,  master_rx_fifo_wvalid;
  logic       master_tx_fifo_rvalid,  master_rx_fifo_rvalid;
  logic       master_tx_fifo_rready,  master_rx_fifo_rready;
  logic [7:0] master_tx_fifo_rdata,   master_rx_fifo_rdata;
  logic       master_tx_fifo_full,    master_rx_fifo_full;
  logic       master_tx_fifo_empty,   master_rx_fifo_empty;
  logic [6:0] master_tx_fifo_depth,   master_rx_fifo_depth;

  // Slave FIFO signals

  logic       slave_tx_fifo_wvalid,  slave_rx_fifo_wvalid;
  logic       slave_tx_fifo_rvalid,  slave_rx_fifo_rvalid;
  logic       slave_tx_fifo_rready,  slave_rx_fifo_rready;
  logic [7:0] slave_tx_fifo_rdata,   slave_rx_fifo_rdata;
  logic       slave_tx_fifo_full,    slave_rx_fifo_full;
  logic       slave_tx_fifo_empty,   slave_rx_fifo_empty;
  logic [6:0] slave_tx_fifo_depth,   slave_rx_fifo_depth;

  // Status register read enable
  logic        read_status_q, read_status_d;

  // Edge detection for popping FIFO elements.
  logic next_tx_byte_d, next_tx_byte_q;

  //////////////////////////
  //        LOGICS        //
  //////////////////////////

  always @(posedge clk_i or negedge rst_ni) begin // ???
    if (!rst_ni) begin
      next_tx_byte_q <= '0;
      device_rvalid_o <= '0;
    end else begin
      next_tx_byte_q <= next_tx_byte_d;
      device_rvalid_o <= device_req_i;
    end
  end

  assign spi_addr_int = device_addr_i[11:0];

  // FIFO status signals fills the status registers
  // FIFO depth signal gives the current valid elements in the FIFO, zero means it's empty.

  assign master_tx_fifo_empty = (master_tx_fifo_depth == 0);
  assign master_rx_fifo_empty = (master_rx_fifo_depth == 0);
  assign slave_rx_fifo_empty = (slave_tx_fifo_depth == 0);
  assign slave_rx_fifo_empty = (slave_rx_fifo_depth == 0);

  //////////////////////
  // Write registers  //
  //////////////////////

  // FIFO push happens when software writes to SPI_MASTER_TX_REG or SPI_SLAVE_TX_REG

  assign master_tx_fifo_wvalid  = (device_req_i & (spi_addr_int == SPI_MASTER_TX_REG) & device_we_i);
  assign slave_tx_fifo_wvalid   = (device_req_i & (spi_addr_int == SPI_MASTER_TX_REG) & device_we_i);

  // This is needed because signal arrives in a slower clock.
  assign master_tx_fifo_rready = next_tx_byte_d && ~next_tx_byte_q; // ???

  ////////////////////
  // Read registers //
  ////////////////////

  assign spi_status_d     = (device_req_i & (spi_addr_int == SPI_STATUS_REG) & ~device_we_i);
  assign spi_master_rx_d  = (device_req_i & (spi_addr_int == SPI_MASTER_RX_REG) & ~device_we_i);
  assign spi_slave_rx_d   = (device_req_i & (spi_addr_int == SPI_SLAVE_RX_REG) & ~device_we_i);
    
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      spi_status_q    <= 0;
      spi_slave_rx_q  <= '0;
      spi_master_rx_q <= '0;
    end else begin
      spi_status_q    <= spi_status_d;
      spi_slave_rx_q  <= spi_slave_rx_d;
      spi_master_rx_q <= spi_master_rx_d;
    end
  end

  always_comb begin: select_output_data

    if(spi_status_q) begin    
                                      assign device_rdata_o = {
                                        24'b0,
                                        slave_tx_fifo_full,   slave_rx_fifo_full,
                                        slave_tx_fifo_empty,  slave_tx_fifo_empty, 
                                        master_tx_fifo_full,  master_rx_fifo_full,
                                        master_tx_fifo_empty, master_tx_fifo_empty };
    end else if(spi_slave_rx_q) begin
                                      assign device_rdata_o = '0;
    end else if(spi_master_rx_q) begin
                                      assign device_rdata_o = '0;
    end else begin
                                      assign device_rdata_o = '0;
    end

  end


  ////////////////////////////////////////////////////////
  //   __    ___ _____                    _             //
  //  / _\  / _ \\_   \   /\/\   __ _ ___| |_ ___ _ __  //
  //  \ \  / /_)/ / /\/  /    \ / _` / __| __/ _ \ '__| //
  //  _\ \/ ___/\/ /_   / /\/\ \ (_| \__ \ ||  __/ |    //
  //  \__/\/   \____/   \/    \/\__,_|___/\__\___|_|    //
  //                                                    //
  ////////////////////////////////////////////////////////

  prim_fifo_sync #(
    .Width  ( 8     ),
    .Pass   ( 1'b0  ),
    .Depth  ( 127   )
  ) u_master_tx_fifo (
    .clk_i    (clk_i),
    .rst_ni,
    .clr_i    (1'b0),

    // Memory mapped interface
    .wvalid_i (master_tx_fifo_wvalid), // FIFO Push
    .wready_o (),
    .wdata_i  (device_wdata_i[7:0]),

    // SPI Master TX interface
    .rvalid_o (master_tx_fifo_rvalid),
    .rready_i (master_tx_fifo_rready), // FIFO Pop
    .rdata_o  (master_tx_fifo_rdata),

    // FIFO state info
    .full_o   (master_tx_fifo_full),
    .depth_o  (master_tx_fifo_depth),
    .err_o    () // Unused
  );

  prim_fifo_sync #(
    .Width  ( 8     ),
    .Pass   ( 1'b0  ),
    .Depth  ( 127   )
  ) u_master_rx_fifo (
    .clk_i    (clk_i),
    .rst_ni,
    .clr_i    (1'b0),

    // SPI Master RX interface
    .wvalid_i (master_rx_fifo_wvalid), // FIFO Push
    .wready_o (),
    .wdata_i  (device_wdata_i[7:0]),

    // Memory mapped interface
    .rvalid_o (master_rx_fifo_rvalid),
    .rready_i (master_rx_fifo_rready), // FIFO Pop
    .rdata_o  (master_rx_fifo_rdata),

    // FIFO state info
    .full_o   (master_rx_fifo_full),
    .depth_o  (master_rx_fifo_depth),
    .err_o    () // Unused
  );

  spi_master #(
    .SPIClockScale(8),
    .CPOL(CPOL),
    .CPHA(CPHA)
  ) u_spi_master (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),

    // This simple master only writes over MOSI
    .spi_master_mosi_o  (spi_master_mosi_o),
    .spi_master_clk_o   (spi_master_clk_o),
    .spi_master_cs_o    (spi_master_cs_o),

    .start_i            (master_tx_fifo_rvalid),
    .fifo_data_i        (master_tx_fifo_rdata),
    .fifo_next_req_o    (next_tx_byte_d)
  );

  /*spi_host #(
    .ClockFrequency(ClockFrequency),
    .BaudRate(BaudRate),
    .CPOL(CPOL),
    .CPHA(CPHA)
  ) u_spi_host (
    .clk_i (clk_i),
    .rst_ni(rst_ni),

    .spi_rx_i(spi_rx_i), // Data received from SPI device
    .spi_tx_o(spi_tx_o), // Data transmitted to SPI device
    .sck_o(sck_o), // Serial clock output

    .start_i(tx_fifo_rvalid), // Starts SPI as long as we have a valid FIFO data.
    .byte_data_i(tx_fifo_rdata), // 8-bit data, from FIFO possibly
    .byte_data_o(byte_data_o),
    .next_tx_byte_o(next_tx_byte_d) // requests new byte
  );*/

  ////////////////////////////////////////////////
  //   __    ___ _____   __ _                   //
  //  / _\  / _ \\_   \ / _\ | __ ___   _____   //
  //  \ \  / /_)/ / /\/ \ \| |/ _` \ \ / / _ \  //
  //  _\ \/ ___/\/ /_   _\ \ | (_| |\ V /  __/  //
  //  \__/\/   \____/   \__/_|\__,_| \_/ \___|  //  
  //                                            //                                          
  ////////////////////////////////////////////////

endmodule
