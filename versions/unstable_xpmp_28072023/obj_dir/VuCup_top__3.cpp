// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__28(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__28\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q)) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__29(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__29\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__30(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__30\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
              >> 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__31(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__31\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__32(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__32\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                 >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                 >> 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                    >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
                    >> 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
              >> 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__33(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__33\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
                       >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
              >> 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 6U));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__34(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__34\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
              >> 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__35(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__35\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
              >> 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
              >> 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
              >> 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
              >> 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x3fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x5fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x6fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x77U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7bU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7dU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7eU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__gen_hardened__DOT__shadow_q)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x3fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x5fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x6fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x77U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x7bU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x7dU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q 
        = ((0x7eU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__36(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__36\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                 >> 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                 >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                    >> 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                    >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__37(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__37\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
              >> 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__shadow_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              << 1U));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__38(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__38\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | (IData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                              != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__39(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__39\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[1U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__40(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__40\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[2U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__41(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__41\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[3U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__42(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__42\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[4U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__43(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__43\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[5U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__44(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__44\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[6U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__45(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__45\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[7U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__46(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__46\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[8U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__47(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__47\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[9U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__48(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__48\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xaU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__49(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__49\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xbU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__50(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__50\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xcU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__51(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__51\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xdU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__52(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__52\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xeU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__53(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__53\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rd_error) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q) 
                               != (0xffU & (~ (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__shadow_q)))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q[0xfU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__54(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__54\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | (IData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                              != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__55(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__55\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[1U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__56(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__56\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[2U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__57(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__57\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[3U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__58(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__58\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[4U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__59(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__59\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[5U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__60(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__60\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[6U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__61(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__61\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[7U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__62(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__62\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[8U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__63(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__63\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[9U] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__64(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__64\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xaU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__65(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__65\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xbU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__66(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__66\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xcU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__67(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__67\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xdU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__68(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__68\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xeU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__69(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__69\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rd_error) 
           | ((QData)((IData)((vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q 
                               != (~ vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__shadow_q)))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_q[0xfU] 
        = vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__rdata_q;
}

VL_INLINE_OPT void VuCup_top::_combo__TOP__70(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_combo__TOP__70\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_illegal 
        = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
             >> 6U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                       >> 0xfU)) & ((((((0U != (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[6U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                      >> 0xdU)))) 
                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                           >> 0xfU)) 
                                       & ((3U == (3U 
                                                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 0xaU))) 
                                          | ((3U & 
                                              ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                               >> 8U)) 
                                             > (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                      >> 4U)))))) 
                                      | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__illegal_csr_read)) 
                                     | ((3U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr) 
                                               >> 8U)) 
                                        > (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                    >> 4U))))) 
                                    | ((0x17U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_raddr)) 
                                       & ((3U > (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                                     << 0x1cU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                                       >> 4U)))) 
                                          & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q 
                                                >> 2U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
        = (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q)) 
                    << 1U) | (QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_we) 
                                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U]) 
           | (IData)(((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__rdata_q)) 
                        << 1U) | (QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_we) 
                                                  | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we))))) 
                      >> 0x20U)));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_en_gated)
            ? ((0x20000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])
                ? ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])
                    ? ((~ ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                            << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                         >> 4U))) & 
                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                         << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                     >> 0x16U))) : 
                   (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                      << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                   >> 4U)) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                               << 0xaU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                 >> 0x16U))))
                : ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])
                    ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                        << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                     >> 4U)) : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                                   >> 4U))))
            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                             >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
        = ((0xfffffff0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((8U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                     >> 0x1aU)) | (7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n 
        = ((IData)(vlTOPp->rst_sys_ni) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U)));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__integrity_fifo_i__DOT__rchk_en)) 
           | (2U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                              >> 0x29U)) << 1U) & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                   >> 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__rchk_en)) 
           | (2U & (((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_decision_ex 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                  >> 1U) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_cmp_result)));
    vlTOPp->__Vtableidx2 = (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                                   << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3 
        = vlTOPp->__Vtable2_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3
        [vlTOPp->__Vtableidx2];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7 
        = vlTOPp->__Vtable2_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7
        [vlTOPp->__Vtableidx2];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode 
        = vlTOPp->__Vtable2_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode
        [vlTOPp->__Vtableidx2];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                  >> 7U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                            >> 2U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable 
        = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable)) 
           | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                    >> 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable)) 
           | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                    >> 4U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__branch_target_ex 
        = ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U])
            ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__alu_cmp_result)
                ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[7U] 
                              >> 0x17U)) : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[3U] 
                                             << 8U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[2U] 
                                               >> 0x18U)))
            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[7U] 
                          >> 0x17U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__first_op 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                  >> 2U) & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn) 
                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                   >> 4U))) | (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op 
        = (1U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__jmp_bch_insn) 
                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                        >> 4U))) | (1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (0xfffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                                  << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                               >> 4U)))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = (5U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU];
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WIII(32,(0x3e0U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                        << 1U)), vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmevent_n, vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlTOPp->__Vfunc_csr_next_value__41__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__41__Vfuncout = vlTOPp->__Vfunc_csr_next_value__41__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scontext_n 
        = vlTOPp->__Vfunc_csr_next_value__41__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__40__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__40__Vfuncout = vlTOPp->__Vfunc_csr_next_value__40__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__satp_n 
        = vlTOPp->__Vfunc_csr_next_value__40__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__28__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__28__Vfuncout = 
        (0xf001fU & vlTOPp->__Vfunc_csr_next_value__28__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__cpuctrl_n 
        = vlTOPp->__Vfunc_csr_next_value__28__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__35__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__35__Vfuncout = vlTOPp->__Vfunc_csr_next_value__35__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__senvcfg_n 
        = vlTOPp->__Vfunc_csr_next_value__35__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__13__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__13__Vfuncout = vlTOPp->__Vfunc_csr_next_value__13__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mscratch_n 
        = vlTOPp->__Vfunc_csr_next_value__13__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__12__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__12__Vfuncout = 
        (0xffffffc0U & vlTOPp->__Vfunc_csr_next_value__12__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_n 
        = vlTOPp->__Vfunc_csr_next_value__12__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__19__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__19__Vfuncout = vlTOPp->__Vfunc_csr_next_value__19__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlTOPp->__Vfunc_csr_next_value__19__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__32__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__32__Vfuncout = vlTOPp->__Vfunc_csr_next_value__32__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sstatus_n 
        = vlTOPp->__Vfunc_csr_next_value__32__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__20__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__20__Vfuncout = vlTOPp->__Vfunc_csr_next_value__20__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlTOPp->__Vfunc_csr_next_value__20__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__30__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__30__Vfuncout = 
        (0xffffU & vlTOPp->__Vfunc_csr_next_value__30__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__medeleg_n 
        = vlTOPp->__Vfunc_csr_next_value__30__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__34__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__34__Vfuncout = vlTOPp->__Vfunc_csr_next_value__34__wdata;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scounteren_n 
        = vlTOPp->__Vfunc_csr_next_value__34__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__29__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__29__Vfuncout = 
        (4U & vlTOPp->__Vfunc_csr_next_value__29__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_n 
        = vlTOPp->__Vfunc_csr_next_value__29__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__31__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__31__Vfuncout = 
        (0xffff0222U & vlTOPp->__Vfunc_csr_next_value__31__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mideleg_n 
        = vlTOPp->__Vfunc_csr_next_value__31__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__15__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__15__Vfuncout = 
        (0xfffffffeU & vlTOPp->__Vfunc_csr_next_value__15__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dpc_n 
        = vlTOPp->__Vfunc_csr_next_value__15__Vfuncout;
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])) {
        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                    << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                 >> 3U));
        }
    }
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value 
        = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__Vfuncout 
        = (((0U != (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value)) 
            & (1U != (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value)))
            ? 0U : (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__next_value));
    vlTOPp->__Vfunc_csr_next_value__38__wdata = ((0xffffff80U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                 | (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__39__Vfuncout));
    vlTOPp->__Vfunc_csr_next_value__38__Vfuncout = 
        (0xffffff81U & vlTOPp->__Vfunc_csr_next_value__38__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__stvec_n 
        = vlTOPp->__Vfunc_csr_next_value__38__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata2_rdata;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata2_we) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = ((((0xfU == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_rdata 
                                   >> 0x1cU))) | (2U 
                                                  == 
                                                  (0xfU 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_rdata 
                                                      >> 0x1cU)))) 
                | (6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_rdata 
                                  >> 0x1cU)))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int
                : (0x30009aeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int));
    }
    vlTOPp->__Vfunc_csr_next_value__26__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__26__Vfuncout = 
        (0xffff0aaaU & vlTOPp->__Vfunc_csr_next_value__26__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_n 
        = vlTOPp->__Vfunc_csr_next_value__26__Vfuncout;
    vlTOPp->__Vfunc_csr_next_value__33__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__33__Vfuncout = 
        (0x222U & vlTOPp->__Vfunc_csr_next_value__33__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sie_n 
        = vlTOPp->__Vfunc_csr_next_value__33__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[8U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[9U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0xaU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0xbU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0xcU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0xdU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0xeU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n[0xfU] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n 
        = ((1U > vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value 
        = ((2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x18U)) | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 0x16U)));
    vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__current_value 
        = ((2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                  [0U] >> 0x18U)) | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 0x16U)));
    vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__Vfuncout 
        = (((0U != (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value)) 
            & (1U != (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value)))
            ? (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__current_value)
            : (IData)(vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__next_value));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0U] 
        = vlTOPp->__Vfunc_mcontrol6_hit_resolve__42__Vfuncout;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata1_we) 
         & (0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q))) {
        vlTOPp->__Vfunc_etrigger_u_resolve__49__next_value 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 6U));
        vlTOPp->__Vfunc_etrigger_u_resolve__49__Vfuncout 
            = vlTOPp->__Vfunc_etrigger_u_resolve__49__next_value;
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__next_value 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 3U));
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__Vfuncout 
            = vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__next_value;
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value 
            = (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 7U));
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__Vfuncout 
            = ((((0U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value)) 
                 & (2U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value))) 
                & (3U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value)))
                ? 0U : (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__next_value));
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__next_value 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 3U));
        vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__Vfuncout 
            = vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__next_value;
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value 
            = (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 7U));
        vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__Vfuncout 
            = ((((0U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value)) 
                 & (2U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value))) 
                & (3U != (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value)))
                ? 0U : (IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__next_value));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
            = ((2U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                               >> 0x1cU))) ? (0x28001000U 
                                              | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__43__Vfuncout) 
                                                  << 7U) 
                                                 | ((0x40U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                    | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_u_resolve__44__Vfuncout) 
                                                        << 3U) 
                                                       | (7U 
                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)))))
                : ((6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x1cU))) ? (0x68001000U 
                                                  | ((0x2000000U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                         [0U] 
                                                         << 0x18U)) 
                                                     | ((0x400000U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                            [0U] 
                                                            << 0x16U)) 
                                                        | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_match_resolve__46__Vfuncout) 
                                                            << 7U) 
                                                           | ((0x40U 
                                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                              | (((IData)(vlTOPp->__Vfunc_mcontrol2_6_u_resolve__48__Vfuncout) 
                                                                  << 3U) 
                                                                 | (7U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int)))))))
                    : ((5U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0x1cU))) ? 
                       ((0U != (0xfcfff651U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__tdata2_rdata))
                         ? 0xf8000000U : (0x58000001U 
                                          | ((0x200U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                             | ((IData)(vlTOPp->__Vfunc_etrigger_u_resolve__49__Vfuncout) 
                                                << 6U))))
                        : 0xf8000000U)));
    }
    if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U])) {
        if ((6U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                            [0U] >> 0x1cU)))) {
            if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0x400000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0U] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[1U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[2U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[3U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[4U] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[5U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[6U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[7U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[8U] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[9U] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xaU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xbU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xcU] 
        = (0xffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xdU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xeU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int[0xfU] 
        = (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[1U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[2U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[3U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[4U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[5U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[6U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[7U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[8U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[9U] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xaU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xbU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xcU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xdU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xeU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_bit_0_n[0xfU] 
        = (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n) 
           | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_mseccfg_n) 
           | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                    | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)));
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__next_value 
        = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__current_value 
        = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__Vfuncout 
        = (((0U != (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__next_value)) 
            & (1U != (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__next_value)))
            ? (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__current_value)
            : (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__next_value));
    vlTOPp->__Vfunc_csr_next_value__24__wdata = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_mtvec_init_if)
                                                    ? 0x2000U
                                                    : 
                                                   (0x1ffffffU 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                       >> 7U))) 
                                                  << 7U) 
                                                 | ((0x40U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                                    | ((0x3cU 
                                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                                       | (3U 
                                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_mtvec_init_if)
                                                              ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                              : (IData)(vlTOPp->__Vfunc_xtvec_mode_clint_resolve__25__Vfuncout))))));
    vlTOPp->__Vfunc_csr_next_value__24__Vfuncout = 
        (0xffffff81U & vlTOPp->__Vfunc_csr_next_value__24__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mtvec_n 
        = vlTOPp->__Vfunc_csr_next_value__24__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = ((0x1ff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]) 
           | (0x80U & (((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                            >> 2U)) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                       << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
           | (0x200U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                         << 9U) | (0xfffffe00U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                  << 7U)))));
    vlTOPp->__Vfunc_dcsr_prv_resolve__18__next_value 
        = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->__Vfunc_dcsr_prv_resolve__18__current_value 
        = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata);
    vlTOPp->__Vfunc_dcsr_prv_resolve__18__Vfuncout 
        = (((3U != (IData)(vlTOPp->__Vfunc_dcsr_prv_resolve__18__next_value)) 
            & (0U != (IData)(vlTOPp->__Vfunc_dcsr_prv_resolve__18__next_value)))
            ? (IData)(vlTOPp->__Vfunc_dcsr_prv_resolve__18__current_value)
            : (IData)(vlTOPp->__Vfunc_dcsr_prv_resolve__18__next_value));
    vlTOPp->__Vfunc_dcsr_ebreaku_resolve__17__next_value 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0xcU));
    vlTOPp->__Vfunc_dcsr_ebreaku_resolve__17__Vfuncout 
        = vlTOPp->__Vfunc_dcsr_ebreaku_resolve__17__next_value;
    vlTOPp->__Vfunc_csr_next_value__16__wdata = ((0xf0000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                 | ((0x8000U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                    | (((IData)(vlTOPp->__Vfunc_dcsr_ebreaku_resolve__17__Vfuncout) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                          | ((0x400U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                             | ((0x1c0U 
                                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                                | ((0x10U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                                   | ((4U 
                                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                                      | (IData)(vlTOPp->__Vfunc_dcsr_prv_resolve__18__Vfuncout)))))))));
    vlTOPp->__Vfunc_csr_next_value__16__Vfuncout = 
        (0x40000010U | (0x9dc7U & vlTOPp->__Vfunc_csr_next_value__16__wdata));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
        = vlTOPp->__Vfunc_csr_next_value__16__Vfuncout;
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])) {
        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xf0000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                   | ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                      | ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                         | ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                            | ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                               | ((0x1c0U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                              << 0x1aU) 
                                             | (0x3ffffc0U 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                                   >> 6U)))) 
                                  | ((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                     | ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                        | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q)))))))));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_stopcount 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                  >> 0xaU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                              >> 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible 
        = (1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                    | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                        >> 2U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                     >> 0xbU))))));
    vlTOPp->__Vfunc_csr_next_value__14__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__14__Vfuncout = 
        (0xfffffffeU & vlTOPp->__Vfunc_csr_next_value__14__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
        = vlTOPp->__Vfunc_csr_next_value__14__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_we = 0U;
    vlTOPp->__Vfunc_mstatus_mpp_resolve__23__next_value 
        = (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0xbU));
    vlTOPp->__Vfunc_mstatus_mpp_resolve__23__current_value 
        = (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                 >> 0xbU));
    vlTOPp->__Vfunc_mstatus_mpp_resolve__23__Vfuncout 
        = (((3U != (IData)(vlTOPp->__Vfunc_mstatus_mpp_resolve__23__next_value)) 
            & (0U != (IData)(vlTOPp->__Vfunc_mstatus_mpp_resolve__23__next_value)))
            ? (IData)(vlTOPp->__Vfunc_mstatus_mpp_resolve__23__current_value)
            : (IData)(vlTOPp->__Vfunc_mstatus_mpp_resolve__23__next_value));
    vlTOPp->__Vfunc_mstatus_mprv_resolve__22__next_value 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x11U));
    vlTOPp->__Vfunc_mstatus_mprv_resolve__22__Vfuncout 
        = vlTOPp->__Vfunc_mstatus_mprv_resolve__22__next_value;
    vlTOPp->__Vfunc_csr_next_value__21__wdata = ((0x200000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                 | (((IData)(vlTOPp->__Vfunc_mstatus_mprv_resolve__22__Vfuncout) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->__Vfunc_mstatus_mpp_resolve__23__Vfuncout) 
                                                        << 0xbU) 
                                                       | (0x88U 
                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))));
    vlTOPp->__Vfunc_csr_next_value__21__Vfuncout = 
        (0x221888U & vlTOPp->__Vfunc_csr_next_value__21__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
        = vlTOPp->__Vfunc_csr_next_value__21__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q;
    vlTOPp->__Vfunc_csr_next_value__27__wdata = (0x800007ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->__Vfunc_csr_next_value__27__Vfuncout = 
        (0x800007ffU & vlTOPp->__Vfunc_csr_next_value__27__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
        = vlTOPp->__Vfunc_csr_next_value__27__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_we = 0U;
    vlTOPp->__Vfunc_csr_next_value__36__wdata = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlTOPp->__Vfunc_csr_next_value__36__Vfuncout = 
        (0xfffffffeU & vlTOPp->__Vfunc_csr_next_value__36__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sepc_n 
        = vlTOPp->__Vfunc_csr_next_value__36__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sepc_we = 0U;
    vlTOPp->__Vfunc_csr_next_value__37__wdata = (0x800007ffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->__Vfunc_csr_next_value__37__Vfuncout = 
        (0x800007ffU & vlTOPp->__Vfunc_csr_next_value__37__wdata);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_n 
        = vlTOPp->__Vfunc_csr_next_value__37__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_we = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                      >> 0xfU)))) {
            if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])) {
                    if ((0x1000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_we = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U])) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                                                             >> 4U)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we = 1U;
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
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])) {
        if ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U])) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
            if ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                    = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                        << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                     >> 3U));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_we = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                    = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n) 
                       | (0x80000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                         << 0x1dU)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_we = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    = (0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                    = ((0xfffff800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n) 
                       | (0x7ffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                     << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                                                  >> 3U))));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n) 
                       | (0x80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                   << 4U)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    = ((0xffffe7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n) 
                       | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q) 
                          << 0xbU));
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sepc_n 
                    = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                        << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                     >> 3U));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sepc_we = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_n 
                    = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_n) 
                       | (0x80000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                         << 0x1dU)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_we = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_n 
                    = ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__scause_n) 
                       | (0x7ffU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                     << 0x1dU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                                                  >> 3U))));
            }
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n 
                = (0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_n);
        }
    } else {
        if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                    >> 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                              >> 1U)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n 
                = (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                         >> 0xbU));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we = 1U;
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (8U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                            >> 4U)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x80U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n);
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xffffe7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n);
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (0xfffe0000U & (((3U == (3U & 
                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                               >> 0xbU))) 
                                      << 0x11U) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q)));
        } else {
            if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_n 
                    = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n) 
                       | (0xfffe0000U & (((3U == (3U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata)) 
                                          << 0x11U) 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q)));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
        = (0x3fU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                     ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)
                     : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt)
                         ? (((IData)(0x20U) - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div_clz_result)) 
                            - (IData)(1U)) : ((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))
                                               ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                                                  - (IData)(1U))
                                               : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_id 
        = ((~ ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__sys_en) 
                 & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            >> 2U))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                        >> 0x1eU)) 
               & (3U == (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                               >> 0x1cU))))) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op)) 
                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                    >> 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xie_n 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_we)
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mie_n
            : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__sie_n);
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffffeULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | (IData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                  >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                             & ((((9U 
                                                   == 
                                                   ((8U 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                        [0U] 
                                                        >> 4U)) 
                                                    | ((4U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0U] 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0U]) 
                                                          | (1U 
                                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                [0U] 
                                                                >> 2U)))))) 
                                                  | (0xaU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0U] 
                                                                  >> 2U))))))) 
                                                 | (0xbU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0U] 
                                                                 >> 2U))))))) 
                                                | (0xdU 
                                                   == 
                                                   ((8U 
                                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                        [0U] 
                                                        >> 4U)) 
                                                    | ((4U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0U] 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0U]) 
                                                          | (1U 
                                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                [0U] 
                                                                >> 2U))))))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffffdULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [1U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [1U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [1U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [1U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [1U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [1U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [1U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [1U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [1U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [1U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [1U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [1U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [1U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [1U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [1U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [1U] 
                                                                 >> 2U))))))))))) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [2U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [2U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [2U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [2U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [2U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [2U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [2U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [2U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [2U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [2U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [2U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [2U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [2U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [2U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [2U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [2U] 
                                                                 >> 2U))))))))))) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [3U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [3U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [3U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [3U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [3U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [3U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [3U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [3U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [3U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [3U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [3U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [3U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [3U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [3U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [3U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [3U] 
                                                                 >> 2U))))))))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffffefULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [4U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [4U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [4U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [4U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [4U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [4U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [4U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [4U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [4U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [4U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [4U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [4U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [4U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [4U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [4U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [4U] 
                                                                 >> 2U))))))))))) 
              << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffffdfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [5U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [5U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [5U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [5U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [5U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [5U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [5U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [5U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [5U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [5U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [5U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [5U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [5U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [5U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [5U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [5U] 
                                                                 >> 2U))))))))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffffbfULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [6U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [6U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [6U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [6U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [6U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [6U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [6U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [6U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [6U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [6U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [6U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [6U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [6U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [6U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [6U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [6U] 
                                                                 >> 2U))))))))))) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffff7fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [7U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [7U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [7U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [7U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [7U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [7U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [7U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [7U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [7U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [7U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [7U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [7U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [7U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [7U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [7U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [7U] 
                                                                 >> 2U))))))))))) 
              << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffeffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [8U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [8U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [8U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [8U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [8U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [8U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [8U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [8U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [8U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [8U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [8U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [8U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [8U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [8U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [8U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [8U] 
                                                                 >> 2U))))))))))) 
              << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [9U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [9U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [9U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [9U] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [9U] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [9U] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [9U]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [9U] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [9U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [9U] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [9U]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [9U] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [9U] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [9U] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [9U]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [9U] 
                                                                 >> 2U))))))))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffffbffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xaU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xaU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xaU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xaU] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0xaU] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xaU] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xaU]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [0xaU] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0xaU] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xaU] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xaU]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0xaU] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xaU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xaU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xaU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xaU] 
                                                                 >> 2U))))))))))) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xfffffffffffff7ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xbU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xbU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xbU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xbU] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0xbU] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xbU] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xbU]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [0xbU] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0xbU] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xbU] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xbU]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0xbU] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xbU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xbU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xbU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xbU] 
                                                                 >> 2U))))))))))) 
              << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffefffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xcU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xcU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xcU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xcU] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0xcU] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xcU] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xcU]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [0xcU] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0xcU] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xcU] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xcU]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0xcU] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xcU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xcU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xcU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xcU] 
                                                                 >> 2U))))))))))) 
              << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffdfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xdU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xdU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xdU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xdU] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0xdU] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xdU] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xdU]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [0xdU] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0xdU] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xdU] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xdU]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0xdU] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xdU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xdU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xdU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xdU] 
                                                                 >> 2U))))))))))) 
              << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xeU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xeU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xeU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xeU] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0xeU] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xeU] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xeU]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [0xeU] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0xeU] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xeU] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xeU]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0xeU] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xeU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xeU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xeU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xeU] 
                                                                 >> 2U))))))))))) 
              << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = ((0xffffffffffff7fffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr) 
           | ((QData)((IData)(((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                   >> 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q 
                                              & ((((9U 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xfU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xfU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xfU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xfU] 
                                                                 >> 2U)))))) 
                                                   | (0xaU 
                                                      == 
                                                      ((8U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                           [0xfU] 
                                                           >> 4U)) 
                                                       | ((4U 
                                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xfU] 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                              [0xfU]) 
                                                             | (1U 
                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                   [0xfU] 
                                                                   >> 2U))))))) 
                                                  | (0xbU 
                                                     == 
                                                     ((8U 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                          [0xfU] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xfU] 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                             [0xfU]) 
                                                            | (1U 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                  [0xfU] 
                                                                  >> 2U))))))) 
                                                 | (0xdU 
                                                    == 
                                                    ((8U 
                                                      & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                         [0xfU] 
                                                         >> 4U)) 
                                                     | ((4U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xfU] 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                            [0xfU]) 
                                                           | (1U 
                                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_n_int
                                                                 [0xfU] 
                                                                 >> 2U))))))))))) 
              << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (1U & ((((~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                      & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) 
                     & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                    & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_stopcount)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (4U & ((((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                            >> 2U)) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                          >> 2U))) 
                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcountinhibit_q 
                             >> 2U))) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_stopcount))) 
                     << 2U) & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__hpm_events) 
                               << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed 
        = ((((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_interruptible) 
                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
              & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q))) 
             & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed 
        = (((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_interruptible) 
                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
               & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
              & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
                   | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q)))) 
            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_we;
    }
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mcause_we;
    }
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
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0x7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0xffffff80U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                                << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                          >> 0x17U)) 
                              + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                  << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                            >> 0x17U))) 
                             << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
        = (0x7fU & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0xaU] 
                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                 >> 0x17U)) + ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[9U] 
                                                << 9U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                                                  >> 0x17U))) 
                    >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x10U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                       >> 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffff9fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x60U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[6U] 
                        << 0x1cU) | (0xfffffe0U & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                                                   >> 4U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
        = ((7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U]) 
           | (0xfffffff8U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                              << 0xcU) | (0xff8U & 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[7U] 
                                           >> 0x14U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (7U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[8U] 
                    >> 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
        = ((0xfffffff9U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U]) 
           | (6U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_we)
                      ? ((0x20000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n)
                          ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                             >> 0xbU) : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                          << 0x1cU) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                            >> 4U)))
                      : ((0x20000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q)
                          ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                             >> 0xbU) : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                          << 0x1cU) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                                            >> 4U)))) 
                    << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[0U]) 
           | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                    >> 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (8U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[5U] 
                    >> 5U)));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid 
        = (1U & ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                    >> 7U) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                 >> 0xeU))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                  >> 0x13U))) 
                 | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall) 
                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                           >> 0xeU))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                            >> 0x13U)))));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access 
        = (3U & ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl))
                  ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__priv_lvl_if_ctrl)
                  : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__misaligned_halfword = 0U;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__lsu_en_gated) 
         & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                           << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                        >> 5U))))) {
            if ((1U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                               << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                            >> 5U))))) {
                if ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__misaligned_halfword = 1U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex = 0U;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_stage_i__DOT__lsu_en_gated) 
         & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                           << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                        >> 5U))))) {
            if ((0U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                               << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                            >> 7U))))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex = 1U;
            }
        } else {
            if ((1U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                               << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                            >> 5U))))) {
                if ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                                   << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                >> 7U))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_split_ex = 1U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__be 
        = ((0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                          << 0x1bU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                       >> 5U)))) ? 
           ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
             ? ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                 ? 8U : 4U) : ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                ? 2U : 1U)) : ((1U 
                                                == 
                                                (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       >> 5U))))
                                                ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                     ? 
                                                    ((0x80U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 8U
                                                      : 0xcU)
                                                     : 
                                                    ((0x80U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 6U
                                                      : 3U)))
                                                : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__split_q)
                                                    ? 
                                                   ((0x100U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                     ? 
                                                    ((0x80U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 7U
                                                      : 3U)
                                                     : 
                                                    ((0x80U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((0x100U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                     ? 
                                                    ((0x80U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 8U
                                                      : 0xcU)
                                                     : 
                                                    ((0x80U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 0xeU
                                                      : 0xfU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
        = ((0xfffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans) 
           | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
              << 0x14U));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xeU) | (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__multi_op_id_stall)) 
                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready)) 
                              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    >> 0x13U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_id 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready)) 
            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                >> 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                             >> 0x1bU))) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__last_sec_op));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = (((0xf0000000U <= ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                              << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                        >> 0x19U))) 
            & (0xf0003fffU >= ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = (((0xf0000000U <= (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                     >> 0x14U))) & 
            (0xf0003fffU >= (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                     >> 0x14U)))) & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                             >> 0xeU)));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup 
        = ((5U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup 
        = ((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus)));
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__71(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__71\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
        = (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)) 
                    << 7U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
        = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U]) 
           | (IData)(((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__rdata_q)) 
                        << 7U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q))) 
                      >> 0x20U)));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__72(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__72\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_wu_ctrl 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q))
            ? (0U != (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_core__irq_i 
                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q))
            : (0U != (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_core__irq_i 
                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q)));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__73(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__73\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q))
            ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q)
            : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o 
        = ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
            ? 0x1fU : ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                        ? 0x1eU : ((0x20000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                    ? 0x1dU : ((0x10000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                ? 0x1cU
                                                : (
                                                   (0x8000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1bU
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1aU
                                                     : 
                                                    ((0x2000000U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x19U
                                                      : 
                                                     ((0x1000000U 
                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x18U
                                                       : 
                                                      ((0x800000U 
                                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x17U
                                                        : 
                                                       ((0x400000U 
                                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x16U
                                                         : 
                                                        ((0x200000U 
                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x15U
                                                          : 
                                                         ((0x100000U 
                                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x14U
                                                           : 
                                                          ((0x80000U 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x13U
                                                            : 
                                                           ((0x40000U 
                                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x12U
                                                             : 
                                                            ((0x20000U 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x11U
                                                              : 
                                                             ((0x10000U 
                                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x10U
                                                               : 
                                                              ((0x800U 
                                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0xbU
                                                                : 
                                                               ((8U 
                                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 3U
                                                                 : 
                                                                ((0x80U 
                                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 7U
                                                                  : 
                                                                 ((0x800U 
                                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((8U 
                                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 3U
                                                                    : 7U)))))))))))))))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_id_ctrl 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o;
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__74(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__74\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_rdata[__Vilp] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0xffff807fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xffffff80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U] << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0xff807fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xffff8000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U] << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0x807fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0xff800000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U] << 0x17U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U]) 
           | (0x80000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U] << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U] >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xffff807fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xffffff80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U] << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0xff807fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xffff8000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U] << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0x807fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0xff800000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U] << 0x17U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]) 
           | (0x80000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U] << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U] >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xffff807fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xffffff80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U] << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0xff807fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xffff8000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U] << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0x807fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0xff800000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xaU] << 0x17U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U]) 
           | (0x80000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xbU] << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xbU] >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xffff807fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xffffff80U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xcU] << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0xff807fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xffff8000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xdU] << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0x807fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0xff800000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xeU] << 0x17U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]) 
           | (0x80000000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xfU] << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
        = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U]) 
           | (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0xfU] >> 1U)));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__75(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__75\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
        = ((0x7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U]) 
           | (0xffffff80U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0U])) 
                                      << 2U)) << 7U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
        = ((0xfffffe00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U]) 
           | ((0x7fU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                 [0U])) 
                                 << 2U)) >> 0x19U)) 
              | (0xffffff80U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0U])) 
                                          << 2U) >> 0x20U)) 
                                << 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
        = ((0x1ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U]) 
           | (0xfffffe00U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [1U])) 
                                      << 2U)) << 9U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
        = ((0xfffff800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U]) 
           | ((0x1ffU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                  [1U])) 
                                  << 2U)) >> 0x17U)) 
              | (0xfffffe00U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [1U])) 
                                          << 2U) >> 0x20U)) 
                                << 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
        = ((0x7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U]) 
           | (0xfffff800U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [2U])) 
                                      << 2U)) << 0xbU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
        = ((0xffffe000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U]) 
           | ((0x7ffU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                  [2U])) 
                                  << 2U)) >> 0x15U)) 
              | (0xfffff800U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [2U])) 
                                          << 2U) >> 0x20U)) 
                                << 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
        = ((0x1fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U]) 
           | (0xffffe000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [3U])) 
                                      << 2U)) << 0xdU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
        = ((0xffff8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U]) 
           | ((0x1fffU & ((IData)(((QData)((IData)(
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                   [3U])) 
                                   << 2U)) >> 0x13U)) 
              | (0xffffe000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [3U])) 
                                          << 2U) >> 0x20U)) 
                                << 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
        = ((0x7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U]) 
           | (0xffff8000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [4U])) 
                                      << 2U)) << 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
        = ((0xfffe0000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U]) 
           | ((0x7fffU & ((IData)(((QData)((IData)(
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                   [4U])) 
                                   << 2U)) >> 0x11U)) 
              | (0xffff8000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [4U])) 
                                          << 2U) >> 0x20U)) 
                                << 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
        = ((0x1ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U]) 
           | (0xfffe0000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [5U])) 
                                      << 2U)) << 0x11U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
        = ((0xfff80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U]) 
           | ((0x1ffffU & ((IData)(((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [5U])) 
                                    << 2U)) >> 0xfU)) 
              | (0xfffe0000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [5U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
        = ((0x7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U]) 
           | (0xfff80000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [6U])) 
                                      << 2U)) << 0x13U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
        = ((0xffe00000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U]) 
           | ((0x7ffffU & ((IData)(((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [6U])) 
                                    << 2U)) >> 0xdU)) 
              | (0xfff80000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [6U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
        = ((0x1fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U]) 
           | (0xffe00000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [7U])) 
                                      << 2U)) << 0x15U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
        = ((0xff800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U]) 
           | ((0x1fffffU & ((IData)(((QData)((IData)(
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [7U])) 
                                     << 2U)) >> 0xbU)) 
              | (0xffe00000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [7U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
        = ((0x7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U]) 
           | (0xff800000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [8U])) 
                                      << 2U)) << 0x17U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
        = ((0xfe000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU]) 
           | ((0x7fffffU & ((IData)(((QData)((IData)(
                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [8U])) 
                                     << 2U)) >> 9U)) 
              | (0xff800000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [8U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
        = ((0x1ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU]) 
           | (0xfe000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [9U])) 
                                      << 2U)) << 0x19U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
        = ((0xf8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU]) 
           | ((0x1ffffffU & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [9U])) 
                                      << 2U)) >> 7U)) 
              | (0xfe000000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [9U])) 
                                          << 2U) >> 0x20U)) 
                                << 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
        = ((0x7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU]) 
           | (0xf8000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xaU])) 
                                      << 2U)) << 0x1bU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
        = ((0xe0000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU]) 
           | ((0x7ffffffU & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xaU])) 
                                      << 2U)) >> 5U)) 
              | (0xf8000000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0xaU])) 
                                          << 2U) >> 0x20U)) 
                                << 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
        = ((0x1fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU]) 
           | (0xe0000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xbU])) 
                                      << 2U)) << 0x1dU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
        = ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU]) 
           | ((0x1fffffffU & ((IData)(((QData)((IData)(
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                       [0xbU])) 
                                       << 2U)) >> 3U)) 
              | (0xe0000000U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0xbU])) 
                                          << 2U) >> 0x20U)) 
                                << 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU]) 
           | (0x80000000U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xcU])) 
                                      << 2U)) << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
        = ((0x7fffffffU & ((IData)(((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xcU])) 
                                    << 2U)) >> 1U)) 
           | (0x80000000U & ((IData)((((QData)((IData)(
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                       [0xcU])) 
                                       << 2U) >> 0x20U)) 
                             << 0x1fU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]) 
           | (0x7fffffffU & ((IData)((((QData)((IData)(
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                       [0xcU])) 
                                       << 2U) >> 0x20U)) 
                             >> 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
        = ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]) 
           | (0xfffffffeU & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xdU])) 
                                      << 2U)) << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
        = ((0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U]) 
           | ((1U & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                              [0xdU])) 
                              << 2U)) >> 0x1fU)) | 
              (0xfffffffeU & ((IData)((((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                        [0xdU])) 
                                        << 2U) >> 0x20U)) 
                              << 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
        = ((7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U]) 
           | (0xfffffff8U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xeU])) 
                                      << 2U)) << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
        = ((0xffffffe0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U]) 
           | ((7U & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                              [0xeU])) 
                              << 2U)) >> 0x1dU)) | 
              (0xfffffff8U & ((IData)((((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                        [0xeU])) 
                                        << 2U) >> 0x20U)) 
                              << 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
        = ((0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U]) 
           | (0xffffffe0U & ((IData)(((QData)((IData)(
                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                      [0xfU])) 
                                      << 2U)) << 5U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
        = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U]) 
           | ((0x1fU & ((IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                 [0xfU])) 
                                 << 2U)) >> 0x1bU)) 
              | (0xffffffe0U & ((IData)((((QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                          [0xfU])) 
                                          << 2U) >> 0x20U)) 
                                << 5U))));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__76(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__76\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
           | (0xfffffff8U & (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                                | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_wu_ctrl)) 
                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug)) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                             << 3U)));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__77(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__77\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl 
        = ((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual) 
           & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                >> 3U) | (3U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q))) 
              | (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                   >> 3U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                             >> 1U)) | (1U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q)))));
}

VL_INLINE_OPT void VuCup_top::_multiclk__TOP__78(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_multiclk__TOP__78\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VuCup_top::_combo__TOP__79(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_combo__TOP__79\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                                                    : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__genblk1__DOT__xpmpcfg_csr_i__DOT__rdata_q)))
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
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp_trie_en 
        = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
             >> 1U) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U]) 
           & (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                            << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                         >> 0x10U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp_trie_en 
        = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
             >> 1U) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U]) 
           & (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                   >> 0x10U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_id_ctrl;
                    }
                }
            }
        }
    }
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
}
