// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// This is the top level SystemVerilog file that connects the IO on the board to the CV32E40P Demo System.
module top_nexys7 (
  // These inputs are defined in data/pins_nexys7.xdc
  input               IO_CLK,
  input               IO_RST_N,
  input  [ 3:0]       SW,
  input  [ 3:0]       BTN,
  output [ 15:0]      LED,
  input               UART_RX,
  output              UART_TX,
  
  output              SPI_MASTER_MOSI,
  output              SPI_MASTER_CLK,
  output              SPI_MASTER_CS,
  input               SPI_SLAVE_MOSI,
  input               SPI_SLAVE_CLK,
  input               SPI_SLAVE_CS
  
);
 parameter SRAMInitFile =  "/home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vmem/bootloader.vmem"; //"blank.vmem";

  logic clk_sys, rst_sys_n;
  logic [ 15:0]  led_int;
 

  // Instantiating the Ibex Demo System.
  uCup_top #(
    .Verilated(0),
    .GpiWidth(8),
    .GpoWidth(16),
    .PwmWidth(0),
    .SRAMInitFile(SRAMInitFile)
  ) u_ucup_top (
    //input
    .clk_sys_i(clk_sys),
    .rst_sys_ni(rst_sys_n),
    .gp_i({SW, BTN}),
    .uart_rx_i(UART_RX),

    //output
    .gp_o(led_int),
    .uart_tx_o(UART_TX),
    
    //SPI signals
    .spi_master_mosi_o (SPI_MASTER_MOSI),
    .spi_master_clk_o (SPI_MASTER_CLK),
    .spi_master_cs_o (SPI_MASTER_CS),
    .spi_slave_mosi_i (SPI_SLAVE_MOSI),
    .spi_slave_clk_i (SPI_SLAVE_CLK),
    .spi_slave_cs_i (SPI_SLAVE_CS)
  );

  // Generating the system clock and reset for the FPGA.
  clkgen_xil7series clkgen(
    .IO_CLK,
    .IO_RST_N,
    .clk_sys,
    .rst_sys_n
  );
  
  assign LED = {1'b1, led_int[14:0]};
  
endmodule
