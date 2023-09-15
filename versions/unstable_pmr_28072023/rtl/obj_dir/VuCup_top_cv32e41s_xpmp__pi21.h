// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VuCup_top.h for the primary calling header

#ifndef _VUCUP_TOP_CV32E41S_XPMP__PI21_H_
#define _VUCUP_TOP_CV32E41S_XPMP__PI21_H_  // guard

#include "verilated.h"
#include "VuCup_top__Dpi.h"

//==========

class VuCup_top__Syms;
class VuCup_top_VerilatedVcd;


//----------

VL_MODULE(VuCup_top_cv32e41s_xpmp__pi21) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(priv_lvl_i,1,0);
    VL_IN8(pmp_req_debug_region_i,0,0);
    VL_IN8(pmp_req_type_i,1,0);
    VL_OUT8(pmp_req_err_o,0,0);
    VL_IN8(pmp_req_i,0,0);
    VL_OUT8(pmp_busy_o,0,0);
    VL_OUT8(pmp_imp_req_o,0,0);
    VL_IN8(pmp_imp_rvalid_i,0,0);
    VL_OUT(pmp_imp_addr_o,31,0);
    VL_IN(pmp_imp_rdata_b0_i,31,0);
    VL_IN(pmp_imp_rdata_b1_i,31,0);
    VL_INW(csr_pmp_i,4771,0,150);
    VL_IN64(pmp_req_addr_i,33,0);
    VL_OUT64(pmr_reloc_addr_o,33,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__core_req;
    CData/*4:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__gsize_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__limit_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__valid_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_bit_w;
    CData/*5:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_upper_w;
    CData/*5:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_lower_w;
    CData/*2:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__perm_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__overflow_exception_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__access_exception_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_exception_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_exception_w;
    CData/*0:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault;
    CData/*4:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__reloc_offset_pot;
    CData/*2:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__reloc_offset_sub;
    SData/*12:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__imp_addr_w;
    SData/*11:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__hint_w;
    SData/*12:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__nptr_w;
    SData/*11:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_w;
    SData/*11:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__envid_w;
    SData/*11:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_len_r;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_gt;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_lt;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_eq;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_match_all;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_basic_perm_check;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_mml_perm_check;
    SData/*15:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__access_fault_all;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__ctrl_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__guard_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__prefix_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__entry_guard_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__req_guard_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__cfg_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__regsize_w;
    IData/*31:0*/ __PVT__pmp_trie__DOT__pmp_walker_i__DOT__suffix_w;
    WData/*511:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_addr_mask[16];
    IData/*30:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__reloc_offset_lin;
    WData/*543:0*/ __PVT__pmp_trie__DOT__locked_pmp_i__DOT__region_start_addr[17];
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__pmp_trie__DOT__pmp_walker_i__DOT__fsm_state;
    
    // INTERNAL VARIABLES
  private:
    VuCup_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VuCup_top_cv32e41s_xpmp__pi21);  ///< Copying not allowed
  public:
    VuCup_top_cv32e41s_xpmp__pi21(const char* name = "TOP");
    ~VuCup_top_cv32e41s_xpmp__pi21();
    
    // INTERNAL METHODS
    void __Vconfigure(VuCup_top__Syms* symsp, bool first);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__14(VuCup_top__Syms* __restrict vlSymsp);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__9(VuCup_top__Syms* __restrict vlSymsp);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__10(VuCup_top__Syms* __restrict vlSymsp);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__13(VuCup_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__11(VuCup_top__Syms* __restrict vlSymsp);
    void _multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__7(VuCup_top__Syms* __restrict vlSymsp);
    void _multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__12(VuCup_top__Syms* __restrict vlSymsp);
    void _multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__8(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__5(VuCup_top__Syms* __restrict vlSymsp);
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__1(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__3(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__2(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__4(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
