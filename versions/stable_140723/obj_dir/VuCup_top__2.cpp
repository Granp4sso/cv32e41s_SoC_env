// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VuCup_top::_sequent__TOP__23(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__23\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n) 
                 >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n) 
                    >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__shadow_q 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__shadow_q 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__gen_hardened__DOT__shadow_q)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__24(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__24\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                        = (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                   [(3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))] 
                                   >> 2U));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                        = (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                   >> 2U));
                }
            }
        }
    }
}

VL_INLINE_OPT void VuCup_top::_combo__TOP__25(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_combo__TOP__25\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp131;
    CData/*31:0*/ __Vtemp136;
    CData/*31:0*/ __Vtemp147;
    CData/*31:0*/ __Vtemp152;
    CData/*31:0*/ __Vtemp179;
    CData/*31:0*/ __Vtemp185;
    // Body
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__device_rdata_i[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o 
        = ((0x2fffffffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o) 
           | ((QData)((IData)((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o 
                                                >> 0x35U)))))) 
              << 0x34U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    if ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid 
        = ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U] 
              >> 0xfU) & (2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
            & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q) 
                  & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U] 
                        >> 0xeU))))) & (((0U == ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                                 - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q))) 
                                         | ((1U == 
                                             ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                              - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q))) 
                                            & (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U] 
                                           >> 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
                = ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access)
                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
        }
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
            = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U] 
                >> 0xeU) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xcU) | ((((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
                               & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                     >> 0x11U))) & 
                              (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                  >> 0x10U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__lsu_valid_1 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
               >> 2U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[0U] 
                         >> 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid 
        = (1U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[0U] 
                    >> 0x10U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                    >> 0xcU))) & (~ 
                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                   >> 0x11U))) 
                 & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                  >> 0x12U) & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                 >> 0x10U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                 >> 0xcU))) 
                               & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                     >> 0x11U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0U;
    if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                            [0U] >> 0x1cU)))) {
            if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 1U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                      [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                              >> 0xbU)) & (0U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U]))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x3ffffeU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                   [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                           >> 0xaU)) 
                                  & ((1U == (0x7ffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                     << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x7ffffcU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                   [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                           >> 9U)) 
                                  & ((2U == (0x7ffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                     << 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff8U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                   [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                           >> 8U)) 
                                  & ((3U == (0x7ffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                     << 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x1fffff0U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                            >> 7U)) 
                                   & ((4U == (0x7ffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                      << 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x3ffffe0U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                            >> 6U)) 
                                   & ((5U == (0x7ffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                      << 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x7ffffc0U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                            >> 5U)) 
                                   & ((6U == (0x7ffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                      << 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff80U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                            >> 4U)) 
                                   & ((7U == (0x7ffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                      << 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x1fffff00U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             >> 3U)) 
                                    & ((8U == (0x7ffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x3ffffe00U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             >> 2U)) 
                                    & ((9U == (0x7ffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x7ffffc00U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             >> 1U)) 
                                    & ((0xaU == (0x7ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff800U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U]) 
                                    & ((0xbU == (0x7ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 1U)) 
                                    & ((0xcU == (0x7ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffffe000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 2U)) 
                                    & ((0xdU == (0x7ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffffc000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 3U)) 
                                    & ((0xeU == (0x7ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffff8000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 4U)) 
                                    & ((0xfU == (0x7ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffff0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 5U)) 
                                    & ((0x10U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffe0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 6U)) 
                                    & ((0x11U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffc0000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 7U)) 
                                    & ((0x12U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfff80000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 8U)) 
                                    & ((0x13U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfff00000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 9U)) 
                                    & ((0x14U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffe00000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0xaU)) 
                                    & ((0x15U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffc00000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0xbU)) 
                                    & ((0x16U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xff800000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0xcU)) 
                                    & ((0x17U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xff000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0xdU)) 
                                    & ((0x18U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfe000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0xeU)) 
                                    & ((0x19U == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfc000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0xfU)) 
                                    & ((0x1aU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xf8000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0x10U)) 
                                    & ((0x1bU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xf0000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0x11U)) 
                                    & ((0x1cU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xe0000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0x12U)) 
                                    & ((0x1dU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xc0000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0x13U)) 
                                    & ((0x1eU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x80000000U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             << 0x14U)) 
                                    & ((0x1fU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                       << 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid 
        = (1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                   >> 6U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                >> 0xdU))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                 >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 0U;
    if ((0x800U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read 
                                        = (1U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U) 
                                                 | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 2U) 
                                                    | ((2U 
                                                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (~ 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                          >> 0xfU))
                                                         : 
                                                        (~ 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (~ 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                          >> 0xfU))
                                                         : 
                                                        (~ 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                          >> 0xfU)))))));
                                } else {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        } else {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        } else {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                if ((0x100U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else {
                    if ((0x80U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                                }
                                            } else {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                            }
                                        } else {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xfffff03fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0xfc0U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                         + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                  >> 0x18U))) << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xfffc0fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0x3f000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                             << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                          >> 6U)) + 
                           (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                  >> 0x19U))) << 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xff03ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0xfc0000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                              << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                           >> 0xcU)) 
                            + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                     >> 0x1aU))) << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xc0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0x3f000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                            >> 0x12U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       >> 0x1bU))) 
                             << 0x18U)));
    __Vtemp131 = (0x3fU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                             << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                       >> 0x18U)) + 
                           (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                  >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0xc0000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                          >> 0x18U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       >> 0x1cU))) 
                             << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0x3fffffffU & (__Vtemp131 >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xfffffc0fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0x3f0U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                           << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                     >> 0x1eU)) + (1U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                      >> 0x1dU))) 
                        << 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xffff03ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0xfc00U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                            << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                         >> 4U)) + 
                          (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                 >> 0x1eU))) << 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xffc0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0x3f0000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                              << 0x16U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                           >> 0xaU)) 
                            + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                     >> 0x1fU))) << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xf03fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0xfc00000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                               << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                            >> 0x10U)) 
                             + (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) 
                            << 0x16U)));
    __Vtemp136 = (0x3fU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                             << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                         >> 0x16U)) 
                           + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                    >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0xf0000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                            >> 0x16U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       >> 1U))) << 0x1cU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0xfffffffU & (__Vtemp136 >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xffffff03U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0xfcU & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                          << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                    >> 0x1cU)) + (1U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                     >> 2U))) 
                       << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xffffc0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0x3f00U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                            << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                         >> 2U)) + 
                          (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                 >> 3U))) << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xfff03fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0xfc000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                             << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                          >> 8U)) + 
                           (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 4U))) << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xfc0fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0x3f00000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                               << 0x12U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                            >> 0xeU)) 
                             + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 5U))) << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0x3ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0xfc000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                            >> 0x14U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       >> 6U))) << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xffffffc0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0x3fU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                         << 6U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                   >> 0x1aU)) + (1U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                    >> 7U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xfffff03fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0xfc0U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                         + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 8U))) << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xfffc0fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0x3f000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                             << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                          >> 6U)) + 
                           (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 9U))) << 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xff03ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0xfc0000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                              << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                           >> 0xcU)) 
                            + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     >> 0xaU))) << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xc0ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0x3f000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                            >> 0x12U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       >> 0xbU))) << 0x18U)));
    __Vtemp147 = (0x3fU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                             << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                       >> 0x18U)) + 
                           (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0xc0000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                          >> 0x18U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       >> 0xcU))) << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0x3fffffffU & (__Vtemp147 >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xfffffc0fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0x3f0U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                           << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                     >> 0x1eU)) + (1U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 0xdU))) 
                        << 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xffff03ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0xfc00U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                            << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                         >> 4U)) + 
                          (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                 >> 0xeU))) << 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xffc0ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0x3f0000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                              << 0x16U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                           >> 0xaU)) 
                            + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     >> 0xfU))) << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xf03fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0xfc00000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                            >> 0x10U)) 
                             + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x10U))) << 0x16U)));
    __Vtemp152 = (0x3fU & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                             << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                         >> 0x16U)) 
                           + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                    >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0xf0000000U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                            >> 0x16U)) 
                              + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       >> 0x11U))) 
                             << 0x1cU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0xfffffffU & (__Vtemp152 >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xffffff03U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0xfcU & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                          << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                    >> 0x1cU)) + (1U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                     >> 0x12U))) 
                       << 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xffffc0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0x3f00U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                           >> 2U) + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                           >> 0x13U))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xfff03fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0xfc000U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                            >> 8U) + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 0x14U))) 
                          << 0xeU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xfc0fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0x3f00000U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                              >> 0xeU) + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                >> 0x15U))) 
                            << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0x3ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0xfc000000U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x14U) + (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                  >> 0x16U))) 
                             << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
        = (0x1fffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
    if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
        if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                } else {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    } else {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                if ((0U == (7U & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                     >> 0x13U))))) {
                                    if ((0U == ((0x3e0U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 0xfU) 
                                                    | (0x7fe0U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                          >> 0x11U)))) 
                                                | (0x1fU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 0xeU)))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = (0x200ULL 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = ((0U 
                                                == 
                                                (0xfffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 5U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                       >> 0x1bU))))
                                                ? (0x20ULL 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                                : (
                                                   (1U 
                                                    == 
                                                    (0xfffU 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 5U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   (0x40ULL 
                                                    | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                          << 5U) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                            >> 0x1bU))))
                                                     ? 
                                                    ((1U 
                                                      & ((3U 
                                                          != 
                                                          (3U 
                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                                                               << 0x1dU) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[2U] 
                                                                 >> 3U)))) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                            >> 0xfU)))
                                                      ? 0x9f510000100ULL
                                                      : 
                                                     (4ULL 
                                                      | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                     : 
                                                    ((0x7b2U 
                                                      == 
                                                      (0xfffU 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           << 5U) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                             >> 0x1bU))))
                                                      ? 
                                                     ((0x8000U 
                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U])
                                                       ? 
                                                      (0x80ULL 
                                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                                       : 0x9f510000100ULL)
                                                      : 
                                                     ((0x105U 
                                                       == 
                                                       (0xfffU 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                            << 5U) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                              >> 0x1bU))))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                                                              << 0x1dU) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[2U] 
                                                                >> 3U)))) 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                                           >> 0x15U))
                                                        ? 0x9f510000100ULL
                                                        : 
                                                       ((0x1fffffffffffdULL 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                        | ((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                                                >> 9U))))) 
                                                           << 1U)))
                                                       : 
                                                      ((0x8c0U 
                                                        == 
                                                        (0xfffU 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                             << 5U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                               >> 0x1bU))))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (3U 
                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                                                               << 0x1dU) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[2U] 
                                                                 >> 3U)))) 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                                            >> 0x15U))
                                                         ? 0x9f510000100ULL
                                                         : 
                                                        ((0x1fffffffffffeULL 
                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                         | (IData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                                                >> 9U)))))))
                                                        : 0x9f510000100ULL))))));
                                    } else {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                    }
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x20000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x40000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    if ((0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = (0x4000000000ULL 
                                               | (0x1ff9fffffffffULL 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                    } else {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = (0x80000ULL 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = (0x1ff9fffffffffULL 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    }
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x800000000ULL 
                                           | (0x1ffe7ffffffffULL 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1fffeffffffffULL 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1ffff3fffffffULL 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = ((1U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 0x13U))))
                                            ? (0x8000ULL 
                                               | (0x1fffffffe7fffULL 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                       >> 0x13U))))
                                                ? (
                                                   (0x1fffffffe7fffULL 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                   | ((QData)((IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                             << 0xaU) 
                                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                               >> 0x16U))))
                                                                        ? 0U
                                                                        : 2U))) 
                                                      << 0xfU))
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 0xdU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                           >> 0x13U))))
                                                    ? 
                                                   ((0x1fffffffe7fffULL 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                    | ((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                              << 0xaU) 
                                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                                >> 0x16U))))
                                                                         ? 0U
                                                                         : 3U))) 
                                                       << 0xfU))
                                                    : 0x9f510000100ULL)));
                                    if ((((0xbf9U == 
                                           (0xfffU 
                                            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                << 5U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                  >> 0x1bU)))) 
                                          | (0xbfaU 
                                             == (0xfffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 5U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                       >> 0x1bU))))) 
                                         | (0xbfcU 
                                            == (0xfffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    << 5U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x1bU)))))) {
                                        if ((1U == 
                                             (7U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                  >> 0x13U))))) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      << 0xaU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                        >> 0x16U))))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                            }
                                        } else {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    }
                }
            } else {
                if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1000000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x400000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1dfffffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x2000000000ULL 
                                       | (0x1ff9fffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000ULL 
                                       | (0x1ffe7ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0xc0000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1e07fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x40000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1fffffff7ffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ffffffefffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0x1ffffcfffffffULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                       | ((QData)((IData)(
                                                          ((0x800000U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U])
                                                            ? 0U
                                                            : 1U))) 
                                          << 0x1cU));
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                if ((0U != (7U & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                     >> 0x13U))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1000000000000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x400000000000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x200000000000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x2000000000ULL 
                                           | (0x1ff9fffffffffULL 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x800000000ULL 
                                           | (0x1ffe7ffffffffULL 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0xc0000000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1e07fffffffffULL 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x40000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x80000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1ffffffefffffULL 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x20000000ULL 
                                           | (0x1ffffcfffffffULL 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    } else {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1000000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ff9fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ffe7ffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x200000000ULL 
                                       | (0x1fff9ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1fffffffbffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x100000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x30000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0x200000U & 
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                        ? ((0x1e07fffffffffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                           | ((QData)((IData)(
                                                              ((0x100000U 
                                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                                ? 
                                                               ((0x80000U 
                                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                                 ? 0x17U
                                                                 : 0x16U)
                                                                : 
                                                               ((0x80000U 
                                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                                 ? 0x1dU
                                                                 : 0x1cU)))) 
                                              << 0x27U))
                                        : ((0x100000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                            ? 0x9f510000100ULL
                                            : ((0x1e07fffffffffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0x80000U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                                    ? 0x11U
                                                                    : 0x10U))) 
                                                  << 0x27U))));
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    }
                }
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        }
    } else {
        if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                } else {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1000000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x4000000000ULL 
                                       | (0x1ff9fffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000ULL 
                                       | (0x1ffe7ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x100000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000000ULL 
                                       | (0x1ffff3fffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1e07fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x40000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    } else {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                if (((3U == (3U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 5U))) 
                                     | (2U == (3U & 
                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 5U))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1000000000000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1ff9fffffffffULL 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x1ffe7ffffffffULL 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x40000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (0x80000ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  >> 3U)))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = (0x100000ULL 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                    }
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = (((((((((0U 
                                                   == 
                                                   ((0x1f8U 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           << 0xdU) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                             >> 0x13U))))) 
                                                  | (0x100U 
                                                     == 
                                                     ((0x1f8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                             << 0xdU) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                               >> 0x13U)))))) 
                                                 | (2U 
                                                    == 
                                                    ((0x1f8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 3U)) 
                                                     | (7U 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                            << 0xdU) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                              >> 0x13U)))))) 
                                                | (3U 
                                                   == 
                                                   ((0x1f8U 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           << 0xdU) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                             >> 0x13U)))))) 
                                               | (4U 
                                                  == 
                                                  ((0x1f8U 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                          << 0xdU) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                            >> 0x13U)))))) 
                                              | (6U 
                                                 == 
                                                 ((0x1f8U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 0xdU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                           >> 0x13U)))))) 
                                             | (7U 
                                                == 
                                                ((0x1f8U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        << 0xdU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                          >> 0x13U)))))) 
                                            | (1U == 
                                               ((0x1f8U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 0x13U))))))
                                            ? ((0x1e07fffffffffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    ((0x1f8U 
                                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                         << 3U)) 
                                                                     | (7U 
                                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                            << 0xdU) 
                                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                              >> 0x13U)))))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x100U 
                                                                     == 
                                                                     ((0x1f8U 
                                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                          << 3U)) 
                                                                      | (7U 
                                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                             << 0xdU) 
                                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                               >> 0x13U)))))
                                                                     ? 8U
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      ((0x1f8U 
                                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                           << 3U)) 
                                                                       | (7U 
                                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                              << 0xdU) 
                                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                                >> 0x13U)))))
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       ((0x1f8U 
                                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                            << 3U)) 
                                                                        | (7U 
                                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                               << 0xdU) 
                                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                                >> 0x13U)))))
                                                                       ? 0x13U
                                                                       : 
                                                                      ((4U 
                                                                        == 
                                                                        ((0x1f8U 
                                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                             << 3U)) 
                                                                         | (7U 
                                                                            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                                << 0xdU) 
                                                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                                >> 0x13U)))))
                                                                        ? 4U
                                                                        : 
                                                                       ((6U 
                                                                         == 
                                                                         ((0x1f8U 
                                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                              << 3U)) 
                                                                          | (7U 
                                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                                << 0xdU) 
                                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                                >> 0x13U)))))
                                                                         ? 6U
                                                                         : 
                                                                        ((7U 
                                                                          == 
                                                                          ((0x1f8U 
                                                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                               << 3U)) 
                                                                           | (7U 
                                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                                << 0xdU) 
                                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                                >> 0x13U)))))
                                                                          ? 7U
                                                                          : 1U))))))))) 
                                                  << 0x27U))
                                            : ((5U 
                                                == 
                                                ((0x1f8U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        << 0xdU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                          >> 0x13U)))))
                                                ? (0x28000000000ULL 
                                                   | (0x1e07fffffffffULL 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                : (
                                                   (0x105U 
                                                    == 
                                                    ((0x1f8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 3U)) 
                                                     | (7U 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                            << 0xdU) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                              >> 0x13U)))))
                                                    ? 
                                                   (0x68000000000ULL 
                                                    | (0x1e07fffffffffULL 
                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                    : 0x9f510000100ULL)));
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    }
                }
            } else {
                if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                } else {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    } else {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x4000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x2000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x100000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ff9fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000ULL 
                                       | (0x1ffe7ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1fff9ffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x40000000ULL 
                                       | (0x1ffff3fffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0x1ffffffffe7ffULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                       | ((QData)((IData)(
                                                          (3U 
                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               << 0xdU) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                 >> 0x13U))))) 
                                          << 0xbU));
                                if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                            >> 0x15U) 
                                           | (3U == 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 << 0xdU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U))))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    }
                }
            }
        } else {
            if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                } else {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1000000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x2000000000ULL 
                                       | (0x1ff9fffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000ULL 
                                       | (0x1ffe7ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000000ULL 
                                       | (0x1ffff3fffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1e07fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x40000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    } else {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1000000000000ULL 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ff9fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000ULL 
                                       | (0x1ffe7ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ffff3fffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x40000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                if ((0x200000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        = ((0x100000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                            ? ((0x1e07fffffffffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0x80000U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                                    ? 7U
                                                                    : 6U))) 
                                                  << 0x27U))
                                            : ((0x80000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U]))
                                                    ? 
                                                   (0x28000000000ULL 
                                                    | (0x1e07fffffffffULL 
                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U]))
                                                     ? 
                                                    (0x68000000000ULL 
                                                     | (0x1e07fffffffffULL 
                                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                     : 0x9f510000100ULL))
                                                : (0x20000000000ULL 
                                                   | (0x1e07fffffffffULL 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))));
                                } else {
                                    if ((0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                            = ((0x1e07fffffffffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0x80000U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])
                                                                    ? 0x13U
                                                                    : 0x1aU))) 
                                                  << 0x27U));
                                    } else {
                                        if ((0x80000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                = (0x8000000000ULL 
                                                   | (0x1e07fffffffffULL 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                            if ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U]))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                            }
                                        } else {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                = (0x1e07fffffffffULL 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    }
                }
            } else {
                if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x200ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0U == (7U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 << 0xdU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U))))
                                        ? (0x10ULL 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                        : ((1U == (7U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 0x13U))))
                                            ? (8ULL 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                            : 0x9f510000100ULL));
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    } else {
                        if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                            if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x4000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x40000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ff9fffffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x800000000ULL 
                                       | (0x1ffe7ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x400000000ULL 
                                       | (0x1fff9ffffffffULL 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ffff3fffffffULL 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0x1fffffffffbffULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (~ 
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                               >> 0x15U))))) 
                                          << 0xaU));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0x1ffffffffe7ffULL 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                       | ((QData)((IData)(
                                                          (3U 
                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               << 0xdU) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                 >> 0x13U))))) 
                                          << 0xbU));
                                if ((((7U == (7U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                  >> 0x13U)))) 
                                      | (6U == (7U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x13U))))) 
                                     | (3U == (7U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 << 0xdU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U)))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                }
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                     >> 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                               >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (2U & ((0x3ffffffeU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                    >> 2U)) | (0x1ffffffeU 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                  >> 3U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (4U & ((0x1ffffffcU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                    >> 3U)) | (0xffffffcU 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                  >> 4U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (8U & ((0xffffff8U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                   >> 4U)) | (0x7fffff8U 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                 >> 5U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x10U & ((0x7fffff0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 5U)) | (0x3fffff0U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 6U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x20U & ((0x3ffffe0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 6U)) | (0x1ffffe0U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 7U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x40U & ((0x1ffffc0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 7U)) | (0xffffc0U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 8U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x80U & ((0xffff80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                     >> 8U)) | (0x7fff80U 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                   >> 9U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x100U & ((0x7fff00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 9U)) | (0x3fff00U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                    >> 0xaU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x200U & ((0x3ffe00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xaU)) | (0x1ffe00U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xbU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x400U & ((0x1ffc00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xbU)) | (0xffc00U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xcU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x800U & ((0xff800U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                     >> 0xcU)) | (0x7f800U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                     >> 0xdU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x1000U & ((0x7f000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xdU)) | (0x3f000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xeU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x2000U & ((0x3e000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xeU)) | (0x1e000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0xfU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (0x4000U & ((0x1c000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      >> 0xfU)) | (0xc000U 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                      >> 0x10U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffffffe0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1fU & ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                            << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 5U)) : 
                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                         << 0x16U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                      >> 0xaU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfffffc1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e0U & (((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                              << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                           >> 0xfU))
                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                              << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                          >> 0x14U))) 
                        << 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffff83ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x7c00U & (((0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                               << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x19U))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                               << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x1eU))) 
                         << 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfff07fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0xf8000U & (((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 3U))
                            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 8U))) 
                          << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfe0fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1f00000U & (((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                  << 0x13U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                               >> 0xdU))
                              : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                  << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                              >> 0x12U))) 
                            << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xc1ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e000000U & (((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                   << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x17U))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                   << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x19U)));
    __Vtemp179 = (0x1fU & ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             >> 1U))
                            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0x3fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0xc0000000U & (((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                   << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                >> 1U))
                               : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                   << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                >> 6U))) 
                             << 0x1eU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x3fffffffU & (__Vtemp179 >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffff07U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf8U & (((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                             << 0x15U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0xbU))
                         : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                             << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x10U))) 
                       << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffe0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x1f00U & (((0x20000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                               << 0xbU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                           >> 0x15U))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                               << 6U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                         >> 0x1aU))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffc1fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x3e000U & (((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x1fU))
                            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                             >> 4U))) 
                          << 0xdU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xff83ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x7c0000U & (((0x200000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                             ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                 << 0x17U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 9U))
                             : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                 << 0x12U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0xeU))) 
                           << 0x12U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xf07fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf800000U & (((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                  << 0xdU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0x13U))
                              : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                  << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x17U)));
    __Vtemp185 = (0x1fU & ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                          >> 0x1dU))
                            : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                               >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf0000000U & (((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                   << 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                             >> 0x1dU))
                               : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                  >> 2U)) << 0x1cU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xfffffffU & (__Vtemp185 >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffffffc1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x3eU & (((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                            >> 7U) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      >> 0xcU)) << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffff83fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x7c0U & (((0x20000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                             >> 0x11U) : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 0x16U)) 
                        << 6U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q;
    if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    } else {
        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
             & (0U < (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
                = (3U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q) 
                         - (IData)(1U)));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
            }
        }
    } else {
        if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U] 
                    >> 0xeU) & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready)))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
            = ((2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))
                ? (3U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))
                : 0U);
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound1 = 1U;
        if ((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) 
                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int)) 
                   | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound1) 
                      << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid 
        = (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
               >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_stage_i__DOT__wb_valid 
        = (((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                >> 2U)) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                            >> 2U) & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
                                       ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
                                       : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__lsu_valid_1)))) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated)
            ? ((0x20000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])
                ? ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])
                    ? ((~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                            << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                         >> 4U))) & 
                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                         << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                     >> 0x16U))) : 
                   (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                   >> 4U)) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                               << 0xaU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                 >> 0x16U))))
                : ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])
                    ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                        << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                     >> 4U)) : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                   >> 4U))))
            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[4U] 
                             >> 4U)));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0x11U)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0x10U)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            }
        }
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_en_gated 
        = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U] 
            >> 0x12U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_en_gated 
        = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U] 
            >> 0x16U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__lsu_en_gated 
        = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[5U] 
            >> 0xcU) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = ((1U & ((((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                             >> 0x13U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__rf_illegal_raddr)) 
                   | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                               >> 0x14U)) & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__rf_illegal_raddr) 
                                             >> 1U))) 
                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[2U] 
                     >> 5U))) ? 0x9f510000100ULL : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                         ? (- (0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                   >> 0x17U))))
                         : (0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                      << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                >> 0x17U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_rdata_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))
                  ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb 
        = (((((5U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                              [0U] >> 0x1cU))) & ((
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                    [0U] 
                                                    >> 9U) 
                                                   & (3U 
                                                      == 
                                                      (3U 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                                           << 0x13U) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                                             >> 0xdU))))) 
                                                  | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                      [0U] 
                                                      >> 6U) 
                                                     & (0U 
                                                        == 
                                                        (3U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                                               >> 0xdU))))))) 
             & (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                [0U])) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
                             >> 0xfU))) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_stage_i__DOT__wb_valid));
    vlTOPp->__Vfunc_csr_next_value__32__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__32__Vfuncout = vlTOPp->__Vfunc_csr_next_value__32__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__sstatus_n 
        = vlTOPp->__Vfunc_csr_next_value__32__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__34__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__34__Vfuncout = vlTOPp->__Vfunc_csr_next_value__34__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__scounteren_n 
        = vlTOPp->__Vfunc_csr_next_value__34__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__35__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__35__Vfuncout = vlTOPp->__Vfunc_csr_next_value__35__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__senvcfg_n 
        = vlTOPp->__Vfunc_csr_next_value__35__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__20__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__20__Vfuncout = vlTOPp->__Vfunc_csr_next_value__20__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlTOPp->__Vfunc_csr_next_value__20__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__19__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__19__Vfuncout = vlTOPp->__Vfunc_csr_next_value__19__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlTOPp->__Vfunc_csr_next_value__19__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__30__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__30__Vfuncout = 
        (0xffffU & vlTOPp->__Vfunc_csr_next_value__30__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__medeleg_n 
        = vlTOPp->__Vfunc_csr_next_value__30__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__31__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__31__Vfuncout = 
        (0xffff0222U & vlTOPp->__Vfunc_csr_next_value__31__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mideleg_n 
        = vlTOPp->__Vfunc_csr_next_value__31__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__40__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__40__Vfuncout = vlTOPp->__Vfunc_csr_next_value__40__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__satp_n 
        = vlTOPp->__Vfunc_csr_next_value__40__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__41__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__41__Vfuncout = vlTOPp->__Vfunc_csr_next_value__41__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__scontext_n 
        = vlTOPp->__Vfunc_csr_next_value__41__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__15__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__15__Vfuncout = 
        (0xfffffffeU & vlTOPp->__Vfunc_csr_next_value__15__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
        = vlTOPp->__Vfunc_csr_next_value__15__Vfuncout;
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U] 
                    << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2U] 
                                 >> 3U));
        }
    }
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value 
        = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__Vfuncout 
        = (((0U != (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value)) 
            & (1U != (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value)))
            ? 0U : (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value));
    vlTOPp->__Vfunc_csr_next_value__38__wdata = ((0xffffff80U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                 | (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__Vfuncout));
    vlTOPp->__Vfunc_csr_next_value__38__Vfuncout = 
        (0xffffff81U & vlTOPp->__Vfunc_csr_next_value__38__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__stvec_n 
        = vlTOPp->__Vfunc_csr_next_value__38__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__33__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__33__Vfuncout = 
        (0x222U & vlTOPp->__Vfunc_csr_next_value__33__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__sie_n 
        = vlTOPp->__Vfunc_csr_next_value__33__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__26__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__26__Vfuncout = 
        (0xffff0aaaU & vlTOPp->__Vfunc_csr_next_value__26__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
        = vlTOPp->__Vfunc_csr_next_value__26__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n 
        = ((1U > vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0U] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[1U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[2U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[3U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[4U] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[5U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[6U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[7U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[8U] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[9U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xaU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xbU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xcU] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xdU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xeU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xfU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[1U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[2U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[3U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[4U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[5U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[6U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[7U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[8U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[9U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xaU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xbU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xcU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xdU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xeU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xfU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtval_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtval_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__menvcfgh_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__menvcfgh_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__menvcfg_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__menvcfg_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mcounteren_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mcounteren_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tinfo_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tinfo_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen2_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen2_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0h_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0h_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfgh_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfgh_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen2h_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen2h_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen1_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen1_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen3_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen3_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatush_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatush_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__misa_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__misa_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mip_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mip_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen1h_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen1h_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen3h_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen3h_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                  << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 4U)))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = (5U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (((((((((((((((((((((((((((((0x323U == 
                                          (0xfffU & 
                                           ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                             << 0x1cU) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 4U)))) 
                                         | (0x324U 
                                            == (0xfffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                      >> 4U))))) 
                                        | (0x325U == 
                                           (0xfffU 
                                            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                << 0x1cU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 4U))))) 
                                       | (0x326U == 
                                          (0xfffU & 
                                           ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                             << 0x1cU) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 4U))))) 
                                      | (0x327U == 
                                         (0xfffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                            << 0x1cU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 4U))))) 
                                     | (0x328U == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                       << 0x1cU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 4U))))) 
                                    | (0x329U == (0xfffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                      << 0x1cU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                        >> 4U))))) 
                                   | (0x32aU == (0xfffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     << 0x1cU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                       >> 4U))))) 
                                  | (0x32bU == (0xfffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                      >> 4U))))) 
                                 | (0x32cU == (0xfffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 4U))))) 
                                | (0x32dU == (0xfffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 4U))))) 
                               | (0x32eU == (0xfffU 
                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                   >> 4U))))) 
                              | (0x32fU == (0xfffU 
                                            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                << 0x1cU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 4U))))) 
                             | (0x330U == (0xfffU & 
                                           ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                             << 0x1cU) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 4U))))) 
                            | (0x331U == (0xfffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                            << 0x1cU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 4U))))) 
                           | (0x332U == (0xfffU & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                      >> 4U))))) 
                          | (0x333U == (0xfffU & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 4U))))) 
                         | (0x334U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 4U))))) 
                        | (0x335U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                   >> 4U))))) 
                       | (0x336U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                << 0x1cU) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 4U))))) 
                      | (0x337U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                               << 0x1cU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                 >> 4U))))) 
                     | (0x338U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              << 0x1cU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                >> 4U))))) 
                    | (0x339U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                             << 0x1cU) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 4U))))) 
                   | (0x33aU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                            << 0x1cU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 4U))))) 
                  | (0x33bU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                           << 0x1cU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                             >> 4U))))) 
                 | (0x33cU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          << 0x1cU) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                            >> 4U))))) 
                | (0x33dU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                         << 0x1cU) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                           >> 4U))))) 
               | (0x33eU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              | (0x33fU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                       << 0x1cU) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                       >> 4U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        if (
                                                            (0x8000U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U])) {
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        if (
                                                            (0x8000U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U])) {
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb00U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                       << 0x1cU) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                       >> 4U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb01U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb02U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb03U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb04U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb05U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb06U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb07U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb08U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb09U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0aU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0bU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0cU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0dU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0eU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0fU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb10U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb11U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb12U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb13U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb14U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb15U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb16U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb17U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb18U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb19U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1aU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1bU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1cU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1dU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1eU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1fU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x80U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__csr_mtvec_init_if;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                              >> 0xdU)))) {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                  >> 0xcU)))) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we = 0ULL;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                                            = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                                               | ((QData)((IData)(0xfU)) 
                                                  << 
                                                  (0x3cU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                       << 0x1eU) 
                                                      | (0x3ffffffcU 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                            >> 2U))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we = 0ULL;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                            = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x3fU 
                                                   & ((IData)(0x30U) 
                                                      + 
                                                      (0xfU 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                           << 0x1cU) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))))));
                                    }
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                        = ((0x100U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])
                                            ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0xfU 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                           << 0x1cU) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))))))
                                            : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x3fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      (0xfU 
                                                       & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                           << 0x1cU) 
                                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 4U))))))));
                                }
                            } else {
                                if ((0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                            = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0xfU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                       << 0x1cU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 4U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 0U;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 1U;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 0U;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 3U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 2U;
        } else {
            if ((0x200000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U] 
                          >> 0x15U)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U] 
                          >> 0x15U)))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        } else {
            if ((0x200000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                    = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__lsu_en_gated) 
           & (2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id 
        = (1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                          >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                     >> 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id 
        = (1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                          >> 0x2dU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                        >> 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
        = ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 8U))) ? ((1U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 8U)))
                                       ? 0x9f510000100ULL
                                       : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                >> 0x10U))
                                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              << 9U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                >> 0x17U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xffffffffffff0000ULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 0x10U)) 
               | (QData)((IData)((0xffffU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                     >> 0x30U))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xffffffffffffff00ULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 8U)) | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x38U))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xfffffffffffffff0ULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 4U)) | (QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x3cU))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xfffffffffffffffcULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 2U)) | (QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x3eU))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((0xfffffffffffffffeULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                         << 1U)) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                                               >> 0x3fU))))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU];
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WIII(32,(0x3e0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        << 1U)), vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n, vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk7__DOT__i = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we) 
           & (0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = ((((0xfU == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                                   >> 0x1cU))) | (2U 
                                                  == 
                                                  (0xfU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                                                      >> 0x1cU)))) 
                | (6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                                  >> 0x1cU)))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
                : (0x30009aeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
            & (0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value 
        = ((2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x18U)) | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 0x16U)));
    vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__current_value 
        = ((2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                  [0U] >> 0x18U)) | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 0x16U)));
    vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__Vfuncout 
        = (((0U != (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value)) 
            & (1U != (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value)))
            ? (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__current_value)
            : (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0U] 
        = vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__Vfuncout;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
         & (0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q))) {
        vlTOPp->__Vfunc_etrigger_u_resolve__49__next_value 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 6U));
        vlTOPp->__Vfunc_etrigger_u_resolve__49__Vfuncout 
            = vlTOPp->__Vfunc_etrigger_u_resolve__49__next_value;
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__next_value 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 3U));
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__Vfuncout 
            = vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__next_value;
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value 
            = (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 7U));
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__Vfuncout 
            = ((((0U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value)) 
                 & (2U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value))) 
                & (3U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value)))
                ? 0U : (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value));
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__next_value 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 3U));
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__Vfuncout 
            = vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__next_value;
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value 
            = (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 7U));
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__Vfuncout 
            = ((((0U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value)) 
                 & (2U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value))) 
                & (3U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value)))
                ? 0U : (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
            = ((2U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                               >> 0x1cU))) ? (0x28001000U 
                                              | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__Vfuncout) 
                                                  << 7U) 
                                                 | ((0x40U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                    | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__Vfuncout) 
                                                        << 3U) 
                                                       | (7U 
                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))))
                : ((6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x1cU))) ? (0x68001000U 
                                                  | ((0x2000000U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                         [0U] 
                                                         << 0x18U)) 
                                                     | ((0x400000U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                            [0U] 
                                                            << 0x16U)) 
                                                        | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__Vfuncout) 
                                                            << 7U) 
                                                           | ((0x40U 
                                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                              | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__Vfuncout) 
                                                                  << 3U) 
                                                                 | (7U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))))))
                    : ((5U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0x1cU))) ? 
                       ((0U != (0xfcfff651U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata))
                         ? 0xf8000000U : (0x58000001U 
                                          | ((0x200U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                             | ((IData)(vlTOPp->__Vfunc_etrigger_u_resolve__49__Vfuncout) 
                                                << 6U))))
                        : 0xf8000000U)));
    }
    if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                            [0U] >> 0x1cU)))) {
            if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0x400000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | (((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
              & (0xb80U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                       << 0x1cU) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                       >> 4U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 1U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb81U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 2U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb82U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 3U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb83U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 4U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb84U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 5U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb85U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 6U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb86U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 7U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb87U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 8U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb88U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 9U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb89U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xaU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8aU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xbU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8bU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xcU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8cU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xdU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8dU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xeU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8eU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xfU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8fU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x10U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb90U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x11U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb91U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x12U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb92U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x13U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb93U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x14U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb94U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x15U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb95U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x16U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb96U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x17U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb97U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x18U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb98U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x19U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb99U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1aU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9aU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1bU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9bU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1cU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9cU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1dU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9dU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1eU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9eU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1fU)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9fU == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                        << 0x1cU) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                        >> 4U))))) 
              << 0x1fU));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mie_we;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_valid 
        = ((((((((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                    >> 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[5U] 
                                 >> 0xfU)) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[5U] 
                                              >> 7U)) 
                 | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U] 
                     >> 0x16U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid))) 
                | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[7U] 
                    >> 0x12U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_valid))) 
               | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[5U] 
                   >> 0xcU) & (((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))
                                 ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                                 : ((1U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                    | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
                                       & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready)))) 
                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__lsu_en_gated)))) 
              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                 >> 0xaU)) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                              >> 9U)) | ((((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[4U] 
                                              >> 0x1eU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                >> 0x11U)) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                                               >> 0x17U)) 
                                           | (0U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                 << 0x12U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                   >> 0xeU))))) 
                                          | (0U != 
                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[4U] 
                                               << 2U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                 >> 0x1eU)))) 
                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0U] 
                                            >> 6U))) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__done_0 
        = (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__lsu_en_gated)) 
            | ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))
                ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                : ((1U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                   | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))))) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__wb_ready));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                  ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)
                      ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)
                      ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | ((((0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[4U] 
                           << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[3U] 
                                     >> 0x18U))) == 
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz_en)) 
              & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                         >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | ((((0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                          >> 0x16U)) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz_en)) 
              & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                         >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | (0xfffffffeU & (((((0x1fU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[4U] 
                                           << 8U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[3U] 
                                           >> 0x18U))) 
                                == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) << 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz_en)) 
                             & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                         >> 0x14U)) 
                                << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | (0xfffffffeU & (((((0x1fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 0x16U)) 
                                == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) << 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz_en)) 
                             & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                         >> 0x14U)) 
                                << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                >> 1U))))
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                        }
                    }
                }
            } else {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                                : ((0xff000000U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                   << 1U)) 
                                   | ((0xff0000U & 
                                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                         << 0x11U) 
                                        | (0x10000U 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                              >> 0xfU)))) 
                                      | ((0xff00U & 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                           << 1U)) 
                                         | (0xffU & 
                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                             >> 0xfU))))));
                    }
                } else {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = ((0xff000000U & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                   >> 0xfU))))) 
                                                   << 0x18U)) 
                                   | ((0xff0000U & 
                                       ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                        >> 7U))))) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          ((- (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                            << 1U) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                              >> 0x1fU)))))) 
                                           << 8U)) 
                                         | (0xffU & 
                                            (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                             << 9U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                               >> 0x17U))))))))));
                        }
                    } else {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                        }
                    }
                }
            }
        } else {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   & (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          >> 0x17U))))
                                : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   | (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          >> 0x17U)))));
                    } else {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   ^ (~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          >> 0x17U))));
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? 0U : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                     ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                     : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)));
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? 0U : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                            : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                        : ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (0x3fU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                            >> 0x1aU))
                                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                            : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result))));
            }
        }
    } else {
        if ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = (1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))));
                        }
                    }
                }
            } else {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (0xffffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                               << 9U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                 >> 0x17U)))
                                : ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                  >> 6U)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                  << 9U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                    >> 0x17U)))));
                    }
                } else {
                    if ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))))
                                : ((0xffffff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                  >> 0x1eU)))) 
                                                   << 8U)) 
                                   | (0xffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                << 9U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  >> 0x17U)))));
                    }
                }
            }
        } else {
            if ((0x4000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        if ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = (IData)((0x1ffffffffULL 
                                           & (((1ULL 
                                                | ((QData)((IData)(
                                                                   ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                     << 9U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       >> 0x17U)))) 
                                                   << 1U)) 
                                               + (((QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                                                     ? 
                                                                    (~ 
                                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       << 9U) 
                                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                         >> 0x17U)))
                                                                     : 
                                                                    ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                      << 9U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                        >> 0x17U))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                        >> 0x1aU)))))) 
                                              >> 1U)));
                        }
                    }
                }
            } else {
                if ((0x2000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U)))
                                : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U))))
                            : ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)) 
                                   ^ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U)))));
                } else {
                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (IData)((0x1ffffffffULL 
                                           & (((1ULL 
                                                | ((QData)((IData)(
                                                                   ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                     << 9U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       >> 0x17U)))) 
                                                   << 1U)) 
                                               + (((QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                                                     ? 
                                                                    (~ 
                                                                     ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       << 9U) 
                                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                         >> 0x17U)))
                                                                     : 
                                                                    ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                      << 9U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                        >> 0x17U))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                        >> 0x1aU)))))) 
                                              >> 1U))));
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we) {
        if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                [0U];
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we));
    if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r 
            = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) 
               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
        [0U];
    if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
            [0U];
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we) {
        if ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                [0U];
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__lsu_en_gated));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz)) 
           | (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz)) 
           | (2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz)) 
           | (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz)) 
           | (2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
        = (0x1fffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
        = (0x67ffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
        = (0x7bffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x4000U | (0x1fffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x1000U | (0x67ffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp)));
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x2000U | (0x1fffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x800U | (0x67ffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp)));
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x400U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp));
        }
    }
    if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                >> 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                             >> 0x1bU)))) {
        if ((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
             [0U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x6000U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp));
        }
        if ((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
             [1U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
                = (0x1800U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
        = ((0x7ffdU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp)) 
           | (2U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                    >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__abort_op_id 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[0U] 
                 | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                    >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__alu_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x30U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__sys_en 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__alu_en) 
            & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 0x2eU))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                      >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__sys_en) 
            & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 2U))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[5U] 
                                   >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn 
        = ((((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                      >> 0x2eU)) | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                            >> 0x2fU))) 
            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__alu_en)) 
           | ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 2U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__id_stage_i__DOT__sys_en)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0xfc000000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id)) 
                             << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id 
        = (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                    >> 0x17U))) & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                                      >> 9U))) | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_id_pipe[3U] 
                                                      >> 0x17U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                                                      >> 7U)))) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
              & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp) 
                    >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q)));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__26(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__26\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_core__irq_i 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__interrupt_q) 
            << 0x19U) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rvalid) 
                         << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq = 0U;
    if ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1fU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                   | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1) 
                      << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)));
        }
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq)) 
                   | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2) 
                      << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)));
        }
    }
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 0U;
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
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
               | (0x17U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))))))) {
                if ((0x10U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                        = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int);
                    if ((0x10000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                            = ((~ ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                    }
                }
            }
        }
    }
    if ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x1eU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                 >> 0x1eU)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 1U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x1eU) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__27(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__27\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
              >> 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__28(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__28\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__29(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__29\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
}
