// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_xpmp__pi21.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

void VuCup_top_cv32e41s_xpmp__pi21::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__2(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_xpmp__pi21::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__2\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_w = 0U;
    if ((1U != this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_w 
            = (0x100430U & (~ ((IData)(((0x21U >= ((IData)(1U) 
                                                   + 
                                                   ((IData)(0x1fU) 
                                                    - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r))))
                                         ? (0x3ffffffffULL 
                                            & (1ULL 
                                               << ((IData)(1U) 
                                                   + 
                                                   ((IData)(0x1fU) 
                                                    - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)))))
                                         : 0ULL)) - (IData)(1U))));
    }
    if ((1U == this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_zero__DOT____Vcellout__ram__douta_o;
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_one__DOT____Vcellout__ram__douta_o;
    } else {
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w = 0U;
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w = 0U;
    }
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w 
        = (0x1fU & (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                    >> 0xcU));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w 
        = (0xfffU & this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w);
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w 
        = (1U & (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                 >> 0x11U));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w 
        = (1U & (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                 >> 0x12U));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w 
        = (0x1fffU & (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w 
                      >> 0x13U));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w 
        = (0xfffU & ((0U != (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w))
                      ? ((IData)(1U) + ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r) 
                                        + (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)))
                      : ((IData)(1U) + (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r))));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w 
        = ((0x21U >= (0x3fU & ((IData)(0x1fU) - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w)))) 
           & (IData)((0x100430ULL >> (0x3fU & ((IData)(0x1fU) 
                                               - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w))))));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w = 0U;
    if ((1U == this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w 
            = (0x1fffU & ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)
                           ? ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w) 
                              + ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w) 
                                 << 3U)) : ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w) 
                                            + ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w) 
                                               << 3U))));
        if ((0U != (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w))) {
            this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w 
                = (0x3fU & (((IData)(0x1fU) - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)) 
                            - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)));
            this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w 
                = (0x3fU & (((IData)(0x1fU) - (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r)) 
                            - (IData)(1U)));
            this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w 
                = (IData)((0x3ffffffffULL & ((0x100430ULL 
                                              & ((1ULL 
                                                  << (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w)) 
                                                 - 1ULL)) 
                                             >> (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w))));
            this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w 
                = (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w 
                   & (((IData)(1U) << (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w)) 
                      - (IData)(1U)));
            this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w 
                = (0U != (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w 
                          ^ this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w));
        }
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w 
            = (1U & (((~ (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w)) 
                      | ((~ (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w)) 
                         & (~ ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w) 
                               >> (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w))))) 
                     | ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w) 
                        & (~ ((0xbU >= (0xfU & (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))) 
                              & ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w) 
                                 >> (0xfU & (IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w))))))));
    } else {
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w = 0U;
    }
    this->__PVT__core_req = ((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U)))) 
                             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid));
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__cfg_w 
        = ((2U != this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)
            ? 0U : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__rpm_gen__DOT__rpm__DOT__rpm_bank_zero__DOT____Vcellout__ram__douta_o);
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__perm_w 
        = (7U & this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__cfg_w);
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__regsize_w 
        = (0xfffffff8U & this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__cfg_w);
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__suffix_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__overflow_exception_w = 0U;
    this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__access_exception_w = 0U;
    if ((2U == this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state)) {
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__suffix_w 
            = ((IData)(0x100430U) - this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_w);
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__overflow_exception_w 
            = (this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__suffix_w 
               >= this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__regsize_w);
        this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__access_exception_w 
            = (1U & (~ ((IData)(this->__PVT__pmp_trie__DOT__pmp_walker_i__DOT__perm_w) 
                        >> 2U)));
    }
}

void VuCup_top_cv32e41s_xpmp__pi21::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__4(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_xpmp__pi21::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__4\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                            << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                         >> 7U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 7U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                           >> 6U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 7U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                   >> 6U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 7U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                   >> 6U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 7U)))) | 
                        (~ (IData)((0xfU == (0xfU & 
                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                               << 0x1aU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                 >> 6U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x1fU == (0x1fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x3fU == (0x3fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x7fU == (0x7fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 7U)))) | 
                         (~ (IData)((0xffU == (0xffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                     >> 6U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x1ffU == (0x1ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x3ffU == (0x3ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x7ffU == (0x7ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 7U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                         >> 6U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                           << 0x1aU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                             >> 6U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                           << 0x1aU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                             >> 6U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                           << 0x1aU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                             >> 6U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 7U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                            << 0x1aU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                              >> 6U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                              << 0x1aU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                >> 6U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                              << 0x1aU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                >> 6U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                              << 0x1aU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                >> 6U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 7U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                    >> 6U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 7U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                     >> 6U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                     >> 6U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                     >> 6U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                     >> 6U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 7U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                      >> 6U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                            << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                         >> 0xfU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0xfU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                           >> 8U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                 << 0x18U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   >> 8U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                 << 0x18U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                   >> 8U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                     >> 8U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                       >> 8U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                        >> 8U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                        >> 8U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                        >> 8U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                         >> 8U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                           << 0x18U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                             >> 8U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                           << 0x18U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                             >> 8U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                           << 0x18U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                             >> 8U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                            << 0x18U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                              >> 8U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                              << 0x18U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                >> 8U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                              << 0x18U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                >> 8U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                              << 0x18U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                >> 8U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    >> 8U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    >> 8U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    >> 8U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                    >> 8U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                     >> 8U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                     >> 8U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                     >> 8U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                     >> 8U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                      >> 8U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                            << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                      >> 0x17U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                           >> 0xaU))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                 << 0x16U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   >> 0xaU))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                 << 0x16U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                   >> 0xaU))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                     >> 0xaU))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                       >> 0xaU))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                        >> 0xaU))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                        >> 0xaU))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                        >> 0xaU))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                         >> 0xaU))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                           << 0x16U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                             >> 0xaU))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                           << 0x16U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                             >> 0xaU))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                           << 0x16U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                             >> 0xaU))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                            << 0x16U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                              >> 0xaU))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                              << 0x16U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                >> 0xaU))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                              << 0x16U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                >> 0xaU))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                              << 0x16U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                >> 0xaU))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    >> 0xaU))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    >> 0xaU))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    >> 0xaU))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                    >> 0xaU))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                     >> 0xaU))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                     >> 0xaU))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                     >> 0xaU))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                     >> 0xaU))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                      >> 0xaU))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                            << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                      >> 0x1fU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                           >> 0xcU))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                 << 0x14U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   >> 0xcU))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                 << 0x14U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                   >> 0xcU))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                     >> 0xcU))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                     << 0x14U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                       >> 0xcU))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      << 0x14U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                        >> 0xcU))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      << 0x14U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                        >> 0xcU))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      << 0x14U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                        >> 0xcU))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                       << 0x14U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                         >> 0xcU))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                           << 0x14U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                             >> 0xcU))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                           << 0x14U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                             >> 0xcU))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                           << 0x14U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                             >> 0xcU))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                            << 0x14U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                              >> 0xcU))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                              << 0x14U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                >> 0xcU))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                              << 0x14U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                >> 0xcU))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                              << 0x14U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                >> 0xcU))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    >> 0xcU))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    >> 0xcU))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    >> 0xcU))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                    >> 0xcU))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                     >> 0xcU))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                     >> 0xcU))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                     >> 0xcU))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                     >> 0xcU))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                      >> 0xcU))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                            << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         >> 7U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 7U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                           >> 0xeU))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 7U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                 << 0x12U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   >> 0xeU))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 7U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                 << 0x12U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                   >> 0xeU))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 7U)))) | 
                        (~ (IData)((0xfU == (0xfU & 
                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                               << 0x12U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                 >> 0xeU))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x1fU == (0x1fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x3fU == (0x3fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x7fU == (0x7fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 7U)))) | 
                         (~ (IData)((0xffU == (0xffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                     >> 0xeU))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x1ffU == (0x1ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x3ffU == (0x3ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x7ffU == (0x7ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 7U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                         >> 0xeU))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                           << 0x12U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                             >> 0xeU))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                           << 0x12U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                             >> 0xeU))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                           << 0x12U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                             >> 0xeU))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 7U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                            << 0x12U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                              >> 0xeU))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                              << 0x12U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                >> 0xeU))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                              << 0x12U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                >> 0xeU))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                              << 0x12U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                >> 0xeU))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 7U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                    >> 0xeU))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 7U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                     >> 0xeU))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                     >> 0xeU))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                     >> 0xeU))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                     >> 0xeU))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 7U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                      >> 0xeU))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                            << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                         >> 0xfU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0xfU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                           >> 0x10U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   >> 0x10U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                   >> 0x10U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                     >> 0x10U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                       >> 0x10U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                        >> 0x10U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                        >> 0x10U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                        >> 0x10U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                         >> 0x10U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                           << 0x10U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                             >> 0x10U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                           << 0x10U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                             >> 0x10U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                           << 0x10U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                             >> 0x10U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                              >> 0x10U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                >> 0x10U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                >> 0x10U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                >> 0x10U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    >> 0x10U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    >> 0x10U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    >> 0x10U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                    >> 0x10U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                     >> 0x10U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                     >> 0x10U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                     >> 0x10U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                     >> 0x10U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                      >> 0x10U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                            << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                      >> 0x17U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                           >> 0x12U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                 << 0xeU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   >> 0x12U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                 << 0xeU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                   >> 0x12U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                     >> 0x12U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                     << 0xeU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                       >> 0x12U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                        >> 0x12U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                        >> 0x12U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                        >> 0x12U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                       << 0xeU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                         >> 0x12U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                           << 0xeU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                             >> 0x12U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                           << 0xeU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                             >> 0x12U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                           << 0xeU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                             >> 0x12U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                            << 0xeU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                              >> 0x12U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                              << 0xeU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                >> 0x12U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                              << 0xeU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                >> 0x12U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                              << 0xeU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                >> 0x12U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    >> 0x12U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    >> 0x12U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    >> 0x12U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                    >> 0x12U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                     >> 0x12U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                     >> 0x12U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                     >> 0x12U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                     >> 0x12U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                      >> 0x12U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                            << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                      >> 0x1fU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                           >> 0x14U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                 << 0xcU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   >> 0x14U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                 << 0xcU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                   >> 0x14U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                     >> 0x14U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                       >> 0x14U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      << 0xcU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                        >> 0x14U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      << 0xcU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                        >> 0x14U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      << 0xcU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                        >> 0x14U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                         >> 0x14U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                           << 0xcU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                             >> 0x14U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                           << 0xcU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                             >> 0x14U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                           << 0xcU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                             >> 0x14U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                            << 0xcU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                              >> 0x14U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                              << 0xcU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                >> 0x14U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                              << 0xcU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                >> 0x14U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                              << 0xcU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                >> 0x14U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    >> 0x14U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    >> 0x14U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    >> 0x14U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                    >> 0x14U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                     >> 0x14U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                     >> 0x14U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                     >> 0x14U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                     >> 0x14U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                      >> 0x14U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                            << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         >> 7U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 7U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                           >> 0x16U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 7U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                 << 0xaU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   >> 0x16U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 7U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                 << 0xaU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                   >> 0x16U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 7U)))) | 
                        (~ (IData)((0xfU == (0xfU & 
                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                               << 0xaU) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                 >> 0x16U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x1fU == (0x1fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x3fU == (0x3fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x7fU == (0x7fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 7U)))) | 
                         (~ (IData)((0xffU == (0xffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                     >> 0x16U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x1ffU == (0x1ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x3ffU == (0x3ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x7ffU == (0x7ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 7U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                       << 0xaU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                         >> 0x16U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                           << 0xaU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                             >> 0x16U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                           << 0xaU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                             >> 0x16U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                           << 0xaU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                             >> 0x16U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 7U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                            << 0xaU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                              >> 0x16U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                              << 0xaU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                >> 0x16U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                              << 0xaU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                >> 0x16U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                              << 0xaU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                >> 0x16U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 7U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                    >> 0x16U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 7U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                     >> 0x16U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                     >> 0x16U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                     >> 0x16U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                     >> 0x16U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 7U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                      >> 0x16U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                            << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         >> 0xfU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0xfU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                           >> 0x18U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                 << 8U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   >> 0x18U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                 << 8U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                   >> 0x18U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   << 8U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                     >> 0x18U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                     << 8U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                       >> 0x18U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      << 8U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                        >> 0x18U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      << 8U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                        >> 0x18U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      << 8U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                        >> 0x18U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                       << 8U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                         >> 0x18U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                           << 8U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                           >> 0x18U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                           << 8U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                           >> 0x18U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                           << 8U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                           >> 0x18U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                            << 8U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                              >> 0x18U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                              << 8U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                >> 0x18U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                              << 8U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                >> 0x18U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                              << 8U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                >> 0x18U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                  << 8U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    >> 0x18U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                  << 8U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    >> 0x18U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                  << 8U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    >> 0x18U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                  << 8U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                    >> 0x18U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   << 8U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                     >> 0x18U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   << 8U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                     >> 0x18U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   << 8U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                     >> 0x18U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   << 8U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                     >> 0x18U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    << 8U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                                      >> 0x18U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                            << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0x17U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                           >> 0x1aU))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                 << 6U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   >> 0x1aU))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                 << 6U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                   >> 0x1aU))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   << 6U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                     >> 0x1aU))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                     << 6U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                       >> 0x1aU))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                        >> 0x1aU))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                        >> 0x1aU))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      << 6U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                        >> 0x1aU))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                       << 6U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                         >> 0x1aU))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                           << 6U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                           >> 0x1aU))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                           << 6U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                           >> 0x1aU))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                           << 6U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                           >> 0x1aU))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                            << 6U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                              >> 0x1aU))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                              << 6U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                >> 0x1aU))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                              << 6U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                >> 0x1aU))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                              << 6U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                >> 0x1aU))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                  << 6U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    >> 0x1aU))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                  << 6U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    >> 0x1aU))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                  << 6U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    >> 0x1aU))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                  << 6U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                    >> 0x1aU))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   << 6U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                     >> 0x1aU))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   << 6U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                     >> 0x1aU))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   << 6U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                     >> 0x1aU))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   << 6U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                     >> 0x1aU))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    << 6U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                                      >> 0x1aU))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                            << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0x1fU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                           >> 0x1cU))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                 << 4U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   >> 0x1cU))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                 << 4U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                   >> 0x1cU))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   << 4U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                     >> 0x1cU))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                     << 4U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                       >> 0x1cU))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      << 4U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                        >> 0x1cU))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      << 4U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                        >> 0x1cU))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      << 4U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                        >> 0x1cU))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                       << 4U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                         >> 0x1cU))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                           << 4U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                           >> 0x1cU))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                           << 4U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                           >> 0x1cU))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                           << 4U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                           >> 0x1cU))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                            << 4U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                              >> 0x1cU))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                              << 4U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                >> 0x1cU))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                              << 4U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                >> 0x1cU))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                              << 4U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                >> 0x1cU))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                  << 4U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    >> 0x1cU))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                  << 4U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    >> 0x1cU))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                  << 4U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    >> 0x1cU))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                  << 4U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                    >> 0x1cU))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   << 4U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                     >> 0x1cU))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   << 4U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                     >> 0x1cU))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   << 4U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                     >> 0x1cU))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   << 4U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                     >> 0x1cU))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    << 4U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                                      >> 0x1cU))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                            << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         >> 7U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 7U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                           >> 0x1eU))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 7U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                 << 2U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   >> 0x1eU))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 7U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                 << 2U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                   >> 0x1eU))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 7U)))) | 
                        (~ (IData)((0xfU == (0xfU & 
                                             ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                               << 2U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                 >> 0x1eU))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x1fU == (0x1fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x3fU == (0x3fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x19U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 7U)))) | 
                        (~ (IData)((0x7fU == (0x7fU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 7U)))) | 
                         (~ (IData)((0xffU == (0xffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                   << 2U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                     >> 0x1eU))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x1ffU == (0x1ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x3ffU == (0x3ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x19U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 7U)))) | 
                         (~ (IData)((0x7ffU == (0x7ffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 7U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                       << 2U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                         >> 0x1eU))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                           << 2U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                           >> 0x1eU))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                           << 2U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                           >> 0x1eU))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x19U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 7U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                           << 2U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                           >> 0x1eU))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 7U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                            << 2U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                              >> 0x1eU))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                              << 2U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                >> 0x1eU))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                              << 2U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                >> 0x1eU))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x19U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 7U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                              << 2U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                >> 0x1eU))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 7U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x19U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 7U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                  << 2U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                    >> 0x1eU))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 7U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                   << 2U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                     >> 0x1eU))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                   << 2U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                     >> 0x1eU))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                   << 2U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                     >> 0x1eU))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x19U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 7U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                   << 2U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                     >> 0x1eU))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 7U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x19U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 7U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                                    << 2U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                                      >> 0x1eU))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                            << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         >> 0xfU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0xfU)))) 
                     | (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                    << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((3U == (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 0x11U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0xfU)))) 
                     | (~ (IData)((7U == (7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 0x11U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0xfU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 0x11U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0xfU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 0x11U) 
                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0xfU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 0x11U) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 0xfU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 0x11U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 0xfU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 0x11U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0xfU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 0x11U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0xfU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                            << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                      >> 0x17U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                           >> 2U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                   >> 2U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                   >> 2U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                     >> 2U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x17U)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                       >> 2U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                        >> 2U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                        >> 2U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 9U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x17U)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                        >> 2U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                         >> 2U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                           << 0x1eU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                             >> 2U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                           << 0x1eU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                             >> 2U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 9U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x17U)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                           << 0x1eU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                             >> 2U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                            << 0x1eU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                              >> 2U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                              << 0x1eU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                >> 2U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                              << 0x1eU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                >> 2U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 9U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x17U)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                              << 0x1eU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                >> 2U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                    >> 2U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                    >> 2U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                    >> 2U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 9U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x17U)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                    >> 2U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                     >> 2U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                     >> 2U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                     >> 2U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 9U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x17U)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                     >> 2U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 9U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x17U)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                      >> 2U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffeU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                            << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                      >> 0x1fU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffdU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (2U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                     | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                           >> 4U))) << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffbU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (4U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   >> 4U))))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffff7U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (8U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                     | (~ (IData)((7U == (7U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                   >> 4U))))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffefU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x10U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0xfU == (0xfU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                     >> 4U))))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffdfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x20U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x1fU == (0x1fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffbfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x40U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x3fU == (0x3fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffff7fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x80U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 >> 0x1fU)))) 
                        | (~ (IData)((0x7fU == (0x7fU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffeffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x100U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0xffU == (0xffU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                     << 0x1cU) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                       >> 4U))))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffdffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x200U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x1ffU == (0x1ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                      << 0x1cU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                        >> 4U))))))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffbffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x400U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x3ffU == (0x3ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                      << 0x1cU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                        >> 4U))))))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffff7ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x800U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        << 1U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0x1fU)))) 
                         | (~ (IData)((0x7ffU == (0x7ffU 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                      << 0x1cU) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                        >> 4U))))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffefffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x1000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0xfffU == (0xfffU 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                       << 0x1cU) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                         >> 4U))))))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffdfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x2000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x1fffU == 
                                        (0x1fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                           << 0x1cU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                             >> 4U))))))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffbfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x4000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x3fffU == 
                                        (0x3fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                           << 0x1cU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                             >> 4U))))))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffff7fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x8000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                         << 1U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1fU)))) 
                          | (~ (IData)((0x7fffU == 
                                        (0x7fffU & 
                                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                           << 0x1cU) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                             >> 4U))))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffeffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x10000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0xffffU == 
                                         (0xffffU & 
                                          ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                            << 0x1cU) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                              >> 4U))))))) 
                          << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffdffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x20000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x1ffffU == 
                                         (0x1ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                              << 0x1cU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                >> 4U))))))) 
                          << 0x11U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffbffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x40000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x3ffffU == 
                                         (0x3ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                              << 0x1cU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                >> 4U))))))) 
                          << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfff7ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x80000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                          << 1U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0x1fU)))) 
                           | (~ (IData)((0x7ffffU == 
                                         (0x7ffffU 
                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                              << 0x1cU) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                >> 4U))))))) 
                          << 0x13U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffefffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x100000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0xfffffU 
                                          == (0xfffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    >> 4U))))))) 
                           << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffdfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x200000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x1fffffU 
                                          == (0x1fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    >> 4U))))))) 
                           << 0x15U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffbfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x400000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x3fffffU 
                                          == (0x3fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    >> 4U))))))) 
                           << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xff7fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x800000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                           << 1U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                           >> 0x1fU)))) 
                            | (~ (IData)((0x7fffffU 
                                          == (0x7fffffU 
                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                    >> 4U))))))) 
                           << 0x17U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfeffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x1000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0xffffffU 
                                           == (0xffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                     >> 4U))))))) 
                            << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfdffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x2000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x1ffffffU 
                                           == (0x1ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                     >> 4U))))))) 
                            << 0x19U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfbffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x4000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x3ffffffU 
                                           == (0x3ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                     >> 4U))))))) 
                            << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xf7ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x8000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                            << 1U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              >> 0x1fU)))) 
                             | (~ (IData)((0x7ffffffU 
                                           == (0x7ffffffU 
                                               & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                     >> 4U))))))) 
                            << 0x1bU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xefffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x10000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0xfffffffU 
                                            == (0xfffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xdfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x20000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x1fffffffU 
                                            == (0x1fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                             << 0x1dU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xbfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x40000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x3fffffffU 
                                            == (0x3fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0x7fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
           | (0x80000000U & (((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                             << 1U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                               >> 0x1fU)))) 
                              | (~ (IData)((0x7fffffffU 
                                            == (0x7fffffffU 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                      >> 4U))))))) 
                             << 0x1fU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0U] 
        = (IData)(((1U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                  << 0x19U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 7U))))
                    ? 0ULL : (0x3ffffffffULL & (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                      >> 4U))))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U] 
        = ((0xfffffffcU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U]) 
           | (IData)((((1U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                      << 0x19U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 7U))))
                        ? 0ULL : (0x3ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                    >> 4U))))) 
                      >> 0x20U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U] 
        = ((3U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U]) 
           | (0xfffffffcU & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                     << 0x11U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                       >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                   >> 4U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                   >> 6U)))))) 
                             << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U] 
        = ((0xfffffff0U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U]) 
           | ((3U & ((IData)((0x3ffffffffULL & ((1U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                      << 0x11U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                        >> 0xfU))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                       >> 4U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                     << 0x1aU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                       >> 6U)))))) 
                     >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                          ((0x3ffffffffULL 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                     << 0x11U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                                       >> 0xfU))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                 << 0x3cU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                    << 0x1cU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U])) 
                                                                      >> 4U)))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                                 << 0x3aU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                                    << 0x1aU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                                      >> 6U))))) 
                                                           >> 0x20U)) 
                                                  << 2U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U] 
        = ((0xfU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U]) 
           | (0xfffffff0U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                     << 9U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                       >> 0x17U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                   >> 6U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                   >> 8U)))))) 
                             << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U] 
        = ((0xffffffc0U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U]) 
           | ((0xfU & ((IData)((0x3ffffffffULL & ((1U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                        << 9U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                          >> 0x17U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                       << 0x1aU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                         >> 6U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                         >> 8U)))))) 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     ((IData)(((0x3ffffffffULL 
                                                & ((1U 
                                                    == 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 9U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x17U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                     << 0x3aU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                        << 0x1aU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U])) 
                                                          >> 6U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                          >> 8U))))) 
                                               >> 0x20U)) 
                                      << 4U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U] 
        = ((0x3fU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U]) 
           | (0xffffffc0U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                     << 1U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                       >> 0x1fU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                   >> 8U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                   >> 0xaU)))))) 
                             << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U] 
        = ((0xffffff00U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U]) 
           | ((0x3fU & ((IData)((0x3ffffffffULL & (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                         << 1U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                           >> 0x1fU))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                          >> 8U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                          >> 0xaU)))))) 
                        >> 0x1aU)) | (0xffffffc0U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & ((1U 
                                                     == 
                                                     (3U 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                          << 1U) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                            >> 0x1fU))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                      << 0x36U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                         << 0x16U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                           >> 0xaU))))) 
                                                >> 0x20U)) 
                                       << 6U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U] 
        = ((0xffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U]) 
           | (0xffffff00U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       >> 7U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                   >> 0xaU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                   >> 0xcU)))))) 
                             << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U] 
        = ((0xfffffc00U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U]) 
           | ((0xffU & ((IData)((0x3ffffffffULL & (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                         << 0x19U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                           >> 7U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                          >> 0xaU)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                          >> 0xcU)))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & ((1U 
                                                     == 
                                                     (3U 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                          << 0x19U) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                            >> 7U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                      << 0x36U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                         << 0x16U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U])) 
                                                           >> 0xaU)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                           >> 0xcU))))) 
                                                >> 0x20U)) 
                                       << 8U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U] 
        = ((0x3ffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U]) 
           | (0xfffffc00U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                     << 0x11U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                   >> 0xcU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                   >> 0xeU)))))) 
                             << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U] 
        = ((0xfffff000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U]) 
           | ((0x3ffU & ((IData)((0x3ffffffffULL & 
                                  ((1U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  << 0x11U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    >> 0xfU))))
                                    ? (((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                        << 0x34U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                         << 0x14U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                           >> 0xcU)))
                                    : (((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                           >> 0xeU)))))) 
                         >> 0x16U)) | (0xfffffc00U 
                                       & ((IData)((
                                                   (0x3ffffffffULL 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                             << 0x11U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                               >> 0xfU))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                         << 0x34U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U])) 
                                                              >> 0xcU)))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                            << 0x12U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                              >> 0xeU))))) 
                                                   >> 0x20U)) 
                                          << 0xaU))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U] 
        = ((0xfffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U]) 
           | (0xfffff000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                     << 9U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       >> 0x17U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                   >> 0xeU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                   >> 0x10U)))))) 
                             << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U] 
        = ((0xffffc000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U]) 
           | ((0xfffU & ((IData)((0x3ffffffffULL & 
                                  ((1U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  << 9U) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    >> 0x17U))))
                                    ? (((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                           >> 0xeU)))
                                    : (((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                           >> 0x10U)))))) 
                         >> 0x14U)) | (0xfffff000U 
                                       & ((IData)((
                                                   (0x3ffffffffULL 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                             << 9U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                               >> 0x17U))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                            << 0x12U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U])) 
                                                              >> 0xeU)))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                         << 0x30U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                            << 0x10U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                              >> 0x10U))))) 
                                                   >> 0x20U)) 
                                          << 0xcU))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U] 
        = ((0x3fffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U]) 
           | (0xffffc000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                     << 1U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                       >> 0x1fU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                   >> 0x10U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                   >> 0x12U)))))) 
                             << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U] 
        = ((0xffff0000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U]) 
           | ((0x3fffU & ((IData)((0x3ffffffffULL & 
                                   ((1U == (3U & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   << 1U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                     >> 0x1fU))))
                                     ? (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                              >> 0x10U)))
                                     : (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                              >> 0x12U)))))) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((0x3ffffffffULL 
                                                     & ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                              << 1U) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                                >> 0x1fU))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                             << 0x10U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U])) 
                                                               >> 0x10U)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                             << 0xeU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                               >> 0x12U))))) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U] 
        = ((0xffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U]) 
           | (0xffff0000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       >> 7U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                   >> 0x12U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                   >> 0x14U)))))) 
                             << 0x10U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U] 
        = ((0xfffc0000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U]) 
           | ((0xffffU & ((IData)((0x3ffffffffULL & 
                                   ((1U == (3U & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   << 0x19U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                     >> 7U))))
                                     ? (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                              >> 0x12U)))
                                     : (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                              >> 0x14U)))))) 
                          >> 0x10U)) | (0xffff0000U 
                                        & ((IData)(
                                                   ((0x3ffffffffULL 
                                                     & ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                              << 0x19U) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                >> 7U))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                             << 0xeU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U])) 
                                                               >> 0x12U)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                             << 0xcU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                               >> 0x14U))))) 
                                                    >> 0x20U)) 
                                           << 0x10U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U] 
        = ((0x3ffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U]) 
           | (0xfffc0000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                     << 0x11U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                   >> 0x14U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                   >> 0x16U)))))) 
                             << 0x12U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU] 
        = ((0xfff00000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU]) 
           | ((0x3ffffU & ((IData)((0x3ffffffffULL 
                                    & ((1U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 << 0x11U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0xfU))))
                                        ? (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                 >> 0x14U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                 >> 0x16U)))))) 
                           >> 0xeU)) | (0xfffc0000U 
                                        & ((IData)(
                                                   ((0x3ffffffffULL 
                                                     & ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                              << 0x11U) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                >> 0xfU))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                             << 0xcU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U])) 
                                                               >> 0x14U)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                             << 0xaU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                               >> 0x16U))))) 
                                                    >> 0x20U)) 
                                           << 0x12U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU] 
        = ((0xfffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU]) 
           | (0xfff00000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                     << 9U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       >> 0x17U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                   >> 0x16U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                   >> 0x18U)))))) 
                             << 0x14U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU] 
        = ((0xffc00000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU]) 
           | ((0xfffffU & ((IData)((0x3ffffffffULL 
                                    & ((1U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                 << 9U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x17U))))
                                        ? (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                 >> 0x16U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                 >> 0x18U)))))) 
                           >> 0xcU)) | (0xfff00000U 
                                        & ((IData)(
                                                   ((0x3ffffffffULL 
                                                     & ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                              << 9U) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                >> 0x17U))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                             << 0xaU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU])) 
                                                               >> 0x16U)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                               >> 0x18U))))) 
                                                    >> 0x20U)) 
                                           << 0x14U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU] 
        = ((0x3fffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU]) 
           | (0xffc00000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                     << 1U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                       >> 0x1fU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                   >> 0x18U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                   >> 0x1aU)))))) 
                             << 0x16U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU] 
        = ((0xff000000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU]) 
           | ((0x3fffffU & ((IData)((0x3ffffffffULL 
                                     & ((1U == (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    << 1U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x1fU))))
                                         ? (((QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                  >> 0x18U)))
                                         : (((QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                  >> 0x1aU)))))) 
                            >> 0xaU)) | (0xffc00000U 
                                         & ((IData)(
                                                    ((0x3ffffffffULL 
                                                      & ((1U 
                                                          == 
                                                          (3U 
                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                               << 1U) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                                 >> 0x1fU))))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                              << 8U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU])) 
                                                                >> 0x18U)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                              << 6U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                                >> 0x1aU))))) 
                                                     >> 0x20U)) 
                                            << 0x16U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU] 
        = ((0xffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU]) 
           | (0xff000000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       >> 7U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                   >> 0x1aU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                   >> 0x1cU)))))) 
                             << 0x18U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU] 
        = ((0xfc000000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU]) 
           | ((0xffffffU & ((IData)((0x3ffffffffULL 
                                     & ((1U == (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                    << 0x19U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      >> 7U))))
                                         ? (((QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                  >> 0x1aU)))
                                         : (((QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                  >> 0x1cU)))))) 
                            >> 8U)) | (0xff000000U 
                                       & ((IData)((
                                                   (0x3ffffffffULL 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                             << 0x19U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                               >> 7U))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                         << 0x26U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                            << 6U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU])) 
                                                              >> 0x1aU)))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                            << 4U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                              >> 0x1cU))))) 
                                                   >> 0x20U)) 
                                          << 0x18U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU] 
        = ((0x3ffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU]) 
           | (0xfc000000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                     << 0x11U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                   >> 0x1cU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                   >> 0x1eU)))))) 
                             << 0x1aU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU] 
        = ((0xf0000000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU]) 
           | ((0x3ffffffU & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                     << 0x11U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                   >> 0x1cU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                   >> 0x1eU)))))) 
                             >> 6U)) | (0xfc000000U 
                                        & ((IData)(
                                                   ((0x3ffffffffULL 
                                                     & ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                              << 0x11U) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                >> 0xfU))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                             << 4U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU])) 
                                                               >> 0x1cU)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                             << 2U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                               >> 0x1eU))))) 
                                                    >> 0x20U)) 
                                           << 0x1aU))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU] 
        = ((0xfffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU]) 
           | (0xf0000000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                     << 9U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       >> 0x17U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                   >> 0x1eU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])))))) 
                             << 0x1cU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xfU] 
        = ((0xc0000000U & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xfU]) 
           | ((0xfffffffU & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                     << 9U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       >> 0x17U))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                   >> 0x1eU)))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])))))) 
                             >> 4U)) | (0xf0000000U 
                                        & ((IData)(
                                                   ((0x3ffffffffULL 
                                                     & ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                              << 9U) 
                                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                                >> 0x17U))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU])) 
                                                             << 2U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU])) 
                                                               >> 0x1eU)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U]))))) 
                                                    >> 0x20U)) 
                                           << 0x1cU))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xfU] 
        = ((0x3fffffffU & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xfU]) 
           | (0xc0000000U & ((IData)((0x3ffffffffULL 
                                      & ((1U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                     << 1U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                       >> 0x1fU))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])))
                                          : (((QData)((IData)(
                                                              vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x53U])) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                   >> 2U)))))) 
                             << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0x10U] 
        = ((0x3fffffffU & ((IData)((0x3ffffffffULL 
                                    & ((1U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                 << 1U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1fU))))
                                        ? (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])))
                                        : (((QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x53U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                 >> 2U)))))) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & ((1U 
                                                     == 
                                                     (3U 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                          << 1U) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                            >> 0x1fU))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x53U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U])) 
                                                           >> 2U))))) 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | ((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                         << 7U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x19U)))) 
                       >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                   << 0x1aU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x41U] 
                                                >> 6U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                    << 0x18U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x42U] 
                                                 >> 8U))) 
              << 1U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                    << 0x16U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x43U] 
                                                 >> 0xaU))) 
              << 2U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                    << 0x14U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x44U] 
                                                 >> 0xcU))) 
              << 3U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                    << 0x12U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x45U] 
                                                 >> 0xeU))) 
              << 4U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                    << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x46U] 
                                                 >> 0x10U))) 
              << 5U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                    << 0xeU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x47U] 
                                                >> 0x12U))) 
              << 6U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                    << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x48U] 
                                                >> 0x14U))) 
              << 7U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                    << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x49U] 
                                                >> 0x16U))) 
              << 8U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                    << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4aU] 
                                              >> 0x18U))) 
              << 9U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                    << 6U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4bU] 
                                              >> 0x1aU))) 
              << 0xaU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                    << 4U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4cU] 
                                              >> 0x1cU))) 
              << 0xbU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4eU] 
                                    << 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4dU] 
                                              >> 0x1eU))) 
              << 0xcU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x4fU]) 
              << 0xdU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                    << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x50U] 
                                                 >> 2U))) 
              << 0xeU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) < ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x52U] 
                                    << 0x1cU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x51U] 
                                                 >> 4U))) 
              << 0xfU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | ((((0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                         ? 1U : 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                        >> 6U)) | (
                                                   (1U 
                                                    == 
                                                    ((0x1000000U 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                      ? 1U
                                                      : 2U)) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                      >> 5U))) 
              | ((2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                          ? 1U : 2U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                         >> 4U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x7fffeU & (((0U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) << 1U) 
                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                               >> 0xdU))) | (0xffffeU 
                                             & (((1U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U)) 
                                                 << 1U) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0xcU)))) 
              | (0x1ffffeU & (((2U == ((0x1000000U 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                        ? 1U : 2U)) 
                               << 1U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                         >> 0xbU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0xffcU & (((0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                    ? 1U : 2U)) << 2U) 
                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                             >> 0x14U))) | (0x1ffcU 
                                            & (((1U 
                                                 == 
                                                 ((0x1000000U 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                   ? 1U
                                                   : 2U)) 
                                                << 2U) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x13U)))) 
              | (0x3ffcU & (((2U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) << 2U) 
                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                               >> 0x12U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x18U & (((0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                   ? 1U : 2U)) << 3U) 
                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                            >> 0x1bU))) | (0x38U & 
                                           (((1U == 
                                              ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                             << 3U) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0x1aU)))) 
              | (0x78U & (((2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                    ? 1U : 2U)) << 3U) 
                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                             >> 0x19U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x3ffffff0U & (((0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)) 
                                << 4U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                          >> 2U))) 
               | (0x7ffffff0U & (((1U == ((0x1000000U 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                           ? 1U : 2U)) 
                                  << 4U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 1U)))) 
              | (0xfffffff0U & (((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 << 4U) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U]))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x7fffe0U & (((0U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              << 5U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 9U))) | 
               (0xffffe0U & (((1U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              << 5U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 8U)))) | 
              (0x1ffffe0U & (((2U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              << 5U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 7U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0xffc0U & (((0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U)) << 6U) 
                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                              >> 0x10U))) | (0x1ffc0U 
                                             & (((1U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U)) 
                                                 << 6U) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0xfU)))) 
              | (0x3ffc0U & (((2U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              << 6U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                        >> 0xeU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x180U & (((0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                    ? 1U : 2U)) << 7U) 
                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                             >> 0x17U))) | (0x380U 
                                            & (((1U 
                                                 == 
                                                 ((0x1000000U 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                   ? 1U
                                                   : 2U)) 
                                                << 7U) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0x16U)))) 
              | (0x780U & (((2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U)) << 7U) 
                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                              >> 0x15U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (0xffffff00U & (((((0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)) 
                                << 8U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 2U)) | 
                              (((1U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)) 
                                << 8U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                          << 3U))) 
                             | (((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 << 8U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           << 4U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x7fffe00U & (((0U == ((0x1000000U 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                        ? 1U : 2U)) 
                               << 9U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         >> 5U))) | 
               (0xffffe00U & (((1U == ((0x1000000U 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                        ? 1U : 2U)) 
                               << 9U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                         >> 4U)))) 
              | (0x1ffffe00U & (((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 << 9U) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 3U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0xffc00U & (((0U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) << 0xaU) 
                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                               >> 0xcU))) | (0x1ffc00U 
                                             & (((1U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U)) 
                                                 << 0xaU) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0xbU)))) 
              | (0x3ffc00U & (((2U == ((0x1000000U 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                        ? 1U : 2U)) 
                               << 0xaU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                           >> 0xaU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x1800U & (((0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U)) << 0xbU) 
                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                              >> 0x13U))) | (0x3800U 
                                             & (((1U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U)) 
                                                 << 0xbU) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0x12U)))) 
              | (0x7800U & (((2U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) << 0xbU) 
                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                               >> 0x11U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (0xfffff000U & (((((0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)) 
                                << 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            << 6U)) 
                              | (((1U == ((0x1000000U 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                           ? 1U : 2U)) 
                                  << 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                              << 7U))) 
                             | (((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 << 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 8U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x7fffe000U & (((0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)) 
                                << 0xdU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 1U))) 
               | (0xffffe000U & (((1U == ((0x1000000U 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                           ? 1U : 2U)) 
                                  << 0xdU) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U]))) 
              | (0xffffe000U & (((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 << 0xdU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             << 1U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0xffc000U & (((0U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              << 0xeU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 8U))) 
               | (0x1ffc000U & (((1U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 << 0xeU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                             >> 7U)))) 
              | (0x3ffc000U & (((2U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)) 
                                << 0xeU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                            >> 6U)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)) 
           | (((0x18000U & (((0U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) << 0xfU) 
                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                               >> 0xfU))) | (0x38000U 
                                             & (((1U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U)) 
                                                 << 0xfU) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0xeU)))) 
              | (0x78000U & (((2U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              << 0xfU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                          >> 0xdU)))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | ((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                         << 7U) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x19U)))) 
                       >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U] 
                                   << 0x1eU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0U] 
                                                >> 2U))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U] 
                                    << 0x1cU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U] 
                                                 >> 4U))) 
              << 1U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U] 
                                    << 0x1aU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U] 
                                                 >> 6U))) 
              << 2U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U] 
                                    << 0x18U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U] 
                                                 >> 8U))) 
              << 3U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U] 
                                    << 0x16U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U] 
                                                 >> 0xaU))) 
              << 4U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U] 
                                    << 0x14U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U] 
                                                 >> 0xcU))) 
              << 5U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U] 
                                    << 0x12U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U] 
                                                 >> 0xeU))) 
              << 6U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U] 
                                    << 0x10U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U] 
                                                 >> 0x10U))) 
              << 7U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U] 
                                    << 0xeU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U] 
                                                >> 0x12U))) 
              << 8U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU] 
                                    << 0xcU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U] 
                                                >> 0x14U))) 
              << 9U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU] 
                                    << 0xaU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU] 
                                                >> 0x16U))) 
              << 0xaU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU] 
                                    << 8U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU] 
                                              >> 0x18U))) 
              << 0xbU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU] 
                                    << 6U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU] 
                                              >> 0x1aU))) 
              << 0xcU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU] 
                                    << 4U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU] 
                                              >> 0x1cU))) 
              << 0xdU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > ((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xfU] 
                                    << 2U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU] 
                                              >> 0x1eU))) 
              << 0xeU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) > this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0x10U]) 
              << 0xfU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | (((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                          << 7U) | 
                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U)))) 
                        >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U]) 
              == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U] 
                    << 0x1eU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0U] 
                                 >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0U])));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U] 
                     << 0x1cU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[1U] 
                                  >> 4U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[1U])) 
              << 1U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U] 
                     << 0x1aU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[2U] 
                                  >> 6U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[2U])) 
              << 2U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U] 
                     << 0x18U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[3U] 
                                  >> 8U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[3U])) 
              << 3U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U] 
                     << 0x16U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[4U] 
                                  >> 0xaU)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[4U])) 
              << 4U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U] 
                     << 0x14U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[5U] 
                                  >> 0xcU)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[5U])) 
              << 5U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U] 
                     << 0x12U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[6U] 
                                  >> 0xeU)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[6U])) 
              << 6U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U] 
                     << 0x10U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[7U] 
                                  >> 0x10U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[7U])) 
              << 7U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U] 
                     << 0xeU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[8U] 
                                 >> 0x12U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[8U])) 
              << 8U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU] 
                     << 0xcU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[9U] 
                                 >> 0x14U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[9U])) 
              << 9U));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU] 
                     << 0xaU) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xaU] 
                                 >> 0x16U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xaU])) 
              << 0xaU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU] 
                     << 8U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xbU] 
                               >> 0x18U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xbU])) 
              << 0xbU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU] 
                     << 6U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xcU] 
                               >> 0x1aU)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xcU])) 
              << 0xcU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU] 
                     << 4U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xdU] 
                               >> 0x1cU)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xdU])) 
              << 0xdU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU]) 
               == (((this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xfU] 
                     << 2U) | (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0xeU] 
                               >> 0x1eU)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xeU])) 
              << 0xeU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)) 
           | ((((IData)(((QData)((IData)(((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                           << 7U) | 
                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0x19U)))) 
                         >> 2U)) & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU]) 
               == (this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[0x10U] 
                   & this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[0xfU])) 
              << 0xfU));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (1U & ((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                               >> 4U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                          >> 5U))) ? 
                    ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                      ? ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                          ? ((0U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) | 
                             ((2U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) 
                              & (3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                 >> 0x10U))))))
                          : (0U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U))) : 
                     ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                       ? ((2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                   ? 1U : 2U)) | (1U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U)))
                       : ((2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                   ? 1U : 2U)) | ((1U 
                                                   == 
                                                   ((0x1000000U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                     ? 1U
                                                     : 2U)) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                            >> 0x10U))))))))
                     : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                 >> 4U) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 5U) 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 6U))) 
                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                  >> 0xbU))) ? (2U 
                                                == 
                                                ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U))
                         : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                             >> 0x10U))))
                             ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                 >> 0xbU) & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check))
                             : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                    >> 0xbU)) & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)))))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (2U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                >> 0xcU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                             >> 0xdU)))
                      ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                          ? ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                              ? ((0U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    & (3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))))
                              : (0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)))
                          : ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                              ? ((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | (1U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                              : ((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | ((1U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    & (3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))))))
                      : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                  >> 0xcU) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                               >> 0xdU) 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                 >> 0xeU))) 
                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                   >> 0x13U))) ? (2U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U))
                          : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U))))
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                  >> 0x13U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                               >> 1U))
                              : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                     >> 0x13U)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 1U))))) 
                    << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (4U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                >> 0x14U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x15U)))
                      ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                          ? ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                              ? ((0U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    & (3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))))
                              : (0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)))
                          : ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                              ? ((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | (1U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                              : ((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | ((1U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    & (3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))))))
                      : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                  >> 0x14U) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                >> 0x15U) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x16U))) 
                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                   >> 0x1bU))) ? (2U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U))
                          : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U))))
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                  >> 0x1bU) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                               >> 2U))
                              : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                     >> 0x1bU)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 2U))))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (8U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                >> 0x1cU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                              >> 0x1dU)))
                      ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                          ? ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                              ? ((0U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    & (3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))))
                              : (0U == ((0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                         ? 1U : 2U)))
                          : ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                              ? ((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | (1U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                              : ((2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U)) 
                                 | ((1U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    & (3U == (3U & 
                                              ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))))))
                      : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                  >> 0x1cU) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                >> 0x1dU) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                  >> 0x1eU))) 
                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                   >> 3U))) ? (2U == 
                                               ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U))
                          : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U))))
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                  >> 3U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                            >> 3U))
                              : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 3U)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                >> 3U))))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x10U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                   >> 4U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                              >> 5U)))
                         ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((2U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))
                                 : (0U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                             : ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | (1U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)))
                                 : ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))))
                         : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 4U) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                >> 5U) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 6U))) 
                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                      >> 0xbU))) ? 
                            (2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U)) : 
                            ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U))))
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                  >> 0xbU) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                              >> 4U))
                              : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 0xbU)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 4U))))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x20U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                   >> 0xcU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                >> 0xdU)))
                         ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((2U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))
                                 : (0U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                             : ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | (1U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)))
                                 : ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))))
                         : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 0xcU) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                  >> 0xdU) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                    >> 0xeU))) 
                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                      >> 0x13U))) ? 
                            (2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U)) : 
                            ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U))))
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                  >> 0x13U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                               >> 5U))
                              : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 0x13U)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 5U))))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x40U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                   >> 0x14U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x15U)))
                         ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((2U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))
                                 : (0U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                             : ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | (1U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)))
                                 : ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))))
                         : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 0x14U) & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x15U) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                     >> 0x16U))) 
                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                      >> 0x1bU))) ? 
                            (2U == ((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                     ? 1U : 2U)) : 
                            ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                              >> 0x10U))))
                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                  >> 0x1bU) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                               >> 6U))
                              : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 0x1bU)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 6U))))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x80U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                   >> 0x1cU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                 >> 0x1dU)))
                         ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                             ? ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((2U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))
                                 : (0U == ((0x1000000U 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                            ? 1U : 2U)))
                             : ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                                 ? ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | (1U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)))
                                 : ((2U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)) 
                                    | ((1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)) 
                                       & (3U == (3U 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                       >> 0x10U))))))))
                         : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                     >> 0x1cU) & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                   >> 0x1dU) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                                     >> 0x1eU))) 
                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 3U))) ? (2U 
                                                  == 
                                                  ((0x1000000U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                    ? 1U
                                                    : 2U))
                             : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                 >> 0x10U))))
                                 ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                     >> 3U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                               >> 7U))
                                 : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                        >> 3U)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 7U))))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x100U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    >> 4U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 5U)))
                          ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((2U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))
                                  : (0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)))
                              : ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | (1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)))
                                  : ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))))
                          : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 4U) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 5U) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 6U))) 
                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0xbU))) ? 
                             (2U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) : 
                             ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                               >> 0x10U))))
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                   >> 0xbU) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                               >> 8U))
                               : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0xbU)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 8U))))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x200U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    >> 0xcU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                 >> 0xdU)))
                          ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((2U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))
                                  : (0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)))
                              : ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | (1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)))
                                  : ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))))
                          : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0xcU) & ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                   >> 0xdU) 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                     >> 0xeU))) 
                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0x13U))) ? 
                             (2U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) : 
                             ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                               >> 0x10U))))
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                   >> 0x13U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                >> 9U))
                               : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0x13U)) & 
                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                   >> 9U))))) << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x400U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    >> 0x14U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x15U)))
                          ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((2U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))
                                  : (0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)))
                              : ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | (1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)))
                                  : ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))))
                          : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0x14U) & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    >> 0x15U) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x16U))) 
                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                       >> 0x1bU))) ? 
                             (2U == ((0x1000000U & 
                                      vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                      ? 1U : 2U)) : 
                             ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                               >> 0x10U))))
                               ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                   >> 0x1bU) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                >> 0xaU))
                               : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0x1bU)) & 
                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                   >> 0xaU))))) << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x800U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                    >> 0x1cU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x1dU)))
                          ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                              ? ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((2U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))
                                  : (0U == ((0x1000000U 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                             ? 1U : 2U)))
                              : ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                                  ? ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | (1U == ((0x1000000U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                ? 1U
                                                : 2U)))
                                  : ((2U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)) 
                                     | ((1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)) 
                                        & (3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))))))
                          : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                      >> 0x1cU) & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                      >> 0x1eU))) 
                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 3U))) ? (2U 
                                                   == 
                                                   ((0x1000000U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                     ? 1U
                                                     : 2U))
                              : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                  >> 0x10U))))
                                  ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                      >> 3U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                >> 0xbU))
                                  : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                         >> 3U)) & 
                                     ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                      >> 0xbU))))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x1000U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                     >> 4U)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                >> 5U)))
                           ? ((0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((0U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((2U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))
                                   : (0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)))
                               : ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | (1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)))
                                   : ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((1U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))))
                           : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 4U) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 5U) 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    >> 6U))) 
                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0xbU))) ? 
                              (2U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) : 
                              ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                >> 0x10U))))
                                ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                    >> 0xbU) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                >> 0xcU))
                                : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0xbU)) & 
                                   ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                    >> 0xcU))))) << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x2000U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                     >> 0xcU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 0xdU)))
                           ? ((0x80000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((0U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((2U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))
                                   : (0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)))
                               : ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | (1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)))
                                   : ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((1U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))))
                           : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0xcU) & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                    >> 0xdU) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                      >> 0xeU))) 
                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0x13U)))
                               ? (2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U))
                               : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                   ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0x13U) & 
                                      ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                       >> 0xdU)) : 
                                  ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0x13U)) & 
                                   ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                    >> 0xdU))))) << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x4000U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                     >> 0x14U)) & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x15U)))
                           ? ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((0U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((2U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))
                                   : (0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)))
                               : ((0x400000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | (1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)))
                                   : ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((1U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))))
                           : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0x14U) & 
                                      ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0x15U) & 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0x16U))) 
                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0x1bU)))
                               ? (2U == ((0x1000000U 
                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                          ? 1U : 2U))
                               : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                   ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0x1bU) & 
                                      ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                       >> 0xeU)) : 
                                  ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0x1bU)) & 
                                   ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                    >> 0xeU))))) << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = (0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check)) 
           | (0x8000U & (((1U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                     >> 0x1cU)) & (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1dU)))
                           ? ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U])
                               ? ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((0U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((2U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))
                                   : (0U == ((0x1000000U 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                              ? 1U : 2U)))
                               : ((0x40000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                                   ? ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | (1U == ((0x1000000U 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                 ? 1U
                                                 : 2U)))
                                   : ((2U == ((0x1000000U 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                               ? 1U
                                               : 2U)) 
                                      | ((1U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U)) 
                                         & (3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))))))
                           : ((1U & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                       >> 0x1cU) & 
                                      ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0x1dU) & 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                        >> 0x1eU))) 
                                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                        >> 3U))) ? 
                              (2U == ((0x1000000U & 
                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                       ? 1U : 2U)) : 
                              ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                              << 0x10U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                >> 0x10U))))
                                ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                    >> 3U) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                              >> 0xfU))
                                : ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                       >> 3U)) & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 0xfU))))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (1U & ((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                     ? (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq)
                     : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                         >> 7U) & (((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                    | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                   & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt))))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (2U & (((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                      ? ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                          ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                             >> 1U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                       >> 1U)) : ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0xfU) 
                                                  & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                                       | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                                      & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                                     >> 1U))) 
                    << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (4U & (((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                      ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                          ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                             >> 2U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                       >> 2U)) : ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x17U) 
                                                  & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                                       | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                                      & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                                     >> 2U))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (8U & (((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                      ? ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U])
                          ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                             >> 3U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                       >> 3U)) : ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                                   >> 0x1fU) 
                                                  & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                                       | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                                      & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                                     >> 3U))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x10U & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                         ? ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                >> 4U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                          >> 4U)) : 
                        ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                          >> 7U) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                      | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                     & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                    >> 4U))) << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x20U & (((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                         ? ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                >> 5U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                          >> 5U)) : 
                        ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                          >> 0xfU) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                        | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                       & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                      >> 5U))) << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x40U & (((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                         ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                >> 6U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                          >> 6U)) : 
                        ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                          >> 0x17U) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                         | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                        & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                       >> 6U))) << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x80U & (((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                         ? ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U])
                             ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                >> 7U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                          >> 7U)) : 
                        ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                          >> 0x1fU) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                         | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                        & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                       >> 7U))) << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x100U & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                          ? ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                 >> 8U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                           >> 8U)) : 
                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                           >> 7U) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                       | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                      & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                     >> 8U))) << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x200U & (((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                          ? ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                 >> 9U) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                           >> 9U)) : 
                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                           >> 0xfU) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                         | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                        & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                       >> 9U))) << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x400U & (((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                          ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                 >> 0xaU) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                             >> 0xaU))
                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                              >> 0x17U) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                             | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                            & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                           >> 0xaU))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x800U & (((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                          ? ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U])
                              ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                 >> 0xbU) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                             >> 0xbU))
                          : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                              >> 0x1fU) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                             | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                            & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                           >> 0xbU))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x1000U & (((0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                           ? ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                  >> 0xcU) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                              >> 0xcU))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                               >> 7U) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                           | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                          & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                         >> 0xcU))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x2000U & (((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                           ? ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                  >> 0xdU) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                              >> 0xdU))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                               >> 0xfU) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                             | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                            & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                           >> 0xdU))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x4000U & (((0x1000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                           ? ((0x800000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                  >> 0xeU) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                              >> 0xeU))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                               >> 0x17U) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                              | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                             & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                            >> 0xeU))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = (0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all)) 
           | (0x8000U & (((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U])
                           ? ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U])
                               ? ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                  >> 0xfU) : ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                              >> 0xfU))
                           : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                               >> 0x1fU) & ((((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq) 
                                              | (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt)) 
                                             & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt)) 
                                            >> 0xfU))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfffeU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (1U & ((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                     ? (~ (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check))
                     : ((3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                       << 0x10U) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                       >> 0x10U))))
                         ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                             >> 0xbU) & (~ (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check)))
                         : (~ (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check))))));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfffdU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (2U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                      ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                            >> 1U)) : ((3U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                        ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 0x13U) 
                                           & (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 1U)))
                                        : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                              >> 1U)))) 
                    << 1U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfffbU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (4U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                      ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                            >> 2U)) : ((3U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                        ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x85U] 
                                            >> 0x1bU) 
                                           & (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 2U)))
                                        : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                              >> 2U)))) 
                    << 2U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfff7U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (8U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                      ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                            >> 3U)) : ((3U == (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                        ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                            >> 3U) 
                                           & (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 3U)))
                                        : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                              >> 3U)))) 
                    << 3U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xffefU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x10U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                         ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                               >> 4U)) : ((3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))
                                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0xbU) 
                                              & (~ 
                                                 ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 4U)))
                                           : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 4U)))) 
                       << 4U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xffdfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x20U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                         ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                               >> 5U)) : ((3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))
                                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x13U) 
                                              & (~ 
                                                 ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 5U)))
                                           : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 5U)))) 
                       << 5U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xffbfU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x40U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                         ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                               >> 6U)) : ((3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))
                                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x86U] 
                                               >> 0x1bU) 
                                              & (~ 
                                                 ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 6U)))
                                           : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 6U)))) 
                       << 6U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xff7fU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x80U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                         ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                               >> 7U)) : ((3U == (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                        >> 0x10U))))
                                           ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                               >> 3U) 
                                              & (~ 
                                                 ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 7U)))
                                           : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                 >> 7U)))) 
                       << 7U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfeffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x100U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                          ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                >> 8U)) : ((3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))
                                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                >> 0xbU) 
                                               & (~ 
                                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 8U)))
                                            : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 8U)))) 
                        << 8U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfdffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x200U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                          ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                >> 9U)) : ((3U == (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                         >> 0x10U))))
                                            ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                >> 0x13U) 
                                               & (~ 
                                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 9U)))
                                            : (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 9U)))) 
                        << 9U)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xfbffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x400U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                          ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                >> 0xaU)) : ((3U == 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x87U] 
                                                  >> 0x1bU) 
                                                 & (~ 
                                                    ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                     >> 0xaU)))
                                              : (~ 
                                                 ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 0xaU)))) 
                        << 0xaU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xf7ffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x800U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                          ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                >> 0xbU)) : ((3U == 
                                              (3U & 
                                               ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                   >> 0x10U))))
                                              ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                     >> 0xbU)))
                                              : (~ 
                                                 ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                  >> 0xbU)))) 
                        << 0xbU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xefffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x1000U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                           ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                 >> 0xcU)) : ((3U == 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                      >> 0x10U))))
                                               ? ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0xbU) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                      >> 0xcU)))
                                               : (~ 
                                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 0xcU)))) 
                         << 0xcU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xdfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x2000U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                           ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                 >> 0xdU)) : ((3U == 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                      >> 0x10U))))
                                               ? ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                      >> 0xdU)))
                                               : (~ 
                                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 0xdU)))) 
                         << 0xdU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0xbfffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x4000U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                           ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                 >> 0xeU)) : ((3U == 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                      >> 0x10U))))
                                               ? ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x88U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                      >> 0xeU)))
                                               : (~ 
                                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 0xeU)))) 
                         << 0xeU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all 
        = ((0x7fffU & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all)) 
           | (0x8000U & (((0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U])
                           ? (~ ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check) 
                                 >> 0xfU)) : ((3U == 
                                               (3U 
                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                                      >> 0x10U))))
                                               ? ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x89U] 
                                                   >> 3U) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                      >> 0xfU)))
                                               : (~ 
                                                  ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check) 
                                                   >> 0xfU)))) 
                         << 0xfU)));
    this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
        = (1U & ((3U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                << 0x10U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                                             >> 0x10U)))) 
                 | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                     >> 5U) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_pmp[0x40U] 
                                >> 4U) & (0U == ((0x1000000U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U])
                                                  ? 1U
                                                  : 2U))))));
    if ((0x8000U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 0xfU));
    }
    if ((0x4000U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 0xeU));
    }
    if ((0x2000U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 0xdU));
    }
    if ((0x1000U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 0xcU));
    }
    if ((0x800U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 0xbU));
    }
    if ((0x400U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 0xaU));
    }
    if ((0x200U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 9U));
    }
    if ((0x100U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 8U));
    }
    if ((0x80U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 7U));
    }
    if ((0x40U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 6U));
    }
    if ((0x20U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 5U));
    }
    if ((0x10U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 4U));
    }
    if ((8U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 3U));
    }
    if ((4U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 2U));
    }
    if ((2U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & ((IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all) 
                     >> 1U));
    }
    if ((1U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all))) {
        this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault 
            = (1U & (IData)(this->__PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all));
    }
}
