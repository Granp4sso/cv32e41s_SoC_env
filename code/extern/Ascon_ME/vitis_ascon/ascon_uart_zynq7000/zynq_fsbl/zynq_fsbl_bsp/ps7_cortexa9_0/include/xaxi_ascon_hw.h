// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1 (64-bit)
// Tool Version Limit: 2023.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
// BUS_A
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

#define XAXI_ASCON_BUS_A_ADDR_AP_CTRL       0x000
#define XAXI_ASCON_BUS_A_ADDR_GIE           0x004
#define XAXI_ASCON_BUS_A_ADDR_IER           0x008
#define XAXI_ASCON_BUS_A_ADDR_ISR           0x00c
#define XAXI_ASCON_BUS_A_ADDR_AP_RETURN     0x010
#define XAXI_ASCON_BUS_A_BITS_AP_RETURN     32
#define XAXI_ASCON_BUS_A_ADDR_DECRYPT_DATA  0x018
#define XAXI_ASCON_BUS_A_BITS_DECRYPT_DATA  32
#define XAXI_ASCON_BUS_A_ADDR_C_1_I_DATA    0x020
#define XAXI_ASCON_BUS_A_BITS_C_1_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_1_O_DATA    0x028
#define XAXI_ASCON_BUS_A_BITS_C_1_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_1_O_CTRL    0x02c
#define XAXI_ASCON_BUS_A_ADDR_C_2_I_DATA    0x030
#define XAXI_ASCON_BUS_A_BITS_C_2_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_2_O_DATA    0x038
#define XAXI_ASCON_BUS_A_BITS_C_2_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_2_O_CTRL    0x03c
#define XAXI_ASCON_BUS_A_ADDR_C_3_I_DATA    0x040
#define XAXI_ASCON_BUS_A_BITS_C_3_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_3_O_DATA    0x048
#define XAXI_ASCON_BUS_A_BITS_C_3_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_3_O_CTRL    0x04c
#define XAXI_ASCON_BUS_A_ADDR_C_4_I_DATA    0x050
#define XAXI_ASCON_BUS_A_BITS_C_4_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_4_O_DATA    0x058
#define XAXI_ASCON_BUS_A_BITS_C_4_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_4_O_CTRL    0x05c
#define XAXI_ASCON_BUS_A_ADDR_C_5_I_DATA    0x060
#define XAXI_ASCON_BUS_A_BITS_C_5_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_5_O_DATA    0x068
#define XAXI_ASCON_BUS_A_BITS_C_5_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_5_O_CTRL    0x06c
#define XAXI_ASCON_BUS_A_ADDR_C_6_I_DATA    0x070
#define XAXI_ASCON_BUS_A_BITS_C_6_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_6_O_DATA    0x078
#define XAXI_ASCON_BUS_A_BITS_C_6_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_6_O_CTRL    0x07c
#define XAXI_ASCON_BUS_A_ADDR_C_7_I_DATA    0x080
#define XAXI_ASCON_BUS_A_BITS_C_7_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_7_O_DATA    0x088
#define XAXI_ASCON_BUS_A_BITS_C_7_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_7_O_CTRL    0x08c
#define XAXI_ASCON_BUS_A_ADDR_C_8_I_DATA    0x090
#define XAXI_ASCON_BUS_A_BITS_C_8_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_8_O_DATA    0x098
#define XAXI_ASCON_BUS_A_BITS_C_8_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_C_8_O_CTRL    0x09c
#define XAXI_ASCON_BUS_A_ADDR_M_1_I_DATA    0x0a0
#define XAXI_ASCON_BUS_A_BITS_M_1_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_1_O_DATA    0x0a8
#define XAXI_ASCON_BUS_A_BITS_M_1_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_1_O_CTRL    0x0ac
#define XAXI_ASCON_BUS_A_ADDR_M_2_I_DATA    0x0b0
#define XAXI_ASCON_BUS_A_BITS_M_2_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_2_O_DATA    0x0b8
#define XAXI_ASCON_BUS_A_BITS_M_2_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_2_O_CTRL    0x0bc
#define XAXI_ASCON_BUS_A_ADDR_M_3_I_DATA    0x0c0
#define XAXI_ASCON_BUS_A_BITS_M_3_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_3_O_DATA    0x0c8
#define XAXI_ASCON_BUS_A_BITS_M_3_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_3_O_CTRL    0x0cc
#define XAXI_ASCON_BUS_A_ADDR_M_4_I_DATA    0x0d0
#define XAXI_ASCON_BUS_A_BITS_M_4_I_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_4_O_DATA    0x0d8
#define XAXI_ASCON_BUS_A_BITS_M_4_O_DATA    32
#define XAXI_ASCON_BUS_A_ADDR_M_4_O_CTRL    0x0dc
#define XAXI_ASCON_BUS_A_ADDR_AD_1_DATA     0x0e0
#define XAXI_ASCON_BUS_A_BITS_AD_1_DATA     32
#define XAXI_ASCON_BUS_A_ADDR_AD_2_DATA     0x0e8
#define XAXI_ASCON_BUS_A_BITS_AD_2_DATA     32
#define XAXI_ASCON_BUS_A_ADDR_AD_3_DATA     0x0f0
#define XAXI_ASCON_BUS_A_BITS_AD_3_DATA     32
#define XAXI_ASCON_BUS_A_ADDR_AD_4_DATA     0x0f8
#define XAXI_ASCON_BUS_A_BITS_AD_4_DATA     32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_1_I_DATA 0x100
#define XAXI_ASCON_BUS_A_BITS_NSEC_1_I_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_1_O_DATA 0x108
#define XAXI_ASCON_BUS_A_BITS_NSEC_1_O_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_1_O_CTRL 0x10c
#define XAXI_ASCON_BUS_A_ADDR_NSEC_2_I_DATA 0x110
#define XAXI_ASCON_BUS_A_BITS_NSEC_2_I_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_2_O_DATA 0x118
#define XAXI_ASCON_BUS_A_BITS_NSEC_2_O_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_2_O_CTRL 0x11c
#define XAXI_ASCON_BUS_A_ADDR_NSEC_3_I_DATA 0x120
#define XAXI_ASCON_BUS_A_BITS_NSEC_3_I_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_3_O_DATA 0x128
#define XAXI_ASCON_BUS_A_BITS_NSEC_3_O_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_3_O_CTRL 0x12c
#define XAXI_ASCON_BUS_A_ADDR_NSEC_4_I_DATA 0x130
#define XAXI_ASCON_BUS_A_BITS_NSEC_4_I_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_4_O_DATA 0x138
#define XAXI_ASCON_BUS_A_BITS_NSEC_4_O_DATA 32
#define XAXI_ASCON_BUS_A_ADDR_NSEC_4_O_CTRL 0x13c
#define XAXI_ASCON_BUS_A_ADDR_NPUB_1_DATA   0x140
#define XAXI_ASCON_BUS_A_BITS_NPUB_1_DATA   32
#define XAXI_ASCON_BUS_A_ADDR_NPUB_2_DATA   0x148
#define XAXI_ASCON_BUS_A_BITS_NPUB_2_DATA   32
#define XAXI_ASCON_BUS_A_ADDR_NPUB_3_DATA   0x150
#define XAXI_ASCON_BUS_A_BITS_NPUB_3_DATA   32
#define XAXI_ASCON_BUS_A_ADDR_NPUB_4_DATA   0x158
#define XAXI_ASCON_BUS_A_BITS_NPUB_4_DATA   32
#define XAXI_ASCON_BUS_A_ADDR_K_1_DATA      0x160
#define XAXI_ASCON_BUS_A_BITS_K_1_DATA      32
#define XAXI_ASCON_BUS_A_ADDR_K_2_DATA      0x168
#define XAXI_ASCON_BUS_A_BITS_K_2_DATA      32
#define XAXI_ASCON_BUS_A_ADDR_K_3_DATA      0x170
#define XAXI_ASCON_BUS_A_BITS_K_3_DATA      32
#define XAXI_ASCON_BUS_A_ADDR_K_4_DATA      0x178
#define XAXI_ASCON_BUS_A_BITS_K_4_DATA      32

