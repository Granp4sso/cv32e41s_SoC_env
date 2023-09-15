// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_csr__pi18.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VuCup_top_cv32e41s_csr__pi18) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VuCup_top_cv32e41s_csr__pi18::__Vconfigure(VuCup_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VuCup_top_cv32e41s_csr__pi18::~VuCup_top_cv32e41s_csr__pi18() {
}

void VuCup_top_cv32e41s_csr__pi18::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__1(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_pmr__DOT__pmraddroff_csr_i__1\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VuCup_top_cv32e41s_csr__pi18::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_csr__pi18::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    scan_cg_en_i = VL_RAND_RESET_I(1);
    wr_data_i = VL_RAND_RESET_I(32);
    wr_en_i = VL_RAND_RESET_I(1);
    rd_data_o = VL_RAND_RESET_I(32);
    __PVT__rd_error_o = VL_RAND_RESET_I(1);
    __PVT__rdata_q = VL_RAND_RESET_I(32);
    __PVT__rdata_blk = VL_RAND_RESET_I(32);
}
