// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_csr__W8_Mff_S1_R0.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VuCup_top_cv32e41s_csr__W8_Mff_S1_R0) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::__Vconfigure(VuCup_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::~VuCup_top_cv32e41s_csr__W8_Mff_S1_R0() {
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__1(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__1\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__2(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__2\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 1U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__3(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__3\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 2U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__4(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__4\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 3U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__5(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__5\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 4U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__6(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__6\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 5U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__7(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__7\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 6U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__8(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__8\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 7U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__9(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__9\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 8U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__10(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__10\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 9U)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__11(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__11\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xaU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__12(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__12\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xbU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__13(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__13\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xcU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__14(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__14\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xdU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__15(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__15\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xeU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__16(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__16\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7U 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fU 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__shadow_q)) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__rdata_q = ((0xfeU & (IData)(this->__PVT__rdata_q)) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    this->__PVT__rdata_q = ((0xfdU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfbU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xf7U & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xefU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xdfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xbfU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0x7fU & (IData)(this->__PVT__rdata_q)) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xfU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

void VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__W8_Mff_S1_R0::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    scan_cg_en_i = VL_RAND_RESET_I(1);
    wr_data_i = VL_RAND_RESET_I(8);
    wr_en_i = VL_RAND_RESET_I(1);
    rd_data_o = VL_RAND_RESET_I(8);
    rd_error_o = VL_RAND_RESET_I(1);
    __PVT__rdata_q = VL_RAND_RESET_I(8);
    __PVT__rdata_blk = VL_RAND_RESET_I(8);
    __PVT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    __PVT__gen_hardened__DOT__shadow_q = VL_RAND_RESET_I(8);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o = VL_RAND_RESET_I(1);
    __PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
}
