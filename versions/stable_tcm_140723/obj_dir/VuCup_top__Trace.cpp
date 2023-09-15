// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VuCup_top__Syms.h"


void VuCup_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VuCup_top__Syms* __restrict vlSymsp = static_cast<VuCup_top__Syms*>(userp);
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
    }
}

void VuCup_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VuCup_top__Syms* __restrict vlSymsp = static_cast<VuCup_top__Syms*>(userp);
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+4,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+5,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[5]),32);
            tracep->chgIData(oldp+6,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[6]),32);
            tracep->chgIData(oldp+7,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base[7]),32);
            tracep->chgIData(oldp+8,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+9,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+10,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+11,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+12,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+13,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[5]),32);
            tracep->chgIData(oldp+14,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[6]),32);
            tracep->chgIData(oldp+15,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask[7]),32);
            tracep->chgIData(oldp+16,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+17,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+18,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+19,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+20,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+21,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[5]),32);
            tracep->chgIData(oldp+22,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[6]),32);
            tracep->chgIData(oldp+23,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base[7]),32);
            tracep->chgIData(oldp+24,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+25,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+26,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+27,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+28,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+29,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[5]),32);
            tracep->chgIData(oldp+30,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[6]),32);
            tracep->chgIData(oldp+31,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask[7]),32);
            tracep->chgIData(oldp+32,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[0]),32);
            tracep->chgIData(oldp+33,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[1]),32);
            tracep->chgIData(oldp+34,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[2]),32);
            tracep->chgIData(oldp+35,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[3]),32);
            tracep->chgIData(oldp+36,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[4]),32);
            tracep->chgIData(oldp+37,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[5]),32);
            tracep->chgIData(oldp+38,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[6]),32);
            tracep->chgIData(oldp+39,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[7]),32);
            tracep->chgIData(oldp+40,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[8]),32);
            tracep->chgIData(oldp+41,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[9]),32);
            tracep->chgIData(oldp+42,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[10]),32);
            tracep->chgIData(oldp+43,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[11]),32);
            tracep->chgIData(oldp+44,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[12]),32);
            tracep->chgIData(oldp+45,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[13]),32);
            tracep->chgIData(oldp+46,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[14]),32);
            tracep->chgIData(oldp+47,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__PMP_PMPADDR_RV[15]),32);
            tracep->chgBit(oldp+48,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_err[0]));
            tracep->chgBit(oldp+49,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_err[1]));
            tracep->chgIData(oldp+50,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_addr[0]),32);
            tracep->chgIData(oldp+51,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_addr[1]),32);
            tracep->chgIData(oldp+52,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_addr_mask[0]),32);
            tracep->chgIData(oldp+53,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_addr_mask[1]),32);
            tracep->chgBit(oldp+54,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_err[0]));
            tracep->chgBit(oldp+55,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_err[1]));
            tracep->chgBit(oldp+56,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_err[2]));
            tracep->chgIData(oldp+57,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr_base[0]),32);
            tracep->chgIData(oldp+58,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr_base[1]),32);
            tracep->chgIData(oldp+59,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr_base[2]),32);
            tracep->chgIData(oldp+60,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr_mask[0]),32);
            tracep->chgIData(oldp+61,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr_mask[1]),32);
            tracep->chgIData(oldp+62,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr_mask[2]),32);
            tracep->chgBit(oldp+63,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_we_inst_i[0]));
            tracep->chgCData(oldp+64,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_be_inst_i[0]),4);
            tracep->chgIData(oldp+65,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_wdata_inst_i[0]),32);
            tracep->chgBit(oldp+66,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_err_data_i[0]));
            tracep->chgBit(oldp+67,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_err_data_i[1]));
            tracep->chgBit(oldp+68,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_err_data_i[2]));
            tracep->chgBit(oldp+69,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_err_inst_i[0]));
            tracep->chgBit(oldp+70,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_err_inst_i[1]));
            tracep->chgIData(oldp+71,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_base[0]),32);
            tracep->chgIData(oldp+72,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_base[1]),32);
            tracep->chgIData(oldp+73,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_base[2]),32);
            tracep->chgIData(oldp+74,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_mask[0]),32);
            tracep->chgIData(oldp+75,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_mask[1]),32);
            tracep->chgIData(oldp+76,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_mask[2]),32);
            tracep->chgIData(oldp+77,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_inst_addr_base[0]),32);
            tracep->chgIData(oldp+78,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_inst_addr_base[1]),32);
            tracep->chgIData(oldp+79,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_inst_addr_mask[0]),32);
            tracep->chgIData(oldp+80,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_inst_addr_mask[1]),32);
            tracep->chgIData(oldp+81,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[0]),32);
            tracep->chgIData(oldp+82,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[1]),32);
            tracep->chgIData(oldp+83,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[2]),32);
            tracep->chgIData(oldp+84,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[3]),32);
            tracep->chgIData(oldp+85,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[4]),32);
            tracep->chgIData(oldp+86,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[5]),32);
            tracep->chgIData(oldp+87,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[6]),32);
            tracep->chgIData(oldp+88,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[7]),32);
            tracep->chgIData(oldp+89,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[8]),32);
            tracep->chgIData(oldp+90,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[9]),32);
            tracep->chgIData(oldp+91,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[10]),32);
            tracep->chgIData(oldp+92,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[11]),32);
            tracep->chgIData(oldp+93,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[12]),32);
            tracep->chgIData(oldp+94,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[13]),32);
            tracep->chgIData(oldp+95,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[14]),32);
            tracep->chgIData(oldp+96,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__PMP_PMPADDR_RV[15]),32);
            tracep->chgCData(oldp+97,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__rf_illegal_raddr),2);
            tracep->chgWData(oldp+98,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut),160);
            tracep->chgIData(oldp+103,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[0]),32);
            tracep->chgIData(oldp+104,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[1]),32);
            tracep->chgIData(oldp+105,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[2]),32);
            tracep->chgIData(oldp+106,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[3]),32);
            tracep->chgIData(oldp+107,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[4]),32);
            tracep->chgIData(oldp+108,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[5]),32);
            tracep->chgIData(oldp+109,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[6]),32);
            tracep->chgIData(oldp+110,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[7]),32);
            tracep->chgIData(oldp+111,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[8]),32);
            tracep->chgIData(oldp+112,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[9]),32);
            tracep->chgIData(oldp+113,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[10]),32);
            tracep->chgIData(oldp+114,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[11]),32);
            tracep->chgIData(oldp+115,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[12]),32);
            tracep->chgIData(oldp+116,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[13]),32);
            tracep->chgIData(oldp+117,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[14]),32);
            tracep->chgIData(oldp+118,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__PMP_PMPADDR_RV[15]),32);
            tracep->chgWData(oldp+119,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
            tracep->chgWData(oldp+151,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata),1024);
            tracep->chgIData(oldp+183,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__b_wmask),32);
            tracep->chgIData(oldp+184,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__b_wmask),32);
            tracep->chgQData(oldp+185,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned),64);
            tracep->chgBit(oldp+187,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n));
            tracep->chgBit(oldp+188,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr));
            tracep->chgBit(oldp+189,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr));
            tracep->chgBit(oldp+190,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr));
            tracep->chgBit(oldp+191,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select));
            tracep->chgBit(oldp+192,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select));
            tracep->chgCData(oldp+193,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
            tracep->chgCData(oldp+194,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
            tracep->chgCData(oldp+195,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
            tracep->chgBit(oldp+196,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
            tracep->chgBit(oldp+197,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
            tracep->chgBit(oldp+198,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
            tracep->chgIData(oldp+199,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
            tracep->chgBit(oldp+200,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
            tracep->chgBit(oldp+201,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
            tracep->chgBit(oldp+202,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+203,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_req_o[0]));
            tracep->chgBit(oldp+204,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_req_o[1]));
            tracep->chgBit(oldp+205,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_we_o[0]));
            tracep->chgBit(oldp+206,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_we_o[1]));
            tracep->chgCData(oldp+207,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_be_o[0]),4);
            tracep->chgCData(oldp+208,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_be_o[1]),4);
            tracep->chgIData(oldp+209,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_addr_o[0]),32);
            tracep->chgIData(oldp+210,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_addr_o[1]),32);
            tracep->chgIData(oldp+211,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_wdata_o[0]),32);
            tracep->chgIData(oldp+212,(vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_wdata_o[1]),32);
            tracep->chgBit(oldp+213,(vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rvalid_i[0]));
            tracep->chgBit(oldp+214,(vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rvalid_i[1]));
            tracep->chgIData(oldp+215,(vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i[0]),32);
            tracep->chgIData(oldp+216,(vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i[1]),32);
            tracep->chgBit(oldp+217,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt[0]));
            tracep->chgBit(oldp+218,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt[1]));
            tracep->chgBit(oldp+219,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid[0]));
            tracep->chgBit(oldp+220,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid[1]));
            tracep->chgIData(oldp+221,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata[0]),32);
            tracep->chgIData(oldp+222,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata[1]),32);
            tracep->chgBit(oldp+223,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[0]));
            tracep->chgBit(oldp+224,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[1]));
            tracep->chgBit(oldp+225,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[2]));
            tracep->chgBit(oldp+226,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[3]));
            tracep->chgBit(oldp+227,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[4]));
            tracep->chgBit(oldp+228,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[5]));
            tracep->chgBit(oldp+229,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[6]));
            tracep->chgBit(oldp+230,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[7]));
            tracep->chgIData(oldp+231,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[0]),32);
            tracep->chgIData(oldp+232,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[1]),32);
            tracep->chgIData(oldp+233,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[2]),32);
            tracep->chgIData(oldp+234,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[3]),32);
            tracep->chgIData(oldp+235,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[4]),32);
            tracep->chgIData(oldp+236,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[5]),32);
            tracep->chgIData(oldp+237,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[6]),32);
            tracep->chgIData(oldp+238,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[7]),32);
            tracep->chgBit(oldp+239,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[0]));
            tracep->chgBit(oldp+240,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[1]));
            tracep->chgBit(oldp+241,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[2]));
            tracep->chgBit(oldp+242,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[3]));
            tracep->chgBit(oldp+243,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[4]));
            tracep->chgBit(oldp+244,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[5]));
            tracep->chgBit(oldp+245,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[6]));
            tracep->chgBit(oldp+246,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[7]));
            tracep->chgCData(oldp+247,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[0]),4);
            tracep->chgCData(oldp+248,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[1]),4);
            tracep->chgCData(oldp+249,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[2]),4);
            tracep->chgCData(oldp+250,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[3]),4);
            tracep->chgCData(oldp+251,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[4]),4);
            tracep->chgCData(oldp+252,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[5]),4);
            tracep->chgCData(oldp+253,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[6]),4);
            tracep->chgCData(oldp+254,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[7]),4);
            tracep->chgIData(oldp+255,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[0]),32);
            tracep->chgIData(oldp+256,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[1]),32);
            tracep->chgIData(oldp+257,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[2]),32);
            tracep->chgIData(oldp+258,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[3]),32);
            tracep->chgIData(oldp+259,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[4]),32);
            tracep->chgIData(oldp+260,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[5]),32);
            tracep->chgIData(oldp+261,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[6]),32);
            tracep->chgIData(oldp+262,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[7]),32);
            tracep->chgBit(oldp+263,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req
                                     [0U]));
            tracep->chgBit(oldp+264,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__mem_instr_req) 
                                      | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_instr_req) 
                                         & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                            [7U])))));
            tracep->chgIData(oldp+265,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr
                                       [0U]),32);
            tracep->chgBit(oldp+266,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__mem_instr_req));
            tracep->chgIData(oldp+267,(vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i
                                       [1U]),32);
            tracep->chgBit(oldp+268,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_instr_req));
            tracep->chgBit(oldp+269,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req));
            tracep->chgIData(oldp+270,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr),32);
            tracep->chgBit(oldp+271,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we));
            tracep->chgCData(oldp+272,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                       [7U]),4);
            tracep->chgIData(oldp+273,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                       [7U]),32);
            tracep->chgBit(oldp+274,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n));
            tracep->chgBit(oldp+275,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+276,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i[1]));
            tracep->chgBit(oldp+277,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgBit(oldp+278,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o[1]));
            tracep->chgIData(oldp+279,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgIData(oldp+280,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i[1]),32);
            tracep->chgBit(oldp+281,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i[0]));
            tracep->chgBit(oldp+282,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i[1]));
            tracep->chgCData(oldp+283,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i[0]),4);
            tracep->chgCData(oldp+284,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i[1]),4);
            tracep->chgIData(oldp+285,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+286,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i[1]),32);
            tracep->chgBit(oldp+287,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rvalid_o[0]));
            tracep->chgBit(oldp+288,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rvalid_o[1]));
            tracep->chgIData(oldp+289,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgIData(oldp+290,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o[1]),32);
            tracep->chgBit(oldp+291,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+292,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+293,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[2]));
            tracep->chgBit(oldp+294,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[3]));
            tracep->chgBit(oldp+295,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[4]));
            tracep->chgBit(oldp+296,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[5]));
            tracep->chgBit(oldp+297,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[6]));
            tracep->chgBit(oldp+298,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[7]));
            tracep->chgIData(oldp+299,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+300,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+301,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgIData(oldp+302,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[3]),32);
            tracep->chgIData(oldp+303,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[4]),32);
            tracep->chgIData(oldp+304,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[5]),32);
            tracep->chgIData(oldp+305,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[6]),32);
            tracep->chgIData(oldp+306,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[7]),32);
            tracep->chgBit(oldp+307,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+308,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+309,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[2]));
            tracep->chgBit(oldp+310,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[3]));
            tracep->chgBit(oldp+311,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[4]));
            tracep->chgBit(oldp+312,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[5]));
            tracep->chgBit(oldp+313,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[6]));
            tracep->chgBit(oldp+314,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[7]));
            tracep->chgCData(oldp+315,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[0]),4);
            tracep->chgCData(oldp+316,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[1]),4);
            tracep->chgCData(oldp+317,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[2]),4);
            tracep->chgCData(oldp+318,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[3]),4);
            tracep->chgCData(oldp+319,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[4]),4);
            tracep->chgCData(oldp+320,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[5]),4);
            tracep->chgCData(oldp+321,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[6]),4);
            tracep->chgCData(oldp+322,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[7]),4);
            tracep->chgIData(oldp+323,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+324,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+325,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgIData(oldp+326,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[3]),32);
            tracep->chgIData(oldp+327,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[4]),32);
            tracep->chgIData(oldp+328,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[5]),32);
            tracep->chgIData(oldp+329,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[6]),32);
            tracep->chgIData(oldp+330,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[7]),32);
            tracep->chgBit(oldp+331,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[0]));
            tracep->chgBit(oldp+332,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[1]));
            tracep->chgBit(oldp+333,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[2]));
            tracep->chgBit(oldp+334,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[3]));
            tracep->chgBit(oldp+335,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[4]));
            tracep->chgBit(oldp+336,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[5]));
            tracep->chgBit(oldp+337,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[6]));
            tracep->chgBit(oldp+338,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rvalid_i[7]));
            tracep->chgIData(oldp+339,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+340,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+341,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgIData(oldp+342,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[3]),32);
            tracep->chgIData(oldp+343,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[4]),32);
            tracep->chgIData(oldp+344,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[5]),32);
            tracep->chgIData(oldp+345,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[6]),32);
            tracep->chgIData(oldp+346,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[7]),32);
            tracep->chgBit(oldp+347,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+348,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req),3);
            tracep->chgBit(oldp+349,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req
                                     [0U]));
            tracep->chgBit(oldp+350,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt
                                     [0U]));
            tracep->chgBit(oldp+351,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
                                     [0U]));
            tracep->chgIData(oldp+352,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr
                                       [0U]),32);
            tracep->chgCData(oldp+353,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                       [0U]),4);
            tracep->chgBit(oldp+354,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we
                                     [0U]));
            tracep->chgIData(oldp+355,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+356,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+357,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__debug_running_o));
            tracep->chgBit(oldp+358,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_req[0]));
            tracep->chgBit(oldp+359,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_gnt[0]));
            tracep->chgIData(oldp+360,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_addr[0]),32);
            tracep->chgIData(oldp+361,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rdata[0]),32);
            tracep->chgBit(oldp+362,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req[0]));
            tracep->chgBit(oldp+363,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req[1]));
            tracep->chgIData(oldp+364,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr[0]),32);
            tracep->chgIData(oldp+365,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr[1]),32);
            tracep->chgBit(oldp+366,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_we[0]));
            tracep->chgBit(oldp+367,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_we[1]));
            tracep->chgCData(oldp+368,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_be[0]),4);
            tracep->chgCData(oldp+369,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_be[1]),4);
            tracep->chgIData(oldp+370,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_wdata[0]),32);
            tracep->chgIData(oldp+371,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_wdata[1]),32);
            tracep->chgBit(oldp+372,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_req[0]));
            tracep->chgBit(oldp+373,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_gnt[0]));
            tracep->chgIData(oldp+374,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_addr[0]),32);
            tracep->chgBit(oldp+375,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rvalid[0]));
            tracep->chgIData(oldp+376,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rdata[0]),32);
            tracep->chgBit(oldp+377,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_we[0]));
            tracep->chgCData(oldp+378,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_be[0]),4);
            tracep->chgIData(oldp+379,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_wdata[0]),32);
            tracep->chgBit(oldp+380,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req[0]));
            tracep->chgBit(oldp+381,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req[1]));
            tracep->chgBit(oldp+382,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req[2]));
            tracep->chgIData(oldp+383,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr[0]),32);
            tracep->chgIData(oldp+384,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr[1]),32);
            tracep->chgIData(oldp+385,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr[2]),32);
            tracep->chgBit(oldp+386,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we[0]));
            tracep->chgBit(oldp+387,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we[1]));
            tracep->chgBit(oldp+388,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we[2]));
            tracep->chgCData(oldp+389,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be[0]),4);
            tracep->chgCData(oldp+390,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be[1]),4);
            tracep->chgCData(oldp+391,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be[2]),4);
            tracep->chgIData(oldp+392,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata[0]),32);
            tracep->chgIData(oldp+393,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata[1]),32);
            tracep->chgIData(oldp+394,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata[2]),32);
            tracep->chgIData(oldp+395,((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr
                                        [2U])),32);
            tracep->chgIData(oldp+396,((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr
                                        [1U])),32);
            tracep->chgIData(oldp+397,((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr
                                        [1U])),32);
            tracep->chgBit(oldp+398,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i[0]));
            tracep->chgBit(oldp+399,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_gnt_data_o[0]));
            tracep->chgIData(oldp+400,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i[0]),32);
            tracep->chgBit(oldp+401,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_we_data_i[0]));
            tracep->chgCData(oldp+402,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_be_data_i[0]),4);
            tracep->chgIData(oldp+403,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_wdata_data_i[0]),32);
            tracep->chgBit(oldp+404,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rvalid_data_o[0]));
            tracep->chgIData(oldp+405,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_data_o[0]),32);
            tracep->chgBit(oldp+406,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_inst_i[0]));
            tracep->chgBit(oldp+407,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_gnt_inst_o[0]));
            tracep->chgIData(oldp+408,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_inst_i[0]),32);
            tracep->chgIData(oldp+409,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_inst_o[0]),32);
            tracep->chgBit(oldp+410,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[0]));
            tracep->chgBit(oldp+411,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[1]));
            tracep->chgBit(oldp+412,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[2]));
            tracep->chgIData(oldp+413,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[0]),32);
            tracep->chgIData(oldp+414,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[1]),32);
            tracep->chgIData(oldp+415,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[2]),32);
            tracep->chgBit(oldp+416,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[0]));
            tracep->chgBit(oldp+417,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[1]));
            tracep->chgBit(oldp+418,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[2]));
            tracep->chgCData(oldp+419,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[0]),4);
            tracep->chgCData(oldp+420,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[1]),4);
            tracep->chgCData(oldp+421,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[2]),4);
            tracep->chgIData(oldp+422,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[0]),32);
            tracep->chgIData(oldp+423,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[1]),32);
            tracep->chgIData(oldp+424,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[2]),32);
            tracep->chgBit(oldp+425,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[0]));
            tracep->chgBit(oldp+426,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[1]));
            tracep->chgBit(oldp+427,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[2]));
            tracep->chgIData(oldp+428,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[0]),32);
            tracep->chgIData(oldp+429,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[1]),32);
            tracep->chgIData(oldp+430,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[2]),32);
            tracep->chgBit(oldp+431,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_inst_o[0]));
            tracep->chgBit(oldp+432,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_inst_o[1]));
            tracep->chgIData(oldp+433,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_inst_o[0]),32);
            tracep->chgIData(oldp+434,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_inst_o[1]),32);
            tracep->chgBit(oldp+435,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_inst_o[0]));
            tracep->chgBit(oldp+436,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_inst_o[1]));
            tracep->chgCData(oldp+437,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_inst_o[0]),4);
            tracep->chgCData(oldp+438,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_inst_o[1]),4);
            tracep->chgIData(oldp+439,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_inst_o[0]),32);
            tracep->chgIData(oldp+440,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_inst_o[1]),32);
            tracep->chgIData(oldp+441,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_inst_i[0]),32);
            tracep->chgIData(oldp+442,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_inst_i[1]),32);
            tracep->chgBit(oldp+443,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req));
            tracep->chgCData(oldp+444,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req),2);
            tracep->chgBit(oldp+445,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_inst_req));
            tracep->chgBit(oldp+446,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_inst_req));
            tracep->chgBit(oldp+447,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                    >> 0x35U)))));
            tracep->chgIData(oldp+448,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                    >> 0x16U)) 
                                           << 2U))),32);
            tracep->chgCData(oldp+449,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                      >> 0x12U)))),2);
            tracep->chgCData(oldp+450,((7U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                      >> 0xfU)))),3);
            tracep->chgBit(oldp+451,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                    >> 0xeU)))));
            tracep->chgIData(oldp+452,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                    >> 0x34U)))));
            tracep->chgSData(oldp+454,((0x1fffU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                           >> 1U)))),13);
            tracep->chgBit(oldp+455,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+456,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rvalid
                                     [0U]));
            tracep->chgIData(oldp+457,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                         << 7U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                   >> 0x19U))),32);
            tracep->chgCData(oldp+458,((0xfU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                   >> 0x14U)))),4);
            tracep->chgBit(oldp+459,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                            >> 0x18U))));
            tracep->chgIData(oldp+460,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                         << 0xcU) | 
                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                         >> 0x14U))),32);
            tracep->chgCData(oldp+461,((3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                               << 0xeU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                 >> 0x12U)))),2);
            tracep->chgCData(oldp+462,((7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                               << 0x11U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                 >> 0xfU)))),3);
            tracep->chgBit(oldp+463,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                            >> 0xeU))));
            tracep->chgIData(oldp+464,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+465,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                            >> 0x19U))));
            tracep->chgSData(oldp+466,((0x1fffU & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                      >> 1U)))),13);
            tracep->chgBit(oldp+467,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk));
            tracep->chgCData(oldp+468,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp),2);
            tracep->chgIData(oldp+469,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target),32);
            tracep->chgIData(oldp+470,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_target_ex),32);
            tracep->chgBit(oldp+471,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex));
            tracep->chgBit(oldp+472,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_busy));
            tracep->chgIData(oldp+473,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+474,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_ex),32);
            tracep->chgBit(oldp+475,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_if));
            tracep->chgBit(oldp+476,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_id));
            tracep->chgBit(oldp+477,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_ex));
            tracep->chgBit(oldp+478,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_if));
            tracep->chgBit(oldp+479,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_id));
            tracep->chgBit(oldp+480,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_wb));
            tracep->chgBit(oldp+481,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__first_op));
            tracep->chgCData(oldp+482,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x13U)))),2);
            tracep->chgIData(oldp+483,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata[0]),32);
            tracep->chgBit(oldp+484,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_we[0]));
            tracep->chgIData(oldp+485,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+486,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_we) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we)) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we))));
            tracep->chgCData(oldp+487,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl),3);
            tracep->chgBit(oldp+488,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex));
            tracep->chgBit(oldp+489,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex)))));
            tracep->chgCData(oldp+490,((3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U])),2);
            tracep->chgIData(oldp+491,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[0U]),32);
            tracep->chgIData(oldp+492,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_ext),32);
            tracep->chgCData(oldp+493,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_err),3);
            tracep->chgBit(oldp+494,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_ready));
            tracep->chgBit(oldp+495,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__lsu_en_gated));
            tracep->chgBit(oldp+496,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__done_0) 
                                      & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex)))));
            tracep->chgBit(oldp+497,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_valid_1));
            tracep->chgIData(oldp+498,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                         << 7U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x19U))),32);
            tracep->chgBit(oldp+499,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+500,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be),4);
            tracep->chgIData(oldp+501,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match),32);
            tracep->chgCData(oldp+502,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status),2);
            tracep->chgBit(oldp+503,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready));
            tracep->chgBit(oldp+504,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready));
            tracep->chgBit(oldp+505,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+506,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid));
            tracep->chgBit(oldp+507,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_valid));
            tracep->chgBit(oldp+508,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__wb_valid));
            tracep->chgBit(oldp+509,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_mtvec_init_if));
            tracep->chgBit(oldp+510,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err)) 
                                      | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp) 
                                          | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp)) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err)))));
            tracep->chgBit(oldp+511,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp)) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err))));
            tracep->chgBit(oldp+512,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp)) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err))));
            tracep->chgBit(oldp+513,((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup))));
            tracep->chgIData(oldp+514,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata),32);
            tracep->chgIData(oldp+515,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if),32);
            tracep->chgIData(oldp+516,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex),32);
            tracep->chgBit(oldp+517,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__alu_en));
            tracep->chgBit(oldp+518,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+519,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+520,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en));
            tracep->chgBit(oldp+521,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 2U)))));
            tracep->chgBit(oldp+522,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 1U)))));
            tracep->chgBit(oldp+523,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op));
            tracep->chgBit(oldp+524,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 0x11U)))));
            tracep->chgCData(oldp+525,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 0xfU)))),2);
            tracep->chgBit(oldp+526,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_illegal));
            tracep->chgBit(oldp+527,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_if));
            tracep->chgBit(oldp+528,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id));
            tracep->chgQData(oldp+529,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i),44);
            tracep->chgQData(oldp+531,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o),54);
            tracep->chgQData(oldp+533,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i),44);
            tracep->chgWData(oldp+535,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o),91);
            tracep->chgBit(oldp+538,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+539,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__if_ready));
            tracep->chgIData(oldp+540,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n),32);
            tracep->chgBit(oldp+541,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_valid));
            tracep->chgQData(oldp+542,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr),42);
            tracep->chgBit(oldp+544,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgQData(oldp+545,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed),42);
            tracep->chgBit(oldp+547,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_compressed));
            tracep->chgBit(oldp+548,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_hint));
            tracep->chgBit(oldp+549,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_resp_valid));
            tracep->chgBit(oldp+550,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid));
            tracep->chgBit(oldp+551,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_ready));
            tracep->chgIData(oldp+552,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_addr),32);
            tracep->chgQData(oldp+553,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o),42);
            tracep->chgBit(oldp+555,((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n))));
            tracep->chgBit(oldp+556,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                    >> 0x29U)))));
            tracep->chgQData(oldp+557,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp),40);
            tracep->chgBit(oldp+559,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                      & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)))));
            tracep->chgQData(oldp+560,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o),52);
            tracep->chgQData(oldp+562,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans),52);
            tracep->chgBit(oldp+564,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert));
            tracep->chgQData(oldp+565,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_instr),42);
            tracep->chgBit(oldp+567,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready) 
                                      & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)))));
            tracep->chgBit(oldp+568,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_valid));
            tracep->chgBit(oldp+569,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_last));
            tracep->chgQData(oldp+570,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr),42);
            tracep->chgBit(oldp+572,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_tbljmp));
            tracep->chgBit(oldp+573,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_pushpop));
            tracep->chgBit(oldp+574,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy));
            tracep->chgBit(oldp+575,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op));
            tracep->chgBit(oldp+576,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op_nondummy));
            tracep->chgCData(oldp+577,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n),7);
            tracep->chgBit(oldp+578,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued));
            tracep->chgIData(oldp+579,((0xfffffffeU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n)),32);
            tracep->chgBit(oldp+580,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready));
            tracep->chgBit(oldp+581,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
            tracep->chgBit(oldp+582,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp));
            tracep->chgCData(oldp+583,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access),2);
            tracep->chgBit(oldp+584,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
            tracep->chgCData(oldp+585,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n),2);
            tracep->chgBit(oldp+586,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))));
            tracep->chgCData(oldp+587,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins),2);
            tracep->chgBit(oldp+588,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
            tracep->chgBit(oldp+589,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
            tracep->chgCData(oldp+590,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n),2);
            tracep->chgCData(oldp+591,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch),2);
            tracep->chgBit(oldp+592,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned));
            tracep->chgCData(oldp+593,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned),2);
            tracep->chgBit(oldp+594,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
            tracep->chgCData(oldp+595,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n),3);
            tracep->chgCData(oldp+596,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int),3);
            tracep->chgQData(oldp+597,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n),42);
            tracep->chgCData(oldp+599,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n),2);
            tracep->chgCData(oldp+600,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n),2);
            tracep->chgIData(oldp+601,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n),32);
            tracep->chgIData(oldp+602,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr),32);
            tracep->chgBit(oldp+603,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid));
            tracep->chgBit(oldp+604,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+605,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed));
            tracep->chgCData(oldp+606,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable),2);
            tracep->chgBit(oldp+607,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0));
            tracep->chgBit(oldp+608,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned));
            tracep->chgBit(oldp+609,((((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                       & (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault)) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err))));
            tracep->chgBit(oldp+610,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err));
            tracep->chgBit(oldp+611,(((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                      & (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault))));
            tracep->chgBit(oldp+612,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core));
            tracep->chgBit(oldp+613,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus));
            tracep->chgBit(oldp+614,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
            tracep->chgBit(oldp+615,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
            tracep->chgCData(oldp+616,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status),2);
            tracep->chgCData(oldp+617,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__state_n),3);
            tracep->chgBit(oldp+618,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+619,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U])));
            tracep->chgQData(oldp+620,((QData)((IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                        >> 0x14U)))),34);
            tracep->chgCData(oldp+622,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                      >> 0x10U)))),2);
            tracep->chgBit(oldp+623,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region));
            tracep->chgIData(oldp+624,((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                >> 0x14U))),32);
            tracep->chgWData(oldp+625,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg),68);
            tracep->chgIData(oldp+628,((0x3fffffffU 
                                        & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                   >> 0x16U)))),32);
            tracep->chgBit(oldp+629,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
            tracep->chgSData(oldp+630,((0x20U | ((0x100U 
                                                  & ((~ (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                 >> 0xeU))) 
                                                     << 8U)) 
                                                 | ((0x10U 
                                                     & ((~ 
                                                         (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0xfU)))) 
                                                          ^ 
                                                          VL_REDXOR_32(
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x12U)))))) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & (VL_REDXOR_32(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x2cU)))) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & (VL_REDXOR_32(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x24U)))) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (VL_REDXOR_32(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x1cU)))) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & VL_REDXOR_32(
                                                                               (0x3fU 
                                                                                & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x16U)))))))))))),13);
            tracep->chgBit(oldp+631,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err));
            tracep->chgBit(oldp+632,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp));
            tracep->chgBit(oldp+633,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp));
            tracep->chgBit(oldp+634,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o))));
            tracep->chgBit(oldp+635,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                    >> 0x2bU)))));
            tracep->chgCData(oldp+636,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_input),3);
            tracep->chgCData(oldp+637,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en),2);
            tracep->chgBit(oldp+638,((1U & ((IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                     >> 0x35U)) 
                                            & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                       >> 0x2bU))))));
            tracep->chgCData(oldp+639,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res),5);
            tracep->chgBit(oldp+640,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp)) 
                                      & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res)) 
                                         != (0xfU & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                             >> 2U)))))));
            tracep->chgBit(oldp+641,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
                                        >> 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp)) 
                                      & ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res) 
                                                >> 4U)) 
                                         != (1U & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                           >> 6U)))))));
            tracep->chgIData(oldp+642,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__check_addr),32);
            tracep->chgIData(oldp+643,((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_instr 
                                                >> 0xaU))),32);
            tracep->chgIData(oldp+644,((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xaU))),32);
            tracep->chgQData(oldp+645,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode),45);
            tracep->chgCData(oldp+647,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr),4);
            tracep->chgCData(oldp+648,((0xfU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 0xeU)))),4);
            tracep->chgBit(oldp+649,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load));
            tracep->chgBit(oldp+650,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store));
            tracep->chgBit(oldp+651,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s));
            tracep->chgBit(oldp+652,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a));
            tracep->chgCData(oldp+653,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n),4);
            tracep->chgBit(oldp+654,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm));
            tracep->chgBit(oldp+655,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm));
            tracep->chgBit(oldp+656,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest));
            tracep->chgBit(oldp+657,((3U < (0xfU & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xeU))))));
            tracep->chgCData(oldp+658,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode),7);
            tracep->chgCData(oldp+659,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7),7);
            tracep->chgCData(oldp+660,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3),3);
            tracep->chgSData(oldp+661,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)
                                         ? 0U : 2U)),13);
            tracep->chgIData(oldp+662,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__instr),32);
            tracep->chgBit(oldp+663,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en));
            tracep->chgBit(oldp+664,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 0x2fU)))));
            tracep->chgCData(oldp+665,((0x3fU & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x27U)))),6);
            tracep->chgBit(oldp+666,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__mul_en));
            tracep->chgBit(oldp+667,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__div_en));
            tracep->chgBit(oldp+668,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__lsu_en));
            tracep->chgBit(oldp+669,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0xdU)))));
            tracep->chgCData(oldp+670,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0xbU)))),2);
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+672,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__csr_en));
            tracep->chgBit(oldp+673,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 4U)))));
            tracep->chgBit(oldp+674,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 3U)))));
            tracep->chgBit(oldp+675,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 5U)))));
            tracep->chgBit(oldp+676,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 6U)))));
            tracep->chgBit(oldp+677,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 7U)))));
            tracep->chgBit(oldp+678,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))));
            tracep->chgIData(oldp+679,(((0U == (3U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x21U))))
                                         ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_b_fw
                                         : ((1U == 
                                             (3U & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x21U))))
                                             ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target
                                             : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_b_fw))),32);
            tracep->chgIData(oldp+680,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_a_fw),32);
            tracep->chgIData(oldp+681,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_b_fw),32);
            tracep->chgCData(oldp+682,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x25U)))),2);
            tracep->chgCData(oldp+683,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x23U)))),2);
            tracep->chgCData(oldp+684,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x21U)))),2);
            tracep->chgBit(oldp+685,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x20U)))));
            tracep->chgCData(oldp+686,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x1eU)))),2);
            tracep->chgCData(oldp+687,((3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 0x1cU)))),2);
            tracep->chgBit(oldp+688,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall));
            tracep->chgBit(oldp+689,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn));
            tracep->chgBit(oldp+690,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+691,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+692,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+693,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 9U)))));
            tracep->chgBit(oldp+694,((1U & (((IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                      >> 0x13U)) 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__rf_illegal_raddr)) 
                                            | ((IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                        >> 0x14U)) 
                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__rf_illegal_raddr) 
                                                  >> 1U))))));
            tracep->chgQData(oldp+695,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl),49);
            tracep->chgQData(oldp+697,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int),49);
            tracep->chgQData(oldp+699,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux),49);
            tracep->chgBit(oldp+701,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+702,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul_ready));
            tracep->chgBit(oldp+703,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul_valid));
            tracep->chgBit(oldp+704,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_ready));
            tracep->chgBit(oldp+705,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_valid));
            tracep->chgIData(oldp+706,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result),32);
            tracep->chgBit(oldp+707,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul_en_gated));
            tracep->chgBit(oldp+708,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_en_gated));
            tracep->chgCData(oldp+709,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result),6);
            tracep->chgIData(oldp+710,((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)),32);
            tracep->chgCData(oldp+711,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt),6);
            tracep->chgQData(oldp+712,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp),64);
            tracep->chgCData(oldp+714,((0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)))),6);
            tracep->chgBit(oldp+715,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt));
            tracep->chgCData(oldp+716,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state),2);
            tracep->chgCData(oldp+717,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next),2);
            tracep->chgQData(oldp+718,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next),33);
            tracep->chgWData(oldp+720,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans),71);
            tracep->chgBit(oldp+723,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid));
            tracep->chgBit(oldp+724,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans_ready));
            tracep->chgWData(oldp+725,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans),89);
            tracep->chgBit(oldp+728,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid));
            tracep->chgBit(oldp+729,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core))) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready))));
            tracep->chgBit(oldp+730,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp_valid));
            tracep->chgIData(oldp+731,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                         << 0x16U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                           >> 0xaU))),32);
            tracep->chgWData(oldp+732,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp),74);
            tracep->chgBit(oldp+735,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid))));
            tracep->chgWData(oldp+736,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o),74);
            tracep->chgBit(oldp+739,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid));
            tracep->chgBit(oldp+740,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_ready));
            tracep->chgWData(oldp+741,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o),89);
            tracep->chgBit(oldp+744,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid));
            tracep->chgBit(oldp+745,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_ready));
            tracep->chgBit(oldp+746,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid));
            tracep->chgQData(oldp+747,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp),40);
            tracep->chgBit(oldp+749,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                    >> 0x2bU)))));
            tracep->chgWData(oldp+750,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans),89);
            tracep->chgBit(oldp+753,((1U & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                    >> 0x29U)))));
            tracep->chgCData(oldp+754,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__next_cnt),2);
            tracep->chgBit(oldp+755,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid) 
                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans_ready))));
            tracep->chgBit(oldp+756,((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__next_cnt))));
            tracep->chgBit(oldp+757,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgIData(oldp+758,(((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                         ? ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? ((0xff000000U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    << 0x15U)) 
                                                | (0xffffffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       << 0x15U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                         >> 0xbU))))
                                             : ((0xffff0000U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    << 0xdU)) 
                                                | (0xffffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                         >> 0x13U)))))
                                         : ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? ((0xffffff00U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    << 5U)) 
                                                | (0xffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       << 5U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                         >> 0x1bU))))
                                             : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   >> 3U))))),32);
            tracep->chgBit(oldp+759,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__misaligned_halfword));
            tracep->chgBit(oldp+760,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__done_0));
            tracep->chgQData(oldp+761,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned),64);
            tracep->chgBit(oldp+763,((((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                       & (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault)) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err))));
            tracep->chgBit(oldp+764,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err));
            tracep->chgBit(oldp+765,(((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                      & (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault))));
            tracep->chgBit(oldp+766,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core));
            tracep->chgBit(oldp+767,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus));
            tracep->chgBit(oldp+768,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
            tracep->chgBit(oldp+769,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
            tracep->chgCData(oldp+770,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status),2);
            tracep->chgCData(oldp+771,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n),3);
            tracep->chgBit(oldp+772,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+773,((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                             >> 2U) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+774,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U])));
            tracep->chgCData(oldp+775,(((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)),2);
            tracep->chgQData(oldp+776,((QData)((IData)(
                                                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                         << 7U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                           >> 0x19U))))),34);
            tracep->chgCData(oldp+778,((3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                 >> 0x10U)))),2);
            tracep->chgBit(oldp+779,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+780,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region));
            tracep->chgWData(oldp+781,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg),68);
            tracep->chgIData(oldp+784,((0x3fffffffU 
                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                            << 5U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                              >> 0x1bU)))),32);
            tracep->chgCData(oldp+785,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt),2);
            tracep->chgBit(oldp+786,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted));
            tracep->chgCData(oldp+787,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt),2);
            tracep->chgBit(oldp+788,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid))));
            tracep->chgCData(oldp+789,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next),6);
            tracep->chgBit(oldp+790,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
            tracep->chgBit(oldp+791,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push));
            tracep->chgBit(oldp+792,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+793,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err));
            tracep->chgBit(oldp+794,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp));
            tracep->chgBit(oldp+795,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp));
            tracep->chgBit(oldp+796,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[0U])));
            tracep->chgBit(oldp+797,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+798,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__fifo_input),3);
            tracep->chgCData(oldp+799,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en),2);
            tracep->chgBit(oldp+800,((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                             >> 0x1aU) 
                                            & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                       >> 0x2bU))))));
            tracep->chgCData(oldp+801,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res),5);
            tracep->chgBit(oldp+802,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp)) 
                                      & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res)) 
                                         != (0xfU & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                             >> 2U)))))));
            tracep->chgBit(oldp+803,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
                                        >> 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp)) 
                                      & ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res) 
                                                >> 4U)) 
                                         != (1U & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+804,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus));
            tracep->chgBit(oldp+805,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready));
            tracep->chgCData(oldp+806,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n),2);
            tracep->chgIData(oldp+807,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n),32);
            tracep->chgBit(oldp+808,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+809,((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status))));
            tracep->chgIData(oldp+810,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+811,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+812,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_en_gated));
            tracep->chgBit(oldp+813,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__illegal_csr_read));
            tracep->chgBit(oldp+814,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tselect_we));
            tracep->chgBit(oldp+815,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_we));
            tracep->chgBit(oldp+816,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata2_we));
            tracep->chgBit(oldp+817,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tinfo_we));
            tracep->chgIData(oldp+818,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n),32);
            tracep->chgBit(oldp+819,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_we));
            tracep->chgIData(oldp+820,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dpc_n),32);
            tracep->chgBit(oldp+821,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dpc_we));
            tracep->chgIData(oldp+822,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dscratch0_n),32);
            tracep->chgBit(oldp+823,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dscratch0_we));
            tracep->chgIData(oldp+824,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dscratch1_n),32);
            tracep->chgBit(oldp+825,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dscratch1_we));
            tracep->chgIData(oldp+826,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n),32);
            tracep->chgBit(oldp+827,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_we));
            tracep->chgIData(oldp+828,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n),32);
            tracep->chgBit(oldp+829,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_we));
            tracep->chgIData(oldp+830,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n),32);
            tracep->chgBit(oldp+831,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_we));
            tracep->chgIData(oldp+832,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n),32);
            tracep->chgBit(oldp+833,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we));
            tracep->chgBit(oldp+834,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatush_we));
            tracep->chgBit(oldp+835,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__misa_we));
            tracep->chgIData(oldp+836,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n),32);
            tracep->chgBit(oldp+837,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_we));
            tracep->chgIData(oldp+838,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n),32);
            tracep->chgBit(oldp+839,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_we));
            tracep->chgBit(oldp+840,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mip_we));
            tracep->chgIData(oldp+841,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_n),32);
            tracep->chgBit(oldp+842,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_we));
            tracep->chgBit(oldp+843,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtval_we));
            tracep->chgBit(oldp+844,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcounteren_we));
            tracep->chgQData(oldp+845,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we),64);
            tracep->chgQData(oldp+847,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr),64);
            tracep->chgQData(oldp+849,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused),64);
            tracep->chgQData(oldp+851,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we),64);
            tracep->chgIData(oldp+853,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n),32);
            tracep->chgBit(oldp+854,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_we));
            tracep->chgBit(oldp+855,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfgh_we));
            tracep->chgBit(oldp+856,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__menvcfgh_we));
            tracep->chgBit(oldp+857,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__menvcfg_we));
            tracep->chgIData(oldp+858,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n),32);
            tracep->chgBit(oldp+859,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_we));
            tracep->chgBit(oldp+860,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we));
            tracep->chgBit(oldp+861,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed1_we));
            tracep->chgBit(oldp+862,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed2_we));
            tracep->chgCData(oldp+863,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n),2);
            tracep->chgBit(oldp+864,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we));
            tracep->chgIData(oldp+865,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n),32);
            tracep->chgBit(oldp+866,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_we));
            tracep->chgBit(oldp+867,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen1_we));
            tracep->chgBit(oldp+868,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen2_we));
            tracep->chgBit(oldp+869,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen3_we));
            tracep->chgBit(oldp+870,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0h_we));
            tracep->chgBit(oldp+871,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen1h_we));
            tracep->chgBit(oldp+872,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen2h_we));
            tracep->chgBit(oldp+873,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen3h_we));
            tracep->chgWData(oldp+874,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n),2048);
            tracep->chgQData(oldp+938,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we),64);
            tracep->chgWData(oldp+940,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
            tracep->chgIData(oldp+972,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
            tracep->chgCData(oldp+973,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__hpm_events),2);
            tracep->chgIData(oldp+974,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower),32);
            tracep->chgIData(oldp+975,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper),32);
            tracep->chgIData(oldp+976,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment),32);
            tracep->chgIData(oldp+977,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__medeleg_n),32);
            tracep->chgIData(oldp+978,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mideleg_n),32);
            tracep->chgIData(oldp+979,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sstatus_n),32);
            tracep->chgIData(oldp+980,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_n),32);
            tracep->chgBit(oldp+981,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_we));
            tracep->chgIData(oldp+982,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__stvec_n),32);
            tracep->chgIData(oldp+983,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sie_n),32);
            tracep->chgIData(oldp+984,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n),32);
            tracep->chgIData(oldp+985,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scounteren_n),32);
            tracep->chgIData(oldp+986,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__senvcfg_n),32);
            tracep->chgIData(oldp+987,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sepc_n),32);
            tracep->chgBit(oldp+988,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sepc_we));
            tracep->chgIData(oldp+989,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__satp_n),32);
            tracep->chgIData(oldp+990,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scontext_n),32);
            tracep->chgBit(oldp+991,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_stopcount));
            tracep->chgBit(oldp+992,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_we));
            tracep->chgCData(oldp+993,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup),3);
            tracep->chgBit(oldp+994,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+995,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n)),32);
            tracep->chgBit(oldp+996,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+997,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n 
                                            >> 2U))));
            tracep->chgBit(oldp+998,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n 
                                               >> 2U)))));
            tracep->chgBit(oldp+999,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1000,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n)),32);
            tracep->chgBit(oldp+1001,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1002,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 6U))));
            tracep->chgBit(oldp+1003,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 6U)))));
            tracep->chgBit(oldp+1004,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1005,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1006,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 8U))));
            tracep->chgBit(oldp+1007,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 8U)))));
            tracep->chgBit(oldp+1008,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 9U))));
            tracep->chgBit(oldp+1009,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 9U)))));
            tracep->chgBit(oldp+1010,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1011,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1012,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1013,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1014,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1015,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1016,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1017,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1018,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1019,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1020,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1021,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1022,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1023,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1024,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1025,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1026,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1027,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1028,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1029,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1030,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1031,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1032,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1033,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1034,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1035,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1036,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1037,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1038,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1039,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1040,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1041,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1042,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1043,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1044,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1045,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1046,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1047,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1048,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1049,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1050,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1051,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1052,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1053,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1054,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1055,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n)),32);
            tracep->chgBit(oldp+1056,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1057,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1058,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1059,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 2U))));
            tracep->chgBit(oldp+1060,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 2U)))));
            tracep->chgBit(oldp+1061,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 3U))));
            tracep->chgBit(oldp+1062,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 3U)))));
            tracep->chgBit(oldp+1063,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 4U))));
            tracep->chgBit(oldp+1064,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 4U)))));
            tracep->chgBit(oldp+1065,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 5U))));
            tracep->chgBit(oldp+1066,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 5U)))));
            tracep->chgBit(oldp+1067,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 6U))));
            tracep->chgBit(oldp+1068,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 6U)))));
            tracep->chgBit(oldp+1069,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1070,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1071,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 8U))));
            tracep->chgBit(oldp+1072,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 8U)))));
            tracep->chgBit(oldp+1073,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 9U))));
            tracep->chgBit(oldp+1074,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 9U)))));
            tracep->chgBit(oldp+1075,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1076,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1077,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1078,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1079,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1080,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1081,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1082,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1083,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1084,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1085,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1086,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1087,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1088,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1089,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1090,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1091,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1092,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1093,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1094,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1095,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1096,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1097,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1098,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1099,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1100,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1101,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1102,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1103,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1104,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1105,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1106,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1107,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1108,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1109,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1110,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1111,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1112,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1113,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1114,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1115,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1116,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1117,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1118,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1119,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1120,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n)),32);
            tracep->chgBit(oldp+1121,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1122,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n)));
            tracep->chgBit(oldp+1123,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n))));
            tracep->chgBit(oldp+1124,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1125,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1126,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 2U))));
            tracep->chgBit(oldp+1127,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 2U)))));
            tracep->chgBit(oldp+1128,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 3U))));
            tracep->chgBit(oldp+1129,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 3U)))));
            tracep->chgBit(oldp+1130,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 4U))));
            tracep->chgBit(oldp+1131,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 4U)))));
            tracep->chgBit(oldp+1132,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 5U))));
            tracep->chgBit(oldp+1133,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 5U)))));
            tracep->chgBit(oldp+1134,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 6U))));
            tracep->chgBit(oldp+1135,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 6U)))));
            tracep->chgBit(oldp+1136,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1137,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1138,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 8U))));
            tracep->chgBit(oldp+1139,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 8U)))));
            tracep->chgBit(oldp+1140,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 9U))));
            tracep->chgBit(oldp+1141,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 9U)))));
            tracep->chgBit(oldp+1142,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1143,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1144,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1145,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1146,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1147,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1148,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1149,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1150,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1151,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1152,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1153,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1154,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1155,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1156,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1157,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1158,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1159,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1160,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1161,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1162,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1163,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1164,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1165,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1166,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1167,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1168,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1169,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1170,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1171,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1172,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1173,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1174,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1175,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1176,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1177,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1178,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1179,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1180,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1181,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1182,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1183,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1184,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1185,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1186,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1187,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n)),32);
            tracep->chgBit(oldp+1188,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1189,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                             >> 3U))));
            tracep->chgBit(oldp+1190,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                                >> 3U)))));
            tracep->chgBit(oldp+1191,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1192,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1193,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1194,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1195,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1196,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1197,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1198,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1199,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1200,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1201,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+1202,((3U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n)))),2);
            tracep->chgBit(oldp+1203,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1204,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n))));
            tracep->chgBit(oldp+1205,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n)))));
            tracep->chgBit(oldp+1206,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n) 
                                             >> 1U))));
            tracep->chgBit(oldp+1207,((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n) 
                                                >> 1U)))));
            tracep->chgIData(oldp+1208,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n),32);
            tracep->chgIData(oldp+1209,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n),32);
            tracep->chgIData(oldp+1210,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r),32);
            tracep->chgIData(oldp+1211,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r),32);
            tracep->chgBit(oldp+1212,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r));
            tracep->chgBit(oldp+1213,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata2_we) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tselect_we))));
            tracep->chgBit(oldp+1214,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int));
            tracep->chgBit(oldp+1215,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
            tracep->chgBit(oldp+1216,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int));
            tracep->chgIData(oldp+1217,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0]),32);
            tracep->chgBit(oldp+1218,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if));
            tracep->chgBit(oldp+1219,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex));
            tracep->chgCData(oldp+1220,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0]),4);
            tracep->chgCData(oldp+1221,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb),2);
            tracep->chgCData(oldp+1222,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb),2);
            tracep->chgIData(oldp+1223,(((0xfffffffcU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                              << 7U) 
                                             | (0x7cU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x19U)))) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb))),32);
            tracep->chgIData(oldp+1224,(((0xfffffffcU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                              << 7U) 
                                             | (0x7cU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x19U)))) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb))),32);
            tracep->chgIData(oldp+1225,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0]),32);
            tracep->chgCData(oldp+1226,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0]),2);
            tracep->chgIData(oldp+1227,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b),32);
            tracep->chgIData(oldp+1228,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b),32);
            tracep->chgIData(oldp+1229,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk7__DOT__i),32);
            tracep->chgIData(oldp+1230,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                                        [0U]),32);
            tracep->chgBit(oldp+1231,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1232,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n)),32);
            tracep->chgBit(oldp+1233,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1234,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n)));
            tracep->chgBit(oldp+1235,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n))));
            tracep->chgBit(oldp+1236,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1237,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1238,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 2U))));
            tracep->chgBit(oldp+1239,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 2U)))));
            tracep->chgBit(oldp+1240,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 6U))));
            tracep->chgBit(oldp+1241,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 6U)))));
            tracep->chgBit(oldp+1242,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1243,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1244,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 8U))));
            tracep->chgBit(oldp+1245,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 8U)))));
            tracep->chgBit(oldp+1246,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1247,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1248,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1249,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1250,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1251,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1252,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1253,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1254,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1255,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n)),32);
            tracep->chgBit(oldp+1256,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1257,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n)));
            tracep->chgBit(oldp+1258,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n))));
            tracep->chgBit(oldp+1259,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1260,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1261,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 2U))));
            tracep->chgBit(oldp+1262,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 2U)))));
            tracep->chgBit(oldp+1263,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 3U))));
            tracep->chgBit(oldp+1264,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 3U)))));
            tracep->chgBit(oldp+1265,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 4U))));
            tracep->chgBit(oldp+1266,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 4U)))));
            tracep->chgBit(oldp+1267,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 5U))));
            tracep->chgBit(oldp+1268,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 5U)))));
            tracep->chgBit(oldp+1269,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 6U))));
            tracep->chgBit(oldp+1270,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 6U)))));
            tracep->chgBit(oldp+1271,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1272,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1273,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 8U))));
            tracep->chgBit(oldp+1274,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 8U)))));
            tracep->chgBit(oldp+1275,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 9U))));
            tracep->chgBit(oldp+1276,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 9U)))));
            tracep->chgBit(oldp+1277,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1278,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1279,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1280,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1281,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1282,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n)),32);
            tracep->chgBit(oldp+1283,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1284,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n)));
            tracep->chgBit(oldp+1285,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n))));
            tracep->chgBit(oldp+1286,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1287,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1288,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 8U))));
            tracep->chgBit(oldp+1289,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 8U)))));
            tracep->chgBit(oldp+1290,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 9U))));
            tracep->chgBit(oldp+1291,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 9U)))));
            tracep->chgBit(oldp+1292,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1293,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1294,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1295,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1296,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1297,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1298,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1299,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1300,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1301,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1302,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1303,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1304,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1305,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1306,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1307,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1308,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1309,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1310,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1311,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1312,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1313,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1314,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1315,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1316,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1317,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1318,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1319,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1320,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1321,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1322,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1323,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1324,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1325,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1326,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1327,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1328,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1329,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1330,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1331,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1332,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1333,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1334,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1335,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1336,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1337,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n)),32);
            tracep->chgBit(oldp+1338,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1339,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1340,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1341,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 3U))));
            tracep->chgBit(oldp+1342,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 3U)))));
            tracep->chgBit(oldp+1343,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 5U))));
            tracep->chgBit(oldp+1344,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 5U)))));
            tracep->chgBit(oldp+1345,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 7U))));
            tracep->chgBit(oldp+1346,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 7U)))));
            tracep->chgBit(oldp+1347,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 9U))));
            tracep->chgBit(oldp+1348,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 9U)))));
            tracep->chgBit(oldp+1349,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1350,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1351,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1352,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1353,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1354,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1355,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1356,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1357,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1358,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1359,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1360,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1361,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1362,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1363,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1364,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1365,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1366,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1367,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1368,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1369,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1370,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1371,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1372,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1373,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1374,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1375,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1376,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1377,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1378,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1379,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1380,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1381,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1382,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1383,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1384,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n)),32);
            tracep->chgBit(oldp+1385,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1386,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n)));
            tracep->chgBit(oldp+1387,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n))));
            tracep->chgBit(oldp+1388,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1389,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1390,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 2U))));
            tracep->chgBit(oldp+1391,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 2U)))));
            tracep->chgBit(oldp+1392,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 3U))));
            tracep->chgBit(oldp+1393,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 3U)))));
            tracep->chgBit(oldp+1394,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 4U))));
            tracep->chgBit(oldp+1395,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 4U)))));
            tracep->chgBit(oldp+1396,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1397,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1398,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1399,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1400,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1401,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1402,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1403,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1404,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o));
            tracep->chgBit(oldp+1405,(((~ (IData)((0U 
                                                   != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we))));
            tracep->chgBit(oldp+1406,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_if))));
            tracep->chgBit(oldp+1407,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o));
            tracep->chgBit(oldp+1408,(((~ (IData)((0U 
                                                   != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed1_we))));
            tracep->chgBit(oldp+1409,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed1_we) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id))));
            tracep->chgBit(oldp+1410,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o));
            tracep->chgBit(oldp+1411,(((~ (IData)((0U 
                                                   != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed2_we))));
            tracep->chgBit(oldp+1412,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed2_we) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id))));
            tracep->chgBit(oldp+1413,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1414,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n)),32);
            tracep->chgBit(oldp+1415,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1416,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n)));
            tracep->chgBit(oldp+1417,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n))));
            tracep->chgBit(oldp+1418,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
                                             >> 1U))));
            tracep->chgBit(oldp+1419,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
                                                >> 1U)))));
            tracep->chgBit(oldp+1420,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
                                             >> 2U))));
            tracep->chgBit(oldp+1421,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
                                                >> 2U)))));
            tracep->chgCData(oldp+1422,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns),2);
            tracep->chgCData(oldp+1423,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns),3);
            tracep->chgBit(oldp+1424,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
            tracep->chgBit(oldp+1425,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
            tracep->chgBit(oldp+1426,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id));
            tracep->chgBit(oldp+1427,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id));
            tracep->chgBit(oldp+1428,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id));
            tracep->chgBit(oldp+1429,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id));
            tracep->chgBit(oldp+1430,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex));
            tracep->chgBit(oldp+1431,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
            tracep->chgBit(oldp+1432,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n));
            tracep->chgBit(oldp+1433,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb));
            tracep->chgSData(oldp+1434,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb),11);
            tracep->chgBit(oldp+1435,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb));
            tracep->chgBit(oldp+1436,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb));
            tracep->chgBit(oldp+1437,((1U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_err) 
                                              >> 2U) 
                                             | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_err) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1438,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug));
            tracep->chgBit(oldp+1439,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step));
            tracep->chgBit(oldp+1440,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
            tracep->chgBit(oldp+1441,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed));
            tracep->chgBit(oldp+1442,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible));
            tracep->chgCData(oldp+1443,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n),3);
            tracep->chgSData(oldp+1444,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause),11);
            tracep->chgBit(oldp+1445,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set));
            tracep->chgBit(oldp+1446,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr));
            tracep->chgCData(oldp+1447,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl),2);
            tracep->chgBit(oldp+1448,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n));
            tracep->chgBit(oldp+1449,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear));
            tracep->chgCData(oldp+1450,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match),2);
            tracep->chgCData(oldp+1451,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match),2);
            tracep->chgCData(oldp+1452,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz),2);
            tracep->chgCData(oldp+1453,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz),2);
            tracep->chgBit(oldp+1454,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id));
            tracep->chgBit(oldp+1455,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id));
            tracep->chgIData(oldp+1456,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__register_file_wrapper_i__wdata_i[0]),32);
            tracep->chgBit(oldp+1457,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__register_file_wrapper_i__we_i[0]));
            tracep->chgQData(oldp+1458,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_wdata[0]),38);
            tracep->chgQData(oldp+1460,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[0]),38);
            tracep->chgBit(oldp+1462,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0]));
            tracep->chgIData(oldp+1463,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0]),32);
            tracep->chgIData(oldp+1464,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i[0]),32);
            tracep->chgQData(oldp+1465,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellout__genblk2__DOT__register_file_ecc__rf_wdata_o[0]),38);
            tracep->chgCData(oldp+1467,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0]),6);
            tracep->chgBit(oldp+1468,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req
                                      [1U]));
            tracep->chgBit(oldp+1469,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we
                                      [1U]));
            tracep->chgCData(oldp+1470,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                        [1U]),4);
            tracep->chgIData(oldp+1471,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata
                                        [1U]),32);
            tracep->chgBit(oldp+1472,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req
                                      [1U]));
            tracep->chgIData(oldp+1473,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask),32);
            tracep->chgBit(oldp+1474,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req
                                      [2U]));
            tracep->chgBit(oldp+1475,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we
                                      [2U]));
            tracep->chgCData(oldp+1476,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                        [2U]),4);
            tracep->chgIData(oldp+1477,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata
                                        [2U]),32);
            tracep->chgIData(oldp+1478,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask),32);
            tracep->chgBit(oldp+1479,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                      [1U]));
            tracep->chgIData(oldp+1480,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                        [1U]),32);
            tracep->chgBit(oldp+1481,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                      [1U]));
            tracep->chgCData(oldp+1482,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                        [1U]),4);
            tracep->chgIData(oldp+1483,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [1U]),32);
            tracep->chgSData(oldp+1484,((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                         [1U])),12);
            tracep->chgSData(oldp+1485,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_o_d),16);
            tracep->chgBit(oldp+1486,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                        [1U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                        [1U]) & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                  [1U])))));
            tracep->chgBit(oldp+1487,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                        [1U] & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                                [1U])) 
                                       & (4U == (0xfffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                 [1U])))));
            tracep->chgBit(oldp+1488,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                        [1U] & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                                [1U])) 
                                       & (8U == (0xfffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                 [1U])))));
            tracep->chgBit(oldp+1489,((1U & VL_REDXOR_32(
                                                         (0x3fffffU 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                             [1U] 
                                                             >> 0xaU))))));
            tracep->chgBit(oldp+1490,((1U & VL_REDXOR_32(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                                         [1U]))));
            tracep->chgBit(oldp+1491,((1U & VL_REDXOR_32(
                                                         (0xffffU 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                             [1U] 
                                                             >> 0x10U))))));
            tracep->chgBit(oldp+1492,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                      [2U]));
            tracep->chgIData(oldp+1493,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                        [2U]),32);
            tracep->chgBit(oldp+1494,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                      [2U]));
            tracep->chgCData(oldp+1495,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                        [2U]),4);
            tracep->chgIData(oldp+1496,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [2U]),32);
            tracep->chgCData(oldp+1497,((0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                         [2U])),8);
            tracep->chgBit(oldp+1498,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1499,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1500,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1501,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1502,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (2U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1503,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (2U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1504,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1505,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1506,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (4U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1507,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (4U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1508,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1509,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1510,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (6U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1511,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (6U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1512,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (7U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1513,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (7U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1514,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (8U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1515,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (8U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1516,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (9U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1517,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (9U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1518,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1519,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1520,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+1521,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                         [2U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                         [2U]) & (0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+1522,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                      [3U]));
            tracep->chgIData(oldp+1523,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                        [3U]),32);
            tracep->chgBit(oldp+1524,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                      [3U]));
            tracep->chgCData(oldp+1525,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                        [3U]),4);
            tracep->chgIData(oldp+1526,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [3U]),32);
            tracep->chgIData(oldp+1527,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rdata_d),32);
            tracep->chgBit(oldp+1528,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rvalid_d));
            tracep->chgSData(oldp+1529,((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                         [3U])),12);
            tracep->chgBit(oldp+1530,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rready));
            tracep->chgBit(oldp+1531,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                        [3U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                        [3U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                       [3U])));
            tracep->chgBit(oldp+1532,(((4U == (0xfffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                               [3U])) 
                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                           [3U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                           [3U]) & 
                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                          [3U]))));
            tracep->chgBit(oldp+1533,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgCData(oldp+1534,((0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                         [3U])),8);
            tracep->chgBit(oldp+1535,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1536,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                      [5U]));
            tracep->chgIData(oldp+1537,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                        [5U]),32);
            tracep->chgBit(oldp+1538,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                      [5U]));
            tracep->chgCData(oldp+1539,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                        [5U]),4);
            tracep->chgIData(oldp+1540,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [5U]),32);
            tracep->chgSData(oldp+1541,((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                         [5U])),12);
            tracep->chgBit(oldp+1542,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                        [5U] & (4U 
                                                == 
                                                (0xfffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                 [5U]))) 
                                       & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                          [5U]))));
            tracep->chgBit(oldp+1543,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                        [5U] & (0U 
                                                == 
                                                (0xfffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                 [5U]))) 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                       [5U])));
            tracep->chgCData(oldp+1544,((0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                         [5U])),8);
            tracep->chgBit(oldp+1545,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1546,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                      [4U]));
            tracep->chgIData(oldp+1547,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                        [4U]),32);
            tracep->chgBit(oldp+1548,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                                      [4U]));
            tracep->chgCData(oldp+1549,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                        [4U]),4);
            tracep->chgIData(oldp+1550,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [4U]),32);
            tracep->chgBit(oldp+1551,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we));
            tracep->chgBit(oldp+1552,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
                                       & (0U == (0x3ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                 [4U])))));
            tracep->chgBit(oldp+1553,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
                                       & (4U == (0x3ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                 [4U])))));
            tracep->chgBit(oldp+1554,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_we));
            tracep->chgBit(oldp+1555,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_we));
            tracep->chgIData(oldp+1556,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata),32);
            tracep->chgIData(oldp+1557,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata),32);
            tracep->chgIData(oldp+1558,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata),32);
            tracep->chgIData(oldp+1559,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata),32);
            tracep->chgBit(oldp+1560,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__error_d));
            tracep->chgIData(oldp+1561,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__rdata_d),32);
            tracep->chgBit(oldp+1562,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt
                                      [1U]));
            tracep->chgBit(oldp+1563,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
                                      [1U]));
            tracep->chgIData(oldp+1564,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata
                                        [1U]),32);
            tracep->chgBit(oldp+1565,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid));
            tracep->chgCData(oldp+1566,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror),3);
            tracep->chgQData(oldp+1567,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o),64);
            tracep->chgBit(oldp+1569,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid));
            tracep->chgIData(oldp+1570,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs),32);
            tracep->chgCData(oldp+1571,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d),3);
            tracep->chgQData(oldp+1572,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgQData(oldp+1574,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgQData(oldp+1576,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d),64);
            tracep->chgIData(oldp+1578,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs),32);
            tracep->chgCData(oldp+1579,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+1580,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going));
            tracep->chgBit(oldp+1581,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception));
            tracep->chgQData(oldp+1582,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgBit(oldp+1584,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                       [7U])));
            tracep->chgCData(oldp+1585,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned),2);
            tracep->chgCData(oldp+1586,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned),2);
            tracep->chgCData(oldp+1587,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
            tracep->chgBit(oldp+1588,((0x800U <= (0xfffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))));
            tracep->chgCData(oldp+1589,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d),2);
            tracep->chgQData(oldp+1590,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits),64);
            tracep->chgQData(oldp+1592,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata),64);
            tracep->chgQData(oldp+1594,((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))),64);
            tracep->chgIData(oldp+1596,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1597,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0U]),32);
            tracep->chgBit(oldp+1598,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we))));
            tracep->chgBit(oldp+1599,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1600,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0U])),32);
            tracep->chgBit(oldp+1601,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1602,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0U])));
            tracep->chgBit(oldp+1603,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U]))));
            tracep->chgBit(oldp+1604,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 1U))));
            tracep->chgBit(oldp+1605,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1606,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 2U))));
            tracep->chgBit(oldp+1607,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1608,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 3U))));
            tracep->chgBit(oldp+1609,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1610,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 4U))));
            tracep->chgBit(oldp+1611,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1612,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 5U))));
            tracep->chgBit(oldp+1613,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1614,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 6U))));
            tracep->chgBit(oldp+1615,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1616,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 7U))));
            tracep->chgBit(oldp+1617,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1618,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 8U))));
            tracep->chgBit(oldp+1619,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1620,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 9U))));
            tracep->chgBit(oldp+1621,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1622,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0xaU))));
            tracep->chgBit(oldp+1623,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1624,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0xbU))));
            tracep->chgBit(oldp+1625,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1626,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0xcU))));
            tracep->chgBit(oldp+1627,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1628,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0xdU))));
            tracep->chgBit(oldp+1629,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1630,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0xeU))));
            tracep->chgBit(oldp+1631,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1632,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0xfU))));
            tracep->chgBit(oldp+1633,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1634,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x10U))));
            tracep->chgBit(oldp+1635,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1636,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x11U))));
            tracep->chgBit(oldp+1637,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1638,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x12U))));
            tracep->chgBit(oldp+1639,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1640,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x13U))));
            tracep->chgBit(oldp+1641,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1642,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x14U))));
            tracep->chgBit(oldp+1643,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1644,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x15U))));
            tracep->chgBit(oldp+1645,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1646,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x16U))));
            tracep->chgBit(oldp+1647,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1648,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x17U))));
            tracep->chgBit(oldp+1649,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1650,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x18U))));
            tracep->chgBit(oldp+1651,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1652,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x19U))));
            tracep->chgBit(oldp+1653,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1654,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x1aU))));
            tracep->chgBit(oldp+1655,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1656,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x1bU))));
            tracep->chgBit(oldp+1657,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1658,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x1cU))));
            tracep->chgBit(oldp+1659,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1660,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x1dU))));
            tracep->chgBit(oldp+1661,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1662,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x1eU))));
            tracep->chgBit(oldp+1663,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1664,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0U] >> 0x1fU))));
            tracep->chgBit(oldp+1665,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+1666,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [1U]),32);
            tracep->chgBit(oldp+1667,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1668,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1669,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [1U])),32);
            tracep->chgBit(oldp+1670,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1671,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [1U])));
            tracep->chgBit(oldp+1672,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U]))));
            tracep->chgBit(oldp+1673,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1674,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1675,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 2U))));
            tracep->chgBit(oldp+1676,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1677,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 3U))));
            tracep->chgBit(oldp+1678,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1679,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 4U))));
            tracep->chgBit(oldp+1680,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1681,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 5U))));
            tracep->chgBit(oldp+1682,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1683,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 6U))));
            tracep->chgBit(oldp+1684,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1685,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 7U))));
            tracep->chgBit(oldp+1686,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1687,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 8U))));
            tracep->chgBit(oldp+1688,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1689,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 9U))));
            tracep->chgBit(oldp+1690,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1691,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0xaU))));
            tracep->chgBit(oldp+1692,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1693,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0xbU))));
            tracep->chgBit(oldp+1694,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1695,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0xcU))));
            tracep->chgBit(oldp+1696,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1697,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0xdU))));
            tracep->chgBit(oldp+1698,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1699,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0xeU))));
            tracep->chgBit(oldp+1700,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1701,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0xfU))));
            tracep->chgBit(oldp+1702,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1703,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x10U))));
            tracep->chgBit(oldp+1704,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1705,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x11U))));
            tracep->chgBit(oldp+1706,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1707,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x12U))));
            tracep->chgBit(oldp+1708,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1709,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x13U))));
            tracep->chgBit(oldp+1710,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1711,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x14U))));
            tracep->chgBit(oldp+1712,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1713,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x15U))));
            tracep->chgBit(oldp+1714,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1715,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x16U))));
            tracep->chgBit(oldp+1716,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1717,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x17U))));
            tracep->chgBit(oldp+1718,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1719,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x18U))));
            tracep->chgBit(oldp+1720,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1721,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x19U))));
            tracep->chgBit(oldp+1722,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1723,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x1aU))));
            tracep->chgBit(oldp+1724,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1725,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x1bU))));
            tracep->chgBit(oldp+1726,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1727,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x1cU))));
            tracep->chgBit(oldp+1728,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1729,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x1dU))));
            tracep->chgBit(oldp+1730,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1731,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x1eU))));
            tracep->chgBit(oldp+1732,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1733,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [1U] >> 0x1fU))));
            tracep->chgBit(oldp+1734,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [1U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+1735,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [2U]),32);
            tracep->chgBit(oldp+1736,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1737,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1738,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [2U])),32);
            tracep->chgBit(oldp+1739,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1740,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [2U])));
            tracep->chgBit(oldp+1741,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U]))));
            tracep->chgBit(oldp+1742,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1743,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1744,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 2U))));
            tracep->chgBit(oldp+1745,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1746,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 3U))));
            tracep->chgBit(oldp+1747,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1748,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 4U))));
            tracep->chgBit(oldp+1749,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1750,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 5U))));
            tracep->chgBit(oldp+1751,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1752,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 6U))));
            tracep->chgBit(oldp+1753,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1754,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 7U))));
            tracep->chgBit(oldp+1755,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1756,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 8U))));
            tracep->chgBit(oldp+1757,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1758,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 9U))));
            tracep->chgBit(oldp+1759,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1760,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0xaU))));
            tracep->chgBit(oldp+1761,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1762,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0xbU))));
            tracep->chgBit(oldp+1763,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1764,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0xcU))));
            tracep->chgBit(oldp+1765,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1766,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0xdU))));
            tracep->chgBit(oldp+1767,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1768,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0xeU))));
            tracep->chgBit(oldp+1769,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1770,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0xfU))));
            tracep->chgBit(oldp+1771,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1772,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x10U))));
            tracep->chgBit(oldp+1773,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1774,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x11U))));
            tracep->chgBit(oldp+1775,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1776,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x12U))));
            tracep->chgBit(oldp+1777,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1778,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x13U))));
            tracep->chgBit(oldp+1779,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1780,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x14U))));
            tracep->chgBit(oldp+1781,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1782,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x15U))));
            tracep->chgBit(oldp+1783,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1784,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x16U))));
            tracep->chgBit(oldp+1785,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1786,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x17U))));
            tracep->chgBit(oldp+1787,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1788,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x18U))));
            tracep->chgBit(oldp+1789,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1790,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x19U))));
            tracep->chgBit(oldp+1791,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1792,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x1aU))));
            tracep->chgBit(oldp+1793,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1794,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x1bU))));
            tracep->chgBit(oldp+1795,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1796,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x1cU))));
            tracep->chgBit(oldp+1797,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1798,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x1dU))));
            tracep->chgBit(oldp+1799,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1800,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x1eU))));
            tracep->chgBit(oldp+1801,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1802,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [2U] >> 0x1fU))));
            tracep->chgBit(oldp+1803,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [2U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+1804,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [3U]),32);
            tracep->chgBit(oldp+1805,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1806,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1807,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [3U])),32);
            tracep->chgBit(oldp+1808,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1809,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [3U])));
            tracep->chgBit(oldp+1810,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U]))));
            tracep->chgBit(oldp+1811,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1812,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1813,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 2U))));
            tracep->chgBit(oldp+1814,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1815,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 3U))));
            tracep->chgBit(oldp+1816,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1817,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 4U))));
            tracep->chgBit(oldp+1818,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1819,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 5U))));
            tracep->chgBit(oldp+1820,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1821,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 6U))));
            tracep->chgBit(oldp+1822,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1823,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 7U))));
            tracep->chgBit(oldp+1824,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1825,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 8U))));
            tracep->chgBit(oldp+1826,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1827,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 9U))));
            tracep->chgBit(oldp+1828,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1829,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0xaU))));
            tracep->chgBit(oldp+1830,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1831,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0xbU))));
            tracep->chgBit(oldp+1832,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1833,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0xcU))));
            tracep->chgBit(oldp+1834,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1835,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0xdU))));
            tracep->chgBit(oldp+1836,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1837,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0xeU))));
            tracep->chgBit(oldp+1838,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1839,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0xfU))));
            tracep->chgBit(oldp+1840,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1841,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x10U))));
            tracep->chgBit(oldp+1842,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1843,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x11U))));
            tracep->chgBit(oldp+1844,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1845,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x12U))));
            tracep->chgBit(oldp+1846,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1847,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x13U))));
            tracep->chgBit(oldp+1848,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1849,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x14U))));
            tracep->chgBit(oldp+1850,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1851,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x15U))));
            tracep->chgBit(oldp+1852,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1853,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x16U))));
            tracep->chgBit(oldp+1854,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1855,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x17U))));
            tracep->chgBit(oldp+1856,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1857,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x18U))));
            tracep->chgBit(oldp+1858,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1859,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x19U))));
            tracep->chgBit(oldp+1860,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1861,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x1aU))));
            tracep->chgBit(oldp+1862,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1863,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x1bU))));
            tracep->chgBit(oldp+1864,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1865,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x1cU))));
            tracep->chgBit(oldp+1866,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1867,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x1dU))));
            tracep->chgBit(oldp+1868,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1869,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x1eU))));
            tracep->chgBit(oldp+1870,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1871,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [3U] >> 0x1fU))));
            tracep->chgBit(oldp+1872,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [3U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+1873,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [4U]),32);
            tracep->chgBit(oldp+1874,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1875,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1876,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [4U])),32);
            tracep->chgBit(oldp+1877,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1878,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [4U])));
            tracep->chgBit(oldp+1879,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U]))));
            tracep->chgBit(oldp+1880,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1881,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1882,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 2U))));
            tracep->chgBit(oldp+1883,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1884,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 3U))));
            tracep->chgBit(oldp+1885,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1886,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 4U))));
            tracep->chgBit(oldp+1887,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1888,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 5U))));
            tracep->chgBit(oldp+1889,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1890,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 6U))));
            tracep->chgBit(oldp+1891,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1892,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 7U))));
            tracep->chgBit(oldp+1893,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1894,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 8U))));
            tracep->chgBit(oldp+1895,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1896,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 9U))));
            tracep->chgBit(oldp+1897,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1898,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0xaU))));
            tracep->chgBit(oldp+1899,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1900,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0xbU))));
            tracep->chgBit(oldp+1901,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1902,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0xcU))));
            tracep->chgBit(oldp+1903,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1904,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0xdU))));
            tracep->chgBit(oldp+1905,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1906,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0xeU))));
            tracep->chgBit(oldp+1907,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1908,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0xfU))));
            tracep->chgBit(oldp+1909,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1910,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x10U))));
            tracep->chgBit(oldp+1911,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1912,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x11U))));
            tracep->chgBit(oldp+1913,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1914,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x12U))));
            tracep->chgBit(oldp+1915,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1916,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x13U))));
            tracep->chgBit(oldp+1917,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1918,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x14U))));
            tracep->chgBit(oldp+1919,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1920,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x15U))));
            tracep->chgBit(oldp+1921,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1922,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x16U))));
            tracep->chgBit(oldp+1923,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1924,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x17U))));
            tracep->chgBit(oldp+1925,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1926,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x18U))));
            tracep->chgBit(oldp+1927,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1928,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x19U))));
            tracep->chgBit(oldp+1929,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1930,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x1aU))));
            tracep->chgBit(oldp+1931,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1932,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x1bU))));
            tracep->chgBit(oldp+1933,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1934,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x1cU))));
            tracep->chgBit(oldp+1935,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1936,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x1dU))));
            tracep->chgBit(oldp+1937,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1938,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x1eU))));
            tracep->chgBit(oldp+1939,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1940,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [4U] >> 0x1fU))));
            tracep->chgBit(oldp+1941,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [4U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+1942,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [5U]),32);
            tracep->chgBit(oldp+1943,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1944,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+1945,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [5U])),32);
            tracep->chgBit(oldp+1946,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+1947,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [5U])));
            tracep->chgBit(oldp+1948,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U]))));
            tracep->chgBit(oldp+1949,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1950,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 2U))));
            tracep->chgBit(oldp+1952,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1953,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 3U))));
            tracep->chgBit(oldp+1954,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1955,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 4U))));
            tracep->chgBit(oldp+1956,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1957,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 5U))));
            tracep->chgBit(oldp+1958,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1959,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 6U))));
            tracep->chgBit(oldp+1960,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1961,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 7U))));
            tracep->chgBit(oldp+1962,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1963,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 8U))));
            tracep->chgBit(oldp+1964,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1965,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 9U))));
            tracep->chgBit(oldp+1966,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1967,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0xaU))));
            tracep->chgBit(oldp+1968,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1969,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0xbU))));
            tracep->chgBit(oldp+1970,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1971,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0xcU))));
            tracep->chgBit(oldp+1972,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1973,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0xdU))));
            tracep->chgBit(oldp+1974,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1975,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0xeU))));
            tracep->chgBit(oldp+1976,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1977,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0xfU))));
            tracep->chgBit(oldp+1978,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1979,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x10U))));
            tracep->chgBit(oldp+1980,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1981,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x11U))));
            tracep->chgBit(oldp+1982,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1983,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x12U))));
            tracep->chgBit(oldp+1984,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1985,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x13U))));
            tracep->chgBit(oldp+1986,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1987,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x14U))));
            tracep->chgBit(oldp+1988,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1989,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x15U))));
            tracep->chgBit(oldp+1990,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1991,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x16U))));
            tracep->chgBit(oldp+1992,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1993,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x17U))));
            tracep->chgBit(oldp+1994,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1995,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x18U))));
            tracep->chgBit(oldp+1996,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1997,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x19U))));
            tracep->chgBit(oldp+1998,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1999,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x1aU))));
            tracep->chgBit(oldp+2000,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2001,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x1bU))));
            tracep->chgBit(oldp+2002,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2003,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x1cU))));
            tracep->chgBit(oldp+2004,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2005,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x1dU))));
            tracep->chgBit(oldp+2006,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2007,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x1eU))));
            tracep->chgBit(oldp+2008,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2009,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [5U] >> 0x1fU))));
            tracep->chgBit(oldp+2010,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [5U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2011,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [6U]),32);
            tracep->chgBit(oldp+2012,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2013,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2014,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [6U])),32);
            tracep->chgBit(oldp+2015,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2016,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [6U])));
            tracep->chgBit(oldp+2017,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U]))));
            tracep->chgBit(oldp+2018,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+2019,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2020,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 2U))));
            tracep->chgBit(oldp+2021,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2022,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 3U))));
            tracep->chgBit(oldp+2023,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2024,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 4U))));
            tracep->chgBit(oldp+2025,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2026,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 5U))));
            tracep->chgBit(oldp+2027,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2028,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 6U))));
            tracep->chgBit(oldp+2029,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2030,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 7U))));
            tracep->chgBit(oldp+2031,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2032,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 8U))));
            tracep->chgBit(oldp+2033,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2034,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 9U))));
            tracep->chgBit(oldp+2035,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2036,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0xaU))));
            tracep->chgBit(oldp+2037,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2038,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0xbU))));
            tracep->chgBit(oldp+2039,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2040,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0xcU))));
            tracep->chgBit(oldp+2041,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2042,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0xdU))));
            tracep->chgBit(oldp+2043,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2044,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0xeU))));
            tracep->chgBit(oldp+2045,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2046,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0xfU))));
            tracep->chgBit(oldp+2047,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2048,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x10U))));
            tracep->chgBit(oldp+2049,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2050,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x11U))));
            tracep->chgBit(oldp+2051,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2052,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x12U))));
            tracep->chgBit(oldp+2053,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2054,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x13U))));
            tracep->chgBit(oldp+2055,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2056,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x14U))));
            tracep->chgBit(oldp+2057,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2058,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x15U))));
            tracep->chgBit(oldp+2059,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2060,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x16U))));
            tracep->chgBit(oldp+2061,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2062,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x17U))));
            tracep->chgBit(oldp+2063,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2064,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x18U))));
            tracep->chgBit(oldp+2065,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2066,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x19U))));
            tracep->chgBit(oldp+2067,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2068,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x1aU))));
            tracep->chgBit(oldp+2069,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2070,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x1bU))));
            tracep->chgBit(oldp+2071,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2072,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x1cU))));
            tracep->chgBit(oldp+2073,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2074,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x1dU))));
            tracep->chgBit(oldp+2075,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2076,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x1eU))));
            tracep->chgBit(oldp+2077,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2078,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [6U] >> 0x1fU))));
            tracep->chgBit(oldp+2079,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [6U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2080,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [7U]),32);
            tracep->chgBit(oldp+2081,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2082,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2083,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [7U])),32);
            tracep->chgBit(oldp+2084,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2085,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [7U])));
            tracep->chgBit(oldp+2086,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U]))));
            tracep->chgBit(oldp+2087,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+2088,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2089,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 2U))));
            tracep->chgBit(oldp+2090,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2091,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 3U))));
            tracep->chgBit(oldp+2092,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2093,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 4U))));
            tracep->chgBit(oldp+2094,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2095,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 5U))));
            tracep->chgBit(oldp+2096,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2097,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 6U))));
            tracep->chgBit(oldp+2098,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2099,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 7U))));
            tracep->chgBit(oldp+2100,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2101,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 8U))));
            tracep->chgBit(oldp+2102,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2103,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 9U))));
            tracep->chgBit(oldp+2104,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2105,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0xaU))));
            tracep->chgBit(oldp+2106,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2107,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0xbU))));
            tracep->chgBit(oldp+2108,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2109,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0xcU))));
            tracep->chgBit(oldp+2110,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2111,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0xdU))));
            tracep->chgBit(oldp+2112,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2113,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0xeU))));
            tracep->chgBit(oldp+2114,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2115,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0xfU))));
            tracep->chgBit(oldp+2116,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2117,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x10U))));
            tracep->chgBit(oldp+2118,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2119,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x11U))));
            tracep->chgBit(oldp+2120,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2121,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x12U))));
            tracep->chgBit(oldp+2122,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2123,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x13U))));
            tracep->chgBit(oldp+2124,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2125,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x14U))));
            tracep->chgBit(oldp+2126,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2127,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x15U))));
            tracep->chgBit(oldp+2128,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2129,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x16U))));
            tracep->chgBit(oldp+2130,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2131,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x17U))));
            tracep->chgBit(oldp+2132,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2133,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x18U))));
            tracep->chgBit(oldp+2134,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2135,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x19U))));
            tracep->chgBit(oldp+2136,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2137,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x1aU))));
            tracep->chgBit(oldp+2138,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2139,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x1bU))));
            tracep->chgBit(oldp+2140,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2141,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x1cU))));
            tracep->chgBit(oldp+2142,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2143,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x1dU))));
            tracep->chgBit(oldp+2144,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2145,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x1eU))));
            tracep->chgBit(oldp+2146,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2147,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [7U] >> 0x1fU))));
            tracep->chgBit(oldp+2148,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [7U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2149,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [8U]),32);
            tracep->chgBit(oldp+2150,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2151,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2152,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [8U])),32);
            tracep->chgBit(oldp+2153,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2154,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [8U])));
            tracep->chgBit(oldp+2155,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U]))));
            tracep->chgBit(oldp+2156,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+2157,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2158,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 2U))));
            tracep->chgBit(oldp+2159,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2160,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 3U))));
            tracep->chgBit(oldp+2161,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2162,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 4U))));
            tracep->chgBit(oldp+2163,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2164,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 5U))));
            tracep->chgBit(oldp+2165,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2166,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 6U))));
            tracep->chgBit(oldp+2167,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2168,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 7U))));
            tracep->chgBit(oldp+2169,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2170,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 8U))));
            tracep->chgBit(oldp+2171,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2172,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 9U))));
            tracep->chgBit(oldp+2173,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2174,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0xaU))));
            tracep->chgBit(oldp+2175,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2176,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0xbU))));
            tracep->chgBit(oldp+2177,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2178,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0xcU))));
            tracep->chgBit(oldp+2179,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2180,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0xdU))));
            tracep->chgBit(oldp+2181,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2182,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0xeU))));
            tracep->chgBit(oldp+2183,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2184,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0xfU))));
            tracep->chgBit(oldp+2185,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2186,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x10U))));
            tracep->chgBit(oldp+2187,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2188,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x11U))));
            tracep->chgBit(oldp+2189,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2190,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x12U))));
            tracep->chgBit(oldp+2191,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2192,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x13U))));
            tracep->chgBit(oldp+2193,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2194,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x14U))));
            tracep->chgBit(oldp+2195,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2196,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x15U))));
            tracep->chgBit(oldp+2197,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2198,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x16U))));
            tracep->chgBit(oldp+2199,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2200,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x17U))));
            tracep->chgBit(oldp+2201,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2202,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x18U))));
            tracep->chgBit(oldp+2203,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2204,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x19U))));
            tracep->chgBit(oldp+2205,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2206,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x1aU))));
            tracep->chgBit(oldp+2207,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2208,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x1bU))));
            tracep->chgBit(oldp+2209,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2210,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x1cU))));
            tracep->chgBit(oldp+2211,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2212,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x1dU))));
            tracep->chgBit(oldp+2213,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2214,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x1eU))));
            tracep->chgBit(oldp+2215,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2216,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [8U] >> 0x1fU))));
            tracep->chgBit(oldp+2217,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [8U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2218,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [9U]),32);
            tracep->chgBit(oldp+2219,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2220,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2221,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [9U])),32);
            tracep->chgBit(oldp+2222,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2223,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [9U])));
            tracep->chgBit(oldp+2224,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U]))));
            tracep->chgBit(oldp+2225,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+2226,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2227,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 2U))));
            tracep->chgBit(oldp+2228,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2229,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 3U))));
            tracep->chgBit(oldp+2230,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2231,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 4U))));
            tracep->chgBit(oldp+2232,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2233,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 5U))));
            tracep->chgBit(oldp+2234,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2235,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 6U))));
            tracep->chgBit(oldp+2236,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2237,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 7U))));
            tracep->chgBit(oldp+2238,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2239,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 8U))));
            tracep->chgBit(oldp+2240,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2241,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 9U))));
            tracep->chgBit(oldp+2242,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2243,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0xaU))));
            tracep->chgBit(oldp+2244,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2245,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0xbU))));
            tracep->chgBit(oldp+2246,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2247,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0xcU))));
            tracep->chgBit(oldp+2248,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2249,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0xdU))));
            tracep->chgBit(oldp+2250,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2251,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0xeU))));
            tracep->chgBit(oldp+2252,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2253,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0xfU))));
            tracep->chgBit(oldp+2254,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2255,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x10U))));
            tracep->chgBit(oldp+2256,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2257,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x11U))));
            tracep->chgBit(oldp+2258,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2259,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x12U))));
            tracep->chgBit(oldp+2260,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2261,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x13U))));
            tracep->chgBit(oldp+2262,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2263,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x14U))));
            tracep->chgBit(oldp+2264,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2265,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x15U))));
            tracep->chgBit(oldp+2266,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2267,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x16U))));
            tracep->chgBit(oldp+2268,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2269,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x17U))));
            tracep->chgBit(oldp+2270,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2271,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x18U))));
            tracep->chgBit(oldp+2272,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2273,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x19U))));
            tracep->chgBit(oldp+2274,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2275,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x1aU))));
            tracep->chgBit(oldp+2276,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2277,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x1bU))));
            tracep->chgBit(oldp+2278,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2279,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x1cU))));
            tracep->chgBit(oldp+2280,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2281,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x1dU))));
            tracep->chgBit(oldp+2282,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2283,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x1eU))));
            tracep->chgBit(oldp+2284,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2285,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [9U] >> 0x1fU))));
            tracep->chgBit(oldp+2286,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [9U] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2287,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0xaU]),32);
            tracep->chgBit(oldp+2288,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2289,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2290,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0xaU])),32);
            tracep->chgBit(oldp+2291,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2292,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0xaU])));
            tracep->chgBit(oldp+2293,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU]))));
            tracep->chgBit(oldp+2294,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2295,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2296,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2297,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2298,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2299,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2300,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2301,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2302,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2303,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2304,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2305,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2306,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2307,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2308,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 8U))));
            tracep->chgBit(oldp+2309,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2310,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 9U))));
            tracep->chgBit(oldp+2311,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2312,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2313,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2314,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2315,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2316,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2317,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2318,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2319,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2320,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2321,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2322,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2323,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2324,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2325,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2326,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2327,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2328,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2329,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2330,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2331,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2332,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2333,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2334,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2335,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2336,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2337,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2338,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2339,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2340,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2341,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2342,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2343,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2344,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2345,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2346,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2347,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2348,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2349,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2350,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2351,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2352,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2353,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2354,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xaU] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2355,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xaU] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2356,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0xbU]),32);
            tracep->chgBit(oldp+2357,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2358,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2359,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0xbU])),32);
            tracep->chgBit(oldp+2360,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2361,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0xbU])));
            tracep->chgBit(oldp+2362,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU]))));
            tracep->chgBit(oldp+2363,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2364,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2365,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2366,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2367,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2368,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2369,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2370,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2371,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2372,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2373,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2374,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2375,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2376,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2377,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 8U))));
            tracep->chgBit(oldp+2378,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2379,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 9U))));
            tracep->chgBit(oldp+2380,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2381,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2382,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2383,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2384,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2385,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2386,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2387,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2388,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2389,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2390,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2391,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2392,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2393,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2394,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2395,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2396,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2397,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2398,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2399,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2400,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2401,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2402,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2403,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2404,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2405,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2406,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2407,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2408,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2409,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2410,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2411,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2412,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2413,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2414,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2415,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2416,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2417,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2418,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2419,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2420,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2421,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2422,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2423,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xbU] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2424,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xbU] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2425,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0xcU]),32);
            tracep->chgBit(oldp+2426,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2427,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2428,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0xcU])),32);
            tracep->chgBit(oldp+2429,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2430,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0xcU])));
            tracep->chgBit(oldp+2431,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU]))));
            tracep->chgBit(oldp+2432,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2433,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2434,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2435,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2436,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2437,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2438,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2439,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2440,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2441,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2442,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2443,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2444,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2445,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2446,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 8U))));
            tracep->chgBit(oldp+2447,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2448,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 9U))));
            tracep->chgBit(oldp+2449,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2450,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2451,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2452,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2453,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2454,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2455,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2456,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2457,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2458,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2459,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2460,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2461,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2462,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2463,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2464,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2465,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2466,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2467,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2468,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2469,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2470,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2471,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2472,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2473,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2474,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2475,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2476,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2477,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2478,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2479,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2480,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2481,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2482,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2483,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2484,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2485,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2486,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2487,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2488,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2489,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2490,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2491,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2492,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xcU] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2493,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xcU] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2494,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0xdU]),32);
            tracep->chgBit(oldp+2495,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2496,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2497,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0xdU])),32);
            tracep->chgBit(oldp+2498,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2499,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0xdU])));
            tracep->chgBit(oldp+2500,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU]))));
            tracep->chgBit(oldp+2501,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2502,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2503,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2504,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2505,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2506,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2507,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2508,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2509,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2510,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2511,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2512,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2513,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2514,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2515,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 8U))));
            tracep->chgBit(oldp+2516,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2517,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 9U))));
            tracep->chgBit(oldp+2518,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2519,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2520,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2521,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2522,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2523,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2524,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2525,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2526,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2527,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2528,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2529,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2530,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2531,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2532,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2533,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2534,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2535,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2536,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2537,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2538,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2539,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2540,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2541,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2542,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2543,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2544,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2545,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2546,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2547,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2548,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2549,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2550,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2551,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2552,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2553,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2554,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2555,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2556,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2557,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2558,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2559,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2560,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2561,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xdU] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2562,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xdU] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2563,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0xeU]),32);
            tracep->chgBit(oldp+2564,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2565,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2566,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0xeU])),32);
            tracep->chgBit(oldp+2567,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2568,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0xeU])));
            tracep->chgBit(oldp+2569,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU]))));
            tracep->chgBit(oldp+2570,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2571,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2572,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2573,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2574,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2575,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2576,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2577,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2578,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2579,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2580,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2581,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2582,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2583,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2584,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 8U))));
            tracep->chgBit(oldp+2585,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2586,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 9U))));
            tracep->chgBit(oldp+2587,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2588,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2589,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2590,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2591,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2592,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2593,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2594,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2595,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2596,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2597,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2598,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2599,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2600,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2601,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2602,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2603,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2604,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2605,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2606,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2607,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2608,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2609,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2610,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2611,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2612,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2613,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2614,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2615,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2616,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2617,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2618,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2619,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2620,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2621,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2622,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2623,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2624,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2625,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2626,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2627,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2628,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2629,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2630,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xeU] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2631,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xeU] 
                                                >> 0x1fU)))));
            tracep->chgIData(oldp+2632,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                        [0xfU]),32);
            tracep->chgBit(oldp+2633,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2634,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgIData(oldp+2635,((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                         [0xfU])),32);
            tracep->chgBit(oldp+2636,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2637,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                       [0xfU])));
            tracep->chgBit(oldp+2638,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU]))));
            tracep->chgBit(oldp+2639,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2640,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2641,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2642,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2643,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2644,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2645,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2646,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2647,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2648,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2649,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2650,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2651,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2652,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+2653,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 8U))));
            tracep->chgBit(oldp+2654,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+2655,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 9U))));
            tracep->chgBit(oldp+2656,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2657,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2658,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+2659,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2660,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2661,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2662,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2663,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2664,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+2665,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2666,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2667,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2668,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+2669,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2670,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2671,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2672,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+2673,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2674,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2675,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2676,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+2677,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2678,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2679,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2680,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+2681,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2682,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2683,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2684,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+2685,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2686,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+2687,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2688,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+2689,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2690,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+2691,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2692,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+2693,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2694,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+2695,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2696,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+2697,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2698,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2699,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                             [0xfU] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2700,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                                                [0xfU] 
                                                >> 0x1fU)))));
            tracep->chgCData(oldp+2701,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0U]),8);
            tracep->chgBit(oldp+2702,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we))));
            tracep->chgBit(oldp+2703,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2704,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0U]))),8);
            tracep->chgBit(oldp+2705,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2706,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0U])));
            tracep->chgBit(oldp+2707,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U]))));
            tracep->chgBit(oldp+2708,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 1U))));
            tracep->chgBit(oldp+2709,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2710,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 2U))));
            tracep->chgBit(oldp+2711,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2712,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 3U))));
            tracep->chgBit(oldp+2713,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2714,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 4U))));
            tracep->chgBit(oldp+2715,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2716,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 5U))));
            tracep->chgBit(oldp+2717,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2718,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 6U))));
            tracep->chgBit(oldp+2719,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2720,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0U] >> 7U))));
            tracep->chgBit(oldp+2721,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2722,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [1U]),8);
            tracep->chgBit(oldp+2723,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2724,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2725,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [1U]))),8);
            tracep->chgBit(oldp+2726,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2727,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [1U])));
            tracep->chgBit(oldp+2728,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U]))));
            tracep->chgBit(oldp+2729,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+2730,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2731,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 2U))));
            tracep->chgBit(oldp+2732,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2733,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 3U))));
            tracep->chgBit(oldp+2734,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2735,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 4U))));
            tracep->chgBit(oldp+2736,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2737,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 5U))));
            tracep->chgBit(oldp+2738,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2739,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 6U))));
            tracep->chgBit(oldp+2740,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2741,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [1U] >> 7U))));
            tracep->chgBit(oldp+2742,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [1U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2743,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [2U]),8);
            tracep->chgBit(oldp+2744,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2745,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2746,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [2U]))),8);
            tracep->chgBit(oldp+2747,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2748,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [2U])));
            tracep->chgBit(oldp+2749,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U]))));
            tracep->chgBit(oldp+2750,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+2751,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2752,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 2U))));
            tracep->chgBit(oldp+2753,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2754,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 3U))));
            tracep->chgBit(oldp+2755,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2756,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 4U))));
            tracep->chgBit(oldp+2757,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2758,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 5U))));
            tracep->chgBit(oldp+2759,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2760,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 6U))));
            tracep->chgBit(oldp+2761,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2762,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [2U] >> 7U))));
            tracep->chgBit(oldp+2763,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [2U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2764,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [3U]),8);
            tracep->chgBit(oldp+2765,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2766,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2767,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [3U]))),8);
            tracep->chgBit(oldp+2768,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2769,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [3U])));
            tracep->chgBit(oldp+2770,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U]))));
            tracep->chgBit(oldp+2771,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+2772,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2773,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 2U))));
            tracep->chgBit(oldp+2774,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2775,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 3U))));
            tracep->chgBit(oldp+2776,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2777,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 4U))));
            tracep->chgBit(oldp+2778,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2779,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 5U))));
            tracep->chgBit(oldp+2780,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2781,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 6U))));
            tracep->chgBit(oldp+2782,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2783,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [3U] >> 7U))));
            tracep->chgBit(oldp+2784,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [3U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2785,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [4U]),8);
            tracep->chgBit(oldp+2786,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2787,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2788,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [4U]))),8);
            tracep->chgBit(oldp+2789,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2790,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [4U])));
            tracep->chgBit(oldp+2791,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U]))));
            tracep->chgBit(oldp+2792,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+2793,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2794,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 2U))));
            tracep->chgBit(oldp+2795,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2796,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 3U))));
            tracep->chgBit(oldp+2797,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2798,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 4U))));
            tracep->chgBit(oldp+2799,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2800,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 5U))));
            tracep->chgBit(oldp+2801,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2802,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 6U))));
            tracep->chgBit(oldp+2803,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2804,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [4U] >> 7U))));
            tracep->chgBit(oldp+2805,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [4U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2806,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [5U]),8);
            tracep->chgBit(oldp+2807,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2808,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2809,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [5U]))),8);
            tracep->chgBit(oldp+2810,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2811,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [5U])));
            tracep->chgBit(oldp+2812,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U]))));
            tracep->chgBit(oldp+2813,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+2814,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2815,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 2U))));
            tracep->chgBit(oldp+2816,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2817,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 3U))));
            tracep->chgBit(oldp+2818,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2819,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 4U))));
            tracep->chgBit(oldp+2820,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2821,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 5U))));
            tracep->chgBit(oldp+2822,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2823,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 6U))));
            tracep->chgBit(oldp+2824,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2825,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [5U] >> 7U))));
            tracep->chgBit(oldp+2826,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [5U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2827,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [6U]),8);
            tracep->chgBit(oldp+2828,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2829,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2830,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [6U]))),8);
            tracep->chgBit(oldp+2831,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2832,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [6U])));
            tracep->chgBit(oldp+2833,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U]))));
            tracep->chgBit(oldp+2834,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+2835,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2836,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 2U))));
            tracep->chgBit(oldp+2837,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2838,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 3U))));
            tracep->chgBit(oldp+2839,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2840,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 4U))));
            tracep->chgBit(oldp+2841,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2842,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 5U))));
            tracep->chgBit(oldp+2843,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2844,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 6U))));
            tracep->chgBit(oldp+2845,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2846,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [6U] >> 7U))));
            tracep->chgBit(oldp+2847,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [6U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2848,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [7U]),8);
            tracep->chgBit(oldp+2849,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2850,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2851,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [7U]))),8);
            tracep->chgBit(oldp+2852,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2853,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [7U])));
            tracep->chgBit(oldp+2854,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U]))));
            tracep->chgBit(oldp+2855,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+2856,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2857,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 2U))));
            tracep->chgBit(oldp+2858,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2859,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 3U))));
            tracep->chgBit(oldp+2860,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2861,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 4U))));
            tracep->chgBit(oldp+2862,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2863,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 5U))));
            tracep->chgBit(oldp+2864,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2865,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 6U))));
            tracep->chgBit(oldp+2866,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2867,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [7U] >> 7U))));
            tracep->chgBit(oldp+2868,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [7U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2869,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [8U]),8);
            tracep->chgBit(oldp+2870,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2871,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2872,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [8U]))),8);
            tracep->chgBit(oldp+2873,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2874,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [8U])));
            tracep->chgBit(oldp+2875,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U]))));
            tracep->chgBit(oldp+2876,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+2877,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2878,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 2U))));
            tracep->chgBit(oldp+2879,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2880,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 3U))));
            tracep->chgBit(oldp+2881,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2882,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 4U))));
            tracep->chgBit(oldp+2883,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2884,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 5U))));
            tracep->chgBit(oldp+2885,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2886,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 6U))));
            tracep->chgBit(oldp+2887,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2888,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [8U] >> 7U))));
            tracep->chgBit(oldp+2889,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [8U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2890,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [9U]),8);
            tracep->chgBit(oldp+2891,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2892,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2893,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [9U]))),8);
            tracep->chgBit(oldp+2894,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2895,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [9U])));
            tracep->chgBit(oldp+2896,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U]))));
            tracep->chgBit(oldp+2897,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+2898,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2899,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 2U))));
            tracep->chgBit(oldp+2900,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2901,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 3U))));
            tracep->chgBit(oldp+2902,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2903,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 4U))));
            tracep->chgBit(oldp+2904,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2905,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 5U))));
            tracep->chgBit(oldp+2906,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2907,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 6U))));
            tracep->chgBit(oldp+2908,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2909,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [9U] >> 7U))));
            tracep->chgBit(oldp+2910,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [9U] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2911,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0xaU]),8);
            tracep->chgBit(oldp+2912,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2913,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2914,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0xaU]))),8);
            tracep->chgBit(oldp+2915,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2916,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0xaU])));
            tracep->chgBit(oldp+2917,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU]))));
            tracep->chgBit(oldp+2918,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2919,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2920,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2921,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2922,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2923,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2924,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2925,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2926,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2927,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2928,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2929,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2930,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xaU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2931,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xaU] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2932,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0xbU]),8);
            tracep->chgBit(oldp+2933,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2934,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2935,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0xbU]))),8);
            tracep->chgBit(oldp+2936,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2937,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0xbU])));
            tracep->chgBit(oldp+2938,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU]))));
            tracep->chgBit(oldp+2939,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2940,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2941,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2942,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2943,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2944,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2945,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2946,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2947,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2948,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2949,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2950,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2951,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xbU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2952,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xbU] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2953,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0xcU]),8);
            tracep->chgBit(oldp+2954,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2955,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2956,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0xcU]))),8);
            tracep->chgBit(oldp+2957,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2958,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0xcU])));
            tracep->chgBit(oldp+2959,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU]))));
            tracep->chgBit(oldp+2960,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2961,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2962,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2963,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2964,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2965,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2966,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2967,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2968,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2969,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2970,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2971,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2972,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xcU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2973,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xcU] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2974,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0xdU]),8);
            tracep->chgBit(oldp+2975,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2976,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2977,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0xdU]))),8);
            tracep->chgBit(oldp+2978,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+2979,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0xdU])));
            tracep->chgBit(oldp+2980,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU]))));
            tracep->chgBit(oldp+2981,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2982,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2983,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 2U))));
            tracep->chgBit(oldp+2984,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2985,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 3U))));
            tracep->chgBit(oldp+2986,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+2987,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 4U))));
            tracep->chgBit(oldp+2988,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2989,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 5U))));
            tracep->chgBit(oldp+2990,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+2991,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 6U))));
            tracep->chgBit(oldp+2992,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+2993,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xdU] 
                                             >> 7U))));
            tracep->chgBit(oldp+2994,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xdU] 
                                                >> 7U)))));
            tracep->chgCData(oldp+2995,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0xeU]),8);
            tracep->chgBit(oldp+2996,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2997,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+2998,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0xeU]))),8);
            tracep->chgBit(oldp+2999,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+3000,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0xeU])));
            tracep->chgBit(oldp+3001,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU]))));
            tracep->chgBit(oldp+3002,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+3003,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+3004,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 2U))));
            tracep->chgBit(oldp+3005,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+3006,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 3U))));
            tracep->chgBit(oldp+3007,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+3008,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 4U))));
            tracep->chgBit(oldp+3009,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+3010,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 5U))));
            tracep->chgBit(oldp+3011,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+3012,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 6U))));
            tracep->chgBit(oldp+3013,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+3014,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xeU] 
                                             >> 7U))));
            tracep->chgBit(oldp+3015,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xeU] 
                                                >> 7U)))));
            tracep->chgCData(oldp+3016,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                        [0xfU]),8);
            tracep->chgBit(oldp+3017,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+3018,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated));
            tracep->chgCData(oldp+3019,((0xffU & (~ 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                  [0xfU]))),8);
            tracep->chgBit(oldp+3020,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+3021,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                       [0xfU])));
            tracep->chgBit(oldp+3022,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU]))));
            tracep->chgBit(oldp+3023,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+3024,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+3025,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 2U))));
            tracep->chgBit(oldp+3026,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+3027,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 3U))));
            tracep->chgBit(oldp+3028,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+3029,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 4U))));
            tracep->chgBit(oldp+3030,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+3031,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 5U))));
            tracep->chgBit(oldp+3032,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+3033,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 6U))));
            tracep->chgBit(oldp+3034,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+3035,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                             [0xfU] 
                                             >> 7U))));
            tracep->chgBit(oldp+3036,((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                                [0xfU] 
                                                >> 7U)))));
            tracep->chgQData(oldp+3037,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__reloc_address),34);
            tracep->chgSData(oldp+3039,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_gt),16);
            tracep->chgSData(oldp+3040,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_lt),16);
            tracep->chgSData(oldp+3041,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_eq),16);
            tracep->chgSData(oldp+3042,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_all),16);
            tracep->chgSData(oldp+3043,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_mml_perm_check),16);
            tracep->chgSData(oldp+3044,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault_all),16);
            tracep->chgBit(oldp+3045,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault));
            tracep->chgCData(oldp+3046,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__reloc_offset_pot),5);
            tracep->chgCData(oldp+3047,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__reloc_offset_sub),3);
            tracep->chgQData(oldp+3048,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__reloc_address),34);
            tracep->chgSData(oldp+3050,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_gt),16);
            tracep->chgSData(oldp+3051,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_lt),16);
            tracep->chgSData(oldp+3052,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_eq),16);
            tracep->chgSData(oldp+3053,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_match_all),16);
            tracep->chgSData(oldp+3054,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_basic_perm_check),16);
            tracep->chgSData(oldp+3055,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__region_mml_perm_check),16);
            tracep->chgSData(oldp+3056,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault_all),16);
            tracep->chgBit(oldp+3057,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault));
            tracep->chgCData(oldp+3058,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__reloc_offset_pot),5);
            tracep->chgCData(oldp+3059,(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__reloc_offset_sub),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgIData(oldp+3060,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_rdata[0]),32);
            tracep->chgIData(oldp+3061,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_rdata[1]),32);
            tracep->chgIData(oldp+3062,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata[0]),32);
            tracep->chgIData(oldp+3063,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata[1]),32);
            tracep->chgIData(oldp+3064,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata[2]),32);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [1U] | vlTOPp->__Vm_traceActivity
                          [6U]) | vlTOPp->__Vm_traceActivity
                         [7U]))) {
            tracep->chgIData(oldp+3065,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[0]),32);
            tracep->chgIData(oldp+3066,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[1]),32);
            tracep->chgIData(oldp+3067,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[2]),32);
            tracep->chgIData(oldp+3068,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[3]),32);
            tracep->chgIData(oldp+3069,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[4]),32);
            tracep->chgIData(oldp+3070,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[5]),32);
            tracep->chgIData(oldp+3071,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[6]),32);
            tracep->chgIData(oldp+3072,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[7]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [7U]))) {
            tracep->chgBit(oldp+3073,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_req[0]));
            tracep->chgBit(oldp+3074,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_req[1]));
            tracep->chgIData(oldp+3075,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_addr[0]),32);
            tracep->chgIData(oldp+3076,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_addr[1]),32);
            tracep->chgBit(oldp+3077,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_we[0]));
            tracep->chgBit(oldp+3078,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_we[1]));
            tracep->chgCData(oldp+3079,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_be[0]),4);
            tracep->chgCData(oldp+3080,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_be[1]),4);
            tracep->chgIData(oldp+3081,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_wdata[0]),32);
            tracep->chgIData(oldp+3082,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_wdata[1]),32);
            tracep->chgBit(oldp+3083,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[0]));
            tracep->chgBit(oldp+3084,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[1]));
            tracep->chgBit(oldp+3085,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[2]));
            tracep->chgBit(oldp+3086,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[3]));
            tracep->chgBit(oldp+3087,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[4]));
            tracep->chgBit(oldp+3088,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[5]));
            tracep->chgBit(oldp+3089,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[6]));
            tracep->chgBit(oldp+3090,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[7]));
            tracep->chgIData(oldp+3091,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__core_instr_sel_dbg)
                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_rdata
                                          : vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i
                                         [1U])),32);
            tracep->chgBit(oldp+3092,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                       & (0x7fU == 
                                          (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))));
            tracep->chgBit(oldp+3093,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (0x7fU == 
                                          (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
            tracep->chgBit(oldp+3094,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (0x7eU == 
                                          (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
            tracep->chgQData(oldp+3095,((((QData)((IData)(
                                                          (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
                                                            & (4U 
                                                               == 
                                                               (0x3ffU 
                                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                                [4U])))
                                                            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata
                                                            : (IData)(
                                                                      ((1ULL 
                                                                        + vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q) 
                                                                       >> 0x20U))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
                                                             & (0U 
                                                                == 
                                                                (0x3ffU 
                                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                                 [4U])))
                                                             ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata
                                                             : 
                                                            ((IData)(1U) 
                                                             + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q))))))),64);
            tracep->chgQData(oldp+3097,((((QData)((IData)(
                                                          ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_we)
                                                            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata
                                                            : (IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                                                       >> 0x20U))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_we)
                                                             ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata
                                                             : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q)))))),64);
            tracep->chgBit(oldp+3099,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                         >= vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__interrupt_q)) 
                                       & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_we) 
                                             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_we))))));
            tracep->chgBit(oldp+3100,((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned)))));
            tracep->chgBit(oldp+3101,((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+3102,(((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid))));
            tracep->chgSData(oldp+3103,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp),15);
            tracep->chgBit(oldp+3104,(((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                          >> 0x1bU) 
                                         & (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__instr_valid))));
            tracep->chgBit(oldp+3105,((((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q))
                                         ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid) 
                                            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                                         : ((1U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q)) 
                                            | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid) 
                                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans_ready)))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__lsu_en_gated))));
            tracep->chgBit(oldp+3106,(((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp_valid))));
            tracep->chgBit(oldp+3107,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                         >> 2U) & (~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_valid_q)
                                                     ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_valid_q)
                                                     : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_valid_1)))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__instr_valid))));
            tracep->chgBit(oldp+3108,((1U & ((((IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                        >> 0x29U)) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                              | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))))) 
                                             | ((((IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                           >> 0x29U)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                                 | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q)))))) 
                                                | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q))))) 
                                                   | ((IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                               >> 0x29U)) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)))))))))));
            tracep->chgBit(oldp+3109,((1U & (((IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                       >> 0x29U)) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                             | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))))))));
            tracep->chgBit(oldp+3110,((1U & ((((IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                        >> 0x29U)) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                              | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q)))))) 
                                             | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q))))) 
                                                | ((IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                            >> 0x29U)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q))))))))));
            tracep->chgWData(oldp+3111,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl),129);
            tracep->chgBit(oldp+3116,((1U & ((IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                      >> 0x29U)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))))));
            tracep->chgBit(oldp+3117,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))))));
            tracep->chgBit(oldp+3118,((1U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                 >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                              ? ((0x7dU 
                                                  >= 
                                                  (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (3U 
                                                     & (((IData)(9U) 
                                                         + 
                                                         ((IData)(0x2aU) 
                                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        ((IData)(0x2aU) 
                                                         * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                              : (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                         >> 9U))))));
            tracep->chgCData(oldp+3119,((3U & (((2U 
                                                 >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                   >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                                ? (
                                                   (0x7dU 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(0x2aU) 
                                                        * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x2aU) 
                                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      ((IData)(1U) 
                                                       + 
                                                       (3U 
                                                        & (((IData)(0x2aU) 
                                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x2aU) 
                                                           * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x2aU) 
                                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x2aU) 
                                                           * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                    : 0U)
                                                : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o)))),2);
            tracep->chgIData(oldp+3120,((((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                             >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                                          ? ((((0x7dU 
                                                >= 
                                                (0x7fU 
                                                 & ((IData)(0xaU) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                ? (0xffffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + 
                                                            ((IData)(0x2aU) 
                                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        ((IData)(1U) 
                                                         + 
                                                         (3U 
                                                          & (((IData)(0xaU) 
                                                              + 
                                                              ((IData)(0x2aU) 
                                                               * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                             >> 5U)))] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0xaU) 
                                                             + 
                                                             ((IData)(0x2aU) 
                                                              * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                         (3U 
                                                          & (((IData)(0xaU) 
                                                              + 
                                                              ((IData)(0x2aU) 
                                                               * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0xaU) 
                                                             + 
                                                             ((IData)(0x2aU) 
                                                              * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                                : 0U) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                   >> 0x10U)))
                                          : ((0xffff0000U 
                                              & ((IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                          >> 0xaU)) 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                   >> 0x10U))))),32);
            tracep->chgBit(oldp+3121,((((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                        & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                           >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                       | (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                           & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                              >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))));
            tracep->chgBit(oldp+3122,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i)) 
                                        & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res)) 
                                           != (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                          >> 2U))))) 
                                       | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i)) 
                                          & ((1U & 
                                              ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res) 
                                               >> 4U)) 
                                             != (1U 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                            >> 6U))))))));
            tracep->chgBit(oldp+3123,((1U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                 >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                              ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0) 
                                                 | ((0x7dU 
                                                     >= 
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x2aU) 
                                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(3U) 
                                                            + 
                                                            ((IData)(0x2aU) 
                                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(3U) 
                                                           + 
                                                           ((IData)(0x2aU) 
                                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                                              : (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                         >> 3U))))));
            tracep->chgBit(oldp+3124,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i)) 
                                       & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_0_i__DOT__rchk_res)) 
                                          != (0xfU 
                                              & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                         >> 2U)))))));
            tracep->chgBit(oldp+3125,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                         >> 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i)) 
                                       & ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_0_i__DOT__rchk_res) 
                                                 >> 4U)) 
                                          != (1U & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                            >> 6U)))))));
            tracep->chgBit(oldp+3126,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i)) 
                                       & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res)) 
                                          != (0xfU 
                                              & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                         >> 2U)))))));
            tracep->chgBit(oldp+3127,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                         >> 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i)) 
                                       & ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res) 
                                                 >> 4U)) 
                                          != (1U & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                            >> 6U)))))));
            tracep->chgCData(oldp+3128,((3U & ((1U 
                                                & ((IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                            >> 0x35U)) 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                              >> 0x2bU))))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                               >> 0x29U)))
                                                    ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q) 
                                                    - (IData)(1U))
                                                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))),2);
            tracep->chgBit(oldp+3129,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+3130,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                        >> 4U) & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_set_q) 
                                                   | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__if_id_q)) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__check_addr 
                                                     != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
            tracep->chgCData(oldp+3131,(((1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en)) 
                                                 | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued))) 
                                                | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U]))
                                          ? 0U : (0x7fU 
                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q))
                                                      : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q))))),7);
            tracep->chgBit(oldp+3132,((1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en)) 
                                              | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued))) 
                                             | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U]))));
            tracep->chgCData(oldp+3133,((3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                  >> 1U)))),2);
            tracep->chgCData(oldp+3134,((0x1fU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                     >> 9U)))),5);
            tracep->chgCData(oldp+3135,((0x1fU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                     >> 0x11U)))),5);
            tracep->chgCData(oldp+3136,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                           >> 0x19U)) 
                                         & (3U | (0x3cU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                      << 0x11U) 
                                                     | (0x1fffcU 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                           >> 0xfU))))))),6);
            tracep->chgBit(oldp+3137,((1U & ((~ (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                                  >> 2U) 
                                                 | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                     >> 0x17U) 
                                                    & (~ 
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                        >> 1U))))) 
                                             & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                        >> 0x12U))))));
            tracep->chgIData(oldp+3138,(((0U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x25U))))
                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_a_fw
                                          : ((1U == 
                                              (3U & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x25U))))
                                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                                    >> 0x16U))
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                              >> 0x25U))))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                              >> 0x20U)))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                       << 0xaU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                         >> 0x16U))))
                                                  : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_a_fw)))),32);
            tracep->chgIData(oldp+3139,(((0U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x23U))))
                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_b_fw
                                          : ((1U == 
                                              (3U & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x23U))))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x1fU)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                              >> 0x1eU)))
                                                   ? 
                                                  ((0x4000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                                    ? 2U
                                                    : 4U)
                                                   : 
                                                  (0xfffff000U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                       << 0x19U) 
                                                      | (0x1fff000U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                              >> 0x1eU)))
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                                      >> 6U)))) 
                                                       << 0xcU)) 
                                                   | ((0xfe0U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                             << 0x12U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                               >> 0xeU)))))
                                                   : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__imm_i_type))
                                              : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_b_fw))),32);
            tracep->chgIData(oldp+3140,(((0x400U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                              << 0xaU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                >> 0x16U))
                                          : ((0x400U 
                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                                              ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                             [0U] : 
                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                             [0U]))),32);
            tracep->chgIData(oldp+3141,(((1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                        >> 0x20U)))
                                          ? 0U : (0x1fU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                      << 0xaU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                        >> 0x16U))))),32);
            tracep->chgIData(oldp+3142,(((1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                        >> 0x1fU)))
                                          ? ((1U & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x1eU)))
                                              ? ((0x4000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                                  ? 2U
                                                  : 4U)
                                              : (0xfffff000U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                     << 0x19U) 
                                                    | (0x1fff000U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                          >> 7U)))))
                                          : ((1U & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x1eU)))
                                              ? ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                                    >> 6U)))) 
                                                     << 0xcU)) 
                                                 | ((0xfe0U 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                           << 0x12U) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                             >> 0xeU)))))
                                              : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__imm_i_type))),32);
            tracep->chgBit(oldp+3143,((1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                    >> 4U))) 
                                             | (0U 
                                                == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt))))));
            tracep->chgBit(oldp+3144,((1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                                 >> 2U)) 
                                             & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                        >> 8U))))));
            tracep->chgBit(oldp+3145,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                        >> 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op))));
            tracep->chgBit(oldp+3146,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                             >> 2U))));
            tracep->chgCData(oldp+3147,((0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])),5);
            tracep->chgBit(oldp+3148,((1U & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
            tracep->chgCData(oldp+3149,((0x3fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                  >> 0x1aU))),6);
            tracep->chgIData(oldp+3150,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes),32);
            tracep->chgWData(oldp+3151,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes),160);
            tracep->chgWData(oldp+3156,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum),192);
            tracep->chgBit(oldp+3162,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                             >> 1U))));
            tracep->chgIData(oldp+3163,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
                                          ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                              ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                              : (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                                  << 0x1fU) 
                                                 | (0x7fffffffU 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                       >> 1U))))
                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q)),32);
            tracep->chgIData(oldp+3164,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                          ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                          : (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                              << 0x1fU) 
                                             | (0x7fffffffU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                   >> 1U))))),32);
            tracep->chgCData(oldp+3165,((0x3fU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                                   ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)
                                                   : 
                                                  ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt)
                                                    ? 
                                                   (((IData)(0x20U) 
                                                     - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((0U 
                                                     != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))
                                                     ? 
                                                    ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                                                     - (IData)(1U))
                                                     : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))),6);
            tracep->chgBit(oldp+3166,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid))));
            tracep->chgBit(oldp+3167,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__misaligned_halfword))));
            tracep->chgBit(oldp+3168,(((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
                                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid))));
            tracep->chgBit(oldp+3169,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q)))))));
            tracep->chgBit(oldp+3170,((1U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q))))) 
                                             | ((IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                         >> 0x29U)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)))))))));
            tracep->chgBit(oldp+3171,((1U & ((IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                      >> 0x29U)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))))));
            tracep->chgQData(oldp+3172,(((((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                           & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                          | ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                             & (3U 
                                                == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                          ? (((QData)((IData)(
                                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                << 0x16U) 
                                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                  >> 0xaU)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_q)))
                                          : (((QData)((IData)(
                                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                << 0x16U) 
                                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                  >> 0xaU)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                 << 0x16U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                   >> 0xaU))))))),64);
            tracep->chgCData(oldp+3174,((3U & ((1U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                    >> 0x1aU) 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                              >> 0x2bU))))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                               >> 0x29U)))
                                                    ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q) 
                                                    - (IData)(1U))
                                                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))),2);
            tracep->chgBit(oldp+3175,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_valid_q)
                                        ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_valid_q)
                                        : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_valid_1))));
            tracep->chgBit(oldp+3176,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & (0x320U == 
                                          (0xfffU & 
                                           ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                             << 0x1cU) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                               >> 4U)))))));
            tracep->chgBit(oldp+3177,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__lsu_en_gated) 
                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    >> 0x18U))) 
                                          | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                              [0U] 
                                              >> 1U) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                >> 0x18U))))));
            tracep->chgBit(oldp+3178,(((0U == (0xfU 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                  [0U] 
                                                  >> 7U)))
                                        ? (((0x3fffffffU 
                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                 << 5U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x1bU))) 
                                            == (0x3fffffffU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                   [0U] 
                                                   >> 2U))) 
                                           & (0U != 
                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                              [0U]))
                                        : ((2U == (0xfU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                      [0U] 
                                                      >> 7U)))
                                            ? (((0xfffffffcU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                     << 7U) 
                                                    | (0x7cU 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                          >> 0x19U)))) 
                                                | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                                               >= vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])
                                            : (((0xfffffffcU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                     << 7U) 
                                                    | (0x7cU 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                          >> 0x19U)))) 
                                                | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                                               < vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])))));
            tracep->chgBit(oldp+3179,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                         [0U] >> 6U) 
                                        & (3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                       | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 3U) 
                                          & (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))))));
            tracep->chgBit(oldp+3180,((((~ (IData)(
                                                   (0U 
                                                    != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_n))) 
                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_if)) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we)))));
            tracep->chgBit(oldp+3181,((((~ (IData)(
                                                   (0U 
                                                    != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_n))) 
                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id)) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed1_we)))));
            tracep->chgBit(oldp+3182,((((~ (IData)(
                                                   (0U 
                                                    != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_n))) 
                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id)) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed2_we)))));
            tracep->chgBit(oldp+3183,((1U & (((((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                      << 8U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                        >> 0x18U)))) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                   >> 1U)) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                  >> 0xfU)) 
                                              | (0U 
                                                 != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status))) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                >> 0x10U)))));
            tracep->chgCData(oldp+3184,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                          ? 2U : ((
                                                   (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                        >> 0xfU)) 
                                                    & (3U 
                                                       == 
                                                       (3U 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                            << 0x13U) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                              >> 0xdU))))) 
                                                   & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                                   ? 1U
                                                   : 
                                                  (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                         >> 0xcU)) 
                                                     & (0U 
                                                        == 
                                                        (3U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                               >> 0xdU))))) 
                                                    & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))
                                                     ? 1U
                                                     : 0U))))),3);
            tracep->chgBit(oldp+3185,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id) 
                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)) 
                                        & (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                               >> 7U) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                 >> 1U)) 
                                             & (~ (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                   >> 1U))) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                               >> 6U)) 
                                           | ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                 >> 0xcU) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                   >> 6U)) 
                                               & (~ 
                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                   >> 1U))) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                 >> 0x10U)))) 
                                       & (~ ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                >> 7U) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                  >> 1U)) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                 >> 1U)) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                >> 6U))))));
            tracep->chgBit(oldp+3186,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id) 
                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)) 
                                       & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                             >> 0x1dU) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                               >> 0x1fU)) 
                                           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                 >> 1U))) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                             >> 6U)))));
            tracep->chgBit(oldp+3187,((1U & ((IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 0x11U)) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+3188,((1U & (((((IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                         >> 0x11U)) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                   >> 7U)) 
                                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id)) 
                                              | ((IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                          >> 1U)) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                    >> 7U))) 
                                             | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                 >> 0x17U) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+3189,((1U & ((IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 1U)) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                >> 7U)))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [1U] | vlTOPp->__Vm_traceActivity
                          [0xeU]) | vlTOPp->__Vm_traceActivity
                         [0x3cU]))) {
            tracep->chgBit(oldp+3190,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+3191,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                             >> 0x15U))));
            tracep->chgWData(oldp+3192,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm),209);
            tracep->chgBit(oldp+3199,(((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                          >> 4U) & 
                                         (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_set_q) 
                                           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__if_id_q)) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__check_addr 
                                             != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))) 
                                        | (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                 >> 4U)) 
                                             & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q) 
                                                & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                    >> 0x1aU)))) 
                                            | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q) 
                                                  & (~ 
                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                       >> 0x17U) 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex)))))) 
                                           | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                   >> 4U)) 
                                               & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q)) 
                                                  & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                       >> 0x1aU) 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                         >> 7U)) 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)))) 
                                              | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                     >> 4U)) 
                                                 & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q)) 
                                                    & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                          >> 0x17U) 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                            >> 6U)) 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                           >> 2U)) 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex))))))) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__compare_enable_q))));
            tracep->chgBit(oldp+3200,(((((5U == (0xfU 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                    [0U] 
                                                    >> 0x1cU))) 
                                         & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                              [0U] 
                                              >> 9U) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                     << 0x13U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                       >> 0xdU))))) 
                                            | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                [0U] 
                                                >> 6U) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                       << 0x13U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                         >> 0xdU))))))) 
                                        & (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                                           [0U])) & 
                                       (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                           >> 0xfU)))));
            tracep->chgBit(oldp+3201,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                             >> 7U))));
            tracep->chgSData(oldp+3202,((0x3ffU & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                                    << 3U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                                      >> 0x1dU)))),10);
            tracep->chgCData(oldp+3203,((0xffU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                                   << 0xbU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                                     >> 0x15U)))),8);
            tracep->chgCData(oldp+3204,((3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                                  >> 0x13U)))),2);
            tracep->chgBit(oldp+3205,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3206,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3207,((1U & ((((0U 
                                                != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid)) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                 >> 0x10U)) 
                                             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_busy)))));
            tracep->chgBit(oldp+3208,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                              ? (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                                                  & (~ 
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                      >> 0x14U))) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                    >> 0xfU))
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)))));
            tracep->chgBit(oldp+3209,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+3210,(((0x8000U & 
                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])
                                          ? 0U : (7U 
                                                  & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                                      + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                                                     - 
                                                     ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                                                       ? 1U
                                                       : 0U))))),3);
            tracep->chgBit(oldp+3211,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                           >> 4U)) 
                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q) 
                                          & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                >> 0x1aU))))));
            tracep->chgBit(oldp+3212,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                           >> 4U)) 
                                       & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q)) 
                                          & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                               >> 0x1aU) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                 >> 7U)) 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op))))));
            tracep->chgBit(oldp+3213,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                           >> 4U)) 
                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q) 
                                          & (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                 >> 0x17U) 
                                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex)))))));
            tracep->chgBit(oldp+3214,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                           >> 4U)) 
                                       & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q)) 
                                          & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                >> 0x17U) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                  >> 6U)) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                 >> 2U)) 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex))))));
            tracep->chgBit(oldp+3215,((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                             >> 4U)) 
                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q) 
                                            & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                  >> 0x1aU)))) 
                                        | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                               >> 4U)) 
                                           & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q) 
                                              & (~ 
                                                 ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                   >> 0x17U) 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex)))))) 
                                       | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                               >> 4U)) 
                                           & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q)) 
                                              & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                   >> 0x1aU) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                     >> 7U)) 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)))) 
                                          | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                 >> 4U)) 
                                             & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q)) 
                                                & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                      >> 0x17U) 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                        >> 6U)) 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                       >> 2U)) 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex))))))));
            tracep->chgBit(oldp+3216,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                            >> 4U)) 
                                        & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q) 
                                           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                 >> 0x1aU)))) 
                                       | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                              >> 4U)) 
                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q) 
                                             & (~ (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                    >> 0x17U) 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex))))))));
            tracep->chgBit(oldp+3217,(((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                            >> 4U)) 
                                        & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q)) 
                                           & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                >> 0x1aU) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                  >> 7U)) 
                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)))) 
                                       | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q) 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                              >> 4U)) 
                                          & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q)) 
                                             & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                   >> 0x17U) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                     >> 6U)) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                    >> 2U)) 
                                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex)))))));
            tracep->chgBit(oldp+3218,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3219,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3220,((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                               >> 7U) 
                                              & (~ 
                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                  >> 0xeU))) 
                                             & (~ (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+3221,((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                               >> 0x10U) 
                                              & (~ 
                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                  >> 0xcU))) 
                                             & (~ (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+3222,(((((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
                                             & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
                                            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))) 
                                           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
                                          & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                >> 0x17U))) 
                                         & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                               >> 0xcU))) 
                                        & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                              >> 0x11U))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                             >> 0x10U)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+3223,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d),2);
            tracep->chgCData(oldp+3224,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q),2);
            tracep->chgIData(oldp+3225,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d),32);
            tracep->chgIData(oldp+3226,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q),32);
            tracep->chgBit(oldp+3227,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q))));
            tracep->chgQData(oldp+3228,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req),41);
            tracep->chgBit(oldp+3230,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
            tracep->chgBit(oldp+3231,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid));
            tracep->chgCData(oldp+3232,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q),3);
            tracep->chgQData(oldp+3233,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d),41);
            tracep->chgQData(oldp+3235,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q),41);
            tracep->chgCData(oldp+3237,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d),7);
            tracep->chgCData(oldp+3238,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q),7);
            tracep->chgIData(oldp+3239,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q),32);
            tracep->chgBit(oldp+3240,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy));
            tracep->chgBit(oldp+3241,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q)));
            tracep->chgBit(oldp+3242,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                              ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                              : ((1U 
                                                  == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q
                                                   : 
                                                  ((0x11U 
                                                    == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                    ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)
                                                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
            tracep->chgCData(oldp+3243,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                          ? 4U : (7U 
                                                  & (((1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q) 
                                                          >> 2U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q) 
                                                          >> 2U)))
                                                      ? 
                                                     ((3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q)))
                                                      : 
                                                     (((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q))) 
                                                      + 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q))))))),3);
            tracep->chgCData(oldp+3244,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q),3);
            tracep->chgCData(oldp+3245,((7U & ((IData)(1U) 
                                               + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)))),3);
            tracep->chgCData(oldp+3246,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_combi),3);
            tracep->chgCData(oldp+3247,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
            tracep->chgCData(oldp+3248,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q),3);
            tracep->chgBit(oldp+3249,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
            tracep->chgBit(oldp+3250,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+3251,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+3252,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q))),2);
            tracep->chgCData(oldp+3253,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q))),2);
            tracep->chgCData(oldp+3254,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
            tracep->chgCData(oldp+3255,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                          == (4U ^ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))
                                          ? 4U : (7U 
                                                  & (((1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                          >> 2U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q) 
                                                          >> 2U)))
                                                      ? 
                                                     ((3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))
                                                      : 
                                                     (((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))) 
                                                      + 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
            tracep->chgCData(oldp+3256,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q),3);
            tracep->chgCData(oldp+3257,((7U & ((IData)(1U) 
                                               + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))),3);
            tracep->chgCData(oldp+3258,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
            tracep->chgCData(oldp+3259,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
            tracep->chgBit(oldp+3260,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                       == (4U ^ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))));
            tracep->chgBit(oldp+3261,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+3262,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                             >> 2U))));
            tracep->chgCData(oldp+3263,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))),2);
            tracep->chgCData(oldp+3264,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
            tracep->chgCData(oldp+3265,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+3266,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3267,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3268,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3269,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3270,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
            tracep->chgBit(oldp+3271,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
            tracep->chgBit(oldp+3272,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
            tracep->chgBit(oldp+3273,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
            tracep->chgBit(oldp+3274,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3275,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3276,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3277,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+3278,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3279,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3280,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3281,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3282,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3283,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3284,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3285,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3286,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3287,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3288,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3289,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3290,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3291,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3292,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3293,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3294,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3295,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3296,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3297,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3298,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3299,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3300,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3301,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3302,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3303,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3304,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3305,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3306,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3307,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3308,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3309,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3310,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3311,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3312,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3313,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3314,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3315,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3316,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3317,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3318,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3319,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3320,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3321,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3322,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3323,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3324,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3325,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3326,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3327,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3328,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3329,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3330,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3331,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3332,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3333,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3334,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3335,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3336,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3337,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3338,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3339,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+3340,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3341,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3342,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3343,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3344,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3345,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3346,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3347,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3348,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3349,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3350,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3351,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3352,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3353,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3354,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3355,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3356,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3357,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3358,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3359,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3360,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3361,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
            tracep->chgBit(oldp+3362,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
            tracep->chgBit(oldp+3363,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+3364,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[0]));
            tracep->chgBit(oldp+3365,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[1]));
            tracep->chgBit(oldp+3366,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[2]));
            tracep->chgBit(oldp+3367,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[3]));
            tracep->chgBit(oldp+3368,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[4]));
            tracep->chgBit(oldp+3369,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[5]));
            tracep->chgBit(oldp+3370,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[6]));
            tracep->chgBit(oldp+3371,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_err[7]));
            tracep->chgBit(oldp+3372,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[0]));
            tracep->chgBit(oldp+3373,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[1]));
            tracep->chgBit(oldp+3374,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[2]));
            tracep->chgBit(oldp+3375,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[3]));
            tracep->chgBit(oldp+3376,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[4]));
            tracep->chgBit(oldp+3377,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[5]));
            tracep->chgBit(oldp+3378,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[6]));
            tracep->chgBit(oldp+3379,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_err_i[7]));
            tracep->chgIData(oldp+3380,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT____Vcellout__tcm__douta_o),32);
            tracep->chgIData(oldp+3381,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT____Vcellout__tcm__doutb_o),32);
            tracep->chgIData(oldp+3382,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT____Vcellout__tcm__douta_o),32);
            tracep->chgIData(oldp+3383,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT____Vcellout__tcm__doutb_o),32);
            tracep->chgWData(oldp+3384,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage),1024);
            tracep->chgWData(oldp+3416,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage),1024);
            tracep->chgWData(oldp+3448,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage),1016);
            tracep->chgIData(oldp+3480,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__rdata_q),32);
            tracep->chgBit(oldp+3481,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__error_q));
            tracep->chgQData(oldp+3482,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage),64);
            tracep->chgQData(oldp+3484,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata),64);
            tracep->chgCData(oldp+3486,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
            tracep->chgQData(oldp+3487,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
            tracep->chgQData(oldp+3489,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
            tracep->chgQData(oldp+3491,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
            tracep->chgQData(oldp+3493,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [6U] | vlTOPp->__Vm_traceActivity
                         [7U]))) {
            tracep->chgCData(oldp+3495,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                          ? 0U : (0xffU 
                                                  & (((0U 
                                                       == 
                                                       (0x18U 
                                                        & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 3U)))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            >> 2U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x18U 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 3U))))) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            >> 2U))] 
                                                        >> 
                                                        (0x18U 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 3U))))))),8);
            tracep->chgCData(oldp+3496,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                          ? 0U : (0xffU 
                                                  & (((0U 
                                                       == 
                                                       (0x18U 
                                                        & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 3U)))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            >> 2U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x18U 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 3U))))) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            >> 2U))] 
                                                        >> 
                                                        (0x18U 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 3U))))))),8);
            tracep->chgCData(oldp+3497,((0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U))))) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))))),8);
            tracep->chgCData(oldp+3498,((0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U))))) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))))),8);
            tracep->chgCData(oldp+3499,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                          ? 0U : ((0x3f7U 
                                                   >= 
                                                   (0x3f8U 
                                                    & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x18U 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 3U)))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                        ((IData)(1U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                             >> 2U)))] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x18U 
                                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                             << 3U))))) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                         (0x1fU 
                                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                             >> 2U))] 
                                                         >> 
                                                         (0x18U 
                                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                             << 3U)))))
                                                   : 0U))),8);
            tracep->chgCData(oldp+3500,(((0x3f7U >= 
                                          (0x3f8U & 
                                           ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            << 3U)))
                                          ? (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))
                                          : 0U)),8);
            tracep->chgIData(oldp+3501,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                          ? 0U : (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                          >> 
                                                          (0x20U 
                                                           & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                              << 5U)))))),32);
            tracep->chgIData(oldp+3502,((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 
                                                 (0x20U 
                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 5U))))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+3503,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__interrupt_q));
            tracep->chgBit(oldp+3504,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rvalid));
            tracep->chgBit(oldp+3505,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_err[0]));
            tracep->chgBit(oldp+3506,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_err[1]));
            tracep->chgBit(oldp+3507,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__core_instr_rvalid));
            tracep->chgBit(oldp+3508,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__core_instr_sel_dbg));
            tracep->chgBit(oldp+3509,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_rvalid));
            tracep->chgIData(oldp+3510,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_rdata),32);
            tracep->chgBit(oldp+3511,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U))));
            tracep->chgBit(oldp+3512,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_err_o[0]));
            tracep->chgBit(oldp+3513,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_err_o[1]));
            tracep->chgBit(oldp+3514,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_resp));
            tracep->chgCData(oldp+3515,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_resp),3);
            tracep->chgBit(oldp+3516,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_gpio__device_rvalid_o));
            tracep->chgIData(oldp+3517,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q),24);
            tracep->chgCData(oldp+3518,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_dbnc),8);
            tracep->chgBit(oldp+3519,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_rd_en_q));
            tracep->chgBit(oldp+3520,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q));
            tracep->chgBit(oldp+3521,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+3522,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3523,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x10U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3524,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3525,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x10U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3526,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3527,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3528,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x11U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3529,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3530,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x11U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3531,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3532,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3533,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x12U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3534,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3535,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x12U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3536,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x13U))));
            tracep->chgBit(oldp+3537,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3538,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x13U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3539,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3540,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x13U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3541,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3542,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3543,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x14U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3544,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3545,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x14U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3546,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3547,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3548,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x15U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3549,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3550,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x15U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3551,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x16U))));
            tracep->chgBit(oldp+3552,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3553,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x16U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3554,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3555,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x16U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3556,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                             >> 0x17U))));
            tracep->chgBit(oldp+3557,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+3558,(((((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x17U)) 
                                           == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
                                          | (0x1f4U 
                                             <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+3559,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+3560,((1U & ((0x1f4U 
                                              <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x17U)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+3561,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_pwm__device_rvalid_o));
            tracep->chgCData(oldp+3562,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3563,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3564,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3565,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3566,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3567,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3568,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3569,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3570,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3571,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3572,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3573,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3574,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3575,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3576,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3577,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3578,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3579,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3580,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3581,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3582,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3583,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+3584,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+3585,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q),8);
            tracep->chgBit(oldp+3586,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3587,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3588,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3589,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3590,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3591,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3592,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3593,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3594,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3595,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3596,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3597,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3598,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3599,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3600,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3601,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3602,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3603,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3604,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3605,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3606,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3607,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3608,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+3609,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+3610,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rvalid_q));
            tracep->chgIData(oldp+3611,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rdata_q),32);
            tracep->chgSData(oldp+3612,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_baud_counter_q),9);
            tracep->chgSData(oldp+3613,(((0x1b1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_baud_counter_q))
                                          ? 0U : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_start)
                                                   ? 0xd9U
                                                   : 
                                                  (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_baud_counter_q)))))),9);
            tracep->chgBit(oldp+3614,((0x1b1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_baud_counter_q))));
            tracep->chgCData(oldp+3615,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_state_q),2);
            tracep->chgCData(oldp+3616,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_state_d),2);
            tracep->chgCData(oldp+3617,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_bit_counter_q),3);
            tracep->chgCData(oldp+3618,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_bit_counter_d),3);
            tracep->chgCData(oldp+3619,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_current_byte_q),8);
            tracep->chgCData(oldp+3620,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_current_byte_d),8);
            tracep->chgCData(oldp+3621,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_q),3);
            tracep->chgBit(oldp+3622,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_start));
            tracep->chgBit(oldp+3623,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_valid));
            tracep->chgBit(oldp+3624,(((0x1b1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_baud_counter_q)) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_valid))));
            tracep->chgBit(oldp+3625,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rvalid)))));
            tracep->chgSData(oldp+3626,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_baud_counter_q),9);
            tracep->chgSData(oldp+3627,(((0x1b1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_baud_counter_q))
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_baud_counter_q))))),9);
            tracep->chgBit(oldp+3628,((0x1b1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_baud_counter_q))));
            tracep->chgCData(oldp+3629,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_state_q),2);
            tracep->chgCData(oldp+3630,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_state_d),2);
            tracep->chgCData(oldp+3631,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_bit_counter_q),3);
            tracep->chgCData(oldp+3632,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_bit_counter_d),3);
            tracep->chgCData(oldp+3633,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_current_byte_q),8);
            tracep->chgCData(oldp+3634,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_current_byte_d),8);
            tracep->chgBit(oldp+3635,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_next_byte));
            tracep->chgBit(oldp+3636,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+3637,(((0x1b1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_baud_counter_q)) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__tx_next_byte))));
            tracep->chgBit(oldp+3638,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3639,((1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                             & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgBit(oldp+3640,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+3641,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full)
                                          ? 0x80U : 
                                         (0xffU & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 7U)))
                                                    ? 
                                                   ((0x7fU 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(0x80U) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),8);
            tracep->chgCData(oldp+3642,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),8);
            tracep->chgCData(oldp+3643,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),8);
            tracep->chgBit(oldp+3644,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3645,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3646,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+3647,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 7U))));
            tracep->chgBit(oldp+3648,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 7U))));
            tracep->chgCData(oldp+3649,((0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),7);
            tracep->chgCData(oldp+3650,((0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),7);
            tracep->chgBit(oldp+3651,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (0x7fU == 
                                          (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
            tracep->chgCData(oldp+3652,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgCData(oldp+3653,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+3654,((1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                             & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgCData(oldp+3655,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                          ? 0x80U : 
                                         (0xffU & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 7U)))
                                                    ? 
                                                   ((0x7fU 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(0x80U) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),8);
            tracep->chgCData(oldp+3656,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),8);
            tracep->chgCData(oldp+3657,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),8);
            tracep->chgBit(oldp+3658,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+3659,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3660,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+3661,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 7U))));
            tracep->chgBit(oldp+3662,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 7U))));
            tracep->chgCData(oldp+3663,((0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),7);
            tracep->chgCData(oldp+3664,((0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),7);
            tracep->chgCData(oldp+3665,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+3666,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                       & (0x7fU == 
                                          (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))));
            tracep->chgCData(oldp+3667,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+3668,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_spi__device_rvalid_o));
            tracep->chgIData(oldp+3669,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__read_status_q)
                                          ? (((0U == 
                                               ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                                 ? 0x7fU
                                                 : 
                                                (0x7fU 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 7U)))
                                                     ? 
                                                    ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                     : 
                                                    (((IData)(0x7fU) 
                                                      - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                     + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                                              << 1U) 
                                             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full))
                                          : 0U)),32);
            tracep->chgCData(oldp+3670,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__byte_data_o),8);
            tracep->chgBit(oldp+3671,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__read_status_q));
            tracep->chgBit(oldp+3672,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__next_tx_byte_d));
            tracep->chgBit(oldp+3673,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__next_tx_byte_q));
            tracep->chgBit(oldp+3674,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+3675,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__next_tx_byte_d) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__next_tx_byte_q)))));
            tracep->chgBit(oldp+3676,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3677,((0U == ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                               ? 0x7fU
                                               : (0x7fU 
                                                  & (((1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                          >> 7U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 7U)))
                                                      ? 
                                                     ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                      - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                      : 
                                                     (((IData)(0x7fU) 
                                                       - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                      + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))));
            tracep->chgCData(oldp+3678,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                          ? 0x7fU : 
                                         (0x7fU & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 7U)))
                                                    ? 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                    : 
                                                   (((IData)(0x7fU) 
                                                     - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                    + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))),7);
            tracep->chgBit(oldp+3679,((1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                             & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgCData(oldp+3680,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),8);
            tracep->chgCData(oldp+3681,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),8);
            tracep->chgBit(oldp+3682,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+3683,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3684,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+3685,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 7U))));
            tracep->chgBit(oldp+3686,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 7U))));
            tracep->chgCData(oldp+3687,((0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),7);
            tracep->chgCData(oldp+3688,((0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),7);
            tracep->chgCData(oldp+3689,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+3690,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                       & (0x7eU == 
                                          (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))));
            tracep->chgCData(oldp+3691,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgCData(oldp+3692,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__state_q),2);
            tracep->chgCData(oldp+3693,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__state_d),2);
            tracep->chgBit(oldp+3694,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__count));
            tracep->chgBit(oldp+3695,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__sck));
            tracep->chgBit(oldp+3696,((1U <= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__count))));
            tracep->chgBit(oldp+3697,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos));
            tracep->chgBit(oldp+3698,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg));
            tracep->chgBit(oldp+3699,((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__state_q))));
            tracep->chgCData(oldp+3700,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q),3);
            tracep->chgCData(oldp+3701,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d),3);
            tracep->chgCData(oldp+3702,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q),8);
            tracep->chgCData(oldp+3703,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d),8);
            tracep->chgCData(oldp+3704,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d),8);
            tracep->chgCData(oldp+3705,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q),8);
            tracep->chgBit(oldp+3706,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__rvalid_q));
            tracep->chgQData(oldp+3707,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q),64);
            tracep->chgQData(oldp+3709,((1ULL + vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q)),64);
            tracep->chgQData(oldp+3711,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q),64);
            tracep->chgBit(oldp+3713,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+3714,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req));
            tracep->chgIData(oldp+3715,((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
            tracep->chgBit(oldp+3716,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we));
            tracep->chgIData(oldp+3717,((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q)),32);
            tracep->chgCData(oldp+3718,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be),4);
            tracep->chgBit(oldp+3719,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
            tracep->chgBit(oldp+3720,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q));
            tracep->chgBit(oldp+3721,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q));
            tracep->chgIData(oldp+3722,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q),32);
            tracep->chgBit(oldp+3723,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy));
            tracep->chgWData(oldp+3724,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q),256);
            tracep->chgQData(oldp+3732,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q),64);
            tracep->chgIData(oldp+3734,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel),20);
            tracep->chgBit(oldp+3735,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid));
            tracep->chgBit(oldp+3736,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3737,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x10U))));
            tracep->chgCData(oldp+3738,((7U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+3739,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3740,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid));
            tracep->chgBit(oldp+3741,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid));
            tracep->chgBit(oldp+3742,((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))));
            tracep->chgBit(oldp+3743,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror_valid));
            tracep->chgCData(oldp+3744,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror),3);
            tracep->chgQData(oldp+3745,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int),41);
            tracep->chgQData(oldp+3747,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp),34);
            tracep->chgBit(oldp+3749,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk)))));
            tracep->chgBit(oldp+3750,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready));
            tracep->chgBit(oldp+3751,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid));
            tracep->chgBit(oldp+3752,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
            tracep->chgCData(oldp+3753,((3U & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+3754,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0),32);
            tracep->chgIData(oldp+3755,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1),32);
            tracep->chgIData(oldp+3756,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2),32);
            tracep->chgIData(oldp+3757,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3),32);
            tracep->chgIData(oldp+3758,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted),32);
            tracep->chgIData(oldp+3759,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
            tracep->chgIData(oldp+3760,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
            tracep->chgIData(oldp+3761,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
            tracep->chgIData(oldp+3762,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1),32);
            tracep->chgIData(oldp+3763,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2),32);
            tracep->chgIData(oldp+3764,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3),32);
            tracep->chgSData(oldp+3765,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
            tracep->chgSData(oldp+3766,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
            tracep->chgCData(oldp+3767,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
            tracep->chgIData(oldp+3768,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q),32);
            tracep->chgCData(oldp+3769,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q),3);
            tracep->chgIData(oldp+3770,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d),32);
            tracep->chgBit(oldp+3771,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d));
            tracep->chgIData(oldp+3772,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d),32);
            tracep->chgIData(oldp+3773,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q),32);
            tracep->chgIData(oldp+3774,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d),32);
            tracep->chgIData(oldp+3775,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q),32);
            tracep->chgQData(oldp+3776,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q),64);
            tracep->chgQData(oldp+3778,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q),64);
            tracep->chgBit(oldp+3780,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q));
            tracep->chgWData(oldp+3781,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d),256);
            tracep->chgCData(oldp+3789,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q),2);
            tracep->chgCData(oldp+3790,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q),2);
            tracep->chgCData(oldp+3791,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q),2);
            tracep->chgCData(oldp+3792,((0x7fU & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U)))),8);
            tracep->chgIData(oldp+3793,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs),32);
            tracep->chgCData(oldp+3794,((0xfU & ((0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                             >> 0x22U))) 
                                                 - (IData)(4U)))),4);
            tracep->chgBit(oldp+3795,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+3796,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                          ? 2U : (3U 
                                                  & (((1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                          >> 1U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                      - 
                                                      (1U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                      : 
                                                     (((IData)(2U) 
                                                       - 
                                                       (1U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
            tracep->chgCData(oldp+3797,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgCData(oldp+3798,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+3799,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3800,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+3801,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3802,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+3803,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3804,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3805,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+3806,((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgBit(oldp+3807,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+3808,((2U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                   >> 1U)) 
                                               << 1U))),2);
            tracep->chgBit(oldp+3809,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+3810,((2U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   >> 1U)) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3811,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q),3);
            tracep->chgCData(oldp+3812,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask),4);
            tracep->chgCData(oldp+3813,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))),2);
            tracep->chgWData(oldp+3814,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd),512);
            tracep->chgBit(oldp+3830,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume));
            tracep->chgBit(oldp+3831,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go));
            tracep->chgBit(oldp+3832,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
            tracep->chgQData(oldp+3833,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q),64);
            tracep->chgBit(oldp+3835,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q));
            tracep->chgBit(oldp+3836,((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)));
            tracep->chgBit(oldp+3837,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q));
            tracep->chgIData(oldp+3838,((0xffffffU 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),24);
            tracep->chgCData(oldp+3839,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q),2);
            tracep->chgQData(oldp+3840,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux),64);
            tracep->chgCData(oldp+3842,((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                          == (4U ^ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))
                                          ? 4U : (7U 
                                                  & (((1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                          >> 2U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q) 
                                                          >> 2U)))
                                                      ? 
                                                     ((3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))
                                                      : 
                                                     (((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q))) 
                                                      + 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
            tracep->chgCData(oldp+3843,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q),3);
            tracep->chgCData(oldp+3844,((7U & ((IData)(1U) 
                                               + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))),3);
            tracep->chgCData(oldp+3845,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
            tracep->chgCData(oldp+3846,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
            tracep->chgCData(oldp+3847,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_q),3);
            tracep->chgCData(oldp+3848,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_d),3);
            tracep->chgBit(oldp+3849,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+3850,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                       == (4U ^ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))));
            tracep->chgBit(oldp+3851,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk));
            tracep->chgBit(oldp+3852,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+3853,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                             >> 2U))));
            tracep->chgCData(oldp+3854,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q))),2);
            tracep->chgCData(oldp+3855,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
            tracep->chgCData(oldp+3856,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
            tracep->chgCData(oldp+3857,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                          ? 4U : (7U 
                                                  & (((1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q) 
                                                          >> 2U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q) 
                                                          >> 2U)))
                                                      ? 
                                                     ((3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q)) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q)))
                                                      : 
                                                     (((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q))) 
                                                      + 
                                                      (3U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q))))))),3);
            tracep->chgCData(oldp+3858,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q),3);
            tracep->chgCData(oldp+3859,((7U & ((IData)(1U) 
                                               + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q)))),3);
            tracep->chgCData(oldp+3860,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_combi),3);
            tracep->chgCData(oldp+3861,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
            tracep->chgCData(oldp+3862,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q),3);
            tracep->chgCData(oldp+3863,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_q),3);
            tracep->chgCData(oldp+3864,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_d),3);
            tracep->chgBit(oldp+3865,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3866,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
            tracep->chgBit(oldp+3867,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+3868,((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+3869,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q))),2);
            tracep->chgCData(oldp+3870,((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q))),2);
            tracep->chgCData(oldp+3871,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+3872,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__alert_major_o));
            tracep->chgBit(oldp+3873,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_err[0]));
            tracep->chgBit(oldp+3874,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_err[0]));
            tracep->chgBit(oldp+3875,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_err_data_o[0]));
            tracep->chgBit(oldp+3876,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_err_inst_o[0]));
            tracep->chgBit(oldp+3877,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_resp));
            tracep->chgCData(oldp+3878,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_resp),2);
            tracep->chgBit(oldp+3879,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_inst_resp));
            tracep->chgBit(oldp+3880,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_inst_resp));
            tracep->chgBit(oldp+3881,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_err
                                      [0U]));
            tracep->chgBit(oldp+3882,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__sleep_unit_i__DOT__fetch_enable_q));
            tracep->chgBit(oldp+3883,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__sleep_unit_i__DOT__core_busy_q));
            tracep->chgBit(oldp+3884,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__inst_tcm__a_rvalid_o));
            tracep->chgBit(oldp+3885,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__inst_tcm__b_rvalid_o));
            tracep->chgBit(oldp+3886,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__data_tcm__a_rvalid_o));
            tracep->chgBit(oldp+3887,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__b_rvalid_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+3888,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))));
            tracep->chgCData(oldp+3889,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d),3);
            tracep->chgCData(oldp+3890,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_q),3);
            tracep->chgCData(oldp+3891,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_d),3);
            tracep->chgBit(oldp+3892,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+3893,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_q),3);
            tracep->chgCData(oldp+3894,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_d),3);
            tracep->chgBit(oldp+3895,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgIData(oldp+3896,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+3897,((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                       != (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__shadow_q))));
            tracep->chgIData(oldp+3898,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__shadow_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgIData(oldp+3899,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+3900,((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                       != (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__shadow_q))));
            tracep->chgIData(oldp+3901,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__shadow_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgIData(oldp+3902,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+3903,((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                                       != (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__shadow_q))));
            tracep->chgIData(oldp+3904,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__shadow_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+3905,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rvalid[0]));
            tracep->chgBit(oldp+3906,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rvalid_inst_o[0]));
            tracep->chgBit(oldp+3907,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_inst_i[0]));
            tracep->chgBit(oldp+3908,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_inst_i[1]));
            tracep->chgBit(oldp+3909,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rvalid
                                      [0U]));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgQData(oldp+3910,((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))),64);
            tracep->chgBit(oldp+3912,(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))));
            tracep->chgBit(oldp+3913,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__alert_minor_o));
            tracep->chgIData(oldp+3914,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[3U] 
                                          << 0x1eU) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[2U] 
                                            >> 2U))),32);
            tracep->chgIData(oldp+3915,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q),32);
            tracep->chgBit(oldp+3916,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if));
            tracep->chgBit(oldp+3917,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_interruptible));
            tracep->chgWData(oldp+3918,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe),352);
            tracep->chgWData(oldp+3929,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe),220);
            tracep->chgWData(oldp+3936,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe),168);
            tracep->chgCData(oldp+3942,((0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                                  >> 0x16U))),5);
            tracep->chgBit(oldp+3943,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+3944,((1U & ((0x1000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U])
                                              ? ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                    >> 3U))
                                              : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                 >> 3U)))));
            tracep->chgCData(oldp+3945,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_raddr_id[0]),5);
            tracep->chgCData(oldp+3946,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_raddr_id[1]),5);
            tracep->chgIData(oldp+3947,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_rdata_id[0]),32);
            tracep->chgIData(oldp+3948,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_rdata_id[1]),32);
            tracep->chgCData(oldp+3949,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_waddr[0]),5);
            tracep->chgBit(oldp+3950,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_counter_read));
            tracep->chgBit(oldp+3951,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_wr_in_wb_flush));
            tracep->chgBit(oldp+3952,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)))));
            tracep->chgBit(oldp+3953,((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                              >> 2U) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                >> 0x10U)))));
            tracep->chgIData(oldp+3954,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+3955,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q),32);
            tracep->chgBit(oldp+3956,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_ecc_err));
            tracep->chgBit(oldp+3957,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q));
            tracep->chgBit(oldp+3958,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q));
            tracep->chgBit(oldp+3959,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
            tracep->chgCData(oldp+3960,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q),2);
            tracep->chgBit(oldp+3961,((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)))));
            tracep->chgBit(oldp+3962,(((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))));
            tracep->chgBit(oldp+3963,((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
            tracep->chgBit(oldp+3964,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q));
            tracep->chgIData(oldp+3965,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q),32);
            tracep->chgIData(oldp+3966,(((IData)(4U) 
                                         + (0xfffffffeU 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q))),32);
            tracep->chgBit(oldp+3967,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
            tracep->chgCData(oldp+3968,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q),2);
            tracep->chgCData(oldp+3969,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q),3);
            tracep->chgBit(oldp+3970,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
            tracep->chgBit(oldp+3971,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q));
            tracep->chgBit(oldp+3972,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q));
            tracep->chgCData(oldp+3973,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q),2);
            tracep->chgCData(oldp+3974,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q),2);
            tracep->chgBit(oldp+3975,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q));
            tracep->chgWData(oldp+3976,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q),126);
            tracep->chgCData(oldp+3980,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q),3);
            tracep->chgCData(oldp+3981,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr),2);
            tracep->chgCData(oldp+3982,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2),2);
            tracep->chgCData(oldp+3983,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr),2);
            tracep->chgIData(oldp+3984,(((IData)(4U) 
                                         + (0xfffffffcU 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))),32);
            tracep->chgQData(oldp+3985,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i),40);
            tracep->chgCData(oldp+3987,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_0_i__DOT__rchk_res),5);
            tracep->chgQData(oldp+3988,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i),40);
            tracep->chgCData(oldp+3990,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res),5);
            tracep->chgCData(oldp+3991,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__state_q),3);
            tracep->chgBit(oldp+3992,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q));
            tracep->chgBit(oldp+3993,(((8U >= (0xfU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((IData)(3U) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                          >> (0xfU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(3U) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))))));
            tracep->chgBit(oldp+3994,(((8U >= (0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  ((IData)(3U) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                          >> (0xfU 
                                              & ((IData)(2U) 
                                                 + 
                                                 ((IData)(3U) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))))));
            tracep->chgQData(oldp+3995,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q),52);
            tracep->chgSData(oldp+3997,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q),9);
            tracep->chgBit(oldp+3998,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__gntpar_err_q));
            tracep->chgBit(oldp+3999,(((8U >= (0xfU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))) 
                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                          >> (0xfU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))))));
            tracep->chgCData(oldp+4000,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q),2);
            tracep->chgBit(oldp+4001,((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+4002,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_set_q));
            tracep->chgBit(oldp+4003,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_set_clicv_q));
            tracep->chgBit(oldp+4004,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__if_id_q));
            tracep->chgBit(oldp+4005,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__jmp_taken_q));
            tracep->chgBit(oldp+4006,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__bch_taken_q));
            tracep->chgCData(oldp+4007,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q),4);
            tracep->chgBit(oldp+4008,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__enable_q));
            tracep->chgBit(oldp+4009,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__compare_enable_q));
            tracep->chgIData(oldp+4010,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                           << 0xaU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                             >> 0x16U)) 
                                         + ((0x10000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                             ? 0U : 
                                            ((0x800000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                              ? 2U : 
                                             ((2U & 
                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U])
                                               ? ((0x4000000U 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                                   ? 2U
                                                   : 4U)
                                               : 0U))))),32);
            tracep->chgCData(oldp+4011,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q),4);
            tracep->chgCData(oldp+4012,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q),4);
            tracep->chgBit(oldp+4013,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm));
            tracep->chgBit(oldp+4014,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer));
            tracep->chgCData(oldp+4015,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q),7);
            tracep->chgCData(oldp+4016,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__id_stage_i__rf_raddr_o[0]),5);
            tracep->chgCData(oldp+4017,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__id_stage_i__rf_raddr_o[1]),5);
            tracep->chgIData(oldp+4018,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i[0]),32);
            tracep->chgIData(oldp+4019,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i[1]),32);
            tracep->chgIData(oldp+4020,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                            >> 7U))),32);
            tracep->chgCData(oldp+4021,((0x1fU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                     >> 0xeU)))),5);
            tracep->chgBit(oldp+4022,((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                     >> 0x1aU)))));
            tracep->chgCData(oldp+4023,((3U & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                       >> 0x18U)))),2);
            tracep->chgCData(oldp+4024,((3U & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                       >> 0x15U)))),2);
            tracep->chgIData(oldp+4025,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__imm_i_type),32);
            tracep->chgIData(oldp+4026,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                            >> 6U)))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                << 5U)) 
                                            | (0x1fU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                     >> 0xeU)))))),32);
            tracep->chgIData(oldp+4027,(((0xffffe000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                            >> 6U)))) 
                                             << 0xdU)) 
                                         | ((0x1000U 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                << 6U)) 
                                            | ((0x800U 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                   >> 3U)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                      << 5U)) 
                                                  | (0x1eU 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                         << 0x12U) 
                                                        | (0x3fffeU 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                              >> 0xeU))))))))),32);
            tracep->chgIData(oldp+4028,((0xfffff000U 
                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                             << 0x19U) 
                                            | (0x1fff000U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                  >> 7U))))),32);
            tracep->chgIData(oldp+4029,(((0xfff00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                            >> 6U)))) 
                                             << 0x14U)) 
                                         | ((0xff000U 
                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                 << 0x19U) 
                                                | (0x1fff000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                      >> 7U)))) 
                                            | ((0x800U 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                   >> 0x10U)) 
                                               | (0x7feU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                      << 5U) 
                                                     | (0x1eU 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                           >> 0x1bU)))))))),32);
            tracep->chgIData(oldp+4030,((0x1fU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                     >> 0x16U)))),32);
            tracep->chgBit(oldp+4031,((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                              >> 0x17U) 
                                             & (~ (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                   >> 1U))))));
            tracep->chgCData(oldp+4032,((0xffU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                     >> 0x13U)))),8);
            tracep->chgIData(oldp+4033,((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                           << 0xaU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                             >> 0x16U)) 
                                         + ((0x10000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                             ? 0U : 
                                            ((0x4000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U])
                                              ? 2U : 4U)))),32);
            tracep->chgCData(oldp+4034,(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt),2);
            tracep->chgIData(oldp+4035,(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                          << 0xaU) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                            >> 0x16U))),32);
        }
    }
}
