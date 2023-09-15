// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_csr__pi17.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi17::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__31(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi17::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__31\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xeU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi17::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__47(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi17::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__47\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x1fU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x1eU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x1dU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x1cU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x1bU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x1aU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x19U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x18U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x17U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x16U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x15U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x14U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x13U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x12U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x11U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0x10U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0xfU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0xeU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0xdU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0xcU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0xbU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 0xaU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 9U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 8U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xeU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                    [0xeU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x1fU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x1eU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x1dU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x1cU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x1bU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x1aU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x19U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x18U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x17U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x16U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x15U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x14U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x13U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x12U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x11U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0x10U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0xfU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0xeU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0xdU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0xcU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0xbU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 0xaU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 9U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 8U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xeU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
           [0xeU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1fU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1eU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1dU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1cU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7ffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1bU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1aU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x19U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x18U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xff7fffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x17U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffbfffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x16U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffdfffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x15U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffefffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x14U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfff7ffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x13U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffbffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x12U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffdffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x11U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffeffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x10U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffff7fffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xfU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffbfffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xeU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffdfffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xdU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffefffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xcU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffff7ffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xbU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffbffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xaU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffdffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 9U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffeffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 8U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffff7fU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffffbfU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffffdfU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffffefU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffff7U 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffffbU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffffdU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffffeU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1fU));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1eU));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1dU));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1cU));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1bU));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1aU));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x19U));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x18U));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x17U));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x16U));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x15U));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x14U));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x13U));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x12U));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x11U));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x10U));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xfU));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xeU));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xdU));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xcU));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xbU));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xaU));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 9U));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 8U));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi17::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__32(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi17::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__32\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk)))) {
        this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xfU)));
    }
    this->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__clk) 
                                                 & (IData)(this->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi17::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__48(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi17::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__48\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x1fU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x1eU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x1dU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x1cU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x1bU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x1aU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x19U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x18U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x17U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x16U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x15U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x14U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x13U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x12U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x11U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0x10U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0xfU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0xeU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0xdU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0xcU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0xbU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 0xaU))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 9U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 8U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 7U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 6U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 5U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 4U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 3U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 2U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                       [0xfU] >> 1U))));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
                    [0xfU])));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x1fU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x1eU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x1dU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x1cU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x1bU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x1aU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x19U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x18U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x17U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x16U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x15U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x14U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x13U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x12U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x11U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0x10U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0xfU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0xeU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0xdU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0xcU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0xbU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 0xaU));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 9U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 8U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 7U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 6U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 5U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 4U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 3U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 2U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
              [0xfU] >> 1U));
    this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmp_addr_n
           [0xfU]);
    this->__PVT__gen_hardened__DOT__shadow_q = ((0x7fffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1fU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xbfffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1eU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xdfffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1dU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xefffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1cU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xf7ffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1bU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfbffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x1aU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfdffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x19U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfeffffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x18U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xff7fffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x17U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffbfffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x16U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffdfffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x15U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffefffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x14U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfff7ffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x13U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffbffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x12U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffdffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x11U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffeffffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0x10U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffff7fffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xfU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffbfffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xeU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffdfffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xdU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffefffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xcU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffff7ffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xbU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffbffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 0xaU));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffdffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 9U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffeffU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 8U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffff7fU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 7U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffffbfU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 6U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffffdfU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 5U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xffffffefU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 4U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffff7U 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 3U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffffbU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 2U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffffdU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o) 
                                                   << 1U));
    this->__PVT__gen_hardened__DOT__shadow_q = ((0xfffffffeU 
                                                 & this->__PVT__gen_hardened__DOT__shadow_q) 
                                                | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1fU));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1eU));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1dU));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1cU));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1bU));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x1aU));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x19U));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x18U));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x17U));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x16U));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x15U));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x14U));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x13U));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x12U));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x11U));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0x10U));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xfU));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xeU));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xdU));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xcU));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xbU));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 0xaU));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 9U));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 8U));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 7U));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 6U));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 5U));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 4U));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 3U));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 2U));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | ((IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                               << 1U));
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (IData)(this->__Vcellout__gen_hardened__DOT__gen_csr__BRA__0__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
}
