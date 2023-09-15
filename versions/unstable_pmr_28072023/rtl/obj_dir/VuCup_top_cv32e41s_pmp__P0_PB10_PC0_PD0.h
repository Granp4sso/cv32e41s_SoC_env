// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VuCup_top.h for the primary calling header

#ifndef _VUCUP_TOP_CV32E41S_PMP__P0_PB10_PC0_PD0_H_
#define _VUCUP_TOP_CV32E41S_PMP__P0_PB10_PC0_PD0_H_  // guard

#include "verilated.h"
#include "VuCup_top__Dpi.h"

//==========

class VuCup_top__Syms;
class VuCup_top_VerilatedVcd;


//----------

VL_MODULE(VuCup_top_cv32e41s_pmp__P0_PB10_PC0_PD0) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(priv_lvl_i,1,0);
    VL_IN8(pmp_req_debug_region_i,0,0);
    VL_IN8(pmp_req_type_i,1,0);
    VL_OUT8(pmp_req_err_o,0,0);
    VL_INW(csr_pmp_i,4773,0,150);
    VL_IN64(pmp_req_addr_i,33,0);
    VL_OUT64(pmr_reloc_addr_o,33,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__access_fault;
    CData/*4:0*/ __PVT__reloc_offset_pot;
    CData/*2:0*/ __PVT__reloc_offset_sub;
    SData/*15:0*/ __PVT__region_match_gt;
    SData/*15:0*/ __PVT__region_match_lt;
    SData/*15:0*/ __PVT__region_match_eq;
    SData/*15:0*/ __PVT__region_match_all;
    SData/*15:0*/ __PVT__region_basic_perm_check;
    SData/*15:0*/ __PVT__region_mml_perm_check;
    SData/*15:0*/ __PVT__access_fault_all;
    WData/*511:0*/ __PVT__region_addr_mask[16];
    IData/*30:0*/ __PVT__reloc_offset_lin;
    WData/*543:0*/ __PVT__region_start_addr[17];
    
    // INTERNAL VARIABLES
  private:
    VuCup_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VuCup_top_cv32e41s_pmp__P0_PB10_PC0_PD0);  ///< Copying not allowed
  public:
    VuCup_top_cv32e41s_pmp__P0_PB10_PC0_PD0(const char* name = "TOP");
    ~VuCup_top_cv32e41s_pmp__P0_PB10_PC0_PD0();
    
    // INTERNAL METHODS
    void __Vconfigure(VuCup_top__Syms* symsp, bool first);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__4(VuCup_top__Syms* __restrict vlSymsp);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__7(VuCup_top__Syms* __restrict vlSymsp);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__3(VuCup_top__Syms* __restrict vlSymsp);
    void _combo__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__8(VuCup_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__5(VuCup_top__Syms* __restrict vlSymsp);
    void _multiclk__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__6(VuCup_top__Syms* __restrict vlSymsp);
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__1(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__xpmp__DOT__xpmp_i__DOT__pmp_trie__DOT__locked_pmp_i__2(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
