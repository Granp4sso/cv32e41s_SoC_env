// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VuCup_top.h for the primary calling header

#ifndef _VUCUP_TOP___024UNIT_H_
#define _VUCUP_TOP___024UNIT_H_  // guard

#include "verilated.h"
#include "VuCup_top__Dpi.h"

//==========

class VuCup_top__Syms;
class VuCup_top_VerilatedVcd;


//----------

VL_MODULE(VuCup_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VuCup_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VuCup_top___024unit);  ///< Copying not allowed
  public:
    VuCup_top___024unit(const char* name = "TOP");
    ~VuCup_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VuCup_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
