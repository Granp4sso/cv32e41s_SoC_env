// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VuCup_top.h for the primary calling header

#ifndef _VUCUP_TOP_CV32E41S_CSR__PI17_H_
#define _VUCUP_TOP_CV32E41S_CSR__PI17_H_  // guard

#include "verilated.h"
#include "VuCup_top__Dpi.h"

//==========

class VuCup_top__Syms;
class VuCup_top_VerilatedVcd;


//----------

VL_MODULE(VuCup_top_cv32e41s_csr__pi17) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(scan_cg_en_i,0,0);
    VL_IN8(wr_en_i,0,0);
    VL_OUT8(__PVT__rd_error_o,0,0);
    VL_IN(wr_data_i,31,0);
    VL_OUT(rd_data_o,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__rdata_q;
    IData/*31:0*/ __PVT__rdata_blk;
    
    // INTERNAL VARIABLES
  private:
    VuCup_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VuCup_top_cv32e41s_csr__pi17);  ///< Copying not allowed
  public:
    VuCup_top_cv32e41s_csr__pi17(const char* name = "TOP");
    ~VuCup_top_cv32e41s_csr__pi17();
    
    // INTERNAL METHODS
    void __Vconfigure(VuCup_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__17(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__27(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__28(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__29(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__30(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__31(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__32(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__18(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__19(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__20(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__21(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__22(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__23(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__24(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__25(VuCup_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__26(VuCup_top__Syms* __restrict vlSymsp);
    void _settle__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__csr_xpmp__DOT__pmraddroff_csr_i__1(VuCup_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
