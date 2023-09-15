
// Copyright 2023 University of Naples, Federico II
// Date: 02 August 2023

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// Engineer:       Stefano Mercogliano - stefano.mercogliano@unina.it         //
//                                                                            //
//                                                                            //
// Description:    Bus Delay Filter is used to delay memory transactions      //
//                 by "Delay" clock cycles. Peripherals will still take 1     //
//                 clock cycle. It should not be used in real world.          //
//                 To disable delay just set Delat = 0                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

module bus_delay_filter #(

  parameter int Delay = 1,
  parameter int DataWidth    = 32,
  parameter int AddressWidth = 32,
  parameter int NrDevices    = 1,
  parameter int NrHosts      = 1,

  parameter int unsigned NumBitsHostSel = NrHosts > 1 ? $clog2(NrHosts) : 1,
  parameter int unsigned NumBitsDeviceSel = NrDevices > 1 ? $clog2(NrDevices) : 1

) (
  input  logic                        clk_i,
  input  logic                        rst_ni,

  input  logic                        host_req_i,
  input  logic [AddressWidth-1:0]     host_addr_i,
  input  logic                        host_we_i,
  input  logic [ DataWidth/8-1:0]     host_be_i,
  input  logic [   DataWidth-1:0]     host_wdata_i,
  input  logic [NumBitsHostSel-1:0]   host_sel_req_i,
  input  logic [NumBitsDeviceSel-1:0] device_sel_req_i,

  output logic                        delay_req_o,
  output logic [AddressWidth-1:0]     delay_addr_o,
  output logic                        delay_we_o,
  output logic [ DataWidth/8-1:0]     delay_be_o,
  output logic [   DataWidth-1:0]     delay_wdata_o,
  output logic [NumBitsHostSel-1:0]   delay_host_req_o,
  output logic [NumBitsDeviceSel-1:0] delay_device_req_o

);

  logic [NumBitsHostSel-1:0]    delay_host_req_int,   buffered_host_req_int;
  logic [NumBitsDeviceSel-1:0]  delay_device_req_int, buffered_device_req_int;

  logic                     fsm_state;
  logic [5:0]               delay_cnt;
  logic                     req_pending;
  logic                     delay_req_int,    buffered_req_int;
  logic [AddressWidth-1:0]  delay_addr_int,   buffered_addr_int;
  logic                     delay_we_int,     buffered_we_int;
  logic [ DataWidth/8-1:0]  delay_be_int,     buffered_be_int;
  logic [   DataWidth-1:0]  delay_wdata_int,  buffered_wdata_int;                

  always_ff @(posedge clk_i or negedge rst_ni) begin
   if (!rst_ni) begin
      fsm_state <= '0;
      delay_cnt <= '0;
      // Delayed signals
      delay_req_int <= '0;      delay_addr_int <= '0;
      delay_we_int <= '0;       delay_be_int <= '0;
      delay_wdata_int <= '0;
      delay_host_req_int <= '0; delay_device_req_int <= '0;
      // Buffered signals
      buffered_req_int <= '0;      buffered_addr_int <= '0;
      buffered_we_int <= '0;       buffered_be_int <= '0;
      buffered_wdata_int <= '0;
      buffered_host_req_int <= '0; buffered_device_req_int <= '0;
    end else begin

      case(fsm_state)
        1'b0: begin

          delay_req_o <= '0;

          if(host_req_i) begin
            // RAM Responses will take Delay clock cycles after the request
            delay_req_int <= host_req_i;          delay_addr_int <= host_addr_i;
            delay_we_int <= host_we_i;            delay_be_int <= host_be_i;
            delay_wdata_int <= host_wdata_i;
            delay_host_req_int <= host_sel_req_i; delay_device_req_int <= device_sel_req_i;

            delay_cnt <= delay_cnt + 1;
            fsm_state <= 1'b1;
          end else if (req_pending) begin
            // Load the buffered pending request
            delay_req_int <= buffered_req_int;            delay_addr_int <= buffered_addr_int;
            delay_we_int <= buffered_we_int;              delay_be_int <= buffered_be_int;
            delay_wdata_int <= buffered_wdata_int;
            delay_host_req_int <= buffered_host_req_int;  delay_device_req_int <= buffered_device_req_int;

            delay_cnt <= delay_cnt + 1;
            req_pending <= 1'b0;
            fsm_state <= 1'b1;
          end else begin
            // Delayed signals
            delay_req_int <= '0;      delay_addr_int <= '0;
            delay_we_int <= '0;       delay_be_int <= '0;
            delay_wdata_int <= '0;
            delay_host_req_int <= '0; delay_device_req_int <= '0;
            // Buffered signals
            buffered_req_int <= '0;      buffered_addr_int <= '0;
            buffered_we_int <= '0;       buffered_be_int <= '0;
            buffered_wdata_int <= '0;
            buffered_host_req_int <= '0; buffered_device_req_int <= '0;
            // FSm and Counters
            fsm_state <= 1'b0;
            delay_cnt <= '0;
          end 
        end

        1'b1: begin
          
          // At most one request pending can occur
          if(host_req_i && ~req_pending) begin
            req_pending <= 1'b1;
            buffered_req_int <= host_req_i;          buffered_addr_int <= host_addr_i;
            buffered_we_int <= host_we_i;            buffered_be_int <= host_be_i;
            buffered_wdata_int <= host_wdata_i;
            buffered_host_req_int <= host_sel_req_i; buffered_device_req_int <= device_sel_req_i;
          end

          // Once Delay expires, forward the device request; if the request was towards peripheral, just output it
          if(delay_cnt < Delay && delay_device_req_int == '0) begin
            delay_req_o <= '0;  delay_addr_o <= '0;
            delay_we_o <= '0;   delay_be_o <= '0;
            delay_wdata_o <= '0;
            delay_host_req_o <= '0; delay_device_req_o <= '0;

            delay_cnt <= delay_cnt + 1;
          end else begin

            delay_req_o <= delay_req_int;           delay_addr_o <= delay_addr_int;
            delay_we_o <= delay_we_int;             delay_be_o <= delay_be_int;
            delay_wdata_o <= delay_wdata_int;
            delay_host_req_o <= delay_host_req_int; delay_device_req_o <= delay_device_req_int;
            delay_cnt <= '0;
            fsm_state <= 1'b0;
          end
        end
      endcase

    end
  end



endmodule
