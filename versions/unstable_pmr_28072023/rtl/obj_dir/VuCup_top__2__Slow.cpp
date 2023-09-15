// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

void VuCup_top::_settle__TOP__4(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_settle__TOP__4\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp77;
    CData/*31:0*/ __Vtemp83;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_we[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_inst_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_we[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_inst_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_wdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_inst_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_wdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_inst_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_be[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_inst_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_be[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_inst_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_inst_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_inst_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_inst_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_inst_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs 
        = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
                    [1U]) {
                    if ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs 
                            = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                               + ((IData)(1U) << (7U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U))));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
                    [1U]) {
                    if ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs 
                            = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                               + ((IData)(1U) << (7U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U))));
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rvalid[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x80U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x80000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                           >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x13U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x40000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                           >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x20000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x11U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x10000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0U < vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0U < vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x200U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 9U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x100U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x800U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xbU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x400U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x8000000U | (0xe0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data = 0U;
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (1U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                = (((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U)))))
                    ? (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                               >> (0x20U & ((IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)) 
                                            << 5U))))
                    : ((0x10U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U))))
                        ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q
                        : ((0x11U == (0x7fU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))
                            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus
                            : ((0x12U == (0x7fU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                           >> 0x22U))))
                                ? (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                           >> (0x3fU 
                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart) 
                                                  << 5U))))
                                : ((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))
                                    ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs
                                    : ((0x18U == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                             >> 0x22U))))
                                        ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q
                                        : ((0x17U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))
                                            ? 0U : 
                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                           (7U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U)))])))))));
        } else {
            if (((((((((0x40U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U)))))) {
                if ((0x40U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0;
                } else {
                    if ((0x13U == (0x7fU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1;
                    } else {
                        if ((0x34U == (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2;
                        } else {
                            if ((0x35U == (0x7fU & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                    = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3;
                            } else {
                                if ((0x38U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
                                } else {
                                    if ((0x39U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                            = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
                                    } else {
                                        if ((0x3aU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                                = (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                           >> 0x20U));
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((0U 
                                                      != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                        >> 0x16U))))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                                    = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x3dU == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                            = (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                       >> 0x20U));
                    }
                }
            }
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_inst_resp) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_inst_o[0U] = 0U;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound12 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_inst_i
            [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_inst_resp];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_inst_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound12;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_resp) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o[0U] = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i
            [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_resp];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i
            [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_resp];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o[1U] = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_we) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tselect_we));
    if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r 
            = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) 
               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tselect_we));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tselect_we) {
        if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                [0U];
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
        [0U];
    if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
            [0U];
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tselect_we) {
        if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                [0U];
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else {
        if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
                = (2ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
        } else {
            if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
                    = (3ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else {
        if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
                = (0x20ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
        } else {
            if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we 
                    = (0x30ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_we);
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U]))) 
                   >> 0x20U));
    if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else {
        if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else {
            if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
                    = (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
                    = (IData)(((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                               >> 0x20U));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U]))) 
                   >> 0x20U));
    if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else {
        if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else {
            if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
                    = (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
                    = (IData)(((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                               >> 0x20U));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_in_ex) 
            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex)) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i)) 
            & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_0_i__DOT__rchk_res)) 
               != (0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                   >> 2U))))) | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                                   >> 1U) 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i)) 
                                                 & ((1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_0_i__DOT__rchk_res) 
                                                        >> 4U)) 
                                                    != 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                                >> 6U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffff07ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xf800U & (((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                           ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                               << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                            >> 5U))) 
                         << 0xbU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffe0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x1f0000U & (((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                             ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                 << 0x16U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                              >> 0xaU))
                             : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                 << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                              >> 0xfU))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfc1fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x3e00000U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                  << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                              >> 0x14U))
                              : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                  << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                            >> 0x19U))) 
                            << 0x15U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0x83ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x7c000000U & (((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                   << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                             >> 0x1eU))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                   << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                >> 3U))) 
                             << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x80000000U & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                   << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                >> 8U))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                   << 0x13U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                >> 0xdU))) 
                             << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xfU & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                        ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                            << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                         >> 8U)) : 
                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                         << 0x13U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                      >> 0xdU))) >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfffffe0fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0x1f0U & (((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                              << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                          >> 0x12U))
                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                              << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                        >> 0x17U))) 
                        << 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xffffc1ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0x3e00U & (((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                               << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                         >> 0x1cU))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                               << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                            >> 1U))) 
                         << 9U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfff83fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0x7c000U & (((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                             >> 6U))
                            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                << 0x15U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                             >> 0xbU))) 
                          << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xff07ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xf80000U & (((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                             ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                 << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                              >> 0x10U))
                             : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                 << 0xbU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                             >> 0x15U))) 
                           << 0x13U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xe0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0x1f000000U & (((0x40000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                   << 6U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                             >> 0x1aU))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                   << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                             >> 0x1fU))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xe0000000U & (((0x100000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                   << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                >> 4U))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                   << 0x17U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                >> 9U))) 
                             << 0x1dU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (3U & (((0x100000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                      ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                          << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                       >> 4U)) : ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                     >> 9U))) 
                    >> 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xffffff83U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0x7cU & (((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                         ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                             << 0x12U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                          >> 0xeU))
                         : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                             << 0xdU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                         >> 0x13U))) 
                       << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xfffff07fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0xf80U & (((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                              << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                        >> 0x18U)) : 
                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                           << 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                     >> 0x1dU))) << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xfffe0fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0x1f000U & (((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                            ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                               >> 2U) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                         >> 7U)) << 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xffc1ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0x3e0000U & (((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                             ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                >> 0xcU) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                            >> 0x11U)) 
                           << 0x11U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf83fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0x7c00000U & (((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                              ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                 >> 0x16U) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                              >> 0x1bU)) 
                            << 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x8000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                          << 0xfU) | (0xffff8000U & 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 0xeU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x10000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                           << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x20000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                           << 0xdU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x40000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                           << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x80000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                           << 0xbU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x100000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                            << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                        << 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x200000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                            << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                      << 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x400000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                            << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                      << 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x800000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                            << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                      << 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x1000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                             << 6U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x2000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                             << 5U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x4000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                             << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x8000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                             << 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                       << 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x10000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                              << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                        << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x20000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                              << 1U) | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x40000000U & ((0xc0000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in) 
                             | (0x40000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
                                               >> 1U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | ((((0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[4U] 
                           << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[3U] 
                                     >> 0x18U))) == 
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz_en)) 
              & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                         >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | (0xfffffffeU & (((((0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[4U] 
                                           << 8U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[3U] 
                                           >> 0x18U))) 
                                == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) << 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz_en)) 
                             & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                         >> 0x14U)) 
                                << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | ((((0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                          >> 0x16U)) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz_en)) 
              & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                         >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | (0xfffffffeU & (((((0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                          >> 0x16U)) 
                                == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) << 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz_en)) 
                             & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                         >> 0x14U)) 
                                << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_rdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = ((0x1ffc1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]) 
           | (0xfffffffeU & ((((0U == (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)) 
                               | (3U == (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)))
                               ? 0U : (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause))) 
                             << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
        = ((0x3ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U]) 
           | (0xfffc0000U & ((0xff800000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause) 
                                             << 0x17U)) 
                             | (((1U == (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))
                                  ? 0xfU : 0U) << 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = ((0x1fffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]) 
           | (0x3ffffU & ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause) 
                                 >> 9U)) | (((1U == 
                                              (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))
                                              ? 0xfU
                                              : 0U) 
                                            >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_ex 
        = (1U & ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U])
                  ? ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex)) 
                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                        >> 2U)) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                   >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xdU) | (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_ready) 
                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul_ready)) 
                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_ready)) 
                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__done_0) 
                                  & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex)))) 
                              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    >> 0x12U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be) 
                     & (0U == (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                               [0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffeU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be) 
                                    & ((1U == (3U & 
                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffcU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be) 
                                    & ((2U == (3U & 
                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffff8U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be) 
                                    & ((3U == (3U & 
                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 3U))));
    vlTOPp->__Vtableidx5 = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb 
        = vlTOPp->__Vtable5_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb
        [vlTOPp->__Vtableidx5];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb 
        = vlTOPp->__Vtable5_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb
        [vlTOPp->__Vtableidx5];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b 
        = vlTOPp->__Vtable5_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b
        [vlTOPp->__Vtableidx5];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b 
        = vlTOPp->__Vtable5_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b
        [vlTOPp->__Vtableidx5];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0x1ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (0xfe000000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)
                               ? ((IData)(4U) + (0xfffffffcU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                                                     << 0x19U) 
                                                    | (0x1fffffcU 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                          >> 7U)))))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                                   << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                >> 7U))) 
                             << 0x19U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
        = (0x1ffffffU & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)
                           ? ((IData)(4U) + (0xfffffffcU 
                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                                                 << 0x19U) 
                                                | (0x1fffffcU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                      >> 7U)))))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                               << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                            >> 7U))) 
                         >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (0x1000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                            << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0xff0fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (0xfff00000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be) 
                             << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = ((0xfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
           | (0xfff00000U & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                               ? ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
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
                                      | (0xffffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                             >> 0x13U)))))
                               : ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                   ? ((0xffffff00U 
                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                          << 5U)) | 
                                      (0xffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                 << 5U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   >> 0x1bU))))
                                   : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                       << 0x1dU) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                       >> 3U)))) << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0xfff00000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (0xfffffU & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                            ? ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                ? ((0xff000000U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   << 0x15U)) 
                                   | (0xffffffU & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                      >> 0xbU))))
                                : ((0xffff0000U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   << 0xdU)) 
                                   | (0xffffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    >> 0x13U)))))
                            : ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                ? ((0xffffff00U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   << 5U)) 
                                   | (0xffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                << 5U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                  >> 0x1bU))))
                                : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                    << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                                 >> 3U)))) 
                          >> 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = ((0xfffc7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
           | (0xffff8000U & (0x8000U | (0x30000U & 
                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                                         << 0xfU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
           | (0x4000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
                         << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (0xfff3ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (0xffffc001U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_addr_o[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__mem_instr_req 
        = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req
           [0U] & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr
                    [0U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask
                    [0U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base
                   [0U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_instr_req 
        = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_req
           [0U] & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr
                    [0U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_mask
                    [7U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__cfg_device_addr_base
                   [7U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs));
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0x39U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffff00000000ULL 
                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | (IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int)));
                    }
                } else {
                    if ((0x3aU == (0x7fU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((1U & (~ ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                                = ((0xffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                                   | ((QData)((IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int))) 
                                      << 0x20U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_inst_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                     >> 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                               >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (2U & ((0x3ffffffeU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                    >> 2U)) | (0x1ffffffeU 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                  >> 3U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (4U & ((0x1ffffffcU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                    >> 3U)) | (0xffffffcU 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                  >> 4U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (8U & ((0xffffff8U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                   >> 4U)) | (0x7fffff8U 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                 >> 5U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x10U & ((0x7fffff0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 5U)) | (0x3fffff0U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 6U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x20U & ((0x3ffffe0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 6U)) | (0x1ffffe0U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 7U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x40U & ((0x1ffffc0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 7U)) | (0xffffc0U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 8U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x80U & ((0xffff80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                     >> 8U)) | (0x7fff80U 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                   >> 9U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x100U & ((0x7fff00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 9U)) | (0x3fff00U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 0xaU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x200U & ((0x3ffe00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xaU)) | (0x1ffe00U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xbU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x400U & ((0x1ffc00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xbU)) | (0xffc00U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xcU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x800U & ((0xff800U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                     >> 0xcU)) | (0x7f800U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                     >> 0xdU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x1000U & ((0x7f000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xdU)) | (0x3f000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xeU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x2000U & ((0x3e000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xeU)) | (0x1e000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xfU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x4000U & ((0x1c000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xfU)) | (0xc000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0x10U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffffffe0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1fU & ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                            << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 5U)) : 
                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                         << 0x16U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                      >> 0xaU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfffffc1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e0U & (((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                              << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                           >> 0xfU))
                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                              << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                          >> 0x14U))) 
                        << 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffff83ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x7c00U & (((0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                               << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x19U))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                               << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x1eU))) 
                         << 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfff07fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0xf8000U & (((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 3U))
                            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 8U))) 
                          << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfe0fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1f00000U & (((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                  << 0x13U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                               >> 0xdU))
                              : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                  << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                              >> 0x12U))) 
                            << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xc1ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e000000U & (((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                   << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x17U))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                   << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x19U)));
    __Vtemp77 = (0x1fU & ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                               << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                            >> 1U))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                               << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                            >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0xc0000000U & (((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                   << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                >> 1U))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                   << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                >> 6U))) 
                             << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x3fffffffU & (__Vtemp77 >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffff07U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf8U & (((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                             << 0x15U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0xbU))
                         : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                             << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x10U))) 
                       << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffe0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x1f00U & (((0x20000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                               << 0xbU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                           >> 0x15U))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                               << 6U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                         >> 0x1aU))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffc1fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x3e000U & (((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x1fU))
                            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                             >> 4U))) 
                          << 0xdU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xff83ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x7c0000U & (((0x200000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                             ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                 << 0x17U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 9U))
                             : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                 << 0x12U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0xeU))) 
                           << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xf07fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf800000U & (((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                  << 0xdU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0x13U))
                              : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                  << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x17U)));
    __Vtemp83 = (0x1fU & ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                               << 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                         >> 0x1dU))
                           : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                              >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf0000000U & (((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                   << 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                             >> 0x1dU))
                               : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                  >> 2U)) << 0x1cU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xfffffffU & (__Vtemp83 >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffffffc1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x3eU & (((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                            >> 7U) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      >> 0xcU)) << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffff83fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x7c0U & (((0x20000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                             >> 0x11U) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 0x16U)) 
                        << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz)) 
           | (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz)) 
           | (2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz)) 
           | (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz)) 
           | (2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x1fffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x67ffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x7bffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x4000U | (0x1fffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x1000U | (0x67ffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp)));
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x2000U | (0x1fffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x800U | (0x67ffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp)));
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x400U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
        }
    }
    if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                >> 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                             >> 0x1bU)))) {
        if ((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
             [0U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x6000U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
        }
        if ((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
             [1U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
                = (0x1800U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_rdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_rdata
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__register_file_wrapper_i__rdata_o[0U] 
        = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_rdata
                  [0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__register_file_wrapper_i__rdata_o[1U] 
        = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_rdata
                  [1U]);
    if ((1U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_zero__DOT____Vcellout__ram__douta_o;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_one__DOT____Vcellout__ram__douta_o;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w 
        = (0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                    >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w 
        = (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                 >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                 >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w 
        = (0x1fffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                      >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w 
        = (0xfffU & ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w))
                      ? ((IData)(1U) + ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r) 
                                        + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)))
                      : ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__pmp_addr_r 
                 >> (0x1fU & ((IData)(0x1fU) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_offset_w 
        = (0xfU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)
                    ? (0xfffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w) 
                                 << 2U)) : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w) 
                                            << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w = 0U;
    if ((1U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w 
            = (0x1fffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w) 
                          + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_offset_w)));
        if ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w 
                = (0x3fU & (((IData)(0x1fU) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)) 
                            - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w 
                = (0x3fU & (((IData)(0x1fU) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)) 
                            - (IData)(1U)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w 
                = (IData)((0x3ffffffffULL & ((((1ULL 
                                                << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w)) 
                                               - 1ULL) 
                                              & (QData)((IData)(
                                                                ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                                  << 7U) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                                    >> 0x19U))))) 
                                             >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w))));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w 
                = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w 
                   & (((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)) 
                      - (IData)(1U)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w 
                = (0U != (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w 
                          ^ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w 
            = (1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w)) 
                      | ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)) 
                         & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w) 
                               >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w))))) 
                     | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w) 
                        & (~ ((0xbU >= (0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))) 
                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w) 
                                 >> (0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))))))));
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w 
            = (4U & ((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                << 7U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  >> 0x19U)))) 
                              >> 0x1fU)) << 2U));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex 
        = ((((((2U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                               [0U] >> 0x1cU))) | (6U 
                                                   == 
                                                   (0xfU 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                       [0U] 
                                                       >> 0x1cU)))) 
              & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                   [0U] >> 6U) & (3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                                << 0x1cU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                  >> 4U))))) 
                 | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                     [0U] >> 3U) & (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                    >> 4U))))))) 
             & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__lsu_en_gated) 
                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                               >> 0x18U))) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                               [0U] 
                                               >> 1U) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 >> 0x18U))))) 
            & ((0U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                               [0U] >> 7U))) ? (((0x3fffffffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                      << 5U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                        >> 0x1bU))) 
                                                 == 
                                                 (0x3fffffffU 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                     [0U] 
                                                     >> 2U))) 
                                                & (0U 
                                                   != 
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                                   [0U]))
                : ((2U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                   [0U] >> 7U))) ? 
                   (((0xfffffffcU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                      << 7U) | (0x7cU 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x19U)))) 
                     | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                    >= vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                    [0U]) : (((0xfffffffcU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    >> 0x19U)))) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                             < vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                             [0U])))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                            >> 0xfU)));
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_req_o[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__mem_instr_req;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
        = (0x80000000000ULL | (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rvalid
                                                [0U])) 
                                << 0x29U) | ((QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_rdata
                                                             [0U])) 
                                             << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0x39U != (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x3aU != (0x7fU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                    = ((0xffffffff00000000ULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                       | (IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int)));
                            }
                        } else {
                            if ((0x3dU == (0x7fU & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((1U & (~ ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x16U))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                        = ((0xffffffffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                           | ((QData)((IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int))) 
                                              << 0x20U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
        [1U]) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata
                              [1U]));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                         ? (- (0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                   >> 0x17U))))
                         : (0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                      << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                >> 0x17U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_ready) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 0U;
            }
        } else {
            if ((1U & (~ (IData)((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
                    = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                         >> 1U) & (0U != (0x3fU & ((IData)(0x20U) 
                                                   - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)))))
                        ? 2U : 3U);
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 1U;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))) {
                if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                      >> 1U) & (0U != (0x3fU & ((IData)(0x20U) 
                                                - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = 1U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = ((0x7ffdU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp)) 
           | (2U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                    >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_id 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                 | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                    >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__alu_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x30U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = ((0x3eU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [0U]) | (1U & VL_REDXOR_64((0x156aaad5bULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                        [0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = ((0x3dU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [0U]) | (2U & (VL_REDXOR_64((0x29b33366dULL 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                         [0U])) << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = ((0x3bU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [0U]) | (4U & (VL_REDXOR_64((0x4e3c3c78eULL 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                         [0U])) << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = ((0x37U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [0U]) | (8U & (VL_REDXOR_64((0x803fc07f0ULL 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                         [0U])) << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = ((0x2fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [0U]) | (0x10U & (VL_REDXOR_64((0x1003fff800ULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                            [0U])) 
                              << 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = ((0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [0U]) | (0x20U & (VL_REDXOR_64((0x20fc000000ULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                            [0U])) 
                              << 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[0U] 
        = (0x2aU ^ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
           [0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_ecc_err 
        = (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
           [0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = ((0x3eU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [1U]) | (1U & VL_REDXOR_64((0x156aaad5bULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                        [1U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = ((0x3dU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [1U]) | (2U & (VL_REDXOR_64((0x29b33366dULL 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                         [1U])) << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = ((0x3bU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [1U]) | (4U & (VL_REDXOR_64((0x4e3c3c78eULL 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                         [1U])) << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = ((0x37U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [1U]) | (8U & (VL_REDXOR_64((0x803fc07f0ULL 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                         [1U])) << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = ((0x2fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [1U]) | (0x10U & (VL_REDXOR_64((0x1003fff800ULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                            [1U])) 
                              << 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = ((0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
            [1U]) | (0x20U & (VL_REDXOR_64((0x20fc000000ULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__rdata_i
                                            [1U])) 
                              << 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome[1U] 
        = (0x2aU ^ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
           [1U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_ecc_err 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_ecc_err) 
           | (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__syndrome
              [1U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_rdata_id[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__register_file_wrapper_i__rdata_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_rdata_id[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__register_file_wrapper_i__rdata_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w 
        = (0xfffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)
                      ? ((((0x1fU >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))
                            ? ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))
                            : 0U) - (IData)(1U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w))
                      : ((((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w)) 
                          - (IData)(1U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_exception_w 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q;
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
                = ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__next_cnt))
                    ? 2U : 1U);
        }
    } else {
        if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__next_cnt))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 2U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 0U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex;
        }
    } else {
        if ((1U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n = 0U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 0U;
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 0U;
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                               >> 0x2bU)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        }
    } else {
        if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                            >> 0x35U)) & (~ (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                     >> 0x2bU)))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__next_cnt 
        = (3U & ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                 >> 0x35U)) & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                       >> 0x2bU))))
                  ? ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                    >> 0x29U))) ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))
                  : ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                    >> 0x29U))) ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q) 
                                                   - (IData)(1U))
                      : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                          >> 0x2bU))) == (1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                        >> 0x2aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                          >> 0x29U))) == (1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                                                        >> 0x28U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en)) 
           | (2U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                              >> 0x29U)) << 1U) & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                   >> 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en)) 
           | (1U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                              >> 0x29U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                            >> 5U)) 
                    & (~ ((8U >= (0xfU & ((IData)(3U) 
                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))) 
                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                             >> (0xfU & ((IData)(3U) 
                                         * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rdata
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                >> 0x10U))
                                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                              << 9U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                >> 0x17U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xffffffffffff0000ULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 0x10U)) 
               | (QData)((IData)((0xffffU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                     >> 0x30U))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xffffffffffffff00ULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 8U)) | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x38U))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xfffffffffffffff0ULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 4U)) | (QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x3cU))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xfffffffffffffffcULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 2U)) | (QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x3eU))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xfffffffffffffffeULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 1U)) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x3fU))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
        = (0x3fU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                     ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)
                     : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt)
                         ? (((IData)(0x20U) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)) 
                            - (IData)(1U)) : ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))
                                               ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                                                  - (IData)(1U))
                                               : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__alu_en) 
            & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 0x2eU))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                      >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en) 
            & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 2U))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                   >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn 
        = ((((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                      >> 0x2eU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                            >> 0x2fU))) 
            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__alu_en)) 
           | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 2U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
        = ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
        = (3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
            = ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl)) 
               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
            = (4U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl));
    } else {
        if ((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
                = ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl)) 
                   | (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                            >> 0xbU)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
                = (4U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl));
        } else {
            if ((1U & (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                           >> 7U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                     >> 1U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                >> 0xdU)) 
                        | (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                             >> 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                         >> 6U)) & 
                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                            >> 0xcU))) | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en) 
                                           & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 2U))) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                             >> 0xeU))))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
                    = ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl)) 
                       | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl 
                    = (4U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_rdata_id
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_rdata_id
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x10U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                       << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x100U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                        << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x1000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                         << 9U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x10000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                          << 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x100000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                           << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x1000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                            << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x10000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                             << 0x15U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                    >> 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0x10U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                       >> 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0x100U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                        >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0x1000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                         << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
        = (0xffffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
        = ((0xfffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp) 
           | ((QData)((IData)((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp) 
                                | ((8U >= (0xfU & ((IData)(1U) 
                                                   + 
                                                   ((IData)(3U) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                   & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                      >> (0xfU & ((IData)(1U) 
                                                  + 
                                                  ((IData)(3U) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))))) 
                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp)))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
        = ((0xfffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp) 
           | (IData)((IData)(((8U >= (0xfU & ((IData)(2U) 
                                              + ((IData)(3U) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                 >> (0xfU & ((IData)(2U) 
                                             + ((IData)(3U) 
                                                * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))))))));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_resp) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_data_o[0U] = 0U;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rdata_data_i
            [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_resp];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                >> 1U))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
        if ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                        }
                    }
                }
            } else {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                                : ((0xff000000U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                   << 1U)) 
                                   | ((0xff0000U & 
                                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                         << 0x11U) 
                                        | (0x10000U 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                              >> 0xfU)))) 
                                      | ((0xff00U & 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                           << 1U)) 
                                         | (0xffU & 
                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                             >> 0xfU))))));
                    }
                } else {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = ((0xff000000U & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                                   >> 0xfU))))) 
                                                   << 0x18U)) 
                                   | ((0xff0000U & 
                                       ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                        >> 7U))))) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          ((- (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                            << 1U) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                              >> 0x1fU)))))) 
                                           << 8U)) 
                                         | (0xffU & 
                                            (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                             << 9U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                               >> 0x17U))))))))));
                        }
                    } else {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                        }
                    }
                }
            }
        } else {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   & (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                          >> 0x17U))))
                                : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   | (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                          >> 0x17U)))));
                    } else {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   ^ (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                          >> 0x17U))));
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                            ? 0U : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                     ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                     : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)));
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                            ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? 0U : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                            : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                        : ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                            ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (0x3fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                            >> 0x1aU))
                                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                            : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result))));
            }
        }
    } else {
        if ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = (1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))));
                        }
                    }
                }
            } else {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (0xffffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                               << 9U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                 >> 0x17U)))
                                : ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                                  >> 6U)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                  << 9U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                    >> 0x17U)))));
                    }
                } else {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))))
                                : ((0xffffff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                  >> 0x1eU)))) 
                                                   << 8U)) 
                                   | (0xffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                << 9U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                  >> 0x17U)))));
                    }
                }
            }
        } else {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)((0x1ffffffffULL 
                                           & (((1ULL 
                                                | ((QData)((IData)(
                                                                   ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                                     << 9U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                       >> 0x17U)))) 
                                                   << 1U)) 
                                               + (((QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                                                     ? 
                                                                    (~ 
                                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                       << 9U) 
                                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                                         >> 0x17U)))
                                                                     : 
                                                                    ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                      << 9U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                                        >> 0x17U))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                                        >> 0x1aU)))))) 
                                              >> 1U)));
                        }
                    }
                }
            } else {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                            ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U)))
                                : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U))))
                            : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   ^ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U)))));
                } else {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (IData)((0x1ffffffffULL 
                                           & (((1ULL 
                                                | ((QData)((IData)(
                                                                   ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                                     << 9U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                       >> 0x17U)))) 
                                                   << 1U)) 
                                               + (((QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
                                                                     ? 
                                                                    (~ 
                                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                       << 9U) 
                                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                                         >> 0x17U)))
                                                                     : 
                                                                    ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                                      << 9U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                                        >> 0x17U))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                                        >> 0x1aU)))))) 
                                              >> 1U))));
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xfc000000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id)) 
                             << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id 
        = (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                    >> 0x17U))) & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                      >> 9U))) | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                      >> 0x17U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                                      >> 7U)))) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
              & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                    >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__first_op 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                  >> 2U) & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn) 
                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                   >> 4U))) | (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn) 
                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                        >> 4U))) | (1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access 
        = (3U & ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl))
                  ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl)
                  : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                          >> 0x1dU))) ? ((1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                        >> 0x1cU)))
                                          ? (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                               << 0xaU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                                 >> 0x16U)) 
                                             + ((0xffffe000U 
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
                                                                     >> 0xeU)))))))))
                                          : (((0x400U 
                                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                                               ? ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                     >> 0x16U))
                                               : ((0x400U 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                                                   ? 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                                  [0U]
                                                   : 
                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                                  [0U])) 
                                             + vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__imm_i_type))
            : ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                              >> 0x1cU))) ? (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                               << 0xaU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                                 >> 0x16U)) 
                                             + ((0xfff00000U 
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
                                                                  >> 0x1bU))))))))
                : ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   + (0x3fcU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                 << 0xfU) | (0x7ffcU 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                >> 0x11U)))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0xf0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                           + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                               << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                            >> 4U))) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xf0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0xf000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                               << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                            >> 8U)) 
                             + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                 << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                              >> 0xcU))) 
                            << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xfU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                     >> 0x10U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                                      >> 0x14U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xfffff0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xf00U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                           << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                     >> 0x18U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                                      >> 0x1cU))) 
                        << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xf0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                           + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                               << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                            >> 4U))) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xf0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xf000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                               << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                            >> 8U)) 
                             + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                 << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                              >> 0xcU))) 
                            << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U]) 
           | (0xfU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                     >> 0x10U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                                      >> 0x18U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U]) 
           | (0xf0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                           + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                               << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                            >> 8U))) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U]) 
           | (0xfU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                     >> 0x10U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                                      >> 0x18U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U]) 
           | (0xf0000U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                            + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U] 
                                << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                                             >> 0x10U))) 
                           + vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U]) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res 
        = ((0x10U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                              >> 7U)) << 4U)) | ((8U 
                                                  & (VL_REDXOR_32(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                                              >> 0x20U)))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (VL_REDXOR_32(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                                                >> 0x18U)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (VL_REDXOR_32(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                                                >> 0x10U)))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & VL_REDXOR_32(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                                                >> 8U)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((3ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rdata_data_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_id 
        = ((~ ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en) 
                 & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            >> 2U))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                        >> 0x1eU)) 
               & (3U == (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                               >> 0x1cU))))) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x7effU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x7ffbU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x7f7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x7ff7U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = (0x7ffeU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    if ((1U & ((((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                    >> 6U) | (0U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                            << 3U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                              >> 0x1dU))))) 
                  | (0U != ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                             << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[1U] 
                                          >> 3U)))) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                    >> 0x19U)) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                  >> 0x18U)) | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U]))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
            = (4U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    }
    if (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
            >> 0xcU) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex)) 
          & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz))) 
         | (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_ready)) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb)) 
            & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
            = (0x100U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
        = ((0x7dffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp)) 
           | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id) 
                << 9U) & (((0x1fffe00U & ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                                            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                                           << 9U) & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                            << 7U) 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                              >> 7U)))) 
                           | (0x7ffe00U & ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                                            << 9U) 
                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                               << 6U) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                 >> 9U))))) 
                          | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) 
                              & (((0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[4U] 
                                             << 8U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[3U] 
                                               >> 0x18U))) 
                                  == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                  [0U]) & (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                           [0U]))) 
                             << 9U))) & ((~ (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id) 
                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)) 
                                             & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                   >> 0x1dU) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                                     >> 0x1fU)) 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                     >> 1U))) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                   >> 6U)))) 
                                         << 9U)));
    if ((1U & (((((((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                             >> 0x11U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                           >> 7U)) 
                   | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id)) 
                  | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                              >> 1U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                         >> 7U))) | 
                 ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                   >> 0x17U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                >> 7U))) & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                              >> 6U) 
                                             & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                   >> 0xfU) 
                                                  | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                      >> 7U) 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                        >> 1U))) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                    >> 0xaU)) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                   >> 9U))) 
                                            | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                >> 0x10U) 
                                               & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                     >> 0x12U) 
                                                    | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                        >> 0xcU) 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                          >> 6U))) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                      >> 0x14U)) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                     >> 0x13U))))) 
               & (~ ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id) 
                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)) 
                      & (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                             >> 7U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                       >> 1U)) & (~ 
                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                   >> 1U))) 
                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                             >> 6U)) | ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                           >> 0xcU) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                             >> 6U)) 
                                         & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                               >> 1U))) 
                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                           >> 0x10U)))) 
                     & (~ ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                              >> 7U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                        >> 1U)) & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                   >> 1U)) 
                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                              >> 6U)))))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
            = (0x80U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    }
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_counter_read) 
         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
            >> 0x10U))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
            = (8U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    }
    if (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_we) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we)) 
          | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we)) 
         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
             >> 6U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                       >> 0xcU)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp 
            = (1U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)) 
                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                    >> 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
                = ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                    ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access)
                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q));
        }
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__check_addr 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_set_q)
            ? (0xfffffffeU & ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                               ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target
                               : ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                   ? ((0xfffffffcU 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                                      | ((2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                                                & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_set_clicv_q)) 
                                                   << 1U))) 
                                         | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q)))
                                   : ((5U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                       ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_target_ex
                                       : ((0xaU == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                           ? 0x1a110800U
                                           : ((0xbU 
                                               == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                               ? 0x1a110808U
                                               : ((0xcU 
                                                   == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                                   ? 
                                                  ((0xffffff80U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                                   | (0x7cU 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                          << 0x10U) 
                                                         | (0xfffcU 
                                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                                               >> 0x10U)))))
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                                    ? 
                                                   (0xffffff80U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                                     ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                                      ? 
                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[1U] 
                                                       << 0x1dU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                         >> 3U))
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__pc_check_i__DOT__pc_mux_q))
                                                       ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target
                                                       : 0x100080U)))))))))))
            : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                 << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                             >> 0x16U)) + ((0x10000000U 
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
                                              : 0U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n = 0x100080U;
    if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
            = ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                ? ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                    ? ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                        ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target
                        : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[1U] 
                            << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                         >> 3U))) : 
                   ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                     ? (0x7cU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                  << 0xbU) | (0x7fcU 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                                 >> 0x15U))))
                     : ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                        | (0x7cU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                     << 0x10U) | (0xfffcU 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                                     >> 0x10U)))))))
                : ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                    ? ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                        ? 0x1a110808U : 0x1a110800U)
                    : ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                        ? ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                           | (0x7cU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                       << 1U))) : (0xffffff80U 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))));
    } else {
        if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])) {
            if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])) {
                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                              >> 8U)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
                        = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                            << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                         >> 3U));
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                        ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_target_ex
                        : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__cv32e41s_pc_target_i__DOT__pc_target);
            }
        } else {
            if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])) {
                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                              >> 8U)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
                        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q;
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                        ? ((0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                           | ((2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                                     & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                            >> 0xdU)) 
                                        << 1U))) | 
                              (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q)))
                        : 0x100080U);
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp)) 
            & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res)) 
               != (0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                   >> 2U))))) | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
                                                   >> 1U) 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp)) 
                                                 & ((1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res) 
                                                        >> 4U)) 
                                                    != 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__bus_resp 
                                                                >> 6U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid 
        = (1U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                    >> 7U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                 >> 0xeU))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                  >> 0x13U))) 
                 | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall) 
                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                           >> 0xeU))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                            >> 0x13U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xeU) | (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall)) 
                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready)) 
                              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    >> 0x13U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if 
        = (((((((2U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                [0U] >> 0x1cU))) | 
                (6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                [0U] >> 0x1cU)))) & 
               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                [0U] >> 2U)) & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                  [0U] >> 6U) & (3U 
                                                 == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                    [0U] >> 3U) & (0U 
                                                   == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))))) 
             & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                   >> 0xfU))) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if))) 
           & ((0U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                              [0U] >> 7U))) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                               == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])
               : ((2U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                  [0U] >> 7U))) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                   >= 
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                   [0U])
                   : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                      < vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                      [0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
        = ((0xffffffffcffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans) 
           | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_addr 
                = ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                    ? (0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q);
        }
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])
                ? (0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready)) 
            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                >> 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                             >> 0x1bU))) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
        = ((0xfffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans) 
           | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o 
        = ((((~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_n))) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id)) 
            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed1_we))) 
           | ((~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))) 
              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed1_we)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o 
        = ((((~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_n))) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id)) 
            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed2_we))) 
           | ((~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))) 
              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed2_we)));
    if ((1U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_zero__DOT____Vcellout__ram__doutb_o;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_one__DOT____Vcellout__ram__doutb_o;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w 
        = (0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                    >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w 
        = (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                 >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                 >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w 
        = (0x1fffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                      >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w 
        = (0xfffU & ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w))
                      ? ((IData)(1U) + ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r) 
                                        + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)))
                      : ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__pmp_addr_r 
                 >> (0x1fU & ((IData)(0x1fU) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_offset_w 
        = (0xfU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)
                    ? (0xfffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w) 
                                 << 2U)) : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w) 
                                            << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w = 0U;
    if ((1U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w 
            = (0x1fffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w) 
                          + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_offset_w)));
        if ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w 
                = (0x3fU & (((IData)(0x1fU) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)) 
                            - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w 
                = (0x3fU & (((IData)(0x1fU) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)) 
                            - (IData)(1U)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w 
                = (IData)((0x3ffffffffULL & ((((1ULL 
                                                << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w)) 
                                               - 1ULL) 
                                              & (QData)((IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                 >> 0x14U)))) 
                                             >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w))));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w 
                = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w 
                   & (((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)) 
                      - (IData)(1U)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w 
                = (0U != (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w 
                          ^ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w 
            = (1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w)) 
                      | ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)) 
                         & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w) 
                               >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w))))) 
                     | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w) 
                        & (~ ((0xbU >= (0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))) 
                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w) 
                                 >> (0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))))))));
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w 
            = (4U & ((IData)(((QData)((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                               >> 0x14U))) 
                              >> 0x1fU)) << 2U));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup 
        = ((5U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup 
        = ((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w 
        = (0xfffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)
                      ? ((((0x1fU >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))
                            ? ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))
                            : 0U) - (IData)(1U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w))
                      : ((((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w)) 
                          - (IData)(1U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_exception_w 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x10U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                       << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x100U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                        << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x1000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                         << 9U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x10000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                          << 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x100000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                           << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x1000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                            << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U]) 
           | (0x10000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                             << 0x15U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                    >> 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0x10U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                       >> 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0x100U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                        >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0x1000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__masked_hint_w) 
                         << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0xf0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                           + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                               << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                            >> 4U))) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
        = ((0xf0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U]) 
           | (0xf000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                               << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                            >> 8U)) 
                             + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                 << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                              >> 0xcU))) 
                            << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xfU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                     >> 0x10U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                                      >> 0x14U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xfffff0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xf00U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                           << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                     >> 0x18U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[0U] 
                                                      >> 0x1cU))) 
                        << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xf0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                           + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                               << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                            >> 4U))) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
        = ((0xf0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U]) 
           | (0xf000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                               << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                            >> 8U)) 
                             + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                 << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                              >> 0xcU))) 
                            << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U]) 
           | (0xfU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                     >> 0x10U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[1U] 
                                                      >> 0x18U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U]) 
           | (0xf0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                           + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                               << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                            >> 8U))) 
                          << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U]) 
           | (0xfU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                     >> 0x10U)) + (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[2U] 
                                                      >> 0x18U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U] 
        = ((0xfff0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U]) 
           | (0xf0000U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                            + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U] 
                                << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[3U] 
                                             >> 0x10U))) 
                           + vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__hint_sum_w[4U]) 
                          << 0x10U)));
}

void VuCup_top::_settle__TOP__5(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_settle__TOP__5\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[1U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[2U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[3U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[4U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[5U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[6U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[7U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[8U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[9U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0xaU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0xbU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0xcU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0xdU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0xeU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q[0xfU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | (IData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                              != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[1U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[2U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[3U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[4U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[5U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[6U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[7U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[8U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[9U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xaU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xbU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xcU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xdU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xeU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xfU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | (IData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                              != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[1U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[2U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[3U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[4U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[5U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[6U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[7U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[8U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[9U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xaU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xbU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xcU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xdU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xeU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xfU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [8U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [9U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xaU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xbU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xcU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xdU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xeU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xfU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [8U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [9U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xaU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xbU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xcU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xdU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xeU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_q
        [0xfU];
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata[__Vilp] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0xffffc03fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xffffffc0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U] << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0xffc03fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xffffc000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U] << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0xc03fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xffc00000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U] << 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xc0000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U] << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0x3fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U] >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xffffc03fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xffffffc0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U] << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xffc03fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xffffc000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U] << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xc03fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xffc00000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U] << 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xc0000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U] << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0x3fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U] >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xffffc03fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xffffffc0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U] << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xffc03fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xffffc000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U] << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xc03fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xffc00000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xaU] << 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xc0000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xbU] << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0x3fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xbU] >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xffffc03fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xffffffc0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xcU] << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xffc03fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xffffc000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xdU] << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xc03fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xffc00000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xeU] << 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xc0000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xfU] << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
        = ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U]) 
           | (0x3fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xfU] >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [8U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [9U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0xaU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0xbU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0xcU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0xdU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0xeU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
        [0xfU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | (IData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                     [0U] >> 7U) & 
                                    (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                        >> 2U)))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [1U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [2U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [3U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [4U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [5U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [6U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [7U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [8U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [9U] >> 7U) & 
                                     (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                         >> 2U)))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [0xaU] >> 7U) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                           >> 2U)))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [0xbU] >> 7U) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                           >> 2U)))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [0xcU] >> 7U) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                           >> 2U)))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [0xdU] >> 7U) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                           >> 2U)))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [0xeU] >> 7U) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                           >> 2U)))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
           | ((QData)((IData)((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                      [0xfU] >> 7U) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                           >> 2U)))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x15U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : 0U) : ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? ((0x100U 
                                            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? ((0x80U 
                                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                        [
                                                        (0x3fU 
                                                         & ((IData)(0x30U) 
                                                            + 
                                                            (0xfU 
                                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(0x30U) 
                                                             + 
                                                             (0xfU 
                                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                          : 0U))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(0x30U) 
                                                             + 
                                                             (0xfU 
                                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                          : 0U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(0x30U) 
                                                             + 
                                                             (0xfU 
                                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))])))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(0x30U) 
                                                           + 
                                                           (0xfU 
                                                            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                        [
                                                        (0x3fU 
                                                         & ((IData)(0x30U) 
                                                            + 
                                                            (0xfU 
                                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(0x30U) 
                                                             + 
                                                             (0xfU 
                                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q))))
                                                      : 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))])
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                      : 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                                     [
                                                     (0xfU 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))]))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        ((IData)(1U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))) 
                                                             >> 5U)))] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U)))))
                                                         ? 0U
                                                         : 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         ((IData)(1U) 
                                                          + 
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))) 
                                                              >> 5U)))] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))))))) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U)))] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U)))))
                                                           ? 0U
                                                           : 
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x3fU 
                                                             & (((IData)(0x20U) 
                                                                 + 
                                                                 (0x7c0U 
                                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                     << 6U))) 
                                                                >> 5U)))] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))))) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                            (0x3fU 
                                                             & (((IData)(0x20U) 
                                                                 + 
                                                                 (0x7c0U 
                                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                     << 6U))) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 
                                                         (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U)))))
                                                            ? 0U
                                                            : 
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                            ((IData)(1U) 
                                                             + 
                                                             (0x3fU 
                                                              & (((IData)(0x20U) 
                                                                  + 
                                                                  (0x7c0U 
                                                                   & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                      << 6U))) 
                                                                 >> 5U)))] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 (0x7c0U 
                                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                     << 6U))))))) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                             (0x3fU 
                                                              & (((IData)(0x20U) 
                                                                  + 
                                                                  (0x7c0U 
                                                                   & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                      << 6U))) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 (0x7c0U 
                                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                     << 6U)))))))))))))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3eU 
                                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                         << 1U))]
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (0x3eU 
                                                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                          << 1U))]
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))]
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (0x3eU 
                                                         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                            << 1U))]
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         (0x3eU 
                                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 1U))]))))))))
                                            : 0U) : 0U))
            : ((0x400U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                ? ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? 0U : ((0x10U 
                                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? 0U : 
                                            ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((2U 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__pmrcfg_csr_i__DOT__rdata_q)))
                                               : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_rdata
                                              [(0x3fU 
                                                & ((IData)(0x30U) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]))))
                                : ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? 0U : 
                                           ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? 0U : 
                                            ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q
                                                  : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q)
                                              : ((1U 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                  : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata))))
                                        : ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? 0U : 
                                           ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 0x1008064U))
                                             : ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata2_rdata)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_rdata
                                                  : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)))))
                                    : 0U)) : ((0x40U 
                                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((0x20U 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))))
                                               : 0U))
                        : 0U) : 0U) : ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? ((0x100U 
                                            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? ((0x80U 
                                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x30U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))])
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                      : 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))))]))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0xfU 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))]
                                                      : 
                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           + 
                                                           (0x3cU 
                                                            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 2U))))] 
                                                       << 0x18U) 
                                                      | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x3cU 
                                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 2U))))] 
                                                          << 0x10U) 
                                                         | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (0x3cU 
                                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                     << 2U))))] 
                                                             << 8U) 
                                                            | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                            [
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 2U))]))))
                                                     : 0U))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))]
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))]
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))]
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))]
                                                          : 0U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q))
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0x40901104U
                                                          : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                            : 0U) : 
                                       ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x80U 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 0U))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
        = ((0x3fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U]) 
           | (0xffffffc0U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0U])) 
                                      << 2U)) << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U]) 
           | ((0x3fU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                 [0U])) 
                                 << 2U)) >> 0x1aU)) 
              | (0xffffffc0U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0U])) 
                                          << 2U) >> 0x20U)) 
                                << 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
        = ((0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U]) 
           | (0xffffff00U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [1U])) 
                                      << 2U)) << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
        = ((0xfffffc00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U]) 
           | ((0xffU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                 [1U])) 
                                 << 2U)) >> 0x18U)) 
              | (0xffffff00U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [1U])) 
                                          << 2U) >> 0x20U)) 
                                << 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
        = ((0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U]) 
           | (0xfffffc00U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [2U])) 
                                      << 2U)) << 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
        = ((0xfffff000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U]) 
           | ((0x3ffU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                  [2U])) 
                                  << 2U)) >> 0x16U)) 
              | (0xfffffc00U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [2U])) 
                                          << 2U) >> 0x20U)) 
                                << 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
        = ((0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U]) 
           | (0xfffff000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [3U])) 
                                      << 2U)) << 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
        = ((0xffffc000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U]) 
           | ((0xfffU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                  [3U])) 
                                  << 2U)) >> 0x14U)) 
              | (0xfffff000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [3U])) 
                                          << 2U) >> 0x20U)) 
                                << 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
        = ((0x3fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U]) 
           | (0xffffc000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [4U])) 
                                      << 2U)) << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
        = ((0xffff0000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U]) 
           | ((0x3fffU & ((IData)(((QData)((IData)(
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                   [4U])) 
                                   << 2U)) >> 0x12U)) 
              | (0xffffc000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [4U])) 
                                          << 2U) >> 0x20U)) 
                                << 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
        = ((0xffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U]) 
           | (0xffff0000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [5U])) 
                                      << 2U)) << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
        = ((0xfffc0000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U]) 
           | ((0xffffU & ((IData)(((QData)((IData)(
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                   [5U])) 
                                   << 2U)) >> 0x10U)) 
              | (0xffff0000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [5U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
        = ((0x3ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U]) 
           | (0xfffc0000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [6U])) 
                                      << 2U)) << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
        = ((0xfff00000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U]) 
           | ((0x3ffffU & ((IData)(((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [6U])) 
                                    << 2U)) >> 0xeU)) 
              | (0xfffc0000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [6U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
        = ((0xfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U]) 
           | (0xfff00000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [7U])) 
                                      << 2U)) << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
        = ((0xffc00000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U]) 
           | ((0xfffffU & ((IData)(((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [7U])) 
                                    << 2U)) >> 0xcU)) 
              | (0xfff00000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [7U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
        = ((0x3fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U]) 
           | (0xffc00000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [8U])) 
                                      << 2U)) << 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
        = ((0xff000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU]) 
           | ((0x3fffffU & ((IData)(((QData)((IData)(
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [8U])) 
                                     << 2U)) >> 0xaU)) 
              | (0xffc00000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [8U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU]) 
           | (0xff000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [9U])) 
                                      << 2U)) << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
        = ((0xfc000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU]) 
           | ((0xffffffU & ((IData)(((QData)((IData)(
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [9U])) 
                                     << 2U)) >> 8U)) 
              | (0xff000000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [9U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
        = ((0x3ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU]) 
           | (0xfc000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xaU])) 
                                      << 2U)) << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
        = ((0xf0000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU]) 
           | ((0x3ffffffU & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xaU])) 
                                      << 2U)) >> 6U)) 
              | (0xfc000000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0xaU])) 
                                          << 2U) >> 0x20U)) 
                                << 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
        = ((0xfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU]) 
           | (0xf0000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xbU])) 
                                      << 2U)) << 0x1cU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
        = ((0xc0000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU]) 
           | ((0xfffffffU & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xbU])) 
                                      << 2U)) >> 4U)) 
              | (0xf0000000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0xbU])) 
                                          << 2U) >> 0x20U)) 
                                << 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU]) 
           | (0xc0000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xcU])) 
                                      << 2U)) << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
        = ((0x3fffffffU & ((IData)(((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xcU])) 
                                    << 2U)) >> 2U)) 
           | (0xc0000000U & ((IData)((((QData)((IData)(
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                       [0xcU])) 
                                       << 2U) >> 0x20U)) 
                             << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
        = (IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                   [0xdU])) << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
        = ((0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U]) 
           | (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                       [0xdU])) << 2U) 
                      >> 0x20U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
        = ((3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U]) 
           | (0xfffffffcU & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xeU])) 
                                      << 2U)) << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U]) 
           | ((3U & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                              [0xeU])) 
                              << 2U)) >> 0x1eU)) | 
              (0xfffffffcU & ((IData)((((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                        [0xeU])) 
                                        << 2U) >> 0x20U)) 
                              << 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
        = ((0xfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U]) 
           | (0xfffffff0U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xfU])) 
                                      << 2U)) << 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
        = ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U]) 
           | ((0xfU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                [0xfU])) 
                                << 2U)) >> 0x1cU)) 
              | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0xfU])) 
                                          << 2U) >> 0x20U)) 
                                << 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n) 
           | (4U & (((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)
                      ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U) : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 2U) & (~ (IData)(
                                                        (0U 
                                                         != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked))))) 
                    << 2U)));
    if ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [0U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0U]) | (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 1U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 1U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [1U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [1U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [1U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [1U]) | (((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x800U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 2U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 2U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [2U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [2U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [2U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [2U]) | (((0x100000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x80000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 3U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 3U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [3U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x18U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [3U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [3U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [3U]) | (((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x8000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 4U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 4U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [4U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [4U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [4U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [4U]) | (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 5U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 5U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [5U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [5U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [5U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [5U]) | (((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x800U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 6U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 6U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [6U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [6U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [6U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [6U]) | (((0x100000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x80000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 7U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 7U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [7U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x18U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [7U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [7U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [7U]) | (((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x8000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 8U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 8U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [8U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [8U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [8U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [8U]) | (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 9U)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 9U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [9U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [9U]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                              [9U] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [9U]) | (((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x800U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 0xaU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xaU))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xaU];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xaU]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xaU] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xaU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xaU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xaU]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xaU]) | (((0x100000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x80000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 0xbU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xbU))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xbU];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x18U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xbU]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xbU] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xbU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xbU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xbU]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xbU]) | (((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x8000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 0xcU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xcU))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xcU];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xcU]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xcU] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xcU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xcU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xcU]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xcU]) | (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((8U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 0xdU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xdU))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xdU];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xdU]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xdU] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xdU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xdU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xdU]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xdU]) | (((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x800U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 0xeU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xeU))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xeU];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xeU]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xeU] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xeU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xeU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xeU]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xeU]) | (((0x100000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x80000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                        >> 0xfU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xfU))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xfU];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x18U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = (0x9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xfU]);
        if ((1U & (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU]) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xfU] >> 1U)) & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
                = ((0xfeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU]) | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xfU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
                = ((0xfdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU]) | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xfU]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
                = ((0xfbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU]) | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xfU]));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = ((0xe7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xfU]) | (((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x8000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                             >> 0xfU))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | (IData)((IData)((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked) 
                                    | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                >> 1U)) 
                                       & (1U == (3U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                    [1U] 
                                                    >> 3U)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 1U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 2U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [2U] 
                                                     >> 3U)))))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 2U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 3U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [3U] 
                                                     >> 3U)))))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 3U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 4U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [4U] 
                                                     >> 3U)))))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 4U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 5U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [5U] 
                                                     >> 3U)))))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 5U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 6U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [6U] 
                                                     >> 3U)))))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 6U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 7U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [7U] 
                                                     >> 3U)))))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 7U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 8U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [8U] 
                                                     >> 3U)))))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 8U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 9U)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [9U] 
                                                     >> 3U)))))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 9U)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 0xaU)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [0xaU] 
                                                     >> 3U)))))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 0xaU)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 0xbU)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [0xbU] 
                                                     >> 3U)))))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 0xbU)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 0xcU)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [0xcU] 
                                                     >> 3U)))))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 0xcU)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 0xdU)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [0xdU] 
                                                     >> 3U)))))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 0xdU)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 0xeU)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [0xeU] 
                                                     >> 3U)))))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked) 
           | ((QData)((IData)((1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                              >> 0xeU)) 
                                     | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_locked 
                                                 >> 0xfU)) 
                                        & (1U == (3U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                                                     [0xfU] 
                                                     >> 3U)))))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_ex 
        = ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU])
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result
            : ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[7U])
                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)
                : ((0x40000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[7U])
                    ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                        ? (- vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                        : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                    : ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U])
                        ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_rdata_int
                        : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_result))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__pmp_lsu_req 
        = (1U & (~ ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                   << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                >> 0x10U)))) 
                    | (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                     << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                                  >> 2U)))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp_trie_en 
        = ((0U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                          << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                       >> 2U)))) & 
           (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                          << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                       >> 0x10U)))));
    if (((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                        << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                     >> 0x10U)))) | 
         (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                        << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                     >> 2U)))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trans_r[0U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trans_r[1U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trans_r[2U];
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__pmp_if_req 
        = (1U & (~ ((3U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                          >> 0x10U)))) 
                    | (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                     << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                                  >> 2U)))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__core_req 
        = ((~ ((3U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                     >> 0x10U)))) | 
               (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                              << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                           >> 2U)))))) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp_trie_en 
        = ((0U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                          << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                       >> 2U)))) & 
           (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                 >> 0x10U)))));
    if (((3U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                               >> 0x10U)))) | (0U == 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                                      >> 2U)))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp_bus_req 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp_bus_req 
            = (2U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trans_r;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__core_req 
        = ((~ ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                              << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                           >> 0x10U)))) 
               | (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                             >> 2U)))))) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp_bus_req 
        = (((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                           << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                        >> 0x10U)))) 
            | (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                             << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                          >> 2U)))))
            ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid)
            : (2U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0U] 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [0U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[1U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 1U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [1U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [1U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[2U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 2U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [2U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [2U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[3U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 3U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [3U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [3U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[4U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 4U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [4U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [4U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[5U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 5U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [5U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [5U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[6U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 6U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [6U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [6U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[7U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 7U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [7U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [7U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[8U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 8U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [8U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [8U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[9U] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 9U))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [9U] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                   [9U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0xaU] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 0xaU))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0xaU] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                     [0xaU]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0xbU] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 0xbU))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0xbU] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                     [0xbU]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0xcU] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 0xcU))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0xcU] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                     [0xcU]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0xdU] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 0xdU))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0xdU] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                     [0xdU]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0xeU] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 0xeU))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0xeU] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                     [0xeU]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n[0xfU] 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpaddr_locked 
                          >> 0xfU))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q
           [0xfU] : ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n
                     [0xfU]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rvalid[3U] 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__int_rvalid_b0) 
            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__int_rvalid_b1)) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__pmp_lsu_req)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = (((0xf0000000U <= ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[2U] 
                              << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[1U] 
                                        >> 0x19U))) 
            & (0xf0003fffU >= ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[2U] 
                                << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[1U] 
                                          >> 0x19U)))) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[0U] 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = (((0xf0000000U <= (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o 
                                     >> 0x14U))) & 
            (0xf0003fffU >= (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o 
                                     >> 0x14U)))) & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o 
                                                             >> 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [8U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [9U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0xaU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0xbU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0xcU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0xdU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0xeU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
        [0xfU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rvalid
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rvalid
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rvalid
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_rvalid
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | (IData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                              [0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [1U]))) << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [2U]))) << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [3U]))) << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [4U]))) << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [5U]))) << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [6U]))) << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [7U]))) << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [8U]))) << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [9U]))) << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [0xaU]))) << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [0xbU]))) << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [0xcU]))) << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [0xdU]))) << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [0xeU]))) << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r_unused) 
           | ((QData)((IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n_r
                               [0xfU]))) << 0xfU));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_resp) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rvalid_data_o[0U] = 0U;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__mem_rvalid_data_i
            [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_resp];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rvalid_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
        = ((0x1ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U]) 
           | (0xfe000000U & ((IData)((((3U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U)))) 
                                       | (0U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                                       >> 2U)))))
                                       ? ((3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))
                                           ? (QData)((IData)(
                                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                               << 7U) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                                 >> 0x19U))))
                                           : (QData)((IData)(
                                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                               << 7U) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                                 >> 0x19U)))))
                                       : (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__reloc_addr)))) 
                             << 0x19U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U] 
        = (0x1ffffffU & ((IData)((((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                    >> 0x10U)))) 
                                   | (0U == (3U & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                                      >> 2U)))))
                                   ? ((3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))
                                       ? (QData)((IData)(
                                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                           << 7U) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                             >> 0x19U))))
                                       : (QData)((IData)(
                                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                           << 7U) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                             >> 0x19U)))))
                                   : (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__reloc_addr)))) 
                         >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]) 
           | (0x40000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                           << 0x10U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o[1U] 
                                        >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]) 
           | (0x80000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                          << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]) 
           | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 0U;
    if (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex)) 
          | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__misaligned_halfword)) 
         & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
               >> 3U)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                >> 7U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                             >> 3U))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT____Vcellout__xpmp__DOT__xpmp_i__pmp_trans_o;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0xfffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | ((QData)((IData)((IData)((((3U == (3U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                           >> 0x10U)))) 
                                        | (0U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                                        >> 2U)))))
                                        ? ((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                              >> 0x10U))))
                                            ? (QData)((IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                               >> 0x14U)))
                                            : (QData)((IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                               >> 0x14U))))
                                        : (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__pmp_walker_i__DOT__reloc_addr)))))) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = (0xffffffffbffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0xffffffff7ffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | ((QData)((IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                     >> 1U)))) << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0xffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | (IData)((IData)((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rvalid[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_rvalid_data_o
        [0U];
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__fifo_input 
        = ((4U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
                  << 2U)) | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__gntpar_err_q)) 
                             << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
        = (0x80000000000ULL | (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rvalid
                                                [0U])) 
                                << 0x29U) | (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__data_rvalidpar_i)) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_rdata
                                                                 [0U])) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_err
                                                                    [0U] 
                                                                    << 7U) 
                                                                   | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__data_rchk_i) 
                                                                      << 2U))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en)) 
           | (2U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                              >> 0x29U)) << 1U) & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                   >> 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                          >> 0x2bU))) == (1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                        >> 0x2aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en)) 
           | (1U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                              >> 0x29U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                            >> 5U)) 
                    & (~ ((8U >= (0xfU & ((IData)(3U) 
                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))) 
                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                             >> (0xfU & ((IData)(3U) 
                                         * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid 
        = (1U & (((5U >= (7U & ((IData)(1U) + ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                               << 1U)))) 
                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                     >> (7U & ((IData)(1U) + ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                              << 1U)))))
                  ? ((5U >= (7U & ((IData)(1U) + ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                                  << 1U)))) 
                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                        >> (7U & ((IData)(1U) + ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                                 << 1U)))))
                  : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                             >> 0x29U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_ready 
        = (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state)
                  ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 0x12U) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                           >> 0x2bU)))
                  : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 0x12U) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                           >> 0x2bU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                          >> 0x29U))) == (1U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                                        >> 0x28U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__fifo_input 
        = ((4U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                  << 2U)) | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err) 
                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__gntpar_err_q)) 
                              << 1U) | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                              >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
        = (0xffffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
        = ((0xfffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp) 
           | ((QData)((IData)((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp) 
                                | ((8U >= (0xfU & ((IData)(1U) 
                                                   + 
                                                   ((IData)(3U) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                   & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                      >> (0xfU & ((IData)(1U) 
                                                  + 
                                                  ((IData)(3U) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))))) 
                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp)))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
        = ((0xfffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp) 
           | (IData)((IData)(((8U >= (0xfU & ((IData)(2U) 
                                              + ((IData)(3U) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                              & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__fifo_q) 
                                 >> (0xfU & ((IData)(2U) 
                                             + ((IData)(3U) 
                                                * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res 
        = ((0x10U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                              >> 7U)) << 4U)) | ((8U 
                                                  & (VL_REDXOR_32(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                                              >> 0x20U)))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (VL_REDXOR_32(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                                                >> 0x18U)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (VL_REDXOR_32(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                                                >> 0x10U)))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & VL_REDXOR_32(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                                                >> 8U)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_err 
        = ((4U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                            >> 0x29U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                  >> 7U))) 
                  << 2U)) | ((2U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                              >> 0x29U)) 
                                     & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                >> 1U))) 
                                    << 1U)) | ((5U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                    << 1U))) 
                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                      << 1U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U] 
        = ((3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U]) 
           | (0xfffffffcU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp) 
                             << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U] 
        = ((3U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp)) 
            & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res)) 
               != (0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                   >> 2U))))) | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en) 
                                                   >> 1U) 
                                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp)) 
                                                 & ((1U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_i__DOT__rchk_res) 
                                                        >> 4U)) 
                                                    != 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_resp 
                                                                >> 6U))))));
}

void VuCup_top::_eval_initial(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_eval_initial\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n 
        = vlTOPp->__VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n 
        = vlTOPp->__VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->__VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->__VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->__VinpClk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__clk_sys_i = vlTOPp->clk_sys_i;
    vlTOPp->__Vclklast__TOP__rst_sys_ni = vlTOPp->rst_sys_ni;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__pmrcfg_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__pmrcfg_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vclklast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
}
