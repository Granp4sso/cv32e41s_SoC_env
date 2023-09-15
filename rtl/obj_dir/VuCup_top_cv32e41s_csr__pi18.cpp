// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_csr__pi18.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__17(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__17\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__18(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__18\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 1U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [1U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__19(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__19\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 2U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [2U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__20(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__20\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 3U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [3U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__21(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__21\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 4U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [4U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__22(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__22\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 5U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [5U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__23(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__23\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 6U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [6U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__24(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__24\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 7U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [7U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__25(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__25\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 8U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [8U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__26(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__26\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 9U)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [9U]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__27(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__27\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xaU)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xaU]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__28(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__28\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xbU)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xbU]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__29(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__29\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xcU)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xcU]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__30(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__30\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xdU)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xdU]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__31(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__31\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xeU)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xeU]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}

VL_INLINE_OPT void VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__32(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__32\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffffeU 
                                       & this->__PVT__rdata_blk) 
                                      | (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffeU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffffdU 
                                       & this->__PVT__rdata_blk) 
                                      | (2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffdU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffffbU 
                                       & this->__PVT__rdata_blk) 
                                      | (4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffffbU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffff7U 
                                       & this->__PVT__rdata_blk) 
                                      | (8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffff7U & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffffefU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffefU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffffdfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffdfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffffbfU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffffbfU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffff7fU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffff7fU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffeffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffeffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffdffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffdffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffffbffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffffbffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffff7ffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffff7ffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffefffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffefffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffdfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffdfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffffbfffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffffbfffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffff7fffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffff7fffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffeffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffeffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffdffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffdffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfffbffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfffbffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfff7ffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000U & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfff7ffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffefffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x100000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffefffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffdfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x200000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffdfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xffbfffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x400000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xffbfffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xff7fffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x800000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xff7fffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfeffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x1000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfeffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfdffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x2000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfdffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xfbffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x4000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xfbffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xf7ffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x8000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xf7ffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xefffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x10000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xefffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xdfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x20000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xdfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0xbfffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x40000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0xbfffffffU & this->__PVT__rdata_blk);
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) {
        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_we 
                           >> 0xfU)))) {
            this->__PVT__rdata_blk = ((0x7fffffffU 
                                       & this->__PVT__rdata_blk) 
                                      | (0x80000000U 
                                         & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__pmr_addroff_n
                                         [0xfU]));
        }
    } else {
        this->__PVT__rdata_blk = (0x7fffffffU & this->__PVT__rdata_blk);
    }
    this->__PVT__rdata_q = ((0xfffffffeU & this->__PVT__rdata_q) 
                            | (1U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffdU & this->__PVT__rdata_q) 
                            | (2U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffffbU & this->__PVT__rdata_q) 
                            | (4U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffff7U & this->__PVT__rdata_q) 
                            | (8U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffefU & this->__PVT__rdata_q) 
                            | (0x10U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffdfU & this->__PVT__rdata_q) 
                            | (0x20U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffffbfU & this->__PVT__rdata_q) 
                            | (0x40U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffff7fU & this->__PVT__rdata_q) 
                            | (0x80U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffeffU & this->__PVT__rdata_q) 
                            | (0x100U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffdffU & this->__PVT__rdata_q) 
                            | (0x200U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffffbffU & this->__PVT__rdata_q) 
                            | (0x400U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffff7ffU & this->__PVT__rdata_q) 
                            | (0x800U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffefffU & this->__PVT__rdata_q) 
                            | (0x1000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffdfffU & this->__PVT__rdata_q) 
                            | (0x2000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffffbfffU & this->__PVT__rdata_q) 
                            | (0x4000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffff7fffU & this->__PVT__rdata_q) 
                            | (0x8000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffeffffU & this->__PVT__rdata_q) 
                            | (0x10000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffdffffU & this->__PVT__rdata_q) 
                            | (0x20000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfffbffffU & this->__PVT__rdata_q) 
                            | (0x40000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfff7ffffU & this->__PVT__rdata_q) 
                            | (0x80000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffefffffU & this->__PVT__rdata_q) 
                            | (0x100000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffdfffffU & this->__PVT__rdata_q) 
                            | (0x200000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xffbfffffU & this->__PVT__rdata_q) 
                            | (0x400000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xff7fffffU & this->__PVT__rdata_q) 
                            | (0x800000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfeffffffU & this->__PVT__rdata_q) 
                            | (0x1000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfdffffffU & this->__PVT__rdata_q) 
                            | (0x2000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xfbffffffU & this->__PVT__rdata_q) 
                            | (0x4000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xf7ffffffU & this->__PVT__rdata_q) 
                            | (0x8000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xefffffffU & this->__PVT__rdata_q) 
                            | (0x10000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xdfffffffU & this->__PVT__rdata_q) 
                            | (0x20000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0xbfffffffU & this->__PVT__rdata_q) 
                            | (0x40000000U & this->__PVT__rdata_blk));
    this->__PVT__rdata_q = ((0x7fffffffU & this->__PVT__rdata_q) 
                            | (0x80000000U & this->__PVT__rdata_blk));
}
