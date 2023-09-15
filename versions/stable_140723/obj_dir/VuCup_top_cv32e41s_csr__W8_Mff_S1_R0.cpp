// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_csr__W8_Mff_S1_R0.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__17(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__17\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__33(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__33\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__18(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__18\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 1U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__34(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__34\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [1U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [1U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [1U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__19(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__19\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 2U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__35(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__35\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [2U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [2U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [2U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__20(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__20\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 3U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__36(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__36\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [3U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [3U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [3U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__21(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__21\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 4U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__37(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__37\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [4U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [4U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [4U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__22(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__22\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 5U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__38(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__38\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [5U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [5U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [5U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__23(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__23\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 6U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__39(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__39\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [6U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [6U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [6U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__24(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__24\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 7U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__40(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__40\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [7U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [7U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [7U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__25(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__25\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 8U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__41(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__41\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [8U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [8U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [8U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__26(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__26\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 9U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__42(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__42\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [9U] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [9U] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [9U]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__27(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__27\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xaU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__43(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__43\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xaU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xaU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0xaU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__28(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__28\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xbU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__44(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__44\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xbU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xbU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0xbU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__29(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__29\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xcU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__45(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__45\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xcU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xcU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0xcU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__30(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__30\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xdU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__46(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__46\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xdU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xdU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0xdU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__31(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__31\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xeU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__47(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__47\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xeU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xeU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0xeU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__32(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__32\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xfU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__48(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__48\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                       [0xfU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
              [0xfU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
           [0xfU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}
