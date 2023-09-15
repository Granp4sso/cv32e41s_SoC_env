module bootloader_rom #(
  parameter int Depth        = 42,
  parameter int DataWidth    = 32,
  parameter int AddressWidth = $clog2(Depth*4)
) (
    input                             clk_i,
    input                             bootrom_req_i,
    input        [AddressWidth-1 : 0] bootrom_addr_i,
    output logic [DataWidth-1 : 0]    bootrom_rdata_o
);

    logic [Depth-1:0][DataWidth-1:0]    bootrom;
    logic [AddressWidth-1:0]            addr_q;

    assign bootrom = {

      32'h00060067,
      32'h30571073,
      32'h0040006F,
      32'hFEB51EE3,
      32'hF9DFF06F,
      32'h00000513,
      32'hFFF68693,
      32'h00351663,
      32'h00400193,
      32'h00068C63,
      32'h00150513,
      32'h0040006F,
      32'h00170713,
      32'h00170023,
      32'h0100006F,
      32'h00C18633,
      32'h0180006F,
      32'h00B185B3,
      32'h00468663,
      32'h00100213,
      32'h004091B3,
      32'h02418233,
      32'h00800213,
      32'h00050193,
      32'h02068663,
      32'h0002C083,
      32'h00000013,
      32'h00000013,
      32'hFE208EE3,
      32'h00032083,
      32'h00070713,
      32'h00100737,
      32'h00200693,
      32'h00000613,
      32'h00000593,
      32'h00000513,
      32'h00828313,
      32'h00028293,
      32'h800012B7,
      32'h00000213,
      32'h00000193,
      32'h00100113,
      32'h00000093
    };

  always_ff @(posedge clk_i) begin
    if (bootrom_req_i) begin
      addr_q <= bootrom_addr_i[AddressWidth-1:2];
    end
  end

  always_comb begin : p_outmux
    bootrom_rdata_o = '0;
    if (addr_q < Depth) begin
        bootrom_rdata_o = bootrom[addr_q];
    end
  end
   

endmodule 