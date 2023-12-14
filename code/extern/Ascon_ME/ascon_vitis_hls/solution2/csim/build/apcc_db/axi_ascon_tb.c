/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void print( char llvm_cbe_c,  char *llvm_cbe_x, signed long long llvm_cbe_xlen);
void print32char( char *llvm_cbe_x);
void print32uint(signed int *llvm_cbe_x);
void uint32ToByteArray(signed int *,  char *);
void print_part(signed int llvm_cbe_x);
signed int main(void);
signed int axi_ascon();
signed int crypto_aead_encrypt( char *, signed long long *,  char *, signed long long ,  char *, signed long long ,  char *,  char *,  char *);
signed int crypto_aead_decrypt( char *, signed long long *,  char *,  char *, signed long long ,  char *, signed long long ,  char *,  char *);


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str[5] = "%02x";
static  char aesl_internal__OC_str2[5] = "%08x";
static  char aesl_internal_main_OC_npub[16] = { ((unsigned char )4), ((unsigned char )7), ((unsigned char )8), ((unsigned char )9), ((unsigned char )5), ((unsigned char )6), ((unsigned char )4), ((unsigned char )3), ((unsigned char )3), ((unsigned char )2), ((unsigned char )5), ((unsigned char )6), ((unsigned char )9), ((unsigned char )8), ((unsigned char )6), ((unsigned char )4) };
static  char aesl_internal_main_OC_npub_1[4] = { ((unsigned char )4), ((unsigned char )7), ((unsigned char )8), ((unsigned char )9) };
static  char aesl_internal_main_OC_npub_2[4] = { ((unsigned char )5), ((unsigned char )6), ((unsigned char )4), ((unsigned char )3) };
static  char aesl_internal_main_OC_m_4[4] = { ((unsigned char )4), ((unsigned char )3), ((unsigned char )2), ((unsigned char )5) };
static  char aesl_internal__OC_str9[15] = "Plaintext m \n ";
static  char aesl_internal_str6[29] = "\nCALLING wrapper_axi_encrypt";
static  char aesl_internal_main_OC_k[16] = { ((unsigned char )11), ((unsigned char )11), ((unsigned char )11), ((unsigned char )11), ((unsigned char )12), ((unsigned char )5), ((unsigned char )5), ((unsigned char )4), ((unsigned char )3), ((unsigned char )2), ((unsigned char )1), ((unsigned char )5), ((unsigned char )5), ((unsigned char )6), ((unsigned char )2), ((unsigned char )14) };
static  char aesl_internal_main_OC_ad_1[4] = "\x01\x00\x00";
static  char aesl_internal__OC_str7[30] = "Public Message Number npub \n ";
static  char aesl_internal__OC_str13[24] = "CIPHERTEXT (wrapped) \n ";
static  char aesl_internal__OC_str15[28] = "CIPHERTEXT (non-wrapped) \n ";
static  char aesl_internal_main_OC_m_1[4] = { ((unsigned char )11), ((unsigned char )11), ((unsigned char )22), ((unsigned char )3) };
static  char aesl_internal_main_OC_ad[32] = "\x01\x00\x00\x00\x01\x01\x02\x02\x03\x03\x03\x03\a\t\x08\r\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
static  char aesl_internal_main_OC_m[16] = { ((unsigned char )11), ((unsigned char )11), ((unsigned char )22), ((unsigned char )3), ((unsigned char )1), ((unsigned char )1), ((unsigned char )1), ((unsigned char )1), ((unsigned char )1), ((unsigned char )5), ((unsigned char )4), ((unsigned char )3), ((unsigned char )4), ((unsigned char )3), ((unsigned char )2), ((unsigned char )5) };
static  char aesl_internal_main_OC_ad_2[4] = { ((unsigned char )1), ((unsigned char )1), ((unsigned char )2), ((unsigned char )2) };
static  char aesl_internal__OC_str21[27] = "PLAINTEXT (non-wrapped) \n ";
static  char aesl_internal_str1[16] = "TESTBENCH START";
static  char aesl_internal_main_OC_k_4[4] = { ((unsigned char )5), ((unsigned char )6), ((unsigned char )2), ((unsigned char )14) };
static  char aesl_internal_str4[13] = "ENCRYPT TEST";
static  char aesl_internal__OC_str19[23] = "PLAINTEXT (wrapped) \n ";
static  char aesl_internal_main_OC_ad_4[4] = { ((unsigned char )7), ((unsigned char )9), ((unsigned char )8), ((unsigned char )13) };
static  char aesl_internal_main_OC_npub_4[4] = { ((unsigned char )9), ((unsigned char )8), ((unsigned char )6), ((unsigned char )4) };
static  char aesl_internal_main_OC_k_2[4] = { ((unsigned char )12), ((unsigned char )5), ((unsigned char )5), ((unsigned char )4) };
static  char aesl_internal_main_OC_m_3[4] = { ((unsigned char )1), ((unsigned char )5), ((unsigned char )4), ((unsigned char )3) };
static  char aesl_internal__OC_str6[9] = "KEY k \n ";
static  char aesl_internal__OC_str8[22] = "Associated Data ad \n ";
static  char aesl_internal_main_OC_npub_3[4] = { ((unsigned char )3), ((unsigned char )2), ((unsigned char )5), ((unsigned char )6) };
static  char aesl_internal_main_OC_k_3[4] = { ((unsigned char )3), ((unsigned char )2), ((unsigned char )1), ((unsigned char )5) };
static  char aesl_internal_str15[29] = "\nCALLING non-wrapped decrypt";
static  char aesl_internal_str17[48] = "\n----------------------------------------------";
static  char aesl_internal_str18[14] = "TESTBENCH END";
static  char aesl_internal_str19[48] = "----------------------------------------------\n";
static  char aesl_internal_str13[28] = "CALLING wrapper_axi_decrypt";
static  char aesl_internal_str16[11] = "DECRYPT OK";
static  char aesl_internal_str10[49] = "\n\n----------------------------------------------";
static  char aesl_internal_str8[29] = "\nCALLING non-wrapped encrypt";
static  char aesl_internal_str9[11] = "ENCRYPT OK";
static  char aesl_internal_str11[13] = "DECRYPT TEST";


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void print( char llvm_cbe_c,  char *llvm_cbe_x, signed long long llvm_cbe_xlen) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  unsigned char llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print\n");
  if (((llvm_cbe_xlen&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%6, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__5);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%x, i64 %%storemerge1, !dbg !5 for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_x[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i8* %%2, align 1, !dbg !5 for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__2 = (unsigned char )*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = zext i8 %%3 to i32, !dbg !5 for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_14_count);
  llvm_cbe_tmp__3 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__2&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%4) nounwind, !dbg !5 for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_15_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__3);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i64 %%storemerge1, 1, !dbg !6 for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__5 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__5&18446744073709551615ull)));
  if (((llvm_cbe_tmp__5&18446744073709551615ULL) == (llvm_cbe_xlen&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__5;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = tail call i32 @putchar(i32 10) nounwind, !dbg !6 for 0x%I64xth hint within @print  --> \n", ++aesl_llvm_cbe_putchar_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print}\n");
  return;
}


void print32char( char *llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  unsigned char llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
   char *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned char llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
   char *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned char llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned char llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print32char\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i8* %%x, align 1, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__6 = (unsigned char )*llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%1 to i32, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__6&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%2) nounwind, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_31_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__7);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%x, i64 1, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__9 = ( char *)(&llvm_cbe_x[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__10 = (unsigned char )*llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i32, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__11 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__10&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%6) nounwind, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_39_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__11);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i8* %%x, i64 2, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__13 = ( char *)(&llvm_cbe_x[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__14 = (unsigned char )*llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i8 %%9 to i32, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__14&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%10) nounwind, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_47_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__15);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i8* %%x, i64 3, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_x[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i8* %%12, align 1, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__18 = (unsigned char )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i8 %%13 to i32, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__19 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__18&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%14) nounwind, !dbg !5 for 0x%I64xth hint within @print32char  --> \n", ++aesl_llvm_cbe_55_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__19);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print32char}\n");
  return;
}


void print32uint(signed int *llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
   char llvm_cbe_c[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned char llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
   char *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  unsigned char llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
   char *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned char llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
   char *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  unsigned char llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print32uint\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [4 x i8]* %%c, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__21 = ( char *)(&llvm_cbe_c[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%x, i8* %%1) nounwind, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_65_count);
  uint32ToByteArray((signed int *)llvm_cbe_x, ( char *)llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i8* %%1, align 1, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__22 = (unsigned char )*llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i8 %%2 to i32, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__23 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__22&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%3) nounwind, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_72_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__23);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__24);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x i8]* %%c, i64 0, i64 1, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__25 = ( char *)(&llvm_cbe_c[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__26 = (unsigned char )*llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i8 %%6 to i32, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__26&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%7) nounwind, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_80_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__27);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [4 x i8]* %%c, i64 0, i64 2, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__29 = ( char *)(&llvm_cbe_c[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__30 = (unsigned char )*llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i8 %%10 to i32, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__31 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__30&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%11) nounwind, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_88_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__31);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__32);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [4 x i8]* %%c, i64 0, i64 3, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__33 = ( char *)(&llvm_cbe_c[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__34 = (unsigned char )*llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i8 %%14 to i32, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__35 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__34&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 %%15) nounwind, !dbg !6 for 0x%I64xth hint within @print32uint  --> \n", ++aesl_llvm_cbe_96_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__35);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print32uint}\n");
  return;
}


void print_part(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print_part\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 %%x) nounwind, !dbg !5 for 0x%I64xth hint within @print_part  --> \n", ++aesl_llvm_cbe_104_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_x);
if (AESL_DEBUG_TRACE) {
printf("\nArgument x = 0x%X",llvm_cbe_x);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__37);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = tail call i32 @putchar(i32 10) nounwind, !dbg !5 for 0x%I64xth hint within @print_part  --> \n", ++aesl_llvm_cbe_putchar_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print_part}\n");
  return;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_npub_count = 0;
   char llvm_cbe_npub[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_1_count = 0;
   char llvm_cbe_npub_1[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_2_count = 0;
   char llvm_cbe_npub_2[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_3_count = 0;
   char llvm_cbe_npub_3[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_4_count = 0;
   char llvm_cbe_npub_4[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_npub_1_count = 0;
  signed int llvm_cbe_u32_npub_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_npub_2_count = 0;
  signed int llvm_cbe_u32_npub_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_npub_3_count = 0;
  signed int llvm_cbe_u32_npub_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_npub_4_count = 0;
  signed int llvm_cbe_u32_npub_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_count = 0;
   char llvm_cbe_k[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_1_count = 0;
   char llvm_cbe_k_1[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_2_count = 0;
   char llvm_cbe_k_2[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_3_count = 0;
   char llvm_cbe_k_3[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_4_count = 0;
   char llvm_cbe_k_4[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_k_1_count = 0;
  signed int llvm_cbe_u32_k_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_k_2_count = 0;
  signed int llvm_cbe_u32_k_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_k_3_count = 0;
  signed int llvm_cbe_u32_k_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_k_4_count = 0;
  signed int llvm_cbe_u32_k_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_count = 0;
   char llvm_cbe_ad[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_1_count = 0;
   char llvm_cbe_ad_1[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_2_count = 0;
   char llvm_cbe_ad_2[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_3_count = 0;
   char llvm_cbe_ad_3[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_4_count = 0;
   char llvm_cbe_ad_4[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_ad_1_count = 0;
  signed int llvm_cbe_u32_ad_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_ad_2_count = 0;
  signed int llvm_cbe_u32_ad_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_ad_3_count = 0;
  signed int llvm_cbe_u32_ad_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_ad_4_count = 0;
  signed int llvm_cbe_u32_ad_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
   char llvm_cbe_m[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_1_count = 0;
   char llvm_cbe_m_1[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_2_count = 0;
   char llvm_cbe_m_2[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_3_count = 0;
   char llvm_cbe_m_3[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_4_count = 0;
   char llvm_cbe_m_4[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_m_1_count = 0;
  signed int llvm_cbe_u32_m_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_m_2_count = 0;
  signed int llvm_cbe_u32_m_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_m_3_count = 0;
  signed int llvm_cbe_u32_m_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_m_4_count = 0;
  signed int llvm_cbe_u32_m_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
   char llvm_cbe_c[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_1_count = 0;
  signed int llvm_cbe_u32_c_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_2_count = 0;
  signed int llvm_cbe_u32_c_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_3_count = 0;
  signed int llvm_cbe_u32_c_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_4_count = 0;
  signed int llvm_cbe_u32_c_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_5_count = 0;
  signed int llvm_cbe_u32_c_5;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_6_count = 0;
  signed int llvm_cbe_u32_c_6;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_7_count = 0;
  signed int llvm_cbe_u32_c_7;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_c_8_count = 0;
  signed int llvm_cbe_u32_c_8;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_count = 0;
   char llvm_cbe_nsec[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_1_count = 0;
   char llvm_cbe_nsec_1[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_2_count = 0;
   char llvm_cbe_nsec_2[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_3_count = 0;
   char llvm_cbe_nsec_3[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_4_count = 0;
   char llvm_cbe_nsec_4[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_nsec_1_count = 0;
  signed int llvm_cbe_u32_nsec_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_nsec_2_count = 0;
  signed int llvm_cbe_u32_nsec_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_nsec_3_count = 0;
  signed int llvm_cbe_u32_nsec_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_u32_nsec_4_count = 0;
  signed int llvm_cbe_u32_nsec_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mlen_count = 0;
  signed long long llvm_cbe_mlen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_clen_count = 0;
  signed long long llvm_cbe_clen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mf_1_count = 0;
  signed int llvm_cbe_mf_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mf_2_count = 0;
  signed int llvm_cbe_mf_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mf_3_count = 0;
  signed int llvm_cbe_mf_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mf_4_count = 0;
  signed int llvm_cbe_mf_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsecf_1_count = 0;
  signed int llvm_cbe_nsecf_1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsecf_2_count = 0;
  signed int llvm_cbe_nsecf_2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsecf_3_count = 0;
  signed int llvm_cbe_nsecf_3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsecf_4_count = 0;
  signed int llvm_cbe_nsecf_4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsecf_count = 0;
   char llvm_cbe_nsecf[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
   char *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
   char *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
   char *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
   char *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
   char *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
   char *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
   char *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
   char *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
   char *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
   char *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
   char *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
   char *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
   char *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
   char *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
   char *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
   char *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
   char *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
   char *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
   char *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
   char *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
   char *llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
   char *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
   char *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
   char *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
   char *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
   char *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
   char *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
   char *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
   char *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
   char *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
   char *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
   char *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
   char *llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
   char *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
   char *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
   char *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
   char *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
   char *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
   char *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
   char *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
   char *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
   char *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
   char *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
   char *llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
   char *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
   char *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
   char *llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
   char *llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
   char *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts_count = 0;
  unsigned int llvm_cbe_puts;
  static  unsigned long long aesl_llvm_cbe_puts1_count = 0;
  unsigned int llvm_cbe_puts1;
  static  unsigned long long aesl_llvm_cbe_puts2_count = 0;
  unsigned int llvm_cbe_puts2;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar3_count = 0;
  unsigned int llvm_cbe_putchar3;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar4_count = 0;
  unsigned int llvm_cbe_putchar4;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar5_count = 0;
  unsigned int llvm_cbe_putchar5;
  static  unsigned long long aesl_llvm_cbe_puts6_count = 0;
  unsigned int llvm_cbe_puts6;
  static  unsigned long long aesl_llvm_cbe_puts7_count = 0;
  unsigned int llvm_cbe_puts7;
  static  unsigned long long aesl_llvm_cbe_puts8_count = 0;
  unsigned int llvm_cbe_puts8;
  static  unsigned long long aesl_llvm_cbe_puts9_count = 0;
  unsigned int llvm_cbe_puts9;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts10_count = 0;
  unsigned int llvm_cbe_puts10;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar11_count = 0;
  unsigned int llvm_cbe_putchar11;
  static  unsigned long long aesl_llvm_cbe_puts12_count = 0;
  unsigned int llvm_cbe_puts12;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
   char *llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  unsigned long long llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  unsigned int llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts13_count = 0;
  unsigned int llvm_cbe_puts13;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  unsigned long long llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts14_count = 0;
  unsigned int llvm_cbe_puts14;
  static  unsigned long long aesl_llvm_cbe_puts15_count = 0;
  unsigned int llvm_cbe_puts15;
  static  unsigned long long aesl_llvm_cbe_puts16_count = 0;
  unsigned int llvm_cbe_puts16;
  static  unsigned long long aesl_llvm_cbe_puts17_count = 0;
  unsigned int llvm_cbe_puts17;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts18_count = 0;
  unsigned int llvm_cbe_puts18;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar19_count = 0;
  unsigned int llvm_cbe_putchar19;
  static  unsigned long long aesl_llvm_cbe_puts20_count = 0;
  unsigned int llvm_cbe_puts20;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
   char *llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  unsigned long long llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  unsigned int llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts21_count = 0;
  unsigned int llvm_cbe_puts21;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  unsigned long long llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts22_count = 0;
  unsigned int llvm_cbe_puts22;
  static  unsigned long long aesl_llvm_cbe_puts23_count = 0;
  unsigned int llvm_cbe_puts23;
  static  unsigned long long aesl_llvm_cbe_puts24_count = 0;
  unsigned int llvm_cbe_puts24;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__38 = ( char *)(&llvm_cbe_npub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memcpy(i8* %%1, i8* getelementptr inbounds ([16 x i8]* @aesl_internal_main.npub, i64 0, i64 0), i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_108_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__38, ( char *)((&aesl_internal_main_OC_npub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])), 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__39);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [4 x i8]* %%npub_1, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__40 = ( char *)(&llvm_cbe_npub_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = call i8* @memcpy(i8* %%3, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.npub_1, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_111_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__40, ( char *)((&aesl_internal_main_OC_npub_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__41);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x i8]* %%npub_2, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__42 = ( char *)(&llvm_cbe_npub_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i8* @memcpy(i8* %%5, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.npub_2, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_114_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__42, ( char *)((&aesl_internal_main_OC_npub_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__43);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [4 x i8]* %%npub_3, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__44 = ( char *)(&llvm_cbe_npub_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i8* @memcpy(i8* %%7, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.npub_3, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_117_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__44, ( char *)((&aesl_internal_main_OC_npub_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__45);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [4 x i8]* %%npub_4, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__46 = ( char *)(&llvm_cbe_npub_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call i8* @memcpy(i8* %%9, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.npub_4, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_120_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__46, ( char *)((&aesl_internal_main_OC_npub_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__47);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 67569673, i32* %%u32_npub_1, align 4, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_128_count);
  *(&llvm_cbe_u32_npub_1) = 67569673u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 67569673u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 84280323, i32* %%u32_npub_2, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_136_count);
  *(&llvm_cbe_u32_npub_2) = 84280323u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 84280323u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 50464006, i32* %%u32_npub_3, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_144_count);
  *(&llvm_cbe_u32_npub_3) = 50464006u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 50464006u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 151520772, i32* %%u32_npub_4, align 4, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_152_count);
  *(&llvm_cbe_u32_npub_4) = 151520772u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 151520772u);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__48 = ( char *)(&llvm_cbe_k[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = call i8* @memcpy(i8* %%11, i8* getelementptr inbounds ([16 x i8]* @aesl_internal_main.k, i64 0, i64 0), i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_155_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__48, ( char *)((&aesl_internal_main_OC_k[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])), 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__49);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [4 x i8]* %%k_1, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__50 = ( char *)(&llvm_cbe_k_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = call i8* @memset(i8* %%13, i32 11, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_158_count);
  ( char *)memset(( char *)llvm_cbe_tmp__50, 11u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",11u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__51);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [4 x i8]* %%k_2, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__52 = ( char *)(&llvm_cbe_k_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = call i8* @memcpy(i8* %%15, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.k_2, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_161_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__52, ( char *)((&aesl_internal_main_OC_k_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__53);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [4 x i8]* %%k_3, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_163_count);
  llvm_cbe_tmp__54 = ( char *)(&llvm_cbe_k_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = call i8* @memcpy(i8* %%17, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.k_3, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_164_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__54, ( char *)((&aesl_internal_main_OC_k_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__55);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [4 x i8]* %%k_4, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__56 = ( char *)(&llvm_cbe_k_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = call i8* @memcpy(i8* %%19, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.k_4, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_167_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__56, ( char *)((&aesl_internal_main_OC_k_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__57);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 185273099, i32* %%u32_k_1, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_175_count);
  *(&llvm_cbe_u32_k_1) = 185273099u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 185273099u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 201655556, i32* %%u32_k_2, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_183_count);
  *(&llvm_cbe_u32_k_2) = 201655556u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 201655556u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 50462981, i32* %%u32_k_3, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_191_count);
  *(&llvm_cbe_u32_k_3) = 50462981u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 50462981u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 84279822, i32* %%u32_k_4, align 4, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_199_count);
  *(&llvm_cbe_u32_k_4) = 84279822u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 84279822u);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [32 x i8]* %%ad, i64 0, i64 0, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__58 = ( char *)(&llvm_cbe_ad[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i8* @memcpy(i8* %%21, i8* getelementptr inbounds ([32 x i8]* @aesl_internal_main.ad, i64 0, i64 0), i64 32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_202_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__58, ( char *)((&aesl_internal_main_OC_ad[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])), 32ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__59);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [4 x i8]* %%ad_1, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__60 = ( char *)(&llvm_cbe_ad_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i8* @memcpy(i8* %%23, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.ad_1, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_205_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__60, ( char *)((&aesl_internal_main_OC_ad_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__61);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [4 x i8]* %%ad_2, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__62 = ( char *)(&llvm_cbe_ad_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = call i8* @memcpy(i8* %%25, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.ad_2, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_208_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__62, ( char *)((&aesl_internal_main_OC_ad_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__63);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [4 x i8]* %%ad_3, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__64 = ( char *)(&llvm_cbe_ad_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = call i8* @memset(i8* %%27, i32 3, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_211_count);
  ( char *)memset(( char *)llvm_cbe_tmp__64, 3u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__65);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [4 x i8]* %%ad_4, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__66 = ( char *)(&llvm_cbe_ad_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = call i8* @memcpy(i8* %%29, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.ad_4, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_214_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__66, ( char *)((&aesl_internal_main_OC_ad_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__67);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 16777216, i32* %%u32_ad_1, align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_222_count);
  *(&llvm_cbe_u32_ad_1) = 16777216u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 16777216u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 16843266, i32* %%u32_ad_2, align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_230_count);
  *(&llvm_cbe_u32_ad_2) = 16843266u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 16843266u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 50529027, i32* %%u32_ad_3, align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_238_count);
  *(&llvm_cbe_u32_ad_3) = 50529027u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 50529027u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 118032397, i32* %%u32_ad_4, align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_246_count);
  *(&llvm_cbe_u32_ad_4) = 118032397u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 118032397u);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__68 = ( char *)(&llvm_cbe_m[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = call i8* @memcpy(i8* %%31, i8* getelementptr inbounds ([16 x i8]* @aesl_internal_main.m, i64 0, i64 0), i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_249_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__68, ( char *)((&aesl_internal_main_OC_m[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])), 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__69);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds [4 x i8]* %%m_1, i64 0, i64 0, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__70 = ( char *)(&llvm_cbe_m_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = call i8* @memcpy(i8* %%33, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.m_1, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_252_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__70, ( char *)((&aesl_internal_main_OC_m_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__71);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [4 x i8]* %%m_2, i64 0, i64 0, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__72 = ( char *)(&llvm_cbe_m_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = call i8* @memset(i8* %%35, i32 1, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_255_count);
  ( char *)memset(( char *)llvm_cbe_tmp__72, 1u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [4 x i8]* %%m_3, i64 0, i64 0, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__74 = ( char *)(&llvm_cbe_m_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = call i8* @memcpy(i8* %%37, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.m_3, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_258_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__74, ( char *)((&aesl_internal_main_OC_m_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__75);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds [4 x i8]* %%m_4, i64 0, i64 0, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__76 = ( char *)(&llvm_cbe_m_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = call i8* @memcpy(i8* %%39, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_main.m_4, i64 0, i64 0), i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_261_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__76, ( char *)((&aesl_internal_main_OC_m_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__77);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 185275907, i32* %%u32_m_1, align 4, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_269_count);
  *(&llvm_cbe_u32_m_1) = 185275907u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 185275907u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 16843009, i32* %%u32_m_2, align 4, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_277_count);
  *(&llvm_cbe_u32_m_2) = 16843009u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 16843009u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 17105923, i32* %%u32_m_3, align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_285_count);
  *(&llvm_cbe_u32_m_3) = 17105923u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 17105923u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 67305989, i32* %%u32_m_4, align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_293_count);
  *(&llvm_cbe_u32_m_4) = 67305989u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 67305989u);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 0, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__78 = ( char *)(&llvm_cbe_nsec[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = call i8* @memset(i8* %%41, i32 0, i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_305_count);
  ( char *)memset(( char *)llvm_cbe_tmp__78, 0u, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__79);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [4 x i8]* %%nsec_1, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__80 = ( char *)(&llvm_cbe_nsec_1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = call i8* @memset(i8* %%43, i32 0, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_308_count);
  ( char *)memset(( char *)llvm_cbe_tmp__80, 0u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__81);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [4 x i8]* %%nsec_2, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_310_count);
  llvm_cbe_tmp__82 = ( char *)(&llvm_cbe_nsec_2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = call i8* @memset(i8* %%45, i32 0, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_311_count);
  ( char *)memset(( char *)llvm_cbe_tmp__82, 0u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__83);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [4 x i8]* %%nsec_3, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__84 = ( char *)(&llvm_cbe_nsec_3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = call i8* @memset(i8* %%47, i32 0, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_314_count);
  ( char *)memset(( char *)llvm_cbe_tmp__84, 0u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__85);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [4 x i8]* %%nsec_4, i64 0, i64 0, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__86 = ( char *)(&llvm_cbe_nsec_4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = call i8* @memset(i8* %%49, i32 0, i64 4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_317_count);
  ( char *)memset(( char *)llvm_cbe_tmp__86, 0u, 4ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",4ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__87);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%u32_nsec_1, align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_325_count);
  *(&llvm_cbe_u32_nsec_1) = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%u32_nsec_2, align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_333_count);
  *(&llvm_cbe_u32_nsec_2) = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%u32_nsec_3, align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_341_count);
  *(&llvm_cbe_u32_nsec_3) = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%u32_nsec_4, align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_349_count);
  *(&llvm_cbe_u32_nsec_4) = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 16, i64* %%mlen, align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_360_count);
  *(&llvm_cbe_mlen) = 16ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 16ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 32, i64* %%clen, align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_368_count);
  *(&llvm_cbe_clen) = 32ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 32ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%puts = call i32 @puts(i8* getelementptr inbounds ([49 x i8]* @aesl_internal_str10, i64 0, i64 0)), !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts_count);
  puts(( char *)((&aesl_internal_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 49
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts = 0x%X",llvm_cbe_puts);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts1 = call i32 @puts(i8* getelementptr inbounds ([16 x i8]* @aesl_internal_str1, i64 0, i64 0)), !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts1_count);
  puts(( char *)((&aesl_internal_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts1 = 0x%X",llvm_cbe_puts1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts2 = call i32 @puts(i8* getelementptr inbounds ([48 x i8]* @aesl_internal_str19, i64 0, i64 0)), !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts2_count);
  puts(( char *)((&aesl_internal_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts2 = 0x%X",llvm_cbe_puts2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @aesl_internal_.str6, i64 0, i64 0)) nounwind, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_369_count);
  printf(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 9
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__88);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%13), !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_370_count);
  print32char(( char *)llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%15), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_371_count);
  print32char(( char *)llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%17), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_372_count);
  print32char(( char *)llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%19), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_373_count);
  print32char(( char *)llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = call i32 @putchar(i32 10) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str7, i64 0, i64 0)) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_374_count);
  printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%3), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_375_count);
  print32char(( char *)llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%5), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_376_count);
  print32char(( char *)llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%7), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_377_count);
  print32char(( char *)llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%9), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_378_count);
  print32char(( char *)llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar3 = call i32 @putchar(i32 10) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar3_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar3 = 0x%X",llvm_cbe_putchar3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([22 x i8]* @aesl_internal_.str8, i64 0, i64 0)) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_379_count);
  printf(( char *)((&aesl_internal__OC_str8[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 22
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%23), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_380_count);
  print32char(( char *)llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%25), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_381_count);
  print32char(( char *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%27), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_382_count);
  print32char(( char *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%29), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_383_count);
  print32char(( char *)llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar4 = call i32 @putchar(i32 10) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar4_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar4 = 0x%X",llvm_cbe_putchar4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @aesl_internal_.str9, i64 0, i64 0)) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_384_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 15
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__91);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%33), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_385_count);
  print32char(( char *)llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%35), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_386_count);
  print32char(( char *)llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%37), !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_387_count);
  print32char(( char *)llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32char(i8* %%39), !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_388_count);
  print32char(( char *)llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar5 = call i32 @putchar(i32 10) nounwind, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar5_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar5 = 0x%X",llvm_cbe_putchar5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts6 = call i32 @puts(i8* getelementptr inbounds ([49 x i8]* @aesl_internal_str10, i64 0, i64 0)), !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts6_count);
  puts(( char *)((&aesl_internal_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 49
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts6 = 0x%X",llvm_cbe_puts6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts7 = call i32 @puts(i8* getelementptr inbounds ([13 x i8]* @aesl_internal_str4, i64 0, i64 0)), !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts7_count);
  puts(( char *)((&aesl_internal_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 13
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts7 = 0x%X",llvm_cbe_puts7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts8 = call i32 @puts(i8* getelementptr inbounds ([48 x i8]* @aesl_internal_str19, i64 0, i64 0)), !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts8_count);
  puts(( char *)((&aesl_internal_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts8 = 0x%X",llvm_cbe_puts8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts9 = call i32 @puts(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_str6, i64 0, i64 0)), !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts9_count);
  puts(( char *)((&aesl_internal_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts9 = 0x%X",llvm_cbe_puts9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = call i32 bitcast (i32 (...)* @axi_ascon to i32 (i32, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*)*)(i32 0, i32* %%u32_c_1, i32* %%u32_c_2, i32* %%u32_c_3, i32* %%u32_c_4, i32* %%u32_c_5, i32* %%u32_c_6, i32* %%u32_c_7, i32* %%u32_c_8, i32* %%u32_m_1, i32* %%u32_m_2, i32* %%u32_m_3, i32* %%u32_m_4, i32* %%u32_ad_1, i32* %%u32_ad_2, i32* %%u32_ad_3, i32* %%u32_ad_4, i32* %%u32_nsec_1, i32* %%u32_nsec_2, i32* %%u32_nsec_3, i32* %%u32_nsec_4, i32* %%u32_npub_1, i32* %%u32_npub_2, i32* %%u32_npub_3, i32* %%u32_npub_4, i32* %%u32_k_1, i32* %%u32_k_2, i32* %%u32_k_3, i32* %%u32_k_4) nounwind, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__92 = (unsigned int )axi_ascon(0u, (signed int *)(&llvm_cbe_u32_c_1), (signed int *)(&llvm_cbe_u32_c_2), (signed int *)(&llvm_cbe_u32_c_3), (signed int *)(&llvm_cbe_u32_c_4), (signed int *)(&llvm_cbe_u32_c_5), (signed int *)(&llvm_cbe_u32_c_6), (signed int *)(&llvm_cbe_u32_c_7), (signed int *)(&llvm_cbe_u32_c_8), (signed int *)(&llvm_cbe_u32_m_1), (signed int *)(&llvm_cbe_u32_m_2), (signed int *)(&llvm_cbe_u32_m_3), (signed int *)(&llvm_cbe_u32_m_4), (signed int *)(&llvm_cbe_u32_ad_1), (signed int *)(&llvm_cbe_u32_ad_2), (signed int *)(&llvm_cbe_u32_ad_3), (signed int *)(&llvm_cbe_u32_ad_4), (signed int *)(&llvm_cbe_u32_nsec_1), (signed int *)(&llvm_cbe_u32_nsec_2), (signed int *)(&llvm_cbe_u32_nsec_3), (signed int *)(&llvm_cbe_u32_nsec_4), (signed int *)(&llvm_cbe_u32_npub_1), (signed int *)(&llvm_cbe_u32_npub_2), (signed int *)(&llvm_cbe_u32_npub_3), (signed int *)(&llvm_cbe_u32_npub_4), (signed int *)(&llvm_cbe_u32_k_1), (signed int *)(&llvm_cbe_u32_k_2), (signed int *)(&llvm_cbe_u32_k_3), (signed int *)(&llvm_cbe_u32_k_4));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__92);
}
  if (((llvm_cbe_tmp__92&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__106;
  } else {
    goto llvm_cbe_tmp__107;
  }

llvm_cbe_tmp__106:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts10 = call i32 @puts(i8* getelementptr inbounds ([11 x i8]* @aesl_internal_str9, i64 0, i64 0)), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts10_count);
  puts(( char *)((&aesl_internal_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts10 = 0x%X",llvm_cbe_puts10);
}
  goto llvm_cbe_tmp__107;

llvm_cbe_tmp__107:
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([24 x i8]* @aesl_internal_.str13, i64 0, i64 0)) nounwind, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_395_count);
  printf(( char *)((&aesl_internal__OC_str13[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 24
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__93);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_1), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_396_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_2), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_397_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_3), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_398_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_4), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_399_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_4));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_5), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_400_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_5));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_6), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_401_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_6));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_7), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_402_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_7));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%u32_c_8), !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_403_count);
  print32uint((signed int *)(&llvm_cbe_u32_c_8));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar11 = call i32 @putchar(i32 10) nounwind, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar11_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar11 = 0x%X",llvm_cbe_putchar11);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts12 = call i32 @puts(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_str8, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts12_count);
  puts(( char *)((&aesl_internal_str8[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts12 = 0x%X",llvm_cbe_puts12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__94 = ( char *)(&llvm_cbe_c[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = load i64* %%mlen, align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_411_count);
  llvm_cbe_tmp__95 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = call i32 @crypto_aead_encrypt(i8* %%60, i64* %%clen, i8* %%31, i64 %%61, i8* %%21, i64 16, i8* %%41, i8* %%1, i8* %%11) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_412_count);
  llvm_cbe_tmp__96 = (unsigned int )crypto_aead_encrypt(( char *)llvm_cbe_tmp__94, (signed long long *)(&llvm_cbe_clen), ( char *)llvm_cbe_tmp__68, llvm_cbe_tmp__95, ( char *)llvm_cbe_tmp__58, 16ull, ( char *)llvm_cbe_tmp__78, ( char *)llvm_cbe_tmp__38, ( char *)llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__95);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__96);
}
  if (((llvm_cbe_tmp__96&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__108;
  } else {
    goto llvm_cbe_tmp__109;
  }

llvm_cbe_tmp__108:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts13 = call i32 @puts(i8* getelementptr inbounds ([11 x i8]* @aesl_internal_str9, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts13_count);
  puts(( char *)((&aesl_internal_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts13 = 0x%X",llvm_cbe_puts13);
}
  goto llvm_cbe_tmp__109;

llvm_cbe_tmp__109:
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([28 x i8]* @aesl_internal_.str15, i64 0, i64 0)) nounwind, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_418_count);
  printf(( char *)((&aesl_internal__OC_str15[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__97);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i64* %%clen, align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__98 = (unsigned long long )*(&llvm_cbe_clen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  call void @print(i8 zeroext 99, i8* %%60, i64 %%67), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_426_count);
  print(((unsigned char )99), ( char *)llvm_cbe_tmp__94, llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned char )99));
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__98);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts14 = call i32 @puts(i8* getelementptr inbounds ([49 x i8]* @aesl_internal_str10, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts14_count);
  puts(( char *)((&aesl_internal_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 49
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts14 = 0x%X",llvm_cbe_puts14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts15 = call i32 @puts(i8* getelementptr inbounds ([13 x i8]* @aesl_internal_str11, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts15_count);
  puts(( char *)((&aesl_internal_str11[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 13
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts15 = 0x%X",llvm_cbe_puts15);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts16 = call i32 @puts(i8* getelementptr inbounds ([48 x i8]* @aesl_internal_str19, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts16_count);
  puts(( char *)((&aesl_internal_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts16 = 0x%X",llvm_cbe_puts16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts17 = call i32 @puts(i8* getelementptr inbounds ([28 x i8]* @aesl_internal_str13, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts17_count);
  puts(( char *)((&aesl_internal_str13[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts17 = 0x%X",llvm_cbe_puts17);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = call i32 bitcast (i32 (...)* @axi_ascon to i32 (i32, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*, i32*)*)(i32 1, i32* %%u32_c_1, i32* %%u32_c_2, i32* %%u32_c_3, i32* %%u32_c_4, i32* %%u32_c_5, i32* %%u32_c_6, i32* %%u32_c_7, i32* %%u32_c_8, i32* %%mf_1, i32* %%mf_2, i32* %%mf_3, i32* %%mf_4, i32* %%u32_ad_1, i32* %%u32_ad_2, i32* %%u32_ad_3, i32* %%u32_ad_4, i32* %%nsecf_1, i32* %%nsecf_2, i32* %%nsecf_3, i32* %%nsecf_4, i32* %%u32_npub_1, i32* %%u32_npub_2, i32* %%u32_npub_3, i32* %%u32_npub_4, i32* %%u32_k_1, i32* %%u32_k_2, i32* %%u32_k_3, i32* %%u32_k_4) nounwind, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_435_count);
  llvm_cbe_tmp__99 = (unsigned int )axi_ascon(1u, (signed int *)(&llvm_cbe_u32_c_1), (signed int *)(&llvm_cbe_u32_c_2), (signed int *)(&llvm_cbe_u32_c_3), (signed int *)(&llvm_cbe_u32_c_4), (signed int *)(&llvm_cbe_u32_c_5), (signed int *)(&llvm_cbe_u32_c_6), (signed int *)(&llvm_cbe_u32_c_7), (signed int *)(&llvm_cbe_u32_c_8), (signed int *)(&llvm_cbe_mf_1), (signed int *)(&llvm_cbe_mf_2), (signed int *)(&llvm_cbe_mf_3), (signed int *)(&llvm_cbe_mf_4), (signed int *)(&llvm_cbe_u32_ad_1), (signed int *)(&llvm_cbe_u32_ad_2), (signed int *)(&llvm_cbe_u32_ad_3), (signed int *)(&llvm_cbe_u32_ad_4), (signed int *)(&llvm_cbe_nsecf_1), (signed int *)(&llvm_cbe_nsecf_2), (signed int *)(&llvm_cbe_nsecf_3), (signed int *)(&llvm_cbe_nsecf_4), (signed int *)(&llvm_cbe_u32_npub_1), (signed int *)(&llvm_cbe_u32_npub_2), (signed int *)(&llvm_cbe_u32_npub_3), (signed int *)(&llvm_cbe_u32_npub_4), (signed int *)(&llvm_cbe_u32_k_1), (signed int *)(&llvm_cbe_u32_k_2), (signed int *)(&llvm_cbe_u32_k_3), (signed int *)(&llvm_cbe_u32_k_4));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__99);
}
  if (((llvm_cbe_tmp__99&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__110;
  } else {
    goto llvm_cbe_tmp__111;
  }

llvm_cbe_tmp__110:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts18 = call i32 @puts(i8* getelementptr inbounds ([11 x i8]* @aesl_internal_str16, i64 0, i64 0)), !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts18_count);
  puts(( char *)((&aesl_internal_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts18 = 0x%X",llvm_cbe_puts18);
}
  goto llvm_cbe_tmp__111;

llvm_cbe_tmp__111:
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([23 x i8]* @aesl_internal_.str19, i64 0, i64 0)) nounwind, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_441_count);
  printf(( char *)((&aesl_internal__OC_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 23
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__100);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%mf_1), !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_442_count);
  print32uint((signed int *)(&llvm_cbe_mf_1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%mf_2), !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_443_count);
  print32uint((signed int *)(&llvm_cbe_mf_2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%mf_3), !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_444_count);
  print32uint((signed int *)(&llvm_cbe_mf_3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print32uint(i32* %%mf_4), !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_445_count);
  print32uint((signed int *)(&llvm_cbe_mf_4));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar19 = call i32 @putchar(i32 10) nounwind, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar19_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar19 = 0x%X",llvm_cbe_putchar19);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts20 = call i32 @puts(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_str15, i64 0, i64 0)), !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts20_count);
  puts(( char *)((&aesl_internal_str15[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts20 = 0x%X",llvm_cbe_puts20);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [16 x i8]* %%nsecf, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__101 = ( char *)(&llvm_cbe_nsecf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i64* %%clen, align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_454_count);
  llvm_cbe_tmp__102 = (unsigned long long )*(&llvm_cbe_clen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = call i32 @crypto_aead_decrypt(i8* %%31, i64* %%mlen, i8* %%73, i8* %%60, i64 %%74, i8* %%21, i64 16, i8* %%1, i8* %%11) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_455_count);
  llvm_cbe_tmp__103 = (unsigned int )crypto_aead_decrypt(( char *)llvm_cbe_tmp__68, (signed long long *)(&llvm_cbe_mlen), ( char *)llvm_cbe_tmp__101, ( char *)llvm_cbe_tmp__94, llvm_cbe_tmp__102, ( char *)llvm_cbe_tmp__58, 16ull, ( char *)llvm_cbe_tmp__38, ( char *)llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__102);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__103);
}
  if (((llvm_cbe_tmp__103&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__112;
  } else {
    goto llvm_cbe_tmp__113;
  }

llvm_cbe_tmp__112:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts21 = call i32 @puts(i8* getelementptr inbounds ([11 x i8]* @aesl_internal_str16, i64 0, i64 0)), !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts21_count);
  puts(( char *)((&aesl_internal_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts21 = 0x%X",llvm_cbe_puts21);
}
  goto llvm_cbe_tmp__113;

llvm_cbe_tmp__113:
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([27 x i8]* @aesl_internal_.str21, i64 0, i64 0)) nounwind, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_461_count);
  printf(( char *)((&aesl_internal__OC_str21[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 27
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__104);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = load i64* %%mlen, align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__105 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  call void @print(i8 zeroext 109, i8* %%31, i64 %%80), !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_469_count);
  print(((unsigned char )109), ( char *)llvm_cbe_tmp__68, llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned char )109));
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__105);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts22 = call i32 @puts(i8* getelementptr inbounds ([48 x i8]* @aesl_internal_str17, i64 0, i64 0)), !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts22_count);
  puts(( char *)((&aesl_internal_str17[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts22 = 0x%X",llvm_cbe_puts22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts23 = call i32 @puts(i8* getelementptr inbounds ([14 x i8]* @aesl_internal_str18, i64 0, i64 0)), !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts23_count);
  puts(( char *)((&aesl_internal_str18[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts23 = 0x%X",llvm_cbe_puts23);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts24 = call i32 @puts(i8* getelementptr inbounds ([48 x i8]* @aesl_internal_str19, i64 0, i64 0)), !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts24_count);
  puts(( char *)((&aesl_internal_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts24 = 0x%X",llvm_cbe_puts24);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}

