// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1 (64-bit)
// Tool Version Limit: 2023.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xaxi_ascon.h"

extern XAxi_ascon_Config XAxi_ascon_ConfigTable[];

XAxi_ascon_Config *XAxi_ascon_LookupConfig(u16 DeviceId) {
	XAxi_ascon_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XAXI_ASCON_NUM_INSTANCES; Index++) {
		if (XAxi_ascon_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XAxi_ascon_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XAxi_ascon_Initialize(XAxi_ascon *InstancePtr, u16 DeviceId) {
	XAxi_ascon_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XAxi_ascon_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XAxi_ascon_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

