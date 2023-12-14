// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1 (64-bit)
// Tool Version Limit: 2023.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
`timescale 1ns/1ps
module axi_ascon_BUS_A_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 9,
    C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire                          interrupt,
    output wire                          ap_start,
    input  wire                          ap_done,
    input  wire                          ap_ready,
    input  wire                          ap_idle,
    input  wire [31:0]                   ap_return,
    output wire [31:0]                   decrypt,
    output wire [31:0]                   c_1_i,
    input  wire [31:0]                   c_1_o,
    input  wire                          c_1_o_ap_vld,
    output wire [31:0]                   c_2_i,
    input  wire [31:0]                   c_2_o,
    input  wire                          c_2_o_ap_vld,
    output wire [31:0]                   c_3_i,
    input  wire [31:0]                   c_3_o,
    input  wire                          c_3_o_ap_vld,
    output wire [31:0]                   c_4_i,
    input  wire [31:0]                   c_4_o,
    input  wire                          c_4_o_ap_vld,
    output wire [31:0]                   c_5_i,
    input  wire [31:0]                   c_5_o,
    input  wire                          c_5_o_ap_vld,
    output wire [31:0]                   c_6_i,
    input  wire [31:0]                   c_6_o,
    input  wire                          c_6_o_ap_vld,
    output wire [31:0]                   c_7_i,
    input  wire [31:0]                   c_7_o,
    input  wire                          c_7_o_ap_vld,
    output wire [31:0]                   c_8_i,
    input  wire [31:0]                   c_8_o,
    input  wire                          c_8_o_ap_vld,
    output wire [31:0]                   m_1_i,
    input  wire [31:0]                   m_1_o,
    input  wire                          m_1_o_ap_vld,
    output wire [31:0]                   m_2_i,
    input  wire [31:0]                   m_2_o,
    input  wire                          m_2_o_ap_vld,
    output wire [31:0]                   m_3_i,
    input  wire [31:0]                   m_3_o,
    input  wire                          m_3_o_ap_vld,
    output wire [31:0]                   m_4_i,
    input  wire [31:0]                   m_4_o,
    input  wire                          m_4_o_ap_vld,
    output wire [31:0]                   ad_1,
    output wire [31:0]                   ad_2,
    output wire [31:0]                   ad_3,
    output wire [31:0]                   ad_4,
    output wire [31:0]                   nsec_1_i,
    input  wire [31:0]                   nsec_1_o,
    input  wire                          nsec_1_o_ap_vld,
    output wire [31:0]                   nsec_2_i,
    input  wire [31:0]                   nsec_2_o,
    input  wire                          nsec_2_o_ap_vld,
    output wire [31:0]                   nsec_3_i,
    input  wire [31:0]                   nsec_3_o,
    input  wire                          nsec_3_o_ap_vld,
    output wire [31:0]                   nsec_4_i,
    input  wire [31:0]                   nsec_4_o,
    input  wire                          nsec_4_o_ap_vld,
    output wire [31:0]                   npub_1,
    output wire [31:0]                   npub_2,
    output wire [31:0]                   npub_3,
    output wire [31:0]                   npub_4,
    output wire [31:0]                   k_1,
    output wire [31:0]                   k_2,
    output wire [31:0]                   k_3,
    output wire [31:0]                   k_4
);
//------------------------Address Info-------------------
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read/COR)
//         bit 7  - auto_restart (Read/Write)
//         bit 9  - interrupt (Read)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0 - enable ap_done interrupt (Read/Write)
//         bit 1 - enable ap_ready interrupt (Read/Write)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0 - ap_done (Read/TOW)
//         bit 1 - ap_ready (Read/TOW)
//         others - reserved
// 0x010 : Data signal of ap_return
//         bit 31~0 - ap_return[31:0] (Read)
// 0x018 : Data signal of decrypt
//         bit 31~0 - decrypt[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of c_1_i
//         bit 31~0 - c_1_i[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of c_1_o
//         bit 31~0 - c_1_o[31:0] (Read)
// 0x02c : Control signal of c_1_o
//         bit 0  - c_1_o_ap_vld (Read/COR)
//         others - reserved
// 0x030 : Data signal of c_2_i
//         bit 31~0 - c_2_i[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of c_2_o
//         bit 31~0 - c_2_o[31:0] (Read)
// 0x03c : Control signal of c_2_o
//         bit 0  - c_2_o_ap_vld (Read/COR)
//         others - reserved
// 0x040 : Data signal of c_3_i
//         bit 31~0 - c_3_i[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of c_3_o
//         bit 31~0 - c_3_o[31:0] (Read)
// 0x04c : Control signal of c_3_o
//         bit 0  - c_3_o_ap_vld (Read/COR)
//         others - reserved
// 0x050 : Data signal of c_4_i
//         bit 31~0 - c_4_i[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of c_4_o
//         bit 31~0 - c_4_o[31:0] (Read)
// 0x05c : Control signal of c_4_o
//         bit 0  - c_4_o_ap_vld (Read/COR)
//         others - reserved
// 0x060 : Data signal of c_5_i
//         bit 31~0 - c_5_i[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of c_5_o
//         bit 31~0 - c_5_o[31:0] (Read)
// 0x06c : Control signal of c_5_o
//         bit 0  - c_5_o_ap_vld (Read/COR)
//         others - reserved
// 0x070 : Data signal of c_6_i
//         bit 31~0 - c_6_i[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of c_6_o
//         bit 31~0 - c_6_o[31:0] (Read)
// 0x07c : Control signal of c_6_o
//         bit 0  - c_6_o_ap_vld (Read/COR)
//         others - reserved
// 0x080 : Data signal of c_7_i
//         bit 31~0 - c_7_i[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of c_7_o
//         bit 31~0 - c_7_o[31:0] (Read)
// 0x08c : Control signal of c_7_o
//         bit 0  - c_7_o_ap_vld (Read/COR)
//         others - reserved
// 0x090 : Data signal of c_8_i
//         bit 31~0 - c_8_i[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of c_8_o
//         bit 31~0 - c_8_o[31:0] (Read)
// 0x09c : Control signal of c_8_o
//         bit 0  - c_8_o_ap_vld (Read/COR)
//         others - reserved
// 0x0a0 : Data signal of m_1_i
//         bit 31~0 - m_1_i[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of m_1_o
//         bit 31~0 - m_1_o[31:0] (Read)
// 0x0ac : Control signal of m_1_o
//         bit 0  - m_1_o_ap_vld (Read/COR)
//         others - reserved
// 0x0b0 : Data signal of m_2_i
//         bit 31~0 - m_2_i[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of m_2_o
//         bit 31~0 - m_2_o[31:0] (Read)
// 0x0bc : Control signal of m_2_o
//         bit 0  - m_2_o_ap_vld (Read/COR)
//         others - reserved
// 0x0c0 : Data signal of m_3_i
//         bit 31~0 - m_3_i[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of m_3_o
//         bit 31~0 - m_3_o[31:0] (Read)
// 0x0cc : Control signal of m_3_o
//         bit 0  - m_3_o_ap_vld (Read/COR)
//         others - reserved
// 0x0d0 : Data signal of m_4_i
//         bit 31~0 - m_4_i[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of m_4_o
//         bit 31~0 - m_4_o[31:0] (Read)
// 0x0dc : Control signal of m_4_o
//         bit 0  - m_4_o_ap_vld (Read/COR)
//         others - reserved
// 0x0e0 : Data signal of ad_1
//         bit 31~0 - ad_1[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of ad_2
//         bit 31~0 - ad_2[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of ad_3
//         bit 31~0 - ad_3[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of ad_4
//         bit 31~0 - ad_4[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of nsec_1_i
//         bit 31~0 - nsec_1_i[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of nsec_1_o
//         bit 31~0 - nsec_1_o[31:0] (Read)
// 0x10c : Control signal of nsec_1_o
//         bit 0  - nsec_1_o_ap_vld (Read/COR)
//         others - reserved
// 0x110 : Data signal of nsec_2_i
//         bit 31~0 - nsec_2_i[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of nsec_2_o
//         bit 31~0 - nsec_2_o[31:0] (Read)
// 0x11c : Control signal of nsec_2_o
//         bit 0  - nsec_2_o_ap_vld (Read/COR)
//         others - reserved
// 0x120 : Data signal of nsec_3_i
//         bit 31~0 - nsec_3_i[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of nsec_3_o
//         bit 31~0 - nsec_3_o[31:0] (Read)
// 0x12c : Control signal of nsec_3_o
//         bit 0  - nsec_3_o_ap_vld (Read/COR)
//         others - reserved
// 0x130 : Data signal of nsec_4_i
//         bit 31~0 - nsec_4_i[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of nsec_4_o
//         bit 31~0 - nsec_4_o[31:0] (Read)
// 0x13c : Control signal of nsec_4_o
//         bit 0  - nsec_4_o_ap_vld (Read/COR)
//         others - reserved
// 0x140 : Data signal of npub_1
//         bit 31~0 - npub_1[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of npub_2
//         bit 31~0 - npub_2[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of npub_3
//         bit 31~0 - npub_3[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of npub_4
//         bit 31~0 - npub_4[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of k_1
//         bit 31~0 - k_1[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of k_2
//         bit 31~0 - k_2[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of k_3
//         bit 31~0 - k_3[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of k_4
//         bit 31~0 - k_4[31:0] (Read/Write)
// 0x17c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL         = 9'h000,
    ADDR_GIE             = 9'h004,
    ADDR_IER             = 9'h008,
    ADDR_ISR             = 9'h00c,
    ADDR_AP_RETURN_0     = 9'h010,
    ADDR_DECRYPT_DATA_0  = 9'h018,
    ADDR_DECRYPT_CTRL    = 9'h01c,
    ADDR_C_1_I_DATA_0    = 9'h020,
    ADDR_C_1_I_CTRL      = 9'h024,
    ADDR_C_1_O_DATA_0    = 9'h028,
    ADDR_C_1_O_CTRL      = 9'h02c,
    ADDR_C_2_I_DATA_0    = 9'h030,
    ADDR_C_2_I_CTRL      = 9'h034,
    ADDR_C_2_O_DATA_0    = 9'h038,
    ADDR_C_2_O_CTRL      = 9'h03c,
    ADDR_C_3_I_DATA_0    = 9'h040,
    ADDR_C_3_I_CTRL      = 9'h044,
    ADDR_C_3_O_DATA_0    = 9'h048,
    ADDR_C_3_O_CTRL      = 9'h04c,
    ADDR_C_4_I_DATA_0    = 9'h050,
    ADDR_C_4_I_CTRL      = 9'h054,
    ADDR_C_4_O_DATA_0    = 9'h058,
    ADDR_C_4_O_CTRL      = 9'h05c,
    ADDR_C_5_I_DATA_0    = 9'h060,
    ADDR_C_5_I_CTRL      = 9'h064,
    ADDR_C_5_O_DATA_0    = 9'h068,
    ADDR_C_5_O_CTRL      = 9'h06c,
    ADDR_C_6_I_DATA_0    = 9'h070,
    ADDR_C_6_I_CTRL      = 9'h074,
    ADDR_C_6_O_DATA_0    = 9'h078,
    ADDR_C_6_O_CTRL      = 9'h07c,
    ADDR_C_7_I_DATA_0    = 9'h080,
    ADDR_C_7_I_CTRL      = 9'h084,
    ADDR_C_7_O_DATA_0    = 9'h088,
    ADDR_C_7_O_CTRL      = 9'h08c,
    ADDR_C_8_I_DATA_0    = 9'h090,
    ADDR_C_8_I_CTRL      = 9'h094,
    ADDR_C_8_O_DATA_0    = 9'h098,
    ADDR_C_8_O_CTRL      = 9'h09c,
    ADDR_M_1_I_DATA_0    = 9'h0a0,
    ADDR_M_1_I_CTRL      = 9'h0a4,
    ADDR_M_1_O_DATA_0    = 9'h0a8,
    ADDR_M_1_O_CTRL      = 9'h0ac,
    ADDR_M_2_I_DATA_0    = 9'h0b0,
    ADDR_M_2_I_CTRL      = 9'h0b4,
    ADDR_M_2_O_DATA_0    = 9'h0b8,
    ADDR_M_2_O_CTRL      = 9'h0bc,
    ADDR_M_3_I_DATA_0    = 9'h0c0,
    ADDR_M_3_I_CTRL      = 9'h0c4,
    ADDR_M_3_O_DATA_0    = 9'h0c8,
    ADDR_M_3_O_CTRL      = 9'h0cc,
    ADDR_M_4_I_DATA_0    = 9'h0d0,
    ADDR_M_4_I_CTRL      = 9'h0d4,
    ADDR_M_4_O_DATA_0    = 9'h0d8,
    ADDR_M_4_O_CTRL      = 9'h0dc,
    ADDR_AD_1_DATA_0     = 9'h0e0,
    ADDR_AD_1_CTRL       = 9'h0e4,
    ADDR_AD_2_DATA_0     = 9'h0e8,
    ADDR_AD_2_CTRL       = 9'h0ec,
    ADDR_AD_3_DATA_0     = 9'h0f0,
    ADDR_AD_3_CTRL       = 9'h0f4,
    ADDR_AD_4_DATA_0     = 9'h0f8,
    ADDR_AD_4_CTRL       = 9'h0fc,
    ADDR_NSEC_1_I_DATA_0 = 9'h100,
    ADDR_NSEC_1_I_CTRL   = 9'h104,
    ADDR_NSEC_1_O_DATA_0 = 9'h108,
    ADDR_NSEC_1_O_CTRL   = 9'h10c,
    ADDR_NSEC_2_I_DATA_0 = 9'h110,
    ADDR_NSEC_2_I_CTRL   = 9'h114,
    ADDR_NSEC_2_O_DATA_0 = 9'h118,
    ADDR_NSEC_2_O_CTRL   = 9'h11c,
    ADDR_NSEC_3_I_DATA_0 = 9'h120,
    ADDR_NSEC_3_I_CTRL   = 9'h124,
    ADDR_NSEC_3_O_DATA_0 = 9'h128,
    ADDR_NSEC_3_O_CTRL   = 9'h12c,
    ADDR_NSEC_4_I_DATA_0 = 9'h130,
    ADDR_NSEC_4_I_CTRL   = 9'h134,
    ADDR_NSEC_4_O_DATA_0 = 9'h138,
    ADDR_NSEC_4_O_CTRL   = 9'h13c,
    ADDR_NPUB_1_DATA_0   = 9'h140,
    ADDR_NPUB_1_CTRL     = 9'h144,
    ADDR_NPUB_2_DATA_0   = 9'h148,
    ADDR_NPUB_2_CTRL     = 9'h14c,
    ADDR_NPUB_3_DATA_0   = 9'h150,
    ADDR_NPUB_3_CTRL     = 9'h154,
    ADDR_NPUB_4_DATA_0   = 9'h158,
    ADDR_NPUB_4_CTRL     = 9'h15c,
    ADDR_K_1_DATA_0      = 9'h160,
    ADDR_K_1_CTRL        = 9'h164,
    ADDR_K_2_DATA_0      = 9'h168,
    ADDR_K_2_CTRL        = 9'h16c,
    ADDR_K_3_DATA_0      = 9'h170,
    ADDR_K_3_CTRL        = 9'h174,
    ADDR_K_4_DATA_0      = 9'h178,
    ADDR_K_4_CTRL        = 9'h17c,
    WRIDLE               = 2'd0,
    WRDATA               = 2'd1,
    WRRESP               = 2'd2,
    WRRESET              = 2'd3,
    RDIDLE               = 2'd0,
    RDDATA               = 2'd1,
    RDRESET              = 2'd2,
    ADDR_BITS                = 9;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [C_S_AXI_DATA_WIDTH-1:0] wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [C_S_AXI_DATA_WIDTH-1:0] rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg                           int_ap_idle;
    reg                           int_ap_ready = 1'b0;
    wire                          task_ap_ready;
    reg                           int_ap_done = 1'b0;
    wire                          task_ap_done;
    reg                           int_task_ap_done = 1'b0;
    reg                           int_ap_start = 1'b0;
    reg                           int_interrupt = 1'b0;
    reg                           int_auto_restart = 1'b0;
    reg                           auto_restart_status = 1'b0;
    wire                          auto_restart_done;
    reg                           int_gie = 1'b0;
    reg  [1:0]                    int_ier = 2'b0;
    reg  [1:0]                    int_isr = 2'b0;
    reg  [31:0]                   int_ap_return;
    reg  [31:0]                   int_decrypt = 'b0;
    reg  [31:0]                   int_c_1_i = 'b0;
    reg                           int_c_1_o_ap_vld;
    reg  [31:0]                   int_c_1_o = 'b0;
    reg  [31:0]                   int_c_2_i = 'b0;
    reg                           int_c_2_o_ap_vld;
    reg  [31:0]                   int_c_2_o = 'b0;
    reg  [31:0]                   int_c_3_i = 'b0;
    reg                           int_c_3_o_ap_vld;
    reg  [31:0]                   int_c_3_o = 'b0;
    reg  [31:0]                   int_c_4_i = 'b0;
    reg                           int_c_4_o_ap_vld;
    reg  [31:0]                   int_c_4_o = 'b0;
    reg  [31:0]                   int_c_5_i = 'b0;
    reg                           int_c_5_o_ap_vld;
    reg  [31:0]                   int_c_5_o = 'b0;
    reg  [31:0]                   int_c_6_i = 'b0;
    reg                           int_c_6_o_ap_vld;
    reg  [31:0]                   int_c_6_o = 'b0;
    reg  [31:0]                   int_c_7_i = 'b0;
    reg                           int_c_7_o_ap_vld;
    reg  [31:0]                   int_c_7_o = 'b0;
    reg  [31:0]                   int_c_8_i = 'b0;
    reg                           int_c_8_o_ap_vld;
    reg  [31:0]                   int_c_8_o = 'b0;
    reg  [31:0]                   int_m_1_i = 'b0;
    reg                           int_m_1_o_ap_vld;
    reg  [31:0]                   int_m_1_o = 'b0;
    reg  [31:0]                   int_m_2_i = 'b0;
    reg                           int_m_2_o_ap_vld;
    reg  [31:0]                   int_m_2_o = 'b0;
    reg  [31:0]                   int_m_3_i = 'b0;
    reg                           int_m_3_o_ap_vld;
    reg  [31:0]                   int_m_3_o = 'b0;
    reg  [31:0]                   int_m_4_i = 'b0;
    reg                           int_m_4_o_ap_vld;
    reg  [31:0]                   int_m_4_o = 'b0;
    reg  [31:0]                   int_ad_1 = 'b0;
    reg  [31:0]                   int_ad_2 = 'b0;
    reg  [31:0]                   int_ad_3 = 'b0;
    reg  [31:0]                   int_ad_4 = 'b0;
    reg  [31:0]                   int_nsec_1_i = 'b0;
    reg                           int_nsec_1_o_ap_vld;
    reg  [31:0]                   int_nsec_1_o = 'b0;
    reg  [31:0]                   int_nsec_2_i = 'b0;
    reg                           int_nsec_2_o_ap_vld;
    reg  [31:0]                   int_nsec_2_o = 'b0;
    reg  [31:0]                   int_nsec_3_i = 'b0;
    reg                           int_nsec_3_o_ap_vld;
    reg  [31:0]                   int_nsec_3_o = 'b0;
    reg  [31:0]                   int_nsec_4_i = 'b0;
    reg                           int_nsec_4_o_ap_vld;
    reg  [31:0]                   int_nsec_4_o = 'b0;
    reg  [31:0]                   int_npub_1 = 'b0;
    reg  [31:0]                   int_npub_2 = 'b0;
    reg  [31:0]                   int_npub_3 = 'b0;
    reg  [31:0]                   int_npub_4 = 'b0;
    reg  [31:0]                   int_k_1 = 'b0;
    reg  [31:0]                   int_k_2 = 'b0;
    reg  [31:0]                   int_k_3 = 'b0;
    reg  [31:0]                   int_k_4 = 'b0;

//------------------------Instantiation------------------


//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA);
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 'b0;
            case (raddr)
                ADDR_AP_CTRL: begin
                    rdata[0] <= int_ap_start;
                    rdata[1] <= int_task_ap_done;
                    rdata[2] <= int_ap_idle;
                    rdata[3] <= int_ap_ready;
                    rdata[7] <= int_auto_restart;
                    rdata[9] <= int_interrupt;
                end
                ADDR_GIE: begin
                    rdata <= int_gie;
                end
                ADDR_IER: begin
                    rdata <= int_ier;
                end
                ADDR_ISR: begin
                    rdata <= int_isr;
                end
                ADDR_AP_RETURN_0: begin
                    rdata <= int_ap_return[31:0];
                end
                ADDR_DECRYPT_DATA_0: begin
                    rdata <= int_decrypt[31:0];
                end
                ADDR_C_1_I_DATA_0: begin
                    rdata <= int_c_1_i[31:0];
                end
                ADDR_C_1_O_DATA_0: begin
                    rdata <= int_c_1_o[31:0];
                end
                ADDR_C_1_O_CTRL: begin
                    rdata[0] <= int_c_1_o_ap_vld;
                end
                ADDR_C_2_I_DATA_0: begin
                    rdata <= int_c_2_i[31:0];
                end
                ADDR_C_2_O_DATA_0: begin
                    rdata <= int_c_2_o[31:0];
                end
                ADDR_C_2_O_CTRL: begin
                    rdata[0] <= int_c_2_o_ap_vld;
                end
                ADDR_C_3_I_DATA_0: begin
                    rdata <= int_c_3_i[31:0];
                end
                ADDR_C_3_O_DATA_0: begin
                    rdata <= int_c_3_o[31:0];
                end
                ADDR_C_3_O_CTRL: begin
                    rdata[0] <= int_c_3_o_ap_vld;
                end
                ADDR_C_4_I_DATA_0: begin
                    rdata <= int_c_4_i[31:0];
                end
                ADDR_C_4_O_DATA_0: begin
                    rdata <= int_c_4_o[31:0];
                end
                ADDR_C_4_O_CTRL: begin
                    rdata[0] <= int_c_4_o_ap_vld;
                end
                ADDR_C_5_I_DATA_0: begin
                    rdata <= int_c_5_i[31:0];
                end
                ADDR_C_5_O_DATA_0: begin
                    rdata <= int_c_5_o[31:0];
                end
                ADDR_C_5_O_CTRL: begin
                    rdata[0] <= int_c_5_o_ap_vld;
                end
                ADDR_C_6_I_DATA_0: begin
                    rdata <= int_c_6_i[31:0];
                end
                ADDR_C_6_O_DATA_0: begin
                    rdata <= int_c_6_o[31:0];
                end
                ADDR_C_6_O_CTRL: begin
                    rdata[0] <= int_c_6_o_ap_vld;
                end
                ADDR_C_7_I_DATA_0: begin
                    rdata <= int_c_7_i[31:0];
                end
                ADDR_C_7_O_DATA_0: begin
                    rdata <= int_c_7_o[31:0];
                end
                ADDR_C_7_O_CTRL: begin
                    rdata[0] <= int_c_7_o_ap_vld;
                end
                ADDR_C_8_I_DATA_0: begin
                    rdata <= int_c_8_i[31:0];
                end
                ADDR_C_8_O_DATA_0: begin
                    rdata <= int_c_8_o[31:0];
                end
                ADDR_C_8_O_CTRL: begin
                    rdata[0] <= int_c_8_o_ap_vld;
                end
                ADDR_M_1_I_DATA_0: begin
                    rdata <= int_m_1_i[31:0];
                end
                ADDR_M_1_O_DATA_0: begin
                    rdata <= int_m_1_o[31:0];
                end
                ADDR_M_1_O_CTRL: begin
                    rdata[0] <= int_m_1_o_ap_vld;
                end
                ADDR_M_2_I_DATA_0: begin
                    rdata <= int_m_2_i[31:0];
                end
                ADDR_M_2_O_DATA_0: begin
                    rdata <= int_m_2_o[31:0];
                end
                ADDR_M_2_O_CTRL: begin
                    rdata[0] <= int_m_2_o_ap_vld;
                end
                ADDR_M_3_I_DATA_0: begin
                    rdata <= int_m_3_i[31:0];
                end
                ADDR_M_3_O_DATA_0: begin
                    rdata <= int_m_3_o[31:0];
                end
                ADDR_M_3_O_CTRL: begin
                    rdata[0] <= int_m_3_o_ap_vld;
                end
                ADDR_M_4_I_DATA_0: begin
                    rdata <= int_m_4_i[31:0];
                end
                ADDR_M_4_O_DATA_0: begin
                    rdata <= int_m_4_o[31:0];
                end
                ADDR_M_4_O_CTRL: begin
                    rdata[0] <= int_m_4_o_ap_vld;
                end
                ADDR_AD_1_DATA_0: begin
                    rdata <= int_ad_1[31:0];
                end
                ADDR_AD_2_DATA_0: begin
                    rdata <= int_ad_2[31:0];
                end
                ADDR_AD_3_DATA_0: begin
                    rdata <= int_ad_3[31:0];
                end
                ADDR_AD_4_DATA_0: begin
                    rdata <= int_ad_4[31:0];
                end
                ADDR_NSEC_1_I_DATA_0: begin
                    rdata <= int_nsec_1_i[31:0];
                end
                ADDR_NSEC_1_O_DATA_0: begin
                    rdata <= int_nsec_1_o[31:0];
                end
                ADDR_NSEC_1_O_CTRL: begin
                    rdata[0] <= int_nsec_1_o_ap_vld;
                end
                ADDR_NSEC_2_I_DATA_0: begin
                    rdata <= int_nsec_2_i[31:0];
                end
                ADDR_NSEC_2_O_DATA_0: begin
                    rdata <= int_nsec_2_o[31:0];
                end
                ADDR_NSEC_2_O_CTRL: begin
                    rdata[0] <= int_nsec_2_o_ap_vld;
                end
                ADDR_NSEC_3_I_DATA_0: begin
                    rdata <= int_nsec_3_i[31:0];
                end
                ADDR_NSEC_3_O_DATA_0: begin
                    rdata <= int_nsec_3_o[31:0];
                end
                ADDR_NSEC_3_O_CTRL: begin
                    rdata[0] <= int_nsec_3_o_ap_vld;
                end
                ADDR_NSEC_4_I_DATA_0: begin
                    rdata <= int_nsec_4_i[31:0];
                end
                ADDR_NSEC_4_O_DATA_0: begin
                    rdata <= int_nsec_4_o[31:0];
                end
                ADDR_NSEC_4_O_CTRL: begin
                    rdata[0] <= int_nsec_4_o_ap_vld;
                end
                ADDR_NPUB_1_DATA_0: begin
                    rdata <= int_npub_1[31:0];
                end
                ADDR_NPUB_2_DATA_0: begin
                    rdata <= int_npub_2[31:0];
                end
                ADDR_NPUB_3_DATA_0: begin
                    rdata <= int_npub_3[31:0];
                end
                ADDR_NPUB_4_DATA_0: begin
                    rdata <= int_npub_4[31:0];
                end
                ADDR_K_1_DATA_0: begin
                    rdata <= int_k_1[31:0];
                end
                ADDR_K_2_DATA_0: begin
                    rdata <= int_k_2[31:0];
                end
                ADDR_K_3_DATA_0: begin
                    rdata <= int_k_3[31:0];
                end
                ADDR_K_4_DATA_0: begin
                    rdata <= int_k_4[31:0];
                end
            endcase
        end
    end
end


//------------------------Register logic-----------------
assign interrupt         = int_interrupt;
assign ap_start          = int_ap_start;
assign task_ap_done      = (ap_done && !auto_restart_status) || auto_restart_done;
assign task_ap_ready     = ap_ready && !int_auto_restart;
assign auto_restart_done = auto_restart_status && (ap_idle && !int_ap_idle);
assign decrypt           = int_decrypt;
assign c_1_i             = int_c_1_i;
assign c_2_i             = int_c_2_i;
assign c_3_i             = int_c_3_i;
assign c_4_i             = int_c_4_i;
assign c_5_i             = int_c_5_i;
assign c_6_i             = int_c_6_i;
assign c_7_i             = int_c_7_i;
assign c_8_i             = int_c_8_i;
assign m_1_i             = int_m_1_i;
assign m_2_i             = int_m_2_i;
assign m_3_i             = int_m_3_i;
assign m_4_i             = int_m_4_i;
assign ad_1              = int_ad_1;
assign ad_2              = int_ad_2;
assign ad_3              = int_ad_3;
assign ad_4              = int_ad_4;
assign nsec_1_i          = int_nsec_1_i;
assign nsec_2_i          = int_nsec_2_i;
assign nsec_3_i          = int_nsec_3_i;
assign nsec_4_i          = int_nsec_4_i;
assign npub_1            = int_npub_1;
assign npub_2            = int_npub_2;
assign npub_3            = int_npub_3;
assign npub_4            = int_npub_4;
assign k_1               = int_k_1;
assign k_2               = int_k_2;
assign k_3               = int_k_3;
assign k_4               = int_k_4;
// int_interrupt
always @(posedge ACLK) begin
    if (ARESET)
        int_interrupt <= 1'b0;
    else if (ACLK_EN) begin
        if (int_gie && (|int_isr))
            int_interrupt <= 1'b1;
        else
            int_interrupt <= 1'b0;
    end
end

// int_ap_start
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_start <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[0])
            int_ap_start <= 1'b1;
        else if (ap_ready)
            int_ap_start <= int_auto_restart; // clear on handshake/auto restart
    end
end

// int_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_done <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_done <= ap_done;
    end
end

// int_task_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_task_ap_done <= 1'b0;
    else if (ACLK_EN) begin
        if (task_ap_done)
            int_task_ap_done <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_task_ap_done <= 1'b0; // clear on read
    end
end

// int_ap_idle
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_idle <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_idle <= ap_idle;
    end
end

// int_ap_ready
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_ready <= 1'b0;
    else if (ACLK_EN) begin
        if (task_ap_ready)
            int_ap_ready <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_ap_ready <= 1'b0;
    end
end

// int_auto_restart
always @(posedge ACLK) begin
    if (ARESET)
        int_auto_restart <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0])
            int_auto_restart <=  WDATA[7];
    end
end

// auto_restart_status
always @(posedge ACLK) begin
    if (ARESET)
        auto_restart_status <= 1'b0;
    else if (ACLK_EN) begin
        if (int_auto_restart)
            auto_restart_status <= 1'b1;
        else if (ap_idle)
            auto_restart_status <= 1'b0;
    end
end

// int_gie
always @(posedge ACLK) begin
    if (ARESET)
        int_gie <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_GIE && WSTRB[0])
            int_gie <= WDATA[0];
    end
end

// int_ier
always @(posedge ACLK) begin
    if (ARESET)
        int_ier <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IER && WSTRB[0])
            int_ier <= WDATA[1:0];
    end
end

// int_isr[0]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[0] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[0] & ap_done)
            int_isr[0] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[0] <= int_isr[0] ^ WDATA[0]; // toggle on write
    end
end

// int_isr[1]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[1] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[1] & ap_ready)
            int_isr[1] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[1] <= int_isr[1] ^ WDATA[1]; // toggle on write
    end
end

// int_ap_return
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_return <= 0;
    else if (ACLK_EN) begin
        if (ap_done)
            int_ap_return <= ap_return;
    end
end

// int_decrypt[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_decrypt[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DECRYPT_DATA_0)
            int_decrypt[31:0] <= (WDATA[31:0] & wmask) | (int_decrypt[31:0] & ~wmask);
    end
end

// int_c_1_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_1_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_1_I_DATA_0)
            int_c_1_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_1_i[31:0] & ~wmask);
    end
end

// int_c_1_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_1_o <= 0;
    else if (ACLK_EN) begin
        if (c_1_o_ap_vld)
            int_c_1_o <= c_1_o;
    end
end

// int_c_1_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_1_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_1_o_ap_vld)
            int_c_1_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_1_O_CTRL)
            int_c_1_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_2_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_2_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_2_I_DATA_0)
            int_c_2_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_2_i[31:0] & ~wmask);
    end
end

// int_c_2_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_2_o <= 0;
    else if (ACLK_EN) begin
        if (c_2_o_ap_vld)
            int_c_2_o <= c_2_o;
    end
end

// int_c_2_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_2_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_2_o_ap_vld)
            int_c_2_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_2_O_CTRL)
            int_c_2_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_3_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_3_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_3_I_DATA_0)
            int_c_3_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_3_i[31:0] & ~wmask);
    end
end

// int_c_3_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_3_o <= 0;
    else if (ACLK_EN) begin
        if (c_3_o_ap_vld)
            int_c_3_o <= c_3_o;
    end
end

// int_c_3_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_3_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_3_o_ap_vld)
            int_c_3_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_3_O_CTRL)
            int_c_3_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_4_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_4_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_4_I_DATA_0)
            int_c_4_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_4_i[31:0] & ~wmask);
    end
end

// int_c_4_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_4_o <= 0;
    else if (ACLK_EN) begin
        if (c_4_o_ap_vld)
            int_c_4_o <= c_4_o;
    end
end

// int_c_4_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_4_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_4_o_ap_vld)
            int_c_4_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_4_O_CTRL)
            int_c_4_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_5_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_5_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_5_I_DATA_0)
            int_c_5_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_5_i[31:0] & ~wmask);
    end
end

// int_c_5_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_5_o <= 0;
    else if (ACLK_EN) begin
        if (c_5_o_ap_vld)
            int_c_5_o <= c_5_o;
    end
end

// int_c_5_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_5_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_5_o_ap_vld)
            int_c_5_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_5_O_CTRL)
            int_c_5_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_6_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_6_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_6_I_DATA_0)
            int_c_6_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_6_i[31:0] & ~wmask);
    end
end

// int_c_6_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_6_o <= 0;
    else if (ACLK_EN) begin
        if (c_6_o_ap_vld)
            int_c_6_o <= c_6_o;
    end
end

// int_c_6_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_6_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_6_o_ap_vld)
            int_c_6_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_6_O_CTRL)
            int_c_6_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_7_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_7_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_7_I_DATA_0)
            int_c_7_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_7_i[31:0] & ~wmask);
    end
end

// int_c_7_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_7_o <= 0;
    else if (ACLK_EN) begin
        if (c_7_o_ap_vld)
            int_c_7_o <= c_7_o;
    end
end

// int_c_7_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_7_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_7_o_ap_vld)
            int_c_7_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_7_O_CTRL)
            int_c_7_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_c_8_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_c_8_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_C_8_I_DATA_0)
            int_c_8_i[31:0] <= (WDATA[31:0] & wmask) | (int_c_8_i[31:0] & ~wmask);
    end
end

// int_c_8_o
always @(posedge ACLK) begin
    if (ARESET)
        int_c_8_o <= 0;
    else if (ACLK_EN) begin
        if (c_8_o_ap_vld)
            int_c_8_o <= c_8_o;
    end
end

// int_c_8_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_c_8_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (c_8_o_ap_vld)
            int_c_8_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_C_8_O_CTRL)
            int_c_8_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_m_1_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_m_1_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_M_1_I_DATA_0)
            int_m_1_i[31:0] <= (WDATA[31:0] & wmask) | (int_m_1_i[31:0] & ~wmask);
    end
end

// int_m_1_o
always @(posedge ACLK) begin
    if (ARESET)
        int_m_1_o <= 0;
    else if (ACLK_EN) begin
        if (m_1_o_ap_vld)
            int_m_1_o <= m_1_o;
    end
end

// int_m_1_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_m_1_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (m_1_o_ap_vld)
            int_m_1_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_M_1_O_CTRL)
            int_m_1_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_m_2_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_m_2_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_M_2_I_DATA_0)
            int_m_2_i[31:0] <= (WDATA[31:0] & wmask) | (int_m_2_i[31:0] & ~wmask);
    end
end

// int_m_2_o
always @(posedge ACLK) begin
    if (ARESET)
        int_m_2_o <= 0;
    else if (ACLK_EN) begin
        if (m_2_o_ap_vld)
            int_m_2_o <= m_2_o;
    end
end

// int_m_2_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_m_2_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (m_2_o_ap_vld)
            int_m_2_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_M_2_O_CTRL)
            int_m_2_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_m_3_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_m_3_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_M_3_I_DATA_0)
            int_m_3_i[31:0] <= (WDATA[31:0] & wmask) | (int_m_3_i[31:0] & ~wmask);
    end
end

// int_m_3_o
always @(posedge ACLK) begin
    if (ARESET)
        int_m_3_o <= 0;
    else if (ACLK_EN) begin
        if (m_3_o_ap_vld)
            int_m_3_o <= m_3_o;
    end
end

// int_m_3_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_m_3_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (m_3_o_ap_vld)
            int_m_3_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_M_3_O_CTRL)
            int_m_3_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_m_4_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_m_4_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_M_4_I_DATA_0)
            int_m_4_i[31:0] <= (WDATA[31:0] & wmask) | (int_m_4_i[31:0] & ~wmask);
    end
end

// int_m_4_o
always @(posedge ACLK) begin
    if (ARESET)
        int_m_4_o <= 0;
    else if (ACLK_EN) begin
        if (m_4_o_ap_vld)
            int_m_4_o <= m_4_o;
    end
end

// int_m_4_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_m_4_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (m_4_o_ap_vld)
            int_m_4_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_M_4_O_CTRL)
            int_m_4_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_ad_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ad_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AD_1_DATA_0)
            int_ad_1[31:0] <= (WDATA[31:0] & wmask) | (int_ad_1[31:0] & ~wmask);
    end
end

// int_ad_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ad_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AD_2_DATA_0)
            int_ad_2[31:0] <= (WDATA[31:0] & wmask) | (int_ad_2[31:0] & ~wmask);
    end
end

// int_ad_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ad_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AD_3_DATA_0)
            int_ad_3[31:0] <= (WDATA[31:0] & wmask) | (int_ad_3[31:0] & ~wmask);
    end
end

// int_ad_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ad_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AD_4_DATA_0)
            int_ad_4[31:0] <= (WDATA[31:0] & wmask) | (int_ad_4[31:0] & ~wmask);
    end
end

// int_nsec_1_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_1_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NSEC_1_I_DATA_0)
            int_nsec_1_i[31:0] <= (WDATA[31:0] & wmask) | (int_nsec_1_i[31:0] & ~wmask);
    end
end

// int_nsec_1_o
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_1_o <= 0;
    else if (ACLK_EN) begin
        if (nsec_1_o_ap_vld)
            int_nsec_1_o <= nsec_1_o;
    end
end

// int_nsec_1_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_1_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (nsec_1_o_ap_vld)
            int_nsec_1_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_NSEC_1_O_CTRL)
            int_nsec_1_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_nsec_2_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_2_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NSEC_2_I_DATA_0)
            int_nsec_2_i[31:0] <= (WDATA[31:0] & wmask) | (int_nsec_2_i[31:0] & ~wmask);
    end
end

// int_nsec_2_o
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_2_o <= 0;
    else if (ACLK_EN) begin
        if (nsec_2_o_ap_vld)
            int_nsec_2_o <= nsec_2_o;
    end
end

// int_nsec_2_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_2_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (nsec_2_o_ap_vld)
            int_nsec_2_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_NSEC_2_O_CTRL)
            int_nsec_2_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_nsec_3_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_3_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NSEC_3_I_DATA_0)
            int_nsec_3_i[31:0] <= (WDATA[31:0] & wmask) | (int_nsec_3_i[31:0] & ~wmask);
    end
end

// int_nsec_3_o
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_3_o <= 0;
    else if (ACLK_EN) begin
        if (nsec_3_o_ap_vld)
            int_nsec_3_o <= nsec_3_o;
    end
end

// int_nsec_3_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_3_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (nsec_3_o_ap_vld)
            int_nsec_3_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_NSEC_3_O_CTRL)
            int_nsec_3_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_nsec_4_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_4_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NSEC_4_I_DATA_0)
            int_nsec_4_i[31:0] <= (WDATA[31:0] & wmask) | (int_nsec_4_i[31:0] & ~wmask);
    end
end

// int_nsec_4_o
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_4_o <= 0;
    else if (ACLK_EN) begin
        if (nsec_4_o_ap_vld)
            int_nsec_4_o <= nsec_4_o;
    end
end

// int_nsec_4_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_nsec_4_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (nsec_4_o_ap_vld)
            int_nsec_4_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_NSEC_4_O_CTRL)
            int_nsec_4_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_npub_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_npub_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NPUB_1_DATA_0)
            int_npub_1[31:0] <= (WDATA[31:0] & wmask) | (int_npub_1[31:0] & ~wmask);
    end
end

// int_npub_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_npub_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NPUB_2_DATA_0)
            int_npub_2[31:0] <= (WDATA[31:0] & wmask) | (int_npub_2[31:0] & ~wmask);
    end
end

// int_npub_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_npub_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NPUB_3_DATA_0)
            int_npub_3[31:0] <= (WDATA[31:0] & wmask) | (int_npub_3[31:0] & ~wmask);
    end
end

// int_npub_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_npub_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_NPUB_4_DATA_0)
            int_npub_4[31:0] <= (WDATA[31:0] & wmask) | (int_npub_4[31:0] & ~wmask);
    end
end

// int_k_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_k_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_1_DATA_0)
            int_k_1[31:0] <= (WDATA[31:0] & wmask) | (int_k_1[31:0] & ~wmask);
    end
end

// int_k_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_k_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_2_DATA_0)
            int_k_2[31:0] <= (WDATA[31:0] & wmask) | (int_k_2[31:0] & ~wmask);
    end
end

// int_k_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_k_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_3_DATA_0)
            int_k_3[31:0] <= (WDATA[31:0] & wmask) | (int_k_3[31:0] & ~wmask);
    end
end

// int_k_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_k_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_4_DATA_0)
            int_k_4[31:0] <= (WDATA[31:0] & wmask) | (int_k_4[31:0] & ~wmask);
    end
end

//synthesis translate_off
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (int_gie & ~int_isr[0] & int_ier[0] & ap_done)
            $display ("// Interrupt Monitor : interrupt for ap_done detected @ \"%0t\"", $time);
        if (int_gie & ~int_isr[1] & int_ier[1] & ap_ready)
            $display ("// Interrupt Monitor : interrupt for ap_ready detected @ \"%0t\"", $time);
    end
end
//synthesis translate_on

//------------------------Memory logic-------------------

endmodule
