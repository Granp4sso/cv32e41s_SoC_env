// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_xpmp__pi21.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

void VuCup_top_cv32e41s_xpmp__pi21::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_xpmp__pi21::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4772, csr_pmp_i);
    priv_lvl_i = VL_RAND_RESET_I(2);
    pmp_req_addr_i = VL_RAND_RESET_Q(34);
    pmp_req_debug_region_i = VL_RAND_RESET_I(1);
    pmp_req_type_i = VL_RAND_RESET_I(2);
    pmr_reloc_addr_o = VL_RAND_RESET_Q(34);
    pmp_req_err_o = VL_RAND_RESET_I(1);
    pmp_req_i = VL_RAND_RESET_I(1);
    pmp_busy_o = VL_RAND_RESET_I(1);
    pmp_imp_req_o = VL_RAND_RESET_I(1);
    pmp_imp_addr_o = VL_RAND_RESET_I(32);
    pmp_imp_rvalid_i = VL_RAND_RESET_I(1);
    pmp_imp_rdata_b0_i = VL_RAND_RESET_I(32);
    pmp_imp_rdata_b1_i = VL_RAND_RESET_I(32);
    __PVT__core_req = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state = 0;
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w = VL_RAND_RESET_I(13);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w = VL_RAND_RESET_I(12);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w = VL_RAND_RESET_I(5);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w = VL_RAND_RESET_I(13);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w = VL_RAND_RESET_I(12);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w = VL_RAND_RESET_I(12);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w = VL_RAND_RESET_I(6);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w = VL_RAND_RESET_I(6);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r = VL_RAND_RESET_I(12);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__cfg_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__regsize_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__suffix_w = VL_RAND_RESET_I(32);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__perm_w = VL_RAND_RESET_I(3);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__overflow_exception_w = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__access_exception_w = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(544, __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr);
    VL_RAND_RESET_W(512, __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all = VL_RAND_RESET_I(16);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault = VL_RAND_RESET_I(1);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__reloc_offset_lin = VL_RAND_RESET_I(31);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__reloc_offset_pot = VL_RAND_RESET_I(5);
    __PVT__pmp_trie__DOT__locked_pmp_i__DOT__reloc_offset_sub = VL_RAND_RESET_I(3);
    __Vdly__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state = 0;
}
