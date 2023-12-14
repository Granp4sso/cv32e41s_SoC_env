// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1 (64-bit)
// Tool Version Limit: 2023.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef XAXI_ASCON_H
#define XAXI_ASCON_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xaxi_ascon_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct {
    u16 DeviceId;
    u64 Bus_a_BaseAddress;
} XAxi_ascon_Config;
#endif

typedef struct {
    u64 Bus_a_BaseAddress;
    u32 IsReady;
} XAxi_ascon;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XAxi_ascon_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XAxi_ascon_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XAxi_ascon_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XAxi_ascon_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XAxi_ascon_Initialize(XAxi_ascon *InstancePtr, u16 DeviceId);
XAxi_ascon_Config* XAxi_ascon_LookupConfig(u16 DeviceId);
int XAxi_ascon_CfgInitialize(XAxi_ascon *InstancePtr, XAxi_ascon_Config *ConfigPtr);
#else
int XAxi_ascon_Initialize(XAxi_ascon *InstancePtr, const char* InstanceName);
int XAxi_ascon_Release(XAxi_ascon *InstancePtr);
#endif

void XAxi_ascon_Start(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_IsDone(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_IsIdle(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_IsReady(XAxi_ascon *InstancePtr);
void XAxi_ascon_EnableAutoRestart(XAxi_ascon *InstancePtr);
void XAxi_ascon_DisableAutoRestart(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_return(XAxi_ascon *InstancePtr);

void XAxi_ascon_Set_decrypt(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_decrypt(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_1_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_1_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_1_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_1_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_2_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_2_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_2_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_2_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_3_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_3_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_3_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_3_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_4_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_4_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_4_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_4_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_5_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_5_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_5_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_5_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_6_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_6_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_6_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_6_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_7_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_7_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_7_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_7_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_c_8_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_c_8_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_8_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_c_8_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_m_1_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_m_1_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_1_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_1_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_m_2_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_m_2_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_2_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_2_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_m_3_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_m_3_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_3_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_3_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_m_4_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_m_4_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_4_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_m_4_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_ad_1(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_ad_1(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_ad_2(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_ad_2(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_ad_3(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_ad_3(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_ad_4(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_ad_4(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_nsec_1_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_nsec_1_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_1_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_1_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_nsec_2_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_nsec_2_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_2_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_2_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_nsec_3_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_nsec_3_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_3_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_3_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_nsec_4_i(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_nsec_4_i(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_4_o(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_Get_nsec_4_o_vld(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_npub_1(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_npub_1(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_npub_2(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_npub_2(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_npub_3(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_npub_3(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_npub_4(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_npub_4(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_k_1(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_k_1(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_k_2(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_k_2(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_k_3(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_k_3(XAxi_ascon *InstancePtr);
void XAxi_ascon_Set_k_4(XAxi_ascon *InstancePtr, u32 Data);
u32 XAxi_ascon_Get_k_4(XAxi_ascon *InstancePtr);

void XAxi_ascon_InterruptGlobalEnable(XAxi_ascon *InstancePtr);
void XAxi_ascon_InterruptGlobalDisable(XAxi_ascon *InstancePtr);
void XAxi_ascon_InterruptEnable(XAxi_ascon *InstancePtr, u32 Mask);
void XAxi_ascon_InterruptDisable(XAxi_ascon *InstancePtr, u32 Mask);
void XAxi_ascon_InterruptClear(XAxi_ascon *InstancePtr, u32 Mask);
u32 XAxi_ascon_InterruptGetEnabled(XAxi_ascon *InstancePtr);
u32 XAxi_ascon_InterruptGetStatus(XAxi_ascon *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
