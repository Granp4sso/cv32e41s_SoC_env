// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1 (64-bit)
// Tool Version Limit: 2023.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
/***************************** Include Files *********************************/
#include "xaxi_ascon.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XAxi_ascon_CfgInitialize(XAxi_ascon *InstancePtr, XAxi_ascon_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Bus_a_BaseAddress = ConfigPtr->Bus_a_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XAxi_ascon_Start(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL) & 0x80;
    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL, Data | 0x01);
}

u32 XAxi_ascon_IsDone(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XAxi_ascon_IsIdle(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XAxi_ascon_IsReady(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XAxi_ascon_EnableAutoRestart(XAxi_ascon *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL, 0x80);
}

void XAxi_ascon_DisableAutoRestart(XAxi_ascon *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_CTRL, 0);
}

u32 XAxi_ascon_Get_return(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AP_RETURN);
    return Data;
}
void XAxi_ascon_Set_decrypt(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_DECRYPT_DATA, Data);
}

u32 XAxi_ascon_Get_decrypt(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_DECRYPT_DATA);
    return Data;
}

void XAxi_ascon_Set_c_1_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_1_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_1_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_1_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_1_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_1_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_1_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_1_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_2_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_2_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_2_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_2_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_2_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_2_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_2_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_2_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_3_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_3_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_3_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_3_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_3_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_3_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_3_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_3_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_4_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_4_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_4_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_4_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_4_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_4_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_4_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_4_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_5_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_5_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_5_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_5_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_5_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_5_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_5_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_5_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_6_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_6_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_6_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_6_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_6_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_6_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_6_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_6_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_7_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_7_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_7_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_7_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_7_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_7_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_7_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_7_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_c_8_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_8_I_DATA, Data);
}

u32 XAxi_ascon_Get_c_8_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_8_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_8_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_8_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_c_8_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_C_8_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_m_1_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_1_I_DATA, Data);
}

u32 XAxi_ascon_Get_m_1_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_1_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_1_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_1_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_1_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_1_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_m_2_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_2_I_DATA, Data);
}

u32 XAxi_ascon_Get_m_2_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_2_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_2_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_2_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_2_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_2_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_m_3_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_3_I_DATA, Data);
}

u32 XAxi_ascon_Get_m_3_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_3_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_3_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_3_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_3_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_3_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_m_4_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_4_I_DATA, Data);
}

u32 XAxi_ascon_Get_m_4_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_4_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_4_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_4_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_m_4_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_M_4_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_ad_1(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_1_DATA, Data);
}

u32 XAxi_ascon_Get_ad_1(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_1_DATA);
    return Data;
}

void XAxi_ascon_Set_ad_2(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_2_DATA, Data);
}

u32 XAxi_ascon_Get_ad_2(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_2_DATA);
    return Data;
}

void XAxi_ascon_Set_ad_3(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_3_DATA, Data);
}

u32 XAxi_ascon_Get_ad_3(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_3_DATA);
    return Data;
}

void XAxi_ascon_Set_ad_4(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_4_DATA, Data);
}

u32 XAxi_ascon_Get_ad_4(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_AD_4_DATA);
    return Data;
}

void XAxi_ascon_Set_nsec_1_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_1_I_DATA, Data);
}

u32 XAxi_ascon_Get_nsec_1_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_1_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_1_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_1_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_1_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_1_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_nsec_2_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_2_I_DATA, Data);
}

u32 XAxi_ascon_Get_nsec_2_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_2_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_2_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_2_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_2_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_2_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_nsec_3_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_3_I_DATA, Data);
}

u32 XAxi_ascon_Get_nsec_3_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_3_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_3_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_3_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_3_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_3_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_nsec_4_i(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_4_I_DATA, Data);
}

u32 XAxi_ascon_Get_nsec_4_i(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_4_I_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_4_o(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_4_O_DATA);
    return Data;
}

u32 XAxi_ascon_Get_nsec_4_o_vld(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NSEC_4_O_CTRL);
    return Data & 0x1;
}

void XAxi_ascon_Set_npub_1(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_1_DATA, Data);
}

u32 XAxi_ascon_Get_npub_1(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_1_DATA);
    return Data;
}

void XAxi_ascon_Set_npub_2(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_2_DATA, Data);
}

u32 XAxi_ascon_Get_npub_2(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_2_DATA);
    return Data;
}

void XAxi_ascon_Set_npub_3(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_3_DATA, Data);
}

u32 XAxi_ascon_Get_npub_3(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_3_DATA);
    return Data;
}

void XAxi_ascon_Set_npub_4(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_4_DATA, Data);
}

u32 XAxi_ascon_Get_npub_4(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_NPUB_4_DATA);
    return Data;
}

void XAxi_ascon_Set_k_1(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_1_DATA, Data);
}

u32 XAxi_ascon_Get_k_1(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_1_DATA);
    return Data;
}

void XAxi_ascon_Set_k_2(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_2_DATA, Data);
}

u32 XAxi_ascon_Get_k_2(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_2_DATA);
    return Data;
}

void XAxi_ascon_Set_k_3(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_3_DATA, Data);
}

u32 XAxi_ascon_Get_k_3(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_3_DATA);
    return Data;
}

void XAxi_ascon_Set_k_4(XAxi_ascon *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_4_DATA, Data);
}

u32 XAxi_ascon_Get_k_4(XAxi_ascon *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_K_4_DATA);
    return Data;
}

void XAxi_ascon_InterruptGlobalEnable(XAxi_ascon *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_GIE, 1);
}

void XAxi_ascon_InterruptGlobalDisable(XAxi_ascon *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_GIE, 0);
}

void XAxi_ascon_InterruptEnable(XAxi_ascon *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_IER);
    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_IER, Register | Mask);
}

void XAxi_ascon_InterruptDisable(XAxi_ascon *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_IER);
    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_IER, Register & (~Mask));
}

void XAxi_ascon_InterruptClear(XAxi_ascon *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAxi_ascon_WriteReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_ISR, Mask);
}

u32 XAxi_ascon_InterruptGetEnabled(XAxi_ascon *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_IER);
}

u32 XAxi_ascon_InterruptGetStatus(XAxi_ascon *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAxi_ascon_ReadReg(InstancePtr->Bus_a_BaseAddress, XAXI_ASCON_BUS_A_ADDR_ISR);
}

