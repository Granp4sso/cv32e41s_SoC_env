// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_pmp__P0_PB10_X0_XB0.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VuCup_top_cv32e41s_pmp__P0_PB10_X0_XB0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__4(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VuCup_top_cv32e41s_pmp__P0_PB10_X0_XB0::_combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__4\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__region_match_lt = ((0xfffeU & (IData)(this->__PVT__region_match_lt)) 
                                    | ((IData)(((QData)((IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                 >> 0x14U))) 
                                                >> 2U)) 
                                       < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                           << 0x17U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                             >> 9U))));
    this->__PVT__region_match_lt = ((0xfffdU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                            << 0x15U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                              >> 0xbU))) 
                                       << 1U));
    this->__PVT__region_match_lt = ((0xfffbU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                            << 0x13U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                              >> 0xdU))) 
                                       << 2U));
    this->__PVT__region_match_lt = ((0xfff7U & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                              >> 0xfU))) 
                                       << 3U));
    this->__PVT__region_match_lt = ((0xffefU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                            << 0xfU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                              >> 0x11U))) 
                                       << 4U));
    this->__PVT__region_match_lt = ((0xffdfU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                            << 0xdU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                              >> 0x13U))) 
                                       << 5U));
    this->__PVT__region_match_lt = ((0xffbfU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                            << 0xbU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                              >> 0x15U))) 
                                       << 6U));
    this->__PVT__region_match_lt = ((0xff7fU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                              >> 0x17U))) 
                                       << 7U));
    this->__PVT__region_match_lt = ((0xfeffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                            << 7U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                              >> 0x19U))) 
                                       << 8U));
    this->__PVT__region_match_lt = ((0xfdffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                            << 5U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                              >> 0x1bU))) 
                                       << 9U));
    this->__PVT__region_match_lt = ((0xfbffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                            << 3U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                              >> 0x1dU))) 
                                       << 0xaU));
    this->__PVT__region_match_lt = ((0xf7ffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                              >> 0x1fU))) 
                                       << 0xbU));
    this->__PVT__region_match_lt = ((0xefffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                            << 0x1fU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                              >> 1U))) 
                                       << 0xcU));
    this->__PVT__region_match_lt = ((0xdfffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                            << 0x1dU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                              >> 3U))) 
                                       << 0xdU));
    this->__PVT__region_match_lt = ((0xbfffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                            << 0x1bU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                              >> 5U))) 
                                       << 0xeU));
    this->__PVT__region_match_lt = ((0x7fffU & (IData)(this->__PVT__region_match_lt)) 
                                    | (((IData)(((QData)((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
                                                                  >> 0x14U))) 
                                                 >> 2U)) 
                                        < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                              >> 7U))) 
                                       << 0xfU));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_pmp__P0_PB10_X0_XB0::_multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__6(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VuCup_top_cv32e41s_pmp__P0_PB10_X0_XB0::_multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__6\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__region_addr_mask[0U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                         >> 0xaU)))));
    this->__PVT__region_addr_mask[0U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0xaU)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                       >> 9U))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0xaU)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                        >> 9U))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0xaU)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                        >> 9U))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[0U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                 << 0x17U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                   >> 9U))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[0U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                 << 0x17U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                   >> 9U))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[0U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                 << 0x17U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                   >> 9U))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[0U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                 << 0x17U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                   >> 9U))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[0U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[0U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[0U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[0U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[0U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[0U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[0U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[0U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[0U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[0U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[0U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[0U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[0U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[0U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[0U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[0U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[0U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[0U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[0U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[0U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[0U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   << 0x17U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                                     >> 9U))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[1U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       << 0xeU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                         >> 0x12U)))));
    this->__PVT__region_addr_mask[1U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x12U)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                       >> 0xbU))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x12U)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                      << 0x15U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                        >> 0xbU))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x12U)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                      << 0x15U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                        >> 0xbU))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[1U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                 << 0x15U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   >> 0xbU))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[1U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                 << 0x15U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   >> 0xbU))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[1U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                 << 0x15U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   >> 0xbU))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[1U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                 << 0x15U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                   >> 0xbU))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[1U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[1U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[1U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[1U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[1U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[1U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[1U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[1U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[1U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[1U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[1U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[1U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[1U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[1U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[1U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[1U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[1U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[1U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[1U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[1U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[1U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                                     >> 0xbU))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[2U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       << 6U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                         >> 0x1aU)))));
    this->__PVT__region_addr_mask[2U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 6U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x1aU)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                       >> 0xdU))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 6U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x1aU)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                      << 0x13U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                        >> 0xdU))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 6U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x1aU)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                      << 0x13U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                        >> 0xdU))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[2U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                 << 0x13U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   >> 0xdU))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[2U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                 << 0x13U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   >> 0xdU))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[2U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                 << 0x13U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   >> 0xdU))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[2U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                 << 0x13U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                   >> 0xdU))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[2U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[2U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[2U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[2U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[2U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[2U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[2U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[2U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[2U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[2U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[2U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[2U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[2U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[2U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[2U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[2U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[2U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[2U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[2U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[2U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[2U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   << 0x13U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                                     >> 0xdU))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[3U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         >> 2U)))));
    this->__PVT__region_addr_mask[3U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 2U)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                       >> 0xfU))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 2U)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                      << 0x11U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                        >> 0xfU))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 2U)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                      << 0x11U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                        >> 0xfU))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[3U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                 << 0x11U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   >> 0xfU))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[3U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                 << 0x11U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   >> 0xfU))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[3U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                 << 0x11U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   >> 0xfU))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[3U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                 << 0x11U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                   >> 0xfU))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[3U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[3U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[3U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[3U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[3U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[3U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[3U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[3U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[3U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[3U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[3U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[3U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[3U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[3U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[3U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[3U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[3U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[3U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[3U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[3U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[3U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                                     >> 0xfU))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[4U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         >> 0xaU)))));
    this->__PVT__region_addr_mask[4U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0xaU)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                       >> 0x11U))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0xaU)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                        >> 0x11U))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0xaU)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                        >> 0x11U))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[4U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                 << 0xfU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   >> 0x11U))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[4U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                 << 0xfU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   >> 0x11U))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[4U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                 << 0xfU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   >> 0x11U))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[4U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                 << 0xfU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                   >> 0x11U))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[4U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[4U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[4U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[4U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[4U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[4U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[4U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[4U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[4U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[4U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[4U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[4U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[4U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[4U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[4U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[4U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[4U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[4U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[4U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[4U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[4U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                                     >> 0x11U))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[5U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       << 0xeU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         >> 0x12U)))));
    this->__PVT__region_addr_mask[5U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0x12U)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                       >> 0x13U))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0x12U)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                      << 0xdU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                        >> 0x13U))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0x12U)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                      << 0xdU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                        >> 0x13U))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[5U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                 << 0xdU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   >> 0x13U))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[5U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                 << 0xdU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   >> 0x13U))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[5U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                 << 0xdU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   >> 0x13U))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[5U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                 << 0xdU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                   >> 0x13U))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[5U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[5U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[5U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[5U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[5U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[5U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[5U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[5U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[5U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[5U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[5U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[5U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[5U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[5U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[5U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[5U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[5U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[5U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[5U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[5U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[5U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                                     >> 0x13U))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[6U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       << 6U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         >> 0x1aU)))));
    this->__PVT__region_addr_mask[6U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 6U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0x1aU)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                       >> 0x15U))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 6U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0x1aU)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                      << 0xbU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                        >> 0x15U))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 6U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 0x1aU)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                      << 0xbU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                        >> 0x15U))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[6U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                 << 0xbU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   >> 0x15U))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[6U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                 << 0xbU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   >> 0x15U))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[6U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                 << 0xbU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   >> 0x15U))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[6U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      >> 0x1aU)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                 << 0xbU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                   >> 0x15U))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[6U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[6U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[6U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[6U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[6U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[6U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[6U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[6U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[6U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[6U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[6U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[6U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[6U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[6U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[6U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[6U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[6U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[6U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[6U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[6U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[6U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                                     >> 0x15U))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[7U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         >> 2U)))));
    this->__PVT__region_addr_mask[7U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 2U)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                       >> 0x17U))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 2U)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                      << 9U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                        >> 0x17U))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 2U)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                      << 9U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                        >> 0x17U))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[7U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                 << 9U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   >> 0x17U))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[7U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                 << 9U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   >> 0x17U))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[7U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                 << 9U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   >> 0x17U))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[7U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 2U)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                 << 9U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                   >> 0x17U))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[7U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[7U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[7U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[7U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[7U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[7U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[7U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[7U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[7U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[7U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[7U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[7U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[7U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[7U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[7U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[7U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[7U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[7U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[7U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[7U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[7U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   << 9U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                                     >> 0x17U))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[8U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         >> 0xaU)))));
    this->__PVT__region_addr_mask[8U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 0xaU)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                       >> 0x19U))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 0xaU)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                      << 7U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                        >> 0x19U))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 0xaU)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                      << 7U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                        >> 0x19U))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[8U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                 << 7U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   >> 0x19U))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[8U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                 << 7U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   >> 0x19U))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[8U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                 << 7U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   >> 0x19U))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[8U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0xaU)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                 << 7U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                   >> 0x19U))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[8U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[8U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[8U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[8U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[8U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[8U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[8U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[8U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[8U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[8U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[8U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[8U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[8U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[8U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[8U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[8U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[8U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[8U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[8U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[8U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[8U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   << 7U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                                     >> 0x19U))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[9U] = ((0xfffffffeU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (3U != (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       << 0xeU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         >> 0x12U)))));
    this->__PVT__region_addr_mask[9U] = ((0xfffffffdU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (2U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 0x12U)))) 
                                                   | (~ 
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                       >> 0x1bU))) 
                                                  << 1U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffffffbU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (4U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 0x12U)))) 
                                                   | (~ (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                      << 5U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                        >> 0x1bU))))))) 
                                                  << 2U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffffff7U 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (8U & ((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                           >> 0x12U)))) 
                                                   | (~ (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                      << 5U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                        >> 0x1bU))))))) 
                                                  << 3U)));
    this->__PVT__region_addr_mask[9U] = ((0xffffffefU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x10U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                 << 5U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   >> 0x1bU))))))) 
                                             << 4U)));
    this->__PVT__region_addr_mask[9U] = ((0xffffffdfU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x20U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                 << 5U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   >> 0x1bU))))))) 
                                             << 5U)));
    this->__PVT__region_addr_mask[9U] = ((0xffffffbfU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x40U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x3fU 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                 << 5U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   >> 0x1bU))))))) 
                                             << 6U)));
    this->__PVT__region_addr_mask[9U] = ((0xffffff7fU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x80U & 
                                            (((3U != 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x12U)))) 
                                              | (~ (IData)(
                                                           (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                 << 5U) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                   >> 0x1bU))))))) 
                                             << 7U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffffeffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x100U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 8U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffffdffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x200U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 9U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffffbffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x400U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffU 
                                                              == 
                                                              (0x3ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0xaU)));
    this->__PVT__region_addr_mask[9U] = ((0xfffff7ffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x800U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffU 
                                                              == 
                                                              (0x7ffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0xbU)));
    this->__PVT__region_addr_mask[9U] = ((0xffffefffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x1000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffU 
                                                              == 
                                                              (0xfffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0xcU)));
    this->__PVT__region_addr_mask[9U] = ((0xffffdfffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x2000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffU 
                                                              == 
                                                              (0x1fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0xdU)));
    this->__PVT__region_addr_mask[9U] = ((0xffffbfffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x4000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffU 
                                                              == 
                                                              (0x3fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0xeU)));
    this->__PVT__region_addr_mask[9U] = ((0xffff7fffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x8000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffU 
                                                              == 
                                                              (0x7fffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0xfU)));
    this->__PVT__region_addr_mask[9U] = ((0xfffeffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x10000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x10U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffdffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x20000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffU 
                                                              == 
                                                              (0x1ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x11U)));
    this->__PVT__region_addr_mask[9U] = ((0xfffbffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x40000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffU 
                                                              == 
                                                              (0x3ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x12U)));
    this->__PVT__region_addr_mask[9U] = ((0xfff7ffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x80000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffU 
                                                              == 
                                                              (0x7ffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x13U)));
    this->__PVT__region_addr_mask[9U] = ((0xffefffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x100000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffffU 
                                                              == 
                                                              (0xfffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x14U)));
    this->__PVT__region_addr_mask[9U] = ((0xffdfffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x200000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffU 
                                                              == 
                                                              (0x1fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x15U)));
    this->__PVT__region_addr_mask[9U] = ((0xffbfffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x400000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffU 
                                                              == 
                                                              (0x3fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x16U)));
    this->__PVT__region_addr_mask[9U] = ((0xff7fffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x800000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x17U)));
    this->__PVT__region_addr_mask[9U] = ((0xfeffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x1000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x18U)));
    this->__PVT__region_addr_mask[9U] = ((0xfdffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x2000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1ffffffU 
                                                              == 
                                                              (0x1ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x19U)));
    this->__PVT__region_addr_mask[9U] = ((0xfbffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x4000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3ffffffU 
                                                              == 
                                                              (0x3ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x1aU)));
    this->__PVT__region_addr_mask[9U] = ((0xf7ffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x8000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7ffffffU 
                                                              == 
                                                              (0x7ffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x1bU)));
    this->__PVT__region_addr_mask[9U] = ((0xefffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x10000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0xfffffffU 
                                                              == 
                                                              (0xfffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x1cU)));
    this->__PVT__region_addr_mask[9U] = ((0xdfffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x20000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x1dU)));
    this->__PVT__region_addr_mask[9U] = ((0xbfffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x40000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x3fffffffU 
                                                              == 
                                                              (0x3fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x1eU)));
    this->__PVT__region_addr_mask[9U] = ((0x7fffffffU 
                                          & this->__PVT__region_addr_mask[9U]) 
                                         | (0x80000000U 
                                            & (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (0x7fffffffU 
                                                              == 
                                                              (0x7fffffffU 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                   << 5U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                                     >> 0x1bU))))))) 
                                               << 0x1fU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffffeU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (3U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 << 6U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x1aU)))));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffffdU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (2U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x1aU)))) 
                                                | (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    >> 0x1dU))) 
                                               << 1U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffffbU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (4U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                   << 3U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                     >> 0x1dU))))))) 
                                               << 2U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffff7U 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (8U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                   << 3U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                     >> 0x1dU))))))) 
                                               << 3U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffffefU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x10U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 4U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffffdfU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x20U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 5U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffffbfU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x40U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fU 
                                                                == 
                                                                (0x3fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 6U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffff7fU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x80U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fU 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 7U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffeffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x100U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 8U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffdffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x200U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffU 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 9U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffffbffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x400U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffU 
                                                                == 
                                                                (0x3ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0xaU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffff7ffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x800U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffU 
                                                                == 
                                                                (0x7ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0xbU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffefffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x1000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfffU 
                                                                == 
                                                                (0xfffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0xcU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffdfffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x2000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffU 
                                                                == 
                                                                (0x1fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0xdU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffffbfffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x4000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffU 
                                                                == 
                                                                (0x3fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0xeU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffff7fffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x8000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffU 
                                                                == 
                                                                (0x7fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0xfU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffeffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x10000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x10U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffdffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x20000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffU 
                                                                == 
                                                                (0x1ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x11U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfffbffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x40000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffU 
                                                                == 
                                                                (0x3ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x12U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfff7ffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x80000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffU 
                                                                == 
                                                                (0x7ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x13U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffefffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x100000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfffffU 
                                                                == 
                                                                (0xfffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x14U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffdfffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x200000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffU 
                                                                == 
                                                                (0x1fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x15U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xffbfffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x400000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffU 
                                                                == 
                                                                (0x3fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x16U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xff7fffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x800000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x17U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfeffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x1000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xffffffU 
                                                                == 
                                                                (0xffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x18U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfdffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x2000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffffU 
                                                                == 
                                                                (0x1ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x19U)));
    this->__PVT__region_addr_mask[0xaU] = ((0xfbffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x4000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffffU 
                                                                == 
                                                                (0x3ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x1aU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xf7ffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x8000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffffU 
                                                                == 
                                                                (0x7ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x1bU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xefffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x10000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfffffffU 
                                                                == 
                                                                (0xfffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x1cU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xdfffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x20000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffffU 
                                                                == 
                                                                (0x1fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x1dU)));
    this->__PVT__region_addr_mask[0xaU] = ((0xbfffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x40000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffffU 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x1eU)));
    this->__PVT__region_addr_mask[0xaU] = ((0x7fffffffU 
                                            & this->__PVT__region_addr_mask[0xaU]) 
                                           | (0x80000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffffU 
                                                                == 
                                                                (0x7fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     << 3U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                                       >> 0x1dU))))))) 
                                                 << 0x1fU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffffeU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (3U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 2U)))));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffffdU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (2U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 2U)))) 
                                                | (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    >> 0x1fU))) 
                                               << 1U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffffbU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (4U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                   << 1U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     >> 0x1fU))))))) 
                                               << 2U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffff7U 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (8U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                   << 1U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                     >> 0x1fU))))))) 
                                               << 3U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffffefU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x10U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 4U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffffdfU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x20U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 5U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffffbfU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x40U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fU 
                                                                == 
                                                                (0x3fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 6U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffff7fU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x80U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fU 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 7U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffeffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x100U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 8U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffdffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x200U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffU 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 9U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffffbffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x400U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffU 
                                                                == 
                                                                (0x3ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0xaU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffff7ffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x800U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffU 
                                                                == 
                                                                (0x7ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0xbU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffefffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x1000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfffU 
                                                                == 
                                                                (0xfffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0xcU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffdfffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x2000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffU 
                                                                == 
                                                                (0x1fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0xdU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffffbfffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x4000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffU 
                                                                == 
                                                                (0x3fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0xeU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffff7fffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x8000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffU 
                                                                == 
                                                                (0x7fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0xfU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffeffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x10000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x10U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffdffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x20000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffU 
                                                                == 
                                                                (0x1ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x11U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfffbffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x40000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffU 
                                                                == 
                                                                (0x3ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x12U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfff7ffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x80000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffU 
                                                                == 
                                                                (0x7ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x13U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffefffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x100000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfffffU 
                                                                == 
                                                                (0xfffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x14U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffdfffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x200000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffU 
                                                                == 
                                                                (0x1fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x15U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xffbfffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x400000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffU 
                                                                == 
                                                                (0x3fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x16U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xff7fffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x800000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x17U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfeffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x1000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xffffffU 
                                                                == 
                                                                (0xffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x18U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfdffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x2000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffffU 
                                                                == 
                                                                (0x1ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x19U)));
    this->__PVT__region_addr_mask[0xbU] = ((0xfbffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x4000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffffU 
                                                                == 
                                                                (0x3ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x1aU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xf7ffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x8000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffffU 
                                                                == 
                                                                (0x7ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x1bU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xefffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x10000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfffffffU 
                                                                == 
                                                                (0xfffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x1cU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xdfffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x20000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffffU 
                                                                == 
                                                                (0x1fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x1dU)));
    this->__PVT__region_addr_mask[0xbU] = ((0xbfffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x40000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffffU 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x1eU)));
    this->__PVT__region_addr_mask[0xbU] = ((0x7fffffffU 
                                            & this->__PVT__region_addr_mask[0xbU]) 
                                           | (0x80000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffffU 
                                                                == 
                                                                (0x7fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                                     << 1U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                                       >> 0x1fU))))))) 
                                                 << 0x1fU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffffeU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (3U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                 << 0x16U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0xaU)))));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffffdU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (2U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0xaU)))) 
                                                | (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    >> 1U))) 
                                               << 1U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffffbU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (4U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                     >> 1U))))))) 
                                               << 2U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffff7U 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (8U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0xaU)))) 
                                                | (~ (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                     >> 1U))))))) 
                                               << 3U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffffefU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x10U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 4U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffffdfU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x20U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 5U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffffbfU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x40U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3fU 
                                                                == 
                                                                (0x3fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 6U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffff7fU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x80U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7fU 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 7U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffeffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x100U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 8U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffdffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x200U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffU 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 9U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffffbffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x400U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffU 
                                                                == 
                                                                (0x3ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0xaU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffff7ffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x800U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffU 
                                                                == 
                                                                (0x7ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0xbU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffefffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x1000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xfffU 
                                                                == 
                                                                (0xfffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0xcU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffdfffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x2000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffU 
                                                                == 
                                                                (0x1fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0xdU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffffbfffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x4000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffU 
                                                                == 
                                                                (0x3fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0xeU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffff7fffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x8000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffU 
                                                                == 
                                                                (0x7fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0xfU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffeffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x10000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x10U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffdffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x20000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffU 
                                                                == 
                                                                (0x1ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x11U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfffbffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x40000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffU 
                                                                == 
                                                                (0x3ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x12U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfff7ffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x80000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffU 
                                                                == 
                                                                (0x7ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x13U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffefffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x100000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xfffffU 
                                                                == 
                                                                (0xfffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x14U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffdfffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x200000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffU 
                                                                == 
                                                                (0x1fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x15U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xffbfffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x400000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffU 
                                                                == 
                                                                (0x3fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x16U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xff7fffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x800000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x17U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfeffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x1000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xffffffU 
                                                                == 
                                                                (0xffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x18U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfdffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x2000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffffU 
                                                                == 
                                                                (0x1ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x19U)));
    this->__PVT__region_addr_mask[0xcU] = ((0xfbffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x4000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffffU 
                                                                == 
                                                                (0x3ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x1aU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xf7ffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x8000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffffU 
                                                                == 
                                                                (0x7ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x1bU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xefffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x10000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0xfffffffU 
                                                                == 
                                                                (0xfffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x1cU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xdfffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x20000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffffU 
                                                                == 
                                                                (0x1fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x1dU)));
    this->__PVT__region_addr_mask[0xcU] = ((0xbfffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x40000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffffU 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x1eU)));
    this->__PVT__region_addr_mask[0xcU] = ((0x7fffffffU 
                                            & this->__PVT__region_addr_mask[0xcU]) 
                                           | (0x80000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0xaU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffffU 
                                                                == 
                                                                (0x7fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     << 0x1fU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                                       >> 1U))))))) 
                                                 << 0x1fU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffffeU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (3U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                 << 0xeU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x12U)))));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffffdU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (2U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0x12U)))) 
                                                | (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                    >> 3U))) 
                                               << 1U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffffbU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (4U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                   << 0x1dU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     >> 3U))))))) 
                                               << 2U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffff7U 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (8U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0x12U)))) 
                                                | (~ (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                   << 0x1dU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                     >> 3U))))))) 
                                               << 3U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffffefU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x10U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 4U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffffdfU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x20U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 5U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffffbfU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x40U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3fU 
                                                                == 
                                                                (0x3fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 6U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffff7fU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x80U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7fU 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 7U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffeffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x100U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 8U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffdffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x200U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffU 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 9U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffffbffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x400U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffU 
                                                                == 
                                                                (0x3ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0xaU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffff7ffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x800U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffU 
                                                                == 
                                                                (0x7ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0xbU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffefffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x1000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xfffU 
                                                                == 
                                                                (0xfffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0xcU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffdfffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x2000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffU 
                                                                == 
                                                                (0x1fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0xdU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffffbfffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x4000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffU 
                                                                == 
                                                                (0x3fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0xeU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffff7fffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x8000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffU 
                                                                == 
                                                                (0x7fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0xfU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffeffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x10000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x10U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffdffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x20000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffU 
                                                                == 
                                                                (0x1ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x11U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfffbffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x40000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffU 
                                                                == 
                                                                (0x3ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x12U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfff7ffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x80000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffU 
                                                                == 
                                                                (0x7ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x13U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffefffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x100000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xfffffU 
                                                                == 
                                                                (0xfffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x14U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffdfffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x200000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffU 
                                                                == 
                                                                (0x1fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x15U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xffbfffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x400000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffU 
                                                                == 
                                                                (0x3fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x16U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xff7fffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x800000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x17U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfeffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x1000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xffffffU 
                                                                == 
                                                                (0xffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x18U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfdffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x2000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffffU 
                                                                == 
                                                                (0x1ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x19U)));
    this->__PVT__region_addr_mask[0xdU] = ((0xfbffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x4000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffffU 
                                                                == 
                                                                (0x3ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x1aU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xf7ffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x8000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffffU 
                                                                == 
                                                                (0x7ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x1bU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xefffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x10000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0xfffffffU 
                                                                == 
                                                                (0xfffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x1cU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xdfffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x20000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffffU 
                                                                == 
                                                                (0x1fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x1dU)));
    this->__PVT__region_addr_mask[0xdU] = ((0xbfffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x40000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffffU 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x1eU)));
    this->__PVT__region_addr_mask[0xdU] = ((0x7fffffffU 
                                            & this->__PVT__region_addr_mask[0xdU]) 
                                           | (0x80000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 0xeU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x12U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffffU 
                                                                == 
                                                                (0x7fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     << 0x1dU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU] 
                                                                       >> 3U))))))) 
                                                 << 0x1fU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffffeU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (3U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                 << 6U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1aU)))));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffffdU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (2U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0x1aU)))) 
                                                | (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                    >> 5U))) 
                                               << 1U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffffbU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (4U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                   << 0x1bU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     >> 5U))))))) 
                                               << 2U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffff7U 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (8U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                        >> 0x1aU)))) 
                                                | (~ (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                   << 0x1bU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                     >> 5U))))))) 
                                               << 3U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffffefU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x10U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 4U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffffdfU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x20U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 5U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffffbfU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x40U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fU 
                                                                == 
                                                                (0x3fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 6U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffff7fU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x80U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fU 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 7U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffeffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x100U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 8U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffdffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x200U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffU 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 9U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffffbffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x400U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffU 
                                                                == 
                                                                (0x3ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0xaU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffff7ffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x800U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffU 
                                                                == 
                                                                (0x7ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0xbU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffefffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x1000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfffU 
                                                                == 
                                                                (0xfffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0xcU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffdfffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x2000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffU 
                                                                == 
                                                                (0x1fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0xdU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffffbfffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x4000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffU 
                                                                == 
                                                                (0x3fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0xeU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffff7fffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x8000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffU 
                                                                == 
                                                                (0x7fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0xfU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffeffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x10000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x10U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffdffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x20000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffU 
                                                                == 
                                                                (0x1ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x11U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfffbffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x40000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffU 
                                                                == 
                                                                (0x3ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x12U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfff7ffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x80000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffU 
                                                                == 
                                                                (0x7ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x13U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffefffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x100000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfffffU 
                                                                == 
                                                                (0xfffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x14U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffdfffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x200000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffU 
                                                                == 
                                                                (0x1fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x15U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xffbfffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x400000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffU 
                                                                == 
                                                                (0x3fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x16U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xff7fffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x800000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x17U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfeffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x1000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xffffffU 
                                                                == 
                                                                (0xffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x18U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfdffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x2000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffffU 
                                                                == 
                                                                (0x1ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x19U)));
    this->__PVT__region_addr_mask[0xeU] = ((0xfbffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x4000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffffU 
                                                                == 
                                                                (0x3ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x1aU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xf7ffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x8000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffffU 
                                                                == 
                                                                (0x7ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x1bU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xefffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x10000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0xfffffffU 
                                                                == 
                                                                (0xfffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x1cU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xdfffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x20000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffffU 
                                                                == 
                                                                (0x1fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x1dU)));
    this->__PVT__region_addr_mask[0xeU] = ((0xbfffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x40000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffffU 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x1eU)));
    this->__PVT__region_addr_mask[0xeU] = ((0x7fffffffU 
                                            & this->__PVT__region_addr_mask[0xeU]) 
                                           | (0x80000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        << 6U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                          >> 0x1aU)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffffU 
                                                                == 
                                                                (0x7fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     << 0x1bU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                                       >> 5U))))))) 
                                                 << 0x1fU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffffeU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (3U != 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                 << 0x1eU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                   >> 2U)))));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffffdU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (2U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        >> 2U)))) 
                                                | (~ 
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    >> 7U))) 
                                               << 1U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffffbU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (4U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                   << 0x19U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     >> 7U))))))) 
                                               << 2U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffff7U 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (8U & 
                                              (((3U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                        >> 2U)))) 
                                                | (~ (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                   << 0x19U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                     >> 7U))))))) 
                                               << 3U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffffefU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x10U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 4U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffffdfU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x20U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 5U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffffbfU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x40U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fU 
                                                                == 
                                                                (0x3fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 6U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffff7fU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x80U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fU 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 7U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffeffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x100U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 8U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffdffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x200U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffU 
                                                                == 
                                                                (0x1ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 9U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffffbffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x400U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffU 
                                                                == 
                                                                (0x3ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0xaU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffff7ffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x800U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffU 
                                                                == 
                                                                (0x7ffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0xbU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffefffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x1000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfffU 
                                                                == 
                                                                (0xfffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0xcU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffdfffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x2000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffU 
                                                                == 
                                                                (0x1fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0xdU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffffbfffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x4000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffU 
                                                                == 
                                                                (0x3fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0xeU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffff7fffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x8000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffU 
                                                                == 
                                                                (0x7fffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0xfU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffeffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x10000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x10U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffdffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x20000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffU 
                                                                == 
                                                                (0x1ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x11U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfffbffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x40000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffU 
                                                                == 
                                                                (0x3ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x12U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfff7ffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x80000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffU 
                                                                == 
                                                                (0x7ffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x13U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffefffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x100000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfffffU 
                                                                == 
                                                                (0xfffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x14U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffdfffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x200000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffU 
                                                                == 
                                                                (0x1fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x15U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xffbfffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x400000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffU 
                                                                == 
                                                                (0x3fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x16U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xff7fffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x800000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x17U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfeffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x1000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xffffffU 
                                                                == 
                                                                (0xffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x18U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfdffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x2000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1ffffffU 
                                                                == 
                                                                (0x1ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x19U)));
    this->__PVT__region_addr_mask[0xfU] = ((0xfbffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x4000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3ffffffU 
                                                                == 
                                                                (0x3ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x1aU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xf7ffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x8000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7ffffffU 
                                                                == 
                                                                (0x7ffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x1bU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xefffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x10000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0xfffffffU 
                                                                == 
                                                                (0xfffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x1cU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xdfffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x20000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x1fffffffU 
                                                                == 
                                                                (0x1fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x1dU)));
    this->__PVT__region_addr_mask[0xfU] = ((0xbfffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x40000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x3fffffffU 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x1eU)));
    this->__PVT__region_addr_mask[0xfU] = ((0x7fffffffU 
                                            & this->__PVT__region_addr_mask[0xfU]) 
                                           | (0x80000000U 
                                              & (((3U 
                                                   != 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          >> 2U)))) 
                                                  | (~ (IData)(
                                                               (0x7fffffffU 
                                                                == 
                                                                (0x7fffffffU 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                                     << 0x19U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                                       >> 7U))))))) 
                                                 << 0x1fU)));
    this->__PVT__region_basic_perm_check = ((0xfffeU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (1U & 
                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                >> 9U)));
    this->__PVT__region_basic_perm_check = ((0xfffdU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (2U & 
                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                >> 0x10U)));
    this->__PVT__region_basic_perm_check = ((0xfffbU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (4U & 
                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                >> 0x17U)));
    this->__PVT__region_basic_perm_check = ((0xfff7U 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (8U & 
                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                << 2U)));
    this->__PVT__region_basic_perm_check = ((0xffefU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x10U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 5U)));
    this->__PVT__region_basic_perm_check = ((0xffdfU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x20U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0xcU)));
    this->__PVT__region_basic_perm_check = ((0xffbfU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x40U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x13U)));
    this->__PVT__region_basic_perm_check = ((0xff7fU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x80U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  << 6U)));
    this->__PVT__region_basic_perm_check = ((0xfeffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x100U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 1U)));
    this->__PVT__region_basic_perm_check = ((0xfdffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x200U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 8U)));
    this->__PVT__region_basic_perm_check = ((0xfbffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x400U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0xfU)));
    this->__PVT__region_basic_perm_check = ((0xf7ffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x800U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  << 0xaU)));
    this->__PVT__region_basic_perm_check = ((0xefffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x1000U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  << 3U)));
    this->__PVT__region_basic_perm_check = ((0xdfffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x2000U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 4U)));
    this->__PVT__region_basic_perm_check = ((0xbfffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x4000U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0xbU)));
    this->__PVT__region_basic_perm_check = ((0x7fffU 
                                             & (IData)(this->__PVT__region_basic_perm_check)) 
                                            | (0x8000U 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                  << 0xeU)));
    this->__PVT__region_start_addr[0U] = (IData)(((1U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        << 0x16U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                          >> 0xaU))))
                                                   ? 0ULL
                                                   : 
                                                  (0x3ffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                            >> 7U))))));
    this->__PVT__region_start_addr[1U] = ((0xfffffffcU 
                                           & this->__PVT__region_start_addr[1U]) 
                                          | (IData)(
                                                    (((1U 
                                                       == 
                                                       (3U 
                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                            << 0x16U) 
                                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                              >> 0xaU))))
                                                       ? 0ULL
                                                       : 
                                                      (0x3ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                                >> 7U))))) 
                                                     >> 0x20U)));
    this->__PVT__region_start_addr[1U] = ((3U & this->__PVT__region_start_addr[1U]) 
                                          | (0xfffffffcU 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                  << 0xeU) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                    >> 0x12U))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                 << 0x19U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                                   >> 7U)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                              << 0x37U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                 << 0x17U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                   >> 9U)))))) 
                                                << 2U)));
    this->__PVT__region_start_addr[2U] = ((0xfffffff0U 
                                           & this->__PVT__region_start_addr[2U]) 
                                          | ((3U & 
                                              ((IData)(
                                                       (0x3ffffffffULL 
                                                        & ((1U 
                                                            == 
                                                            (3U 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                 << 0xeU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                   >> 0x12U))))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                << 0x19U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                                  >> 7U)))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                << 0x17U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                  >> 9U)))))) 
                                               >> 0x1eU)) 
                                             | (0xfffffffcU 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                      << 0xeU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                        >> 0x12U))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                     << 0x19U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                                       >> 7U)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                     << 0x17U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                       >> 9U))))) 
                                                            >> 0x20U)) 
                                                   << 2U))));
    this->__PVT__region_start_addr[2U] = ((0xfU & this->__PVT__region_start_addr[2U]) 
                                          | (0xfffffff0U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                  << 6U) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                    >> 0x1aU))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                              << 0x37U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                 << 0x17U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                   >> 9U)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                 << 0x15U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                   >> 0xbU)))))) 
                                                << 4U)));
    this->__PVT__region_start_addr[3U] = ((0xffffffc0U 
                                           & this->__PVT__region_start_addr[3U]) 
                                          | ((0xfU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                   << 6U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                     >> 0x1aU))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                  << 0x17U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                    >> 9U)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                  << 0x15U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                    >> 0xbU)))))) 
                                                 >> 0x1cU)) 
                                             | (0xfffffff0U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                      << 6U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                        >> 0x1aU))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                     << 0x17U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                       >> 9U)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                     << 0x15U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                       >> 0xbU))))) 
                                                            >> 0x20U)) 
                                                   << 4U))));
    this->__PVT__region_start_addr[3U] = ((0x3fU & 
                                           this->__PVT__region_start_addr[3U]) 
                                          | (0xffffffc0U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                    >> 2U))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                 << 0x15U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                   >> 0xbU)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                   >> 0xdU)))))) 
                                                << 6U)));
    this->__PVT__region_start_addr[4U] = ((0xffffff00U 
                                           & this->__PVT__region_start_addr[4U]) 
                                          | ((0x3fU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                     >> 2U))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                  << 0x15U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                    >> 0xbU)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                    >> 0xdU)))))) 
                                                 >> 0x1aU)) 
                                             | (0xffffffc0U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                      << 0x1eU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                        >> 2U))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                     << 0x15U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                       >> 0xbU)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                  << 0x33U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                     << 0x13U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                       >> 0xdU))))) 
                                                            >> 0x20U)) 
                                                   << 6U))));
    this->__PVT__region_start_addr[4U] = ((0xffU & 
                                           this->__PVT__region_start_addr[4U]) 
                                          | (0xffffff00U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                  << 0x16U) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                    >> 0xaU))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                   >> 0xdU)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                              << 0x31U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                 << 0x11U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                   >> 0xfU)))))) 
                                                << 8U)));
    this->__PVT__region_start_addr[5U] = ((0xfffffc00U 
                                           & this->__PVT__region_start_addr[5U]) 
                                          | ((0xffU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                   << 0x16U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                     >> 0xaU))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                    >> 0xdU)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                  << 0x11U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                    >> 0xfU)))))) 
                                                 >> 0x18U)) 
                                             | (0xffffff00U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                      << 0x16U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                        >> 0xaU))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                  << 0x33U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                     << 0x13U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                       >> 0xdU)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                  << 0x31U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                     << 0x11U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                       >> 0xfU))))) 
                                                            >> 0x20U)) 
                                                   << 8U))));
    this->__PVT__region_start_addr[5U] = ((0x3ffU & 
                                           this->__PVT__region_start_addr[5U]) 
                                          | (0xfffffc00U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                  << 0xeU) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                    >> 0x12U))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                              << 0x31U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                 << 0x11U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                   >> 0xfU)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                 << 0xfU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                   >> 0x11U)))))) 
                                                << 0xaU)));
    this->__PVT__region_start_addr[6U] = ((0xfffff000U 
                                           & this->__PVT__region_start_addr[6U]) 
                                          | ((0x3ffU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                   << 0xeU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                     >> 0x12U))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                  << 0x11U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                    >> 0xfU)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                  << 0xfU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                    >> 0x11U)))))) 
                                                 >> 0x16U)) 
                                             | (0xfffffc00U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                      << 0xeU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                        >> 0x12U))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                  << 0x31U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                     << 0x11U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                                       >> 0xfU)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                     << 0xfU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                       >> 0x11U))))) 
                                                            >> 0x20U)) 
                                                   << 0xaU))));
    this->__PVT__region_start_addr[6U] = ((0xfffU & 
                                           this->__PVT__region_start_addr[6U]) 
                                          | (0xfffff000U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                  << 6U) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                    >> 0x1aU))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                 << 0xfU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                   >> 0x11U)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                 << 0xdU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                   >> 0x13U)))))) 
                                                << 0xcU)));
    this->__PVT__region_start_addr[7U] = ((0xffffc000U 
                                           & this->__PVT__region_start_addr[7U]) 
                                          | ((0xfffU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                   << 6U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                     >> 0x1aU))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                  << 0xfU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                    >> 0x11U)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                  << 0xdU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                    >> 0x13U)))))) 
                                                 >> 0x14U)) 
                                             | (0xfffff000U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                      << 6U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                        >> 0x1aU))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                     << 0xfU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                                       >> 0x11U)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                     << 0xdU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                       >> 0x13U))))) 
                                                            >> 0x20U)) 
                                                   << 0xcU))));
    this->__PVT__region_start_addr[7U] = ((0x3fffU 
                                           & this->__PVT__region_start_addr[7U]) 
                                          | (0xffffc000U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                    >> 2U))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                 << 0xdU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                   >> 0x13U)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                 << 0xbU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                   >> 0x15U)))))) 
                                                << 0xeU)));
    this->__PVT__region_start_addr[8U] = ((0xffff0000U 
                                           & this->__PVT__region_start_addr[8U]) 
                                          | ((0x3fffU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                     >> 2U))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                  << 0xdU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                    >> 0x13U)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                               << 0x2bU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                  << 0xbU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                    >> 0x15U)))))) 
                                                 >> 0x12U)) 
                                             | (0xffffc000U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                      << 0x1eU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                        >> 2U))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                     << 0xdU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                                       >> 0x13U)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                  << 0x2bU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                     << 0xbU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                       >> 0x15U))))) 
                                                            >> 0x20U)) 
                                                   << 0xeU))));
    this->__PVT__region_start_addr[8U] = ((0xffffU 
                                           & this->__PVT__region_start_addr[8U]) 
                                          | (0xffff0000U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                  << 0x16U) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                    >> 0xaU))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                 << 0xbU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                   >> 0x15U)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                              << 0x29U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                 << 9U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                   >> 0x17U)))))) 
                                                << 0x10U)));
    this->__PVT__region_start_addr[9U] = ((0xfffc0000U 
                                           & this->__PVT__region_start_addr[9U]) 
                                          | ((0xffffU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                   << 0x16U) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                     >> 0xaU))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                               << 0x2bU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                  << 0xbU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                    >> 0x15U)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                               << 0x29U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                  << 9U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                    >> 0x17U)))))) 
                                                 >> 0x10U)) 
                                             | (0xffff0000U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                      << 0x16U) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                        >> 0xaU))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                  << 0x2bU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                     << 0xbU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                                       >> 0x15U)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                  << 0x29U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                     << 9U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                       >> 0x17U))))) 
                                                            >> 0x20U)) 
                                                   << 0x10U))));
    this->__PVT__region_start_addr[9U] = ((0x3ffffU 
                                           & this->__PVT__region_start_addr[9U]) 
                                          | (0xfffc0000U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & ((1U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                  << 0xeU) 
                                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                    >> 0x12U))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                              << 0x29U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                 << 9U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                   >> 0x17U)))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                 << 7U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                   >> 0x19U)))))) 
                                                << 0x12U)));
    this->__PVT__region_start_addr[0xaU] = ((0xfff00000U 
                                             & this->__PVT__region_start_addr[0xaU]) 
                                            | ((0x3ffffU 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                     << 0xeU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                       >> 0x12U))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                      >> 0x17U)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                 << 0x27U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                    << 7U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                      >> 0x19U)))))) 
                                                   >> 0xeU)) 
                                               | (0xfffc0000U 
                                                  & ((IData)(
                                                             ((0x3ffffffffULL 
                                                               & ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                        << 0xeU) 
                                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                          >> 0x12U))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                    << 0x29U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                       << 9U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                                         >> 0x17U)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                    << 0x27U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                       << 7U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                         >> 0x19U))))) 
                                                              >> 0x20U)) 
                                                     << 0x12U))));
    this->__PVT__region_start_addr[0xaU] = ((0xfffffU 
                                             & this->__PVT__region_start_addr[0xaU]) 
                                            | (0xfff00000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                    << 6U) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                      >> 0x1aU))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                << 0x27U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                   << 7U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                     >> 0x19U)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                << 0x25U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                   << 5U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                     >> 0x1bU)))))) 
                                                  << 0x14U)));
    this->__PVT__region_start_addr[0xbU] = ((0xffc00000U 
                                             & this->__PVT__region_start_addr[0xbU]) 
                                            | ((0xfffffU 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                     << 6U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                       >> 0x1aU))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                 << 0x27U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                    << 7U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                      >> 0x19U)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                    << 5U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                      >> 0x1bU)))))) 
                                                   >> 0xcU)) 
                                               | (0xfff00000U 
                                                  & ((IData)(
                                                             ((0x3ffffffffULL 
                                                               & ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                        << 6U) 
                                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                          >> 0x1aU))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                    << 0x27U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                       << 7U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                                         >> 0x19U)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                    << 0x25U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                       << 5U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                         >> 0x1bU))))) 
                                                              >> 0x20U)) 
                                                     << 0x14U))));
    this->__PVT__region_start_addr[0xbU] = ((0x3fffffU 
                                             & this->__PVT__region_start_addr[0xbU]) 
                                            | (0xffc00000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                      >> 2U))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                << 0x25U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                   << 5U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                     >> 0x1bU)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                   << 3U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                     >> 0x1dU)))))) 
                                                  << 0x16U)));
    this->__PVT__region_start_addr[0xcU] = ((0xff000000U 
                                             & this->__PVT__region_start_addr[0xcU]) 
                                            | ((0x3fffffU 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                     << 0x1eU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                       >> 2U))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                    << 5U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                      >> 0x1bU)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                    << 3U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                      >> 0x1dU)))))) 
                                                   >> 0xaU)) 
                                               | (0xffc00000U 
                                                  & ((IData)(
                                                             ((0x3ffffffffULL 
                                                               & ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                        << 0x1eU) 
                                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                          >> 2U))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                    << 0x25U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                       << 5U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                         >> 0x1bU)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                       << 3U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                         >> 0x1dU))))) 
                                                              >> 0x20U)) 
                                                     << 0x16U))));
    this->__PVT__region_start_addr[0xcU] = ((0xffffffU 
                                             & this->__PVT__region_start_addr[0xcU]) 
                                            | (0xff000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                    << 0x16U) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                      >> 0xaU))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                   << 3U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                     >> 0x1dU)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                << 0x21U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                   << 1U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                     >> 0x1fU)))))) 
                                                  << 0x18U)));
    this->__PVT__region_start_addr[0xdU] = ((0xfc000000U 
                                             & this->__PVT__region_start_addr[0xdU]) 
                                            | ((0xffffffU 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                     << 0x16U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                       >> 0xaU))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                    << 3U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                      >> 0x1dU)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                 << 0x21U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                    << 1U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                      >> 0x1fU)))))) 
                                                   >> 8U)) 
                                               | (0xff000000U 
                                                  & ((IData)(
                                                             ((0x3ffffffffULL 
                                                               & ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                        << 0x16U) 
                                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                          >> 0xaU))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                       << 3U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                         >> 0x1dU)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                       << 1U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                         >> 0x1fU))))) 
                                                              >> 0x20U)) 
                                                     << 0x18U))));
    this->__PVT__region_start_addr[0xdU] = ((0x3ffffffU 
                                             & this->__PVT__region_start_addr[0xdU]) 
                                            | (0xfc000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                    << 0xeU) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                      >> 0x12U))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                << 0x21U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                   << 1U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                     >> 0x1fU)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                   << 0x1fU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                     >> 1U)))))) 
                                                  << 0x1aU)));
    this->__PVT__region_start_addr[0xeU] = ((0xf0000000U 
                                             & this->__PVT__region_start_addr[0xeU]) 
                                            | ((0x3ffffffU 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                     << 0xeU) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                       >> 0x12U))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                 << 0x21U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                    << 1U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                      >> 0x1fU)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                 << 0x3fU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                    << 0x1fU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                      >> 1U)))))) 
                                                   >> 6U)) 
                                               | (0xfc000000U 
                                                  & ((IData)(
                                                             ((0x3ffffffffULL 
                                                               & ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                        << 0xeU) 
                                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                          >> 0x12U))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                                       << 1U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                                         >> 0x1fU)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                    << 0x3fU) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                       << 0x1fU) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                         >> 1U))))) 
                                                              >> 0x20U)) 
                                                     << 0x1aU))));
    this->__PVT__region_start_addr[0xeU] = ((0xfffffffU 
                                             & this->__PVT__region_start_addr[0xeU]) 
                                            | (0xf0000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                    << 6U) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                      >> 0x1aU))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                   << 0x1fU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                     >> 1U)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                << 0x3dU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                   << 0x1dU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                     >> 3U)))))) 
                                                  << 0x1cU)));
    this->__PVT__region_start_addr[0xfU] = ((0xc0000000U 
                                             & this->__PVT__region_start_addr[0xfU]) 
                                            | ((0xfffffffU 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                     << 6U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                       >> 0x1aU))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                 << 0x3fU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                    << 0x1fU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                      >> 1U)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                 << 0x3dU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                    << 0x1dU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                      >> 3U)))))) 
                                                   >> 4U)) 
                                               | (0xf0000000U 
                                                  & ((IData)(
                                                             ((0x3ffffffffULL 
                                                               & ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                        << 6U) 
                                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                          >> 0x1aU))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                    << 0x3fU) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                       << 0x1fU) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                                         >> 1U)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                    << 0x3dU) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                       << 0x1dU) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                         >> 3U))))) 
                                                              >> 0x20U)) 
                                                     << 0x1cU))));
    this->__PVT__region_start_addr[0xfU] = ((0x3fffffffU 
                                             & this->__PVT__region_start_addr[0xfU]) 
                                            | (0xc0000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                      >> 2U))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                << 0x3dU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                   << 0x1dU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                     >> 3U)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x53U])) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                   << 0x1bU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                     >> 5U)))))) 
                                                  << 0x1eU)));
    this->__PVT__region_start_addr[0x10U] = ((0x3fffffffU 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & ((1U 
                                                              == 
                                                              (3U 
                                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                     >> 2U))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                               << 0x3dU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                  << 0x1dU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                    >> 3U)))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x53U])) 
                                                               << 0x3bU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                  << 0x1bU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                    >> 5U)))))) 
                                                 >> 2U)) 
                                             | (0xc0000000U 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x8aU] 
                                                                      << 0x1eU) 
                                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                                        >> 2U))))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                  << 0x3dU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                     << 0x1dU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                                       >> 3U)))
                                                                 : 
                                                                (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x53U])) 
                                                                  << 0x3bU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                                       >> 5U))))) 
                                                            >> 0x20U)) 
                                                   << 0x1eU)));
}
