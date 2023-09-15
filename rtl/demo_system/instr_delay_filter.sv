// Copyright 2023 University of Naples, Federico II
// Date: 02 August 2023

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// Engineer:       Stefano Mercogliano - stefano.mercogliano@unina.it         //
//                                                                            //
//                                                                            //
// Description:    Instr Delay Filter is used to delay instruction            //
//                 memory transactions by "Delay" clock cycles.               //
//                 It should not be used in real world.                       //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

module instr_delay_filter #(

  parameter int Delay = 1,
  parameter int DataWidth    = 32,
  parameter int AddressWidth = 32
) (
  input  logic clk_i,
  input  logic rst_ni,

  input  logic                    core_instr_req_i,
  input  logic [AddressWidth-1:0] core_instr_addr_i,
  input  logic                    device_dbg_req_i,

  output logic                    core_instr_req_o,
  output logic [AddressWidth-1:0] core_instr_addr_o,
  output logic                    device_dbg_req_o
  
);

  logic                     fsm_state;
  logic [5:0]               delay_cnt;
  logic                     req_pending;  
  logic                     core_instr_req,   buffered_core_instr_req;
  logic [AddressWidth-1:0]  core_instr_addr,  buffered_core_instr_addr;
  logic                     device_dbg_req,   buffered_device_dbg_req;

  if( Delay ) begin: delayed_instr_mem

    always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
        fsm_state <= '0;
        delay_cnt <= '0;
        // Delayed signals
        core_instr_req <= '0;      device_dbg_req <= '0;
        core_instr_addr <= '0;     
        // Buffered signals
        buffered_core_instr_req <= '0;      buffered_device_dbg_req <= '0;
        buffered_core_instr_addr <= '0;     
      end else begin

        case(fsm_state)
          1'b0: begin

            core_instr_req_o <= '0;
            device_dbg_req_o <= '0;

            if(core_instr_req_i) begin
              // RAM Responses will take Delay clock cycles after the request
              core_instr_req <= core_instr_req_i;      device_dbg_req <= device_dbg_req_i;
              core_instr_addr <= core_instr_addr_i;     

              delay_cnt <= delay_cnt + 1;
              fsm_state <= 1'b1;
            end else if (req_pending) begin
              // Load the buffered pending request
              core_instr_req <= buffered_core_instr_req;      device_dbg_req <= buffered_device_dbg_req;
              core_instr_addr <= buffered_core_instr_addr;     

              delay_cnt <= delay_cnt + 1;
              req_pending <= 1'b0;
              fsm_state <= 1'b1;
            end else begin
              // Delayed signals
              core_instr_req <= '0;      device_dbg_req <= '0;
              core_instr_addr <= '0;     
              // Buffered signals
              buffered_core_instr_req <= '0;      buffered_device_dbg_req <= '0;
              buffered_core_instr_addr <= '0;    
              // FSm and Counters
              fsm_state <= 1'b0;
              delay_cnt <= '0;
            end 
          end

          1'b1: begin
            
            // At most one request pending can occur
            if(core_instr_req_i && ~req_pending) begin
              req_pending <= 1'b1;
              buffered_core_instr_req <= core_instr_req_i;      buffered_device_dbg_req <= device_dbg_req_i;
              buffered_core_instr_addr <= core_instr_addr_i;   
            end

            // Once Delay expires, forward the device request
            if(delay_cnt < Delay) begin
              core_instr_req_o <= '0;      device_dbg_req_o <= '0;
              core_instr_addr_o <= '0;     

              delay_cnt <= delay_cnt + 1;
            end else begin
              core_instr_req_o <= core_instr_req;      device_dbg_req_o <= device_dbg_req;
              core_instr_addr_o <= core_instr_addr;

              delay_cnt <= '0;
              fsm_state <= 1'b0;
            end
          end
        endcase

      end
    end
  end else begin
    assign core_instr_req_o = core_instr_req_i;      
    assign core_instr_addr_o = core_instr_addr_i;
    assign device_dbg_req_o = device_dbg_req_i;
  end


endmodule
