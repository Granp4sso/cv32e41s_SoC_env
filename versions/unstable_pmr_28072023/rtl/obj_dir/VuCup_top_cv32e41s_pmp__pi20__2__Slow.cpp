// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top_cv32e41s_pmp__pi20.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

void VuCup_top_cv32e41s_pmp__pi20::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VuCup_top_cv32e41s_pmp__pi20::_ctor_var_reset\n"); );
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
    VL_RAND_RESET_W(544, __PVT__region_start_addr);
    VL_RAND_RESET_W(512, __PVT__region_addr_mask);
    __PVT__region_match_gt = VL_RAND_RESET_I(16);
    __PVT__region_match_lt = VL_RAND_RESET_I(16);
    __PVT__region_match_eq = VL_RAND_RESET_I(16);
    __PVT__region_match_all = VL_RAND_RESET_I(16);
    __PVT__region_basic_perm_check = VL_RAND_RESET_I(16);
    __PVT__region_mml_perm_check = VL_RAND_RESET_I(16);
    __PVT__access_fault_all = VL_RAND_RESET_I(16);
    __PVT__access_fault = VL_RAND_RESET_I(1);
    __PVT__reloc_offset_lin = VL_RAND_RESET_I(31);
    __PVT__reloc_offset_pot = VL_RAND_RESET_I(5);
    __PVT__reloc_offset_sub = VL_RAND_RESET_I(3);
}
