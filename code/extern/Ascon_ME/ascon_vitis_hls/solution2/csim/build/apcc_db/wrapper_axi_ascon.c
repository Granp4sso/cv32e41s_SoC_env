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

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void uint32ToByteArray(signed int *llvm_cbe_value,  char *llvm_cbe_array);
signed int axi_ascon(signed int llvm_cbe_decrypt, signed int *llvm_cbe_c_1, signed int *llvm_cbe_c_2, signed int *llvm_cbe_c_3, signed int *llvm_cbe_c_4, signed int *llvm_cbe_c_5, signed int *llvm_cbe_c_6, signed int *llvm_cbe_c_7, signed int *llvm_cbe_c_8, signed int *llvm_cbe_m_1, signed int *llvm_cbe_m_2, signed int *llvm_cbe_m_3, signed int *llvm_cbe_m_4, signed int *llvm_cbe_ad_1, signed int *llvm_cbe_ad_2, signed int *llvm_cbe_ad_3, signed int *llvm_cbe_ad_4, signed int *llvm_cbe_nsec_1, signed int *llvm_cbe_nsec_2, signed int *llvm_cbe_nsec_3, signed int *llvm_cbe_nsec_4, signed int *llvm_cbe_npub_1, signed int *llvm_cbe_npub_2, signed int *llvm_cbe_npub_3, signed int *llvm_cbe_npub_4, signed int *llvm_cbe_k_1, signed int *llvm_cbe_k_2, signed int *llvm_cbe_k_3, signed int *llvm_cbe_k_4);
signed int crypto_aead_encrypt( char *, signed long long *,  char *, signed long long ,  char *, signed long long ,  char *,  char *,  char *);
signed int crypto_aead_decrypt( char *, signed long long *,  char *,  char *, signed long long ,  char *, signed long long ,  char *,  char *);
signed int wrapper_axi_encrypt(signed int *llvm_cbe_c_1, signed int *llvm_cbe_c_2, signed int *llvm_cbe_c_3, signed int *llvm_cbe_c_4, signed int *llvm_cbe_c_5, signed int *llvm_cbe_c_6, signed int *llvm_cbe_c_7, signed int *llvm_cbe_c_8, signed int *llvm_cbe_m_1, signed int *llvm_cbe_m_2, signed int *llvm_cbe_m_3, signed int *llvm_cbe_m_4, signed int *llvm_cbe_ad_1, signed int *llvm_cbe_ad_2, signed int *llvm_cbe_ad_3, signed int *llvm_cbe_ad_4, signed int *llvm_cbe_nsec_1, signed int *llvm_cbe_nsec_2, signed int *llvm_cbe_nsec_3, signed int *llvm_cbe_nsec_4, signed int *llvm_cbe_npub_1, signed int *llvm_cbe_npub_2, signed int *llvm_cbe_npub_3, signed int *llvm_cbe_npub_4, signed int *llvm_cbe_k_1, signed int *llvm_cbe_k_2, signed int *llvm_cbe_k_3, signed int *llvm_cbe_k_4);
signed int wrapper_axi_decrypt(signed int *llvm_cbe_m_1, signed int *llvm_cbe_m_2, signed int *llvm_cbe_m_3, signed int *llvm_cbe_m_4, signed int *llvm_cbe_nsec_1, signed int *llvm_cbe_nsec_2, signed int *llvm_cbe_nsec_3, signed int *llvm_cbe_nsec_4, signed int *llvm_cbe_c_1, signed int *llvm_cbe_c_2, signed int *llvm_cbe_c_3, signed int *llvm_cbe_c_4, signed int *llvm_cbe_c_5, signed int *llvm_cbe_c_6, signed int *llvm_cbe_c_7, signed int *llvm_cbe_c_8, signed int *llvm_cbe_ad_1, signed int *llvm_cbe_ad_2, signed int *llvm_cbe_ad_3, signed int *llvm_cbe_ad_4, signed int *llvm_cbe_npub_1, signed int *llvm_cbe_npub_2, signed int *llvm_cbe_npub_3, signed int *llvm_cbe_npub_4, signed int *llvm_cbe_k_1, signed int *llvm_cbe_k_2, signed int *llvm_cbe_k_3, signed int *llvm_cbe_k_4);


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

void uint32ToByteArray(signed int *llvm_cbe_value,  char *llvm_cbe_array) {
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
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  unsigned char llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned char llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned char llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
   char *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  unsigned char llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @uint32ToByteArray\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* %%value, align 4, !dbg !4 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__1 = (unsigned int )*llvm_cbe_value;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = lshr i32 %%1, 24, !dbg !4 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__2 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__1&4294967295ull)) >> ((unsigned int )(24u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__2&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = trunc i32 %%2 to i8, !dbg !4 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__3 = (unsigned char )((unsigned char )llvm_cbe_tmp__2&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%3, i8* %%array, align 1, !dbg !4 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_14_count);
  *llvm_cbe_array = llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%value, align 4, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_15_count);
  llvm_cbe_tmp__4 = (unsigned int )*llvm_cbe_value;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = lshr i32 %%4, 16, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__5 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__4&4294967295ull)) >> ((unsigned int )(16u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__5&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i32 %%5 to i8, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__6 = (unsigned char )((unsigned char )llvm_cbe_tmp__5&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%array, i64 1, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__7 = ( char *)(&llvm_cbe_array[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%6, i8* %%7, align 1, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_19_count);
  *llvm_cbe_tmp__7 = llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i32* %%value, align 4, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__8 = (unsigned int )*llvm_cbe_value;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = lshr i32 %%8, 8, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__8&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = trunc i32 %%9 to i8, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__10 = (unsigned char )((unsigned char )llvm_cbe_tmp__9&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%array, i64 2, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__11 = ( char *)(&llvm_cbe_array[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%10, i8* %%11, align 1, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_24_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i32* %%value, align 4, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__12 = (unsigned int )*llvm_cbe_value;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = trunc i32 %%12 to i8, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__13 = (unsigned char )((unsigned char )llvm_cbe_tmp__12&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%array, i64 3, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__14 = ( char *)(&llvm_cbe_array[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%13, i8* %%14, align 1, !dbg !5 for 0x%I64xth hint within @uint32ToByteArray  --> \n", ++aesl_llvm_cbe_28_count);
  *llvm_cbe_tmp__14 = llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @uint32ToByteArray}\n");
  return;
}


signed int axi_ascon(signed int llvm_cbe_decrypt, signed int *llvm_cbe_c_1, signed int *llvm_cbe_c_2, signed int *llvm_cbe_c_3, signed int *llvm_cbe_c_4, signed int *llvm_cbe_c_5, signed int *llvm_cbe_c_6, signed int *llvm_cbe_c_7, signed int *llvm_cbe_c_8, signed int *llvm_cbe_m_1, signed int *llvm_cbe_m_2, signed int *llvm_cbe_m_3, signed int *llvm_cbe_m_4, signed int *llvm_cbe_ad_1, signed int *llvm_cbe_ad_2, signed int *llvm_cbe_ad_3, signed int *llvm_cbe_ad_4, signed int *llvm_cbe_nsec_1, signed int *llvm_cbe_nsec_2, signed int *llvm_cbe_nsec_3, signed int *llvm_cbe_nsec_4, signed int *llvm_cbe_npub_1, signed int *llvm_cbe_npub_2, signed int *llvm_cbe_npub_3, signed int *llvm_cbe_npub_4, signed int *llvm_cbe_k_1, signed int *llvm_cbe_k_2, signed int *llvm_cbe_k_3, signed int *llvm_cbe_k_4) {
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
   char llvm_cbe_c[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
   char llvm_cbe_m[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_count = 0;
   char llvm_cbe_ad[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_count = 0;
   char llvm_cbe_nsec[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_count = 0;
   char llvm_cbe_npub[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_count = 0;
   char llvm_cbe_k[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_clen_count = 0;
  signed long long llvm_cbe_clen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mlen_count = 0;
  signed long long llvm_cbe_mlen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
   char *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
   char *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
   char *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
   char *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
   char *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
   char *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
   char *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
   char *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
   char *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
   char *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
   char *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
   char *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
   char *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
   char *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
   char *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
   char *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
   char *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
   char *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
   char *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
   char *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
   char *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
   char *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
   char *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
   char *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
   char *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned char llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
   char *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned char llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
   char *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned char llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned int llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
   char *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned char llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned int llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  unsigned int llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  unsigned char llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned int llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  unsigned int llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
   char *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned char llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned int llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
   char *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned char llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
   char *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  unsigned char llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned char llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  unsigned int llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
   char *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned char llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  unsigned int llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
   char *llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned char llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
   char *llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  unsigned char llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  unsigned int llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  unsigned char llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  unsigned int llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
   char *llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  unsigned char llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  unsigned int llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
   char *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned char llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
   char *llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  unsigned char llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  unsigned int llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  unsigned char llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  unsigned int llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  unsigned int llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
   char *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  unsigned char llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  unsigned int llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  unsigned int llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
   char *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  unsigned char llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned int llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
   char *llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned char llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  unsigned int llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned int llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned int llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned int llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  unsigned char llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned int llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
   char *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  unsigned char llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned int llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned int llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
   char *llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  unsigned char llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
   char *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  unsigned char llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  unsigned int llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  unsigned int llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  unsigned int llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  unsigned char llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  unsigned int llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  unsigned int llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
   char *llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  unsigned char llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  unsigned int llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned int llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
   char *llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  unsigned char llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  unsigned int llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  unsigned int llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
   char *llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  unsigned char llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  unsigned int llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  unsigned int llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  unsigned int llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  unsigned int llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned char llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  unsigned int llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  unsigned int llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
   char *llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned char llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  unsigned int llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  unsigned int llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
   char *llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned char llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  unsigned int llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  unsigned int llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
   char *llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  unsigned char llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  unsigned int llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  unsigned int llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned int llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  unsigned int llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned int llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  unsigned char llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned int llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  unsigned int llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
   char *llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  unsigned char llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  unsigned int llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  unsigned int llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
   char *llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  unsigned char llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  unsigned int llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  unsigned int llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
   char *llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  unsigned char llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  unsigned int llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  unsigned int llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  unsigned int llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  unsigned int llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  unsigned char llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  unsigned int llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  unsigned int llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
   char *llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  unsigned char llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  unsigned int llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  unsigned int llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
   char *llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  unsigned char llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  unsigned int llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  unsigned int llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
   char *llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  unsigned char llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  unsigned int llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  unsigned int llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  unsigned int llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  unsigned int llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  unsigned char llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  unsigned int llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  unsigned int llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
   char *llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  unsigned char llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned int llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  unsigned int llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
   char *llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  unsigned char llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  unsigned int llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  unsigned int llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
   char *llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  unsigned char llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  unsigned int llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  unsigned int llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  unsigned int llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  unsigned int llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  unsigned char llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  unsigned int llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  unsigned int llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
   char *llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  unsigned char llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  unsigned int llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  unsigned int llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
   char *llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  unsigned char llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  unsigned int llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  unsigned int llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
   char *llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  unsigned char llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  unsigned int llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  unsigned int llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  unsigned int llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  unsigned int llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  unsigned char llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  unsigned int llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  unsigned int llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
   char *llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  unsigned char llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  unsigned int llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  unsigned int llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
   char *llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  unsigned char llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  unsigned int llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  unsigned int llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
   char *llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  unsigned char llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  unsigned int llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned int llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  unsigned int llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  unsigned int llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  unsigned char llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  unsigned int llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  unsigned int llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
   char *llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  unsigned char llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  unsigned int llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  unsigned int llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
   char *llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  unsigned char llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  unsigned int llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  unsigned int llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
   char *llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  unsigned char llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  unsigned int llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  unsigned int llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  unsigned int llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  unsigned int llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  unsigned char llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  unsigned int llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  unsigned int llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
   char *llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  unsigned char llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  unsigned int llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  unsigned int llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
   char *llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  unsigned char llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  unsigned int llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  unsigned int llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
   char *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  unsigned char llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  unsigned int llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  unsigned int llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  unsigned int llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  unsigned int llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  unsigned char llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  unsigned int llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  unsigned int llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
   char *llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  unsigned char llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  unsigned int llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  unsigned int llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
   char *llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  unsigned char llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  unsigned int llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  unsigned int llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
   char *llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  unsigned char llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  unsigned int llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  unsigned int llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  unsigned int llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  unsigned int llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @axi_ascon\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__15 = ( char *)(&llvm_cbe_c[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_1, i8* %%1), !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_106_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_1, ( char *)llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 4, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__16 = ( char *)(&llvm_cbe_c[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_2, i8* %%2), !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_108_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_2, ( char *)llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 8, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_c[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_3, i8* %%3), !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_110_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_3, ( char *)llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 12, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__18 = ( char *)(&llvm_cbe_c[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_4, i8* %%4), !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_112_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_4, ( char *)llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 16, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__19 = ( char *)(&llvm_cbe_c[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_5, i8* %%5), !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_114_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_5, ( char *)llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 20, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__20 = ( char *)(&llvm_cbe_c[(((signed long long )20ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_6, i8* %%6), !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_116_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_6, ( char *)llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 24, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__21 = ( char *)(&llvm_cbe_c[(((signed long long )24ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_7, i8* %%7), !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_118_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_7, ( char *)llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 28, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__22 = ( char *)(&llvm_cbe_c[(((signed long long )28ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_8, i8* %%8), !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_120_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_8, ( char *)llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__23 = ( char *)(&llvm_cbe_m[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_1, i8* %%9), !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_123_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_1, ( char *)llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 4, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__24 = ( char *)(&llvm_cbe_m[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_2, i8* %%10), !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_125_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_2, ( char *)llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 8, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__25 = ( char *)(&llvm_cbe_m[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_3, i8* %%11), !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_127_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_3, ( char *)llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 12, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__26 = ( char *)(&llvm_cbe_m[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_4, i8* %%12), !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_129_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_4, ( char *)llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__27 = ( char *)(&llvm_cbe_ad[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_1, i8* %%13), !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_132_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_1, ( char *)llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__28 = ( char *)(&llvm_cbe_ad[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_2, i8* %%14), !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_134_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_2, ( char *)llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 8, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__29 = ( char *)(&llvm_cbe_ad[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_3, i8* %%15), !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_136_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_3, ( char *)llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 12, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__30 = ( char *)(&llvm_cbe_ad[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_4, i8* %%16), !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_138_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_4, ( char *)llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 0, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__31 = ( char *)(&llvm_cbe_nsec[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_1, i8* %%17), !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_141_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_1, ( char *)llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 4, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__32 = ( char *)(&llvm_cbe_nsec[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_2, i8* %%18), !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_143_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_2, ( char *)llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 8, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__33 = ( char *)(&llvm_cbe_nsec[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_3, i8* %%19), !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_145_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_3, ( char *)llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 12, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__34 = ( char *)(&llvm_cbe_nsec[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_4, i8* %%20), !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_147_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_4, ( char *)llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 0, !dbg !13 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__35 = ( char *)(&llvm_cbe_npub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_1, i8* %%21), !dbg !13 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_150_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_1, ( char *)llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 4, !dbg !13 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__36 = ( char *)(&llvm_cbe_npub[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_2, i8* %%22), !dbg !13 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_152_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_2, ( char *)llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 8, !dbg !13 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__37 = ( char *)(&llvm_cbe_npub[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_3, i8* %%23), !dbg !13 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_154_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_3, ( char *)llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 12, !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__38 = ( char *)(&llvm_cbe_npub[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_4, i8* %%24), !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_156_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_4, ( char *)llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__39 = ( char *)(&llvm_cbe_k[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_1, i8* %%25), !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_159_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_1, ( char *)llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 4, !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__40 = ( char *)(&llvm_cbe_k[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_2, i8* %%26), !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_161_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_2, ( char *)llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 8, !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__41 = ( char *)(&llvm_cbe_k[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_3, i8* %%27), !dbg !14 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_163_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_3, ( char *)llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 12, !dbg !15 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__42 = ( char *)(&llvm_cbe_k[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_4, i8* %%28), !dbg !15 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_165_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_4, ( char *)llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE) {
}
  if (((llvm_cbe_decrypt&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__317;
  } else {
    goto llvm_cbe_tmp__318;
  }

llvm_cbe_tmp__317:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = call i32 @crypto_aead_encrypt(i8* %%1, i64* %%clen, i8* %%9, i64 16, i8* %%13, i64 16, i8* %%17, i8* %%21, i8* %%25) nounwind, !dbg !17 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__43 = (unsigned int )crypto_aead_encrypt(( char *)llvm_cbe_tmp__15, (signed long long *)(&llvm_cbe_clen), ( char *)llvm_cbe_tmp__23, 16ull, ( char *)llvm_cbe_tmp__27, 16ull, ( char *)llvm_cbe_tmp__31, ( char *)llvm_cbe_tmp__35, ( char *)llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__43);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%1, align 16, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__44 = (unsigned char )*llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i8 %%32 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__45 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__44&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = shl nuw i32 %%33, 24, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__46 = (unsigned int )llvm_cbe_tmp__45 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 1, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__47 = ( char *)(&llvm_cbe_c[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i8* %%35, align 1, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__48 = (unsigned char )*llvm_cbe_tmp__47;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i8 %%36 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__49 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__48&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = shl nuw nsw i32 %%37, 16, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__50 = (unsigned int )llvm_cbe_tmp__49 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 2, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__51 = ( char *)(&llvm_cbe_c[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load i8* %%39, align 2, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__52 = (unsigned char )*llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = zext i8 %%40 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__53 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__52&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = shl nuw nsw i32 %%41, 8, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__54 = (unsigned int )llvm_cbe_tmp__53 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 3, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__55 = ( char *)(&llvm_cbe_c[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i8* %%43, align 1, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__56 = (unsigned char )*llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = zext i8 %%44 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__57 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__56&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = or i32 %%38, %%34, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__58 = (unsigned int )llvm_cbe_tmp__50 | llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = or i32 %%46, %%45, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__59 = (unsigned int )llvm_cbe_tmp__58 | llvm_cbe_tmp__57;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = or i32 %%47, %%42, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__60 = (unsigned int )llvm_cbe_tmp__59 | llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%48, i32* %%c_1, align 4, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_190_count);
  *llvm_cbe_c_1 = llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__60);

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i8* %%2, align 4, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__61 = (unsigned char )*llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i8 %%49 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__62 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__61&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = shl nuw i32 %%50, 24, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__63 = (unsigned int )llvm_cbe_tmp__62 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 5, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__64 = ( char *)(&llvm_cbe_c[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i8* %%52, align 1, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__65 = (unsigned char )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = zext i8 %%53 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__66 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__65&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = shl nuw nsw i32 %%54, 16, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__67 = (unsigned int )llvm_cbe_tmp__66 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 6, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__68 = ( char *)(&llvm_cbe_c[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load i8* %%56, align 2, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__69 = (unsigned char )*llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = zext i8 %%57 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__70 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__69&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = shl nuw nsw i32 %%58, 8, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__71 = (unsigned int )llvm_cbe_tmp__70 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 7, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__72 = ( char *)(&llvm_cbe_c[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = load i8* %%60, align 1, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__73 = (unsigned char )*llvm_cbe_tmp__72;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = zext i8 %%61 to i32, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__74 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__73&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = or i32 %%55, %%51, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__75 = (unsigned int )llvm_cbe_tmp__67 | llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = or i32 %%63, %%62, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__76 = (unsigned int )llvm_cbe_tmp__75 | llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = or i32 %%64, %%59, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__77 = (unsigned int )llvm_cbe_tmp__76 | llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%65, i32* %%c_2, align 4, !dbg !5 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_208_count);
  *llvm_cbe_c_2 = llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load i8* %%3, align 8, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__78 = (unsigned char )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = zext i8 %%66 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__79 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__78&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = shl nuw i32 %%67, 24, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__80 = (unsigned int )llvm_cbe_tmp__79 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 9, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__81 = ( char *)(&llvm_cbe_c[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load i8* %%69, align 1, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__82 = (unsigned char )*llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = zext i8 %%70 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__83 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__82&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = shl nuw nsw i32 %%71, 16, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__84 = (unsigned int )llvm_cbe_tmp__83 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 10, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_216_count);
  llvm_cbe_tmp__85 = ( char *)(&llvm_cbe_c[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )10ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i8* %%73, align 2, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__86 = (unsigned char )*llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = zext i8 %%74 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_218_count);
  llvm_cbe_tmp__87 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__86&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = shl nuw nsw i32 %%75, 8, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__88 = (unsigned int )llvm_cbe_tmp__87 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 11, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__89 = ( char *)(&llvm_cbe_c[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )11ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load i8* %%77, align 1, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__90 = (unsigned char )*llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = zext i8 %%78 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__91 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__90&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = or i32 %%72, %%68, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__92 = (unsigned int )llvm_cbe_tmp__84 | llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = or i32 %%80, %%79, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__93 = (unsigned int )llvm_cbe_tmp__92 | llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = or i32 %%81, %%76, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_225_count);
  llvm_cbe_tmp__94 = (unsigned int )llvm_cbe_tmp__93 | llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%82, i32* %%c_3, align 4, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_226_count);
  *llvm_cbe_c_3 = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__94);

#ifdef AESL_BC_SIM
  if (!(((signed long long )12ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load i8* %%4, align 4, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__95 = (unsigned char )*llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = zext i8 %%83 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_228_count);
  llvm_cbe_tmp__96 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__95&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = shl nuw i32 %%84, 24, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__97 = (unsigned int )llvm_cbe_tmp__96 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 13, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__98 = ( char *)(&llvm_cbe_c[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )13ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = load i8* %%86, align 1, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__99 = (unsigned char )*llvm_cbe_tmp__98;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = zext i8 %%87 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__100 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__99&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = shl nuw nsw i32 %%88, 16, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__101 = (unsigned int )llvm_cbe_tmp__100 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 14, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__102 = ( char *)(&llvm_cbe_c[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )14ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = load i8* %%90, align 2, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__103 = (unsigned char )*llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = zext i8 %%91 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__104 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__103&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = shl nuw nsw i32 %%92, 8, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__105 = (unsigned int )llvm_cbe_tmp__104 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 15, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__106 = ( char *)(&llvm_cbe_c[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )15ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load i8* %%94, align 1, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_239_count);
  llvm_cbe_tmp__107 = (unsigned char )*llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = zext i8 %%95 to i32, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__108 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__107&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = or i32 %%89, %%85, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__109 = (unsigned int )llvm_cbe_tmp__101 | llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = or i32 %%97, %%96, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_242_count);
  llvm_cbe_tmp__110 = (unsigned int )llvm_cbe_tmp__109 | llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = or i32 %%98, %%93, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_243_count);
  llvm_cbe_tmp__111 = (unsigned int )llvm_cbe_tmp__110 | llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%99, i32* %%c_4, align 4, !dbg !6 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_244_count);
  *llvm_cbe_c_4 = llvm_cbe_tmp__111;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__111);

#ifdef AESL_BC_SIM
  if (!(((signed long long )16ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = load i8* %%5, align 16, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_245_count);
  llvm_cbe_tmp__112 = (unsigned char )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = zext i8 %%100 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_246_count);
  llvm_cbe_tmp__113 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__112&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = shl nuw i32 %%101, 24, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_247_count);
  llvm_cbe_tmp__114 = (unsigned int )llvm_cbe_tmp__113 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 17, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__115 = ( char *)(&llvm_cbe_c[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )17ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = load i8* %%103, align 1, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_249_count);
  llvm_cbe_tmp__116 = (unsigned char )*llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = zext i8 %%104 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__117 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__116&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = shl nuw nsw i32 %%105, 16, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__118 = (unsigned int )llvm_cbe_tmp__117 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 18, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__119 = ( char *)(&llvm_cbe_c[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )18ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load i8* %%107, align 2, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__120 = (unsigned char )*llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = zext i8 %%108 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__121 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__120&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = shl nuw nsw i32 %%109, 8, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__122 = (unsigned int )llvm_cbe_tmp__121 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 19, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__123 = ( char *)(&llvm_cbe_c[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )19ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = load i8* %%111, align 1, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__124 = (unsigned char )*llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = zext i8 %%112 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__125 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__124&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = or i32 %%106, %%102, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__126 = (unsigned int )llvm_cbe_tmp__118 | llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = or i32 %%114, %%113, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__127 = (unsigned int )llvm_cbe_tmp__126 | llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = or i32 %%115, %%110, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__128 = (unsigned int )llvm_cbe_tmp__127 | llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%116, i32* %%c_5, align 4, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_262_count);
  *llvm_cbe_c_5 = llvm_cbe_tmp__128;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__128);

#ifdef AESL_BC_SIM
  if (!(((signed long long )20ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load i8* %%6, align 4, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__129 = (unsigned char )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = zext i8 %%117 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__130 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__129&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = shl nuw i32 %%118, 24, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__131 = (unsigned int )llvm_cbe_tmp__130 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 21, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__132 = ( char *)(&llvm_cbe_c[(((signed long long )21ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )21ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load i8* %%120, align 1, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__133 = (unsigned char )*llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = zext i8 %%121 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__134 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__133&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = shl nuw nsw i32 %%122, 16, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__135 = (unsigned int )llvm_cbe_tmp__134 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 22, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__136 = ( char *)(&llvm_cbe_c[(((signed long long )22ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )22ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load i8* %%124, align 2, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_271_count);
  llvm_cbe_tmp__137 = (unsigned char )*llvm_cbe_tmp__136;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = zext i8 %%125 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__138 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__137&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = shl nuw nsw i32 %%126, 8, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_273_count);
  llvm_cbe_tmp__139 = (unsigned int )llvm_cbe_tmp__138 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 23, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__140 = ( char *)(&llvm_cbe_c[(((signed long long )23ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )23ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = load i8* %%128, align 1, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__141 = (unsigned char )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = zext i8 %%129 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__142 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__141&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = or i32 %%123, %%119, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__143 = (unsigned int )llvm_cbe_tmp__135 | llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = or i32 %%131, %%130, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__144 = (unsigned int )llvm_cbe_tmp__143 | llvm_cbe_tmp__142;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = or i32 %%132, %%127, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_279_count);
  llvm_cbe_tmp__145 = (unsigned int )llvm_cbe_tmp__144 | llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%133, i32* %%c_6, align 4, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_280_count);
  *llvm_cbe_c_6 = llvm_cbe_tmp__145;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__145);

#ifdef AESL_BC_SIM
  if (!(((signed long long )24ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = load i8* %%7, align 8, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__146 = (unsigned char )*llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = zext i8 %%134 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_282_count);
  llvm_cbe_tmp__147 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__146&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = shl nuw i32 %%135, 24, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__148 = (unsigned int )llvm_cbe_tmp__147 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 25, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__149 = ( char *)(&llvm_cbe_c[(((signed long long )25ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )25ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = load i8* %%137, align 1, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__150 = (unsigned char )*llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = zext i8 %%138 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__151 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__150&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = shl nuw nsw i32 %%139, 16, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__152 = (unsigned int )llvm_cbe_tmp__151 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 26, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__153 = ( char *)(&llvm_cbe_c[(((signed long long )26ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )26ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = load i8* %%141, align 2, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_289_count);
  llvm_cbe_tmp__154 = (unsigned char )*llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = zext i8 %%142 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__155 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__154&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = shl nuw nsw i32 %%143, 8, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_291_count);
  llvm_cbe_tmp__156 = (unsigned int )llvm_cbe_tmp__155 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 27, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__157 = ( char *)(&llvm_cbe_c[(((signed long long )27ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )27ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = load i8* %%145, align 1, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__158 = (unsigned char )*llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = zext i8 %%146 to i32, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_294_count);
  llvm_cbe_tmp__159 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__158&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = or i32 %%140, %%136, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_295_count);
  llvm_cbe_tmp__160 = (unsigned int )llvm_cbe_tmp__152 | llvm_cbe_tmp__148;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = or i32 %%148, %%147, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__161 = (unsigned int )llvm_cbe_tmp__160 | llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = or i32 %%149, %%144, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__162 = (unsigned int )llvm_cbe_tmp__161 | llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%150, i32* %%c_7, align 4, !dbg !7 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_298_count);
  *llvm_cbe_c_7 = llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__162);

#ifdef AESL_BC_SIM
  if (!(((signed long long )28ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = load i8* %%8, align 4, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__163 = (unsigned char )*llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = zext i8 %%151 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_300_count);
  llvm_cbe_tmp__164 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__163&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = shl nuw i32 %%152, 24, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__165 = (unsigned int )llvm_cbe_tmp__164 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 29, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__166 = ( char *)(&llvm_cbe_c[(((signed long long )29ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )29ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = load i8* %%154, align 1, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__167 = (unsigned char )*llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = zext i8 %%155 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__168 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__167&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = shl nuw nsw i32 %%156, 16, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__169 = (unsigned int )llvm_cbe_tmp__168 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 30, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__170 = ( char *)(&llvm_cbe_c[(((signed long long )30ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )30ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = load i8* %%158, align 2, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__171 = (unsigned char )*llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = zext i8 %%159 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__172 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__171&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = shl nuw nsw i32 %%160, 8, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__173 = (unsigned int )llvm_cbe_tmp__172 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 31, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_310_count);
  llvm_cbe_tmp__174 = ( char *)(&llvm_cbe_c[(((signed long long )31ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )31ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = load i8* %%162, align 1, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_311_count);
  llvm_cbe_tmp__175 = (unsigned char )*llvm_cbe_tmp__174;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = zext i8 %%163 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_312_count);
  llvm_cbe_tmp__176 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__175&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = or i32 %%157, %%153, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__177 = (unsigned int )llvm_cbe_tmp__169 | llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = or i32 %%165, %%164, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__178 = (unsigned int )llvm_cbe_tmp__177 | llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = or i32 %%166, %%161, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__179 = (unsigned int )llvm_cbe_tmp__178 | llvm_cbe_tmp__173;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__179);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%167, i32* %%c_8, align 4, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_316_count);
  *llvm_cbe_c_8 = llvm_cbe_tmp__179;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__179);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__43;   /* for PHI node */
  goto llvm_cbe_tmp__319;

llvm_cbe_tmp__318:
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = call i32 @crypto_aead_decrypt(i8* %%9, i64* %%mlen, i8* %%17, i8* %%1, i64 32, i8* %%13, i64 16, i8* %%21, i8* %%25) nounwind, !dbg !17 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__180 = (unsigned int )crypto_aead_decrypt(( char *)llvm_cbe_tmp__23, (signed long long *)(&llvm_cbe_mlen), ( char *)llvm_cbe_tmp__31, ( char *)llvm_cbe_tmp__15, 32ull, ( char *)llvm_cbe_tmp__27, 16ull, ( char *)llvm_cbe_tmp__35, ( char *)llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__180);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = load i8* %%9, align 16, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__181 = (unsigned char )*llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = zext i8 %%170 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__182 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__181&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = shl nuw i32 %%171, 24, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__183 = (unsigned int )llvm_cbe_tmp__182 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 1, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_324_count);
  llvm_cbe_tmp__184 = ( char *)(&llvm_cbe_m[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = load i8* %%173, align 1, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__185 = (unsigned char )*llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = zext i8 %%174 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__186 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__185&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = shl nuw nsw i32 %%175, 16, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_327_count);
  llvm_cbe_tmp__187 = (unsigned int )llvm_cbe_tmp__186 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%177 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 2, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_328_count);
  llvm_cbe_tmp__188 = ( char *)(&llvm_cbe_m[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = load i8* %%177, align 2, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_329_count);
  llvm_cbe_tmp__189 = (unsigned char )*llvm_cbe_tmp__188;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = zext i8 %%178 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_330_count);
  llvm_cbe_tmp__190 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__189&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = shl nuw nsw i32 %%179, 8, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_331_count);
  llvm_cbe_tmp__191 = (unsigned int )llvm_cbe_tmp__190 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 3, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_332_count);
  llvm_cbe_tmp__192 = ( char *)(&llvm_cbe_m[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = load i8* %%181, align 1, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_333_count);
  llvm_cbe_tmp__193 = (unsigned char )*llvm_cbe_tmp__192;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = zext i8 %%182 to i32, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_334_count);
  llvm_cbe_tmp__194 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__193&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = or i32 %%176, %%172, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__195 = (unsigned int )llvm_cbe_tmp__187 | llvm_cbe_tmp__183;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = or i32 %%184, %%183, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_336_count);
  llvm_cbe_tmp__196 = (unsigned int )llvm_cbe_tmp__195 | llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = or i32 %%185, %%180, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_337_count);
  llvm_cbe_tmp__197 = (unsigned int )llvm_cbe_tmp__196 | llvm_cbe_tmp__191;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%186, i32* %%m_1, align 4, !dbg !8 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_338_count);
  *llvm_cbe_m_1 = llvm_cbe_tmp__197;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__197);

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = load i8* %%10, align 4, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__198 = (unsigned char )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = zext i8 %%187 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__199 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__198&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = shl nuw i32 %%188, 24, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__200 = (unsigned int )llvm_cbe_tmp__199 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 5, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_342_count);
  llvm_cbe_tmp__201 = ( char *)(&llvm_cbe_m[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = load i8* %%190, align 1, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_343_count);
  llvm_cbe_tmp__202 = (unsigned char )*llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = zext i8 %%191 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__203 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__202&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = shl nuw nsw i32 %%192, 16, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_345_count);
  llvm_cbe_tmp__204 = (unsigned int )llvm_cbe_tmp__203 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 6, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_346_count);
  llvm_cbe_tmp__205 = ( char *)(&llvm_cbe_m[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = load i8* %%194, align 2, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_347_count);
  llvm_cbe_tmp__206 = (unsigned char )*llvm_cbe_tmp__205;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%196 = zext i8 %%195 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_348_count);
  llvm_cbe_tmp__207 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__206&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = shl nuw nsw i32 %%196, 8, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_349_count);
  llvm_cbe_tmp__208 = (unsigned int )llvm_cbe_tmp__207 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%198 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 7, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_350_count);
  llvm_cbe_tmp__209 = ( char *)(&llvm_cbe_m[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%199 = load i8* %%198, align 1, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__210 = (unsigned char )*llvm_cbe_tmp__209;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%200 = zext i8 %%199 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__211 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__210&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = or i32 %%193, %%189, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__212 = (unsigned int )llvm_cbe_tmp__204 | llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = or i32 %%201, %%200, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_354_count);
  llvm_cbe_tmp__213 = (unsigned int )llvm_cbe_tmp__212 | llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = or i32 %%202, %%197, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_355_count);
  llvm_cbe_tmp__214 = (unsigned int )llvm_cbe_tmp__213 | llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%203, i32* %%m_2, align 4, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_356_count);
  *llvm_cbe_m_2 = llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = load i8* %%11, align 8, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_357_count);
  llvm_cbe_tmp__215 = (unsigned char )*llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = zext i8 %%204 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_358_count);
  llvm_cbe_tmp__216 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__215&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = shl nuw i32 %%205, 24, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_359_count);
  llvm_cbe_tmp__217 = (unsigned int )llvm_cbe_tmp__216 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%207 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 9, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_360_count);
  llvm_cbe_tmp__218 = ( char *)(&llvm_cbe_m[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = load i8* %%207, align 1, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_361_count);
  llvm_cbe_tmp__219 = (unsigned char )*llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = zext i8 %%208 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__220 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__219&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%210 = shl nuw nsw i32 %%209, 16, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__221 = (unsigned int )llvm_cbe_tmp__220 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%211 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 10, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__222 = ( char *)(&llvm_cbe_m[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )10ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%212 = load i8* %%211, align 2, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__223 = (unsigned char )*llvm_cbe_tmp__222;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%213 = zext i8 %%212 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__224 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__223&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = shl nuw nsw i32 %%213, 8, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__225 = (unsigned int )llvm_cbe_tmp__224 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 11, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__226 = ( char *)(&llvm_cbe_m[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )11ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = load i8* %%215, align 1, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__227 = (unsigned char )*llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n  %%217 = zext i8 %%216 to i32, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__228 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__227&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%218 = or i32 %%210, %%206, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__229 = (unsigned int )llvm_cbe_tmp__221 | llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__229);
if (AESL_DEBUG_TRACE)
printf("\n  %%219 = or i32 %%218, %%217, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_372_count);
  llvm_cbe_tmp__230 = (unsigned int )llvm_cbe_tmp__229 | llvm_cbe_tmp__228;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__230);
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = or i32 %%219, %%214, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_373_count);
  llvm_cbe_tmp__231 = (unsigned int )llvm_cbe_tmp__230 | llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%220, i32* %%m_3, align 4, !dbg !9 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_374_count);
  *llvm_cbe_m_3 = llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__231);

#ifdef AESL_BC_SIM
  if (!(((signed long long )12ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = load i8* %%12, align 4, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_375_count);
  llvm_cbe_tmp__232 = (unsigned char )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__232);
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = zext i8 %%221 to i32, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_376_count);
  llvm_cbe_tmp__233 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__232&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n  %%223 = shl nuw i32 %%222, 24, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__234 = (unsigned int )llvm_cbe_tmp__233 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 13, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__235 = ( char *)(&llvm_cbe_m[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )13ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = load i8* %%224, align 1, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_379_count);
  llvm_cbe_tmp__236 = (unsigned char )*llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%226 = zext i8 %%225 to i32, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_380_count);
  llvm_cbe_tmp__237 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__236&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%227 = shl nuw nsw i32 %%226, 16, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_381_count);
  llvm_cbe_tmp__238 = (unsigned int )llvm_cbe_tmp__237 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__238);
if (AESL_DEBUG_TRACE)
printf("\n  %%228 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 14, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_382_count);
  llvm_cbe_tmp__239 = ( char *)(&llvm_cbe_m[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )14ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%229 = load i8* %%228, align 2, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_383_count);
  llvm_cbe_tmp__240 = (unsigned char )*llvm_cbe_tmp__239;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%230 = zext i8 %%229 to i32, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_384_count);
  llvm_cbe_tmp__241 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__240&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  %%231 = shl nuw nsw i32 %%230, 8, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__242 = (unsigned int )llvm_cbe_tmp__241 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%232 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 15, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__243 = ( char *)(&llvm_cbe_m[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )15ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%233 = load i8* %%232, align 1, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__244 = (unsigned char )*llvm_cbe_tmp__243;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__244);
if (AESL_DEBUG_TRACE)
printf("\n  %%234 = zext i8 %%233 to i32, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_388_count);
  llvm_cbe_tmp__245 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__244&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%235 = or i32 %%227, %%223, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__246 = (unsigned int )llvm_cbe_tmp__238 | llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%236 = or i32 %%235, %%234, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__247 = (unsigned int )llvm_cbe_tmp__246 | llvm_cbe_tmp__245;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n  %%237 = or i32 %%236, %%231, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__248 = (unsigned int )llvm_cbe_tmp__247 | llvm_cbe_tmp__242;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%237, i32* %%m_4, align 4, !dbg !10 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_392_count);
  *llvm_cbe_m_4 = llvm_cbe_tmp__248;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__248);

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%238 = load i8* %%17, align 16, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_393_count);
  llvm_cbe_tmp__249 = (unsigned char )*llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__249);
if (AESL_DEBUG_TRACE)
printf("\n  %%239 = zext i8 %%238 to i32, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_394_count);
  llvm_cbe_tmp__250 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__249&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n  %%240 = shl nuw i32 %%239, 24, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_395_count);
  llvm_cbe_tmp__251 = (unsigned int )llvm_cbe_tmp__250 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%241 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 1, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_396_count);
  llvm_cbe_tmp__252 = ( char *)(&llvm_cbe_nsec[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%242 = load i8* %%241, align 1, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_397_count);
  llvm_cbe_tmp__253 = (unsigned char )*llvm_cbe_tmp__252;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__253);
if (AESL_DEBUG_TRACE)
printf("\n  %%243 = zext i8 %%242 to i32, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_398_count);
  llvm_cbe_tmp__254 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__253&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%244 = shl nuw nsw i32 %%243, 16, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_399_count);
  llvm_cbe_tmp__255 = (unsigned int )llvm_cbe_tmp__254 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__255);
if (AESL_DEBUG_TRACE)
printf("\n  %%245 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 2, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__256 = ( char *)(&llvm_cbe_nsec[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%246 = load i8* %%245, align 2, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_401_count);
  llvm_cbe_tmp__257 = (unsigned char )*llvm_cbe_tmp__256;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n  %%247 = zext i8 %%246 to i32, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__258 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__257&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__258);
if (AESL_DEBUG_TRACE)
printf("\n  %%248 = shl nuw nsw i32 %%247, 8, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_403_count);
  llvm_cbe_tmp__259 = (unsigned int )llvm_cbe_tmp__258 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__259);
if (AESL_DEBUG_TRACE)
printf("\n  %%249 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 3, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__260 = ( char *)(&llvm_cbe_nsec[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%250 = load i8* %%249, align 1, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__261 = (unsigned char )*llvm_cbe_tmp__260;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%251 = zext i8 %%250 to i32, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__262 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__261&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n  %%252 = or i32 %%244, %%240, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__263 = (unsigned int )llvm_cbe_tmp__255 | llvm_cbe_tmp__251;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__263);
if (AESL_DEBUG_TRACE)
printf("\n  %%253 = or i32 %%252, %%251, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__264 = (unsigned int )llvm_cbe_tmp__263 | llvm_cbe_tmp__262;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  %%254 = or i32 %%253, %%248, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__265 = (unsigned int )llvm_cbe_tmp__264 | llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__265);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%254, i32* %%nsec_1, align 4, !dbg !11 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_410_count);
  *llvm_cbe_nsec_1 = llvm_cbe_tmp__265;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__265);

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%255 = load i8* %%18, align 4, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_411_count);
  llvm_cbe_tmp__266 = (unsigned char )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%256 = zext i8 %%255 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_412_count);
  llvm_cbe_tmp__267 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__266&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__267);
if (AESL_DEBUG_TRACE)
printf("\n  %%257 = shl nuw i32 %%256, 24, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_413_count);
  llvm_cbe_tmp__268 = (unsigned int )llvm_cbe_tmp__267 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n  %%258 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 5, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__269 = ( char *)(&llvm_cbe_nsec[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%259 = load i8* %%258, align 1, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_415_count);
  llvm_cbe_tmp__270 = (unsigned char )*llvm_cbe_tmp__269;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__270);
if (AESL_DEBUG_TRACE)
printf("\n  %%260 = zext i8 %%259 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__271 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__270&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE)
printf("\n  %%261 = shl nuw nsw i32 %%260, 16, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_417_count);
  llvm_cbe_tmp__272 = (unsigned int )llvm_cbe_tmp__271 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__272);
if (AESL_DEBUG_TRACE)
printf("\n  %%262 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 6, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__273 = ( char *)(&llvm_cbe_nsec[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%263 = load i8* %%262, align 2, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__274 = (unsigned char )*llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%264 = zext i8 %%263 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__275 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__274&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__275);
if (AESL_DEBUG_TRACE)
printf("\n  %%265 = shl nuw nsw i32 %%264, 8, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_421_count);
  llvm_cbe_tmp__276 = (unsigned int )llvm_cbe_tmp__275 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%266 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 7, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__277 = ( char *)(&llvm_cbe_nsec[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%267 = load i8* %%266, align 1, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__278 = (unsigned char )*llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__278);
if (AESL_DEBUG_TRACE)
printf("\n  %%268 = zext i8 %%267 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__279 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__278&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__279);
if (AESL_DEBUG_TRACE)
printf("\n  %%269 = or i32 %%261, %%257, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__280 = (unsigned int )llvm_cbe_tmp__272 | llvm_cbe_tmp__268;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__280);
if (AESL_DEBUG_TRACE)
printf("\n  %%270 = or i32 %%269, %%268, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_426_count);
  llvm_cbe_tmp__281 = (unsigned int )llvm_cbe_tmp__280 | llvm_cbe_tmp__279;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%271 = or i32 %%270, %%265, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_427_count);
  llvm_cbe_tmp__282 = (unsigned int )llvm_cbe_tmp__281 | llvm_cbe_tmp__276;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%271, i32* %%nsec_2, align 4, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_428_count);
  *llvm_cbe_nsec_2 = llvm_cbe_tmp__282;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__282);

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%272 = load i8* %%19, align 8, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__283 = (unsigned char )*llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__283);
if (AESL_DEBUG_TRACE)
printf("\n  %%273 = zext i8 %%272 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__284 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__283&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%274 = shl nuw i32 %%273, 24, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_431_count);
  llvm_cbe_tmp__285 = (unsigned int )llvm_cbe_tmp__284 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%275 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 9, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_432_count);
  llvm_cbe_tmp__286 = ( char *)(&llvm_cbe_nsec[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%276 = load i8* %%275, align 1, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__287 = (unsigned char )*llvm_cbe_tmp__286;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__287);
if (AESL_DEBUG_TRACE)
printf("\n  %%277 = zext i8 %%276 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__288 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__287&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);
if (AESL_DEBUG_TRACE)
printf("\n  %%278 = shl nuw nsw i32 %%277, 16, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_435_count);
  llvm_cbe_tmp__289 = (unsigned int )llvm_cbe_tmp__288 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%279 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 10, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_436_count);
  llvm_cbe_tmp__290 = ( char *)(&llvm_cbe_nsec[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )10ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%280 = load i8* %%279, align 2, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_437_count);
  llvm_cbe_tmp__291 = (unsigned char )*llvm_cbe_tmp__290;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  %%281 = zext i8 %%280 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__292 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__291&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__292);
if (AESL_DEBUG_TRACE)
printf("\n  %%282 = shl nuw nsw i32 %%281, 8, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_439_count);
  llvm_cbe_tmp__293 = (unsigned int )llvm_cbe_tmp__292 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%283 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 11, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_440_count);
  llvm_cbe_tmp__294 = ( char *)(&llvm_cbe_nsec[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )11ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%284 = load i8* %%283, align 1, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__295 = (unsigned char )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%285 = zext i8 %%284 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__296 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__295&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__296);
if (AESL_DEBUG_TRACE)
printf("\n  %%286 = or i32 %%278, %%274, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_443_count);
  llvm_cbe_tmp__297 = (unsigned int )llvm_cbe_tmp__289 | llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n  %%287 = or i32 %%286, %%285, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_444_count);
  llvm_cbe_tmp__298 = (unsigned int )llvm_cbe_tmp__297 | llvm_cbe_tmp__296;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__298);
if (AESL_DEBUG_TRACE)
printf("\n  %%288 = or i32 %%287, %%282, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_445_count);
  llvm_cbe_tmp__299 = (unsigned int )llvm_cbe_tmp__298 | llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__299);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%288, i32* %%nsec_3, align 4, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_446_count);
  *llvm_cbe_nsec_3 = llvm_cbe_tmp__299;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__299);

#ifdef AESL_BC_SIM
  if (!(((signed long long )12ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%289 = load i8* %%20, align 4, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__300 = (unsigned char )*llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__300);
if (AESL_DEBUG_TRACE)
printf("\n  %%290 = zext i8 %%289 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_448_count);
  llvm_cbe_tmp__301 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__300&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%291 = shl nuw i32 %%290, 24, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__302 = (unsigned int )llvm_cbe_tmp__301 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__302);
if (AESL_DEBUG_TRACE)
printf("\n  %%292 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 13, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__303 = ( char *)(&llvm_cbe_nsec[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )13ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%293 = load i8* %%292, align 1, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__304 = (unsigned char )*llvm_cbe_tmp__303;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__304);
if (AESL_DEBUG_TRACE)
printf("\n  %%294 = zext i8 %%293 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_452_count);
  llvm_cbe_tmp__305 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__304&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%295 = shl nuw nsw i32 %%294, 16, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_453_count);
  llvm_cbe_tmp__306 = (unsigned int )llvm_cbe_tmp__305 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%296 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 14, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_454_count);
  llvm_cbe_tmp__307 = ( char *)(&llvm_cbe_nsec[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )14ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%297 = load i8* %%296, align 2, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_455_count);
  llvm_cbe_tmp__308 = (unsigned char )*llvm_cbe_tmp__307;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__308);
if (AESL_DEBUG_TRACE)
printf("\n  %%298 = zext i8 %%297 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_456_count);
  llvm_cbe_tmp__309 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__308&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__309);
if (AESL_DEBUG_TRACE)
printf("\n  %%299 = shl nuw nsw i32 %%298, 8, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_457_count);
  llvm_cbe_tmp__310 = (unsigned int )llvm_cbe_tmp__309 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n  %%300 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 15, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_458_count);
  llvm_cbe_tmp__311 = ( char *)(&llvm_cbe_nsec[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )15ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%301 = load i8* %%300, align 1, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_459_count);
  llvm_cbe_tmp__312 = (unsigned char )*llvm_cbe_tmp__311;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__312);
if (AESL_DEBUG_TRACE)
printf("\n  %%302 = zext i8 %%301 to i32, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__313 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__312&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%303 = or i32 %%295, %%291, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_461_count);
  llvm_cbe_tmp__314 = (unsigned int )llvm_cbe_tmp__306 | llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__314);
if (AESL_DEBUG_TRACE)
printf("\n  %%304 = or i32 %%303, %%302, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_462_count);
  llvm_cbe_tmp__315 = (unsigned int )llvm_cbe_tmp__314 | llvm_cbe_tmp__313;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__315);
if (AESL_DEBUG_TRACE)
printf("\n  %%305 = or i32 %%304, %%299, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_463_count);
  llvm_cbe_tmp__316 = (unsigned int )llvm_cbe_tmp__315 | llvm_cbe_tmp__310;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%305, i32* %%nsec_4, align 4, !dbg !12 for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_464_count);
  *llvm_cbe_nsec_4 = llvm_cbe_tmp__316;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__316);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__180;   /* for PHI node */
  goto llvm_cbe_tmp__319;

llvm_cbe_tmp__319:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%31, %%30 ], [ %%169, %%168  for 0x%I64xth hint within @axi_ascon  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__43);
printf("\n = 0x%X",llvm_cbe_tmp__180);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @axi_ascon}\n");
  return llvm_cbe_storemerge;
}


signed int wrapper_axi_encrypt(signed int *llvm_cbe_c_1, signed int *llvm_cbe_c_2, signed int *llvm_cbe_c_3, signed int *llvm_cbe_c_4, signed int *llvm_cbe_c_5, signed int *llvm_cbe_c_6, signed int *llvm_cbe_c_7, signed int *llvm_cbe_c_8, signed int *llvm_cbe_m_1, signed int *llvm_cbe_m_2, signed int *llvm_cbe_m_3, signed int *llvm_cbe_m_4, signed int *llvm_cbe_ad_1, signed int *llvm_cbe_ad_2, signed int *llvm_cbe_ad_3, signed int *llvm_cbe_ad_4, signed int *llvm_cbe_nsec_1, signed int *llvm_cbe_nsec_2, signed int *llvm_cbe_nsec_3, signed int *llvm_cbe_nsec_4, signed int *llvm_cbe_npub_1, signed int *llvm_cbe_npub_2, signed int *llvm_cbe_npub_3, signed int *llvm_cbe_npub_4, signed int *llvm_cbe_k_1, signed int *llvm_cbe_k_2, signed int *llvm_cbe_k_3, signed int *llvm_cbe_k_4) {
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
   char llvm_cbe_c[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
   char llvm_cbe_m[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_count = 0;
   char llvm_cbe_ad[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_count = 0;
   char llvm_cbe_nsec[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_count = 0;
   char llvm_cbe_npub[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_count = 0;
   char llvm_cbe_k[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_clen_count = 0;
  signed long long llvm_cbe_clen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
   char *llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
   char *llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
   char *llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
   char *llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
   char *llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
   char *llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
   char *llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
   char *llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
   char *llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
   char *llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
   char *llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
   char *llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
   char *llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
   char *llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
   char *llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
   char *llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
   char *llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
   char *llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
   char *llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
   char *llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
   char *llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  unsigned int llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  unsigned char llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  unsigned int llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  unsigned int llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
   char *llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  unsigned char llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  unsigned int llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  unsigned int llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
   char *llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  unsigned char llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  unsigned int llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  unsigned int llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
   char *llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  unsigned char llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  unsigned int llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  unsigned int llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  unsigned int llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  unsigned int llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
   char *llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  unsigned char llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  unsigned int llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  unsigned int llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
   char *llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  unsigned char llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  unsigned int llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  unsigned int llvm_cbe_tmp__366;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
   char *llvm_cbe_tmp__367;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  unsigned char llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  unsigned int llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  unsigned int llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
   char *llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  unsigned char llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  unsigned int llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  unsigned int llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  unsigned int llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  unsigned int llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
   char *llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  unsigned char llvm_cbe_tmp__378;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  unsigned int llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  unsigned int llvm_cbe_tmp__380;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
   char *llvm_cbe_tmp__381;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  unsigned char llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  unsigned int llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  unsigned int llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
   char *llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  unsigned char llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  unsigned int llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  unsigned int llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
   char *llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  unsigned char llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  unsigned int llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  unsigned int llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  unsigned int llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  unsigned int llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
   char *llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  unsigned char llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  unsigned int llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  unsigned int llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
   char *llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  unsigned char llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  unsigned int llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  unsigned int llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
   char *llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  unsigned char llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  unsigned int llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  unsigned int llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
   char *llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  unsigned char llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  unsigned int llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  unsigned int llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  unsigned int llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  unsigned int llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
   char *llvm_cbe_tmp__413;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  unsigned char llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  unsigned int llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  unsigned int llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
   char *llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  unsigned char llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  unsigned int llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  unsigned int llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
   char *llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  unsigned char llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  unsigned int llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  unsigned int llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
   char *llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  unsigned char llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  unsigned int llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  unsigned int llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  unsigned int llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  unsigned int llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
   char *llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  unsigned char llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  unsigned int llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  unsigned int llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
   char *llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  unsigned char llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  unsigned int llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  unsigned int llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
   char *llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  unsigned char llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  unsigned int llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  unsigned int llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
   char *llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  unsigned char llvm_cbe_tmp__444;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  unsigned int llvm_cbe_tmp__445;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  unsigned int llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  unsigned int llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  unsigned int llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
   char *llvm_cbe_tmp__449;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  unsigned char llvm_cbe_tmp__450;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  unsigned int llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  unsigned int llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
   char *llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  unsigned char llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  unsigned int llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  unsigned int llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
   char *llvm_cbe_tmp__457;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  unsigned char llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  unsigned int llvm_cbe_tmp__459;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  unsigned int llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
   char *llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  unsigned char llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  unsigned int llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  unsigned int llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  unsigned int llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  unsigned int llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
   char *llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  unsigned char llvm_cbe_tmp__468;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  unsigned int llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  unsigned int llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
   char *llvm_cbe_tmp__471;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  unsigned char llvm_cbe_tmp__472;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  unsigned int llvm_cbe_tmp__473;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  unsigned int llvm_cbe_tmp__474;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
   char *llvm_cbe_tmp__475;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  unsigned char llvm_cbe_tmp__476;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  unsigned int llvm_cbe_tmp__477;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  unsigned int llvm_cbe_tmp__478;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
   char *llvm_cbe_tmp__479;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  unsigned char llvm_cbe_tmp__480;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  unsigned int llvm_cbe_tmp__481;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  unsigned int llvm_cbe_tmp__482;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  unsigned int llvm_cbe_tmp__483;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  unsigned int llvm_cbe_tmp__484;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @wrapper_axi_encrypt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__320 = ( char *)(&llvm_cbe_m[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_1, i8* %%1), !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_526_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_1, ( char *)llvm_cbe_tmp__320);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 4, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__321 = ( char *)(&llvm_cbe_m[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_2, i8* %%2), !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_528_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_2, ( char *)llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 8, !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_529_count);
  llvm_cbe_tmp__322 = ( char *)(&llvm_cbe_m[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_3, i8* %%3), !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_530_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_3, ( char *)llvm_cbe_tmp__322);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 12, !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_531_count);
  llvm_cbe_tmp__323 = ( char *)(&llvm_cbe_m[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%m_4, i8* %%4), !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_532_count);
  uint32ToByteArray((signed int *)llvm_cbe_m_4, ( char *)llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_534_count);
  llvm_cbe_tmp__324 = ( char *)(&llvm_cbe_ad[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_1, i8* %%5), !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_535_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_1, ( char *)llvm_cbe_tmp__324);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 4, !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_536_count);
  llvm_cbe_tmp__325 = ( char *)(&llvm_cbe_ad[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_2, i8* %%6), !dbg !8 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_537_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_2, ( char *)llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 8, !dbg !9 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__326 = ( char *)(&llvm_cbe_ad[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_3, i8* %%7), !dbg !9 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_539_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_3, ( char *)llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 12, !dbg !9 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__327 = ( char *)(&llvm_cbe_ad[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_4, i8* %%8), !dbg !9 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_541_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_4, ( char *)llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_543_count);
  llvm_cbe_tmp__328 = ( char *)(&llvm_cbe_nsec[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_1, i8* %%9), !dbg !9 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_544_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_1, ( char *)llvm_cbe_tmp__328);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_545_count);
  llvm_cbe_tmp__329 = ( char *)(&llvm_cbe_nsec[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_2, i8* %%10), !dbg !10 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_546_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_2, ( char *)llvm_cbe_tmp__329);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 8, !dbg !10 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_547_count);
  llvm_cbe_tmp__330 = ( char *)(&llvm_cbe_nsec[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_3, i8* %%11), !dbg !10 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_548_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_3, ( char *)llvm_cbe_tmp__330);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 12, !dbg !10 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__331 = ( char *)(&llvm_cbe_nsec[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%nsec_4, i8* %%12), !dbg !10 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_550_count);
  uint32ToByteArray((signed int *)llvm_cbe_nsec_4, ( char *)llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 0, !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_552_count);
  llvm_cbe_tmp__332 = ( char *)(&llvm_cbe_npub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_1, i8* %%13), !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_553_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_1, ( char *)llvm_cbe_tmp__332);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 4, !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_554_count);
  llvm_cbe_tmp__333 = ( char *)(&llvm_cbe_npub[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_2, i8* %%14), !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_555_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_2, ( char *)llvm_cbe_tmp__333);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 8, !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_556_count);
  llvm_cbe_tmp__334 = ( char *)(&llvm_cbe_npub[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_3, i8* %%15), !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_557_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_3, ( char *)llvm_cbe_tmp__334);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 12, !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_558_count);
  llvm_cbe_tmp__335 = ( char *)(&llvm_cbe_npub[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_4, i8* %%16), !dbg !11 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_559_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_4, ( char *)llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 0, !dbg !12 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_561_count);
  llvm_cbe_tmp__336 = ( char *)(&llvm_cbe_k[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_1, i8* %%17), !dbg !12 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_562_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_1, ( char *)llvm_cbe_tmp__336);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 4, !dbg !12 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_563_count);
  llvm_cbe_tmp__337 = ( char *)(&llvm_cbe_k[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_2, i8* %%18), !dbg !12 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_564_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_2, ( char *)llvm_cbe_tmp__337);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 8, !dbg !12 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__338 = ( char *)(&llvm_cbe_k[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_3, i8* %%19), !dbg !12 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_566_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_3, ( char *)llvm_cbe_tmp__338);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 12, !dbg !13 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_567_count);
  llvm_cbe_tmp__339 = ( char *)(&llvm_cbe_k[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_4, i8* %%20), !dbg !13 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_568_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_4, ( char *)llvm_cbe_tmp__339);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_570_count);
  llvm_cbe_tmp__340 = ( char *)(&llvm_cbe_c[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i32 @crypto_aead_encrypt(i8* %%21, i64* %%clen, i8* %%1, i64 16, i8* %%5, i64 16, i8* %%9, i8* %%13, i8* %%17) nounwind, !dbg !15 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_571_count);
  llvm_cbe_tmp__341 = (unsigned int )crypto_aead_encrypt(( char *)llvm_cbe_tmp__340, (signed long long *)(&llvm_cbe_clen), ( char *)llvm_cbe_tmp__320, 16ull, ( char *)llvm_cbe_tmp__324, 16ull, ( char *)llvm_cbe_tmp__328, ( char *)llvm_cbe_tmp__332, ( char *)llvm_cbe_tmp__336);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__341);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i8* %%21, align 16, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_574_count);
  llvm_cbe_tmp__342 = (unsigned char )*llvm_cbe_tmp__340;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__342);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = zext i8 %%23 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__343 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__342&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__343);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = shl nuw i32 %%24, 24, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__344 = (unsigned int )llvm_cbe_tmp__343 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 1, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__345 = ( char *)(&llvm_cbe_c[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i8* %%26, align 1, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__346 = (unsigned char )*llvm_cbe_tmp__345;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__346);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = zext i8 %%27 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_579_count);
  llvm_cbe_tmp__347 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__346&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__347);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = shl nuw nsw i32 %%28, 16, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_580_count);
  llvm_cbe_tmp__348 = (unsigned int )llvm_cbe_tmp__347 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__348);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 2, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_581_count);
  llvm_cbe_tmp__349 = ( char *)(&llvm_cbe_c[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i8* %%30, align 2, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_582_count);
  llvm_cbe_tmp__350 = (unsigned char )*llvm_cbe_tmp__349;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__350);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i8 %%31 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_583_count);
  llvm_cbe_tmp__351 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__350&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__351);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = shl nuw nsw i32 %%32, 8, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_584_count);
  llvm_cbe_tmp__352 = (unsigned int )llvm_cbe_tmp__351 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__352);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 3, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_585_count);
  llvm_cbe_tmp__353 = ( char *)(&llvm_cbe_c[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i8* %%34, align 1, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_586_count);
  llvm_cbe_tmp__354 = (unsigned char )*llvm_cbe_tmp__353;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__354);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = zext i8 %%35 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_587_count);
  llvm_cbe_tmp__355 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__354&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__355);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = or i32 %%29, %%25, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_588_count);
  llvm_cbe_tmp__356 = (unsigned int )llvm_cbe_tmp__348 | llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__356);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = or i32 %%37, %%36, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_589_count);
  llvm_cbe_tmp__357 = (unsigned int )llvm_cbe_tmp__356 | llvm_cbe_tmp__355;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__357);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = or i32 %%38, %%33, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_590_count);
  llvm_cbe_tmp__358 = (unsigned int )llvm_cbe_tmp__357 | llvm_cbe_tmp__352;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__358);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%39, i32* %%c_1, align 4, !dbg !4 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_591_count);
  *llvm_cbe_c_1 = llvm_cbe_tmp__358;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__358);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__359 = ( char *)(&llvm_cbe_c[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i8* %%40, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__360 = (unsigned char )*llvm_cbe_tmp__359;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__360);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i8 %%41 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_594_count);
  llvm_cbe_tmp__361 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__360&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__361);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = shl nuw i32 %%42, 24, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_595_count);
  llvm_cbe_tmp__362 = (unsigned int )llvm_cbe_tmp__361 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__362);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 5, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_596_count);
  llvm_cbe_tmp__363 = ( char *)(&llvm_cbe_c[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = load i8* %%44, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_597_count);
  llvm_cbe_tmp__364 = (unsigned char )*llvm_cbe_tmp__363;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__364);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = zext i8 %%45 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_598_count);
  llvm_cbe_tmp__365 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__364&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__365);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = shl nuw nsw i32 %%46, 16, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_599_count);
  llvm_cbe_tmp__366 = (unsigned int )llvm_cbe_tmp__365 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__366);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 6, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_600_count);
  llvm_cbe_tmp__367 = ( char *)(&llvm_cbe_c[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i8* %%48, align 2, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_601_count);
  llvm_cbe_tmp__368 = (unsigned char )*llvm_cbe_tmp__367;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__368);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i8 %%49 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_602_count);
  llvm_cbe_tmp__369 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__368&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__369);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = shl nuw nsw i32 %%50, 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_603_count);
  llvm_cbe_tmp__370 = (unsigned int )llvm_cbe_tmp__369 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__370);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 7, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_604_count);
  llvm_cbe_tmp__371 = ( char *)(&llvm_cbe_c[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i8* %%52, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_605_count);
  llvm_cbe_tmp__372 = (unsigned char )*llvm_cbe_tmp__371;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__372);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = zext i8 %%53 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_606_count);
  llvm_cbe_tmp__373 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__372&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__373);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = or i32 %%47, %%43, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_607_count);
  llvm_cbe_tmp__374 = (unsigned int )llvm_cbe_tmp__366 | llvm_cbe_tmp__362;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__374);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = or i32 %%55, %%54, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_608_count);
  llvm_cbe_tmp__375 = (unsigned int )llvm_cbe_tmp__374 | llvm_cbe_tmp__373;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = or i32 %%56, %%51, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_609_count);
  llvm_cbe_tmp__376 = (unsigned int )llvm_cbe_tmp__375 | llvm_cbe_tmp__370;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%57, i32* %%c_2, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_610_count);
  *llvm_cbe_c_2 = llvm_cbe_tmp__376;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__377 = ( char *)(&llvm_cbe_c[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i8* %%58, align 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__378 = (unsigned char )*llvm_cbe_tmp__377;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__378);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = zext i8 %%59 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_613_count);
  llvm_cbe_tmp__379 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__378&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__379);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = shl nuw i32 %%60, 24, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_614_count);
  llvm_cbe_tmp__380 = (unsigned int )llvm_cbe_tmp__379 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__380);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 9, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_615_count);
  llvm_cbe_tmp__381 = ( char *)(&llvm_cbe_c[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load i8* %%62, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_616_count);
  llvm_cbe_tmp__382 = (unsigned char )*llvm_cbe_tmp__381;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__382);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = zext i8 %%63 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_617_count);
  llvm_cbe_tmp__383 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__382&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__383);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = shl nuw nsw i32 %%64, 16, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_618_count);
  llvm_cbe_tmp__384 = (unsigned int )llvm_cbe_tmp__383 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__384);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 10, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_619_count);
  llvm_cbe_tmp__385 = ( char *)(&llvm_cbe_c[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )10ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i8* %%66, align 2, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__386 = (unsigned char )*llvm_cbe_tmp__385;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__386);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i8 %%67 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_621_count);
  llvm_cbe_tmp__387 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__386&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = shl nuw nsw i32 %%68, 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_622_count);
  llvm_cbe_tmp__388 = (unsigned int )llvm_cbe_tmp__387 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__388);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 11, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_623_count);
  llvm_cbe_tmp__389 = ( char *)(&llvm_cbe_c[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )11ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load i8* %%70, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_624_count);
  llvm_cbe_tmp__390 = (unsigned char )*llvm_cbe_tmp__389;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__390);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = zext i8 %%71 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_625_count);
  llvm_cbe_tmp__391 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__390&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__391);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = or i32 %%65, %%61, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_626_count);
  llvm_cbe_tmp__392 = (unsigned int )llvm_cbe_tmp__384 | llvm_cbe_tmp__380;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__392);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = or i32 %%73, %%72, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_627_count);
  llvm_cbe_tmp__393 = (unsigned int )llvm_cbe_tmp__392 | llvm_cbe_tmp__391;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__393);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = or i32 %%74, %%69, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_628_count);
  llvm_cbe_tmp__394 = (unsigned int )llvm_cbe_tmp__393 | llvm_cbe_tmp__388;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__394);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%75, i32* %%c_3, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_629_count);
  *llvm_cbe_c_3 = llvm_cbe_tmp__394;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__394);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 12, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_630_count);
  llvm_cbe_tmp__395 = ( char *)(&llvm_cbe_c[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )12ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load i8* %%76, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_631_count);
  llvm_cbe_tmp__396 = (unsigned char )*llvm_cbe_tmp__395;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__396);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = zext i8 %%77 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_632_count);
  llvm_cbe_tmp__397 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__396&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__397);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = shl nuw i32 %%78, 24, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_633_count);
  llvm_cbe_tmp__398 = (unsigned int )llvm_cbe_tmp__397 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__398);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 13, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_634_count);
  llvm_cbe_tmp__399 = ( char *)(&llvm_cbe_c[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )13ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load i8* %%80, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_635_count);
  llvm_cbe_tmp__400 = (unsigned char )*llvm_cbe_tmp__399;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__400);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = zext i8 %%81 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_636_count);
  llvm_cbe_tmp__401 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__400&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__401);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = shl nuw nsw i32 %%82, 16, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_637_count);
  llvm_cbe_tmp__402 = (unsigned int )llvm_cbe_tmp__401 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__402);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 14, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_638_count);
  llvm_cbe_tmp__403 = ( char *)(&llvm_cbe_c[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )14ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = load i8* %%84, align 2, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_639_count);
  llvm_cbe_tmp__404 = (unsigned char )*llvm_cbe_tmp__403;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__404);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = zext i8 %%85 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_640_count);
  llvm_cbe_tmp__405 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__404&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__405);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = shl nuw nsw i32 %%86, 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_641_count);
  llvm_cbe_tmp__406 = (unsigned int )llvm_cbe_tmp__405 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__406);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 15, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_642_count);
  llvm_cbe_tmp__407 = ( char *)(&llvm_cbe_c[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )15ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load i8* %%88, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_643_count);
  llvm_cbe_tmp__408 = (unsigned char )*llvm_cbe_tmp__407;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__408);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = zext i8 %%89 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_644_count);
  llvm_cbe_tmp__409 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__408&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__409);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = or i32 %%83, %%79, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_645_count);
  llvm_cbe_tmp__410 = (unsigned int )llvm_cbe_tmp__402 | llvm_cbe_tmp__398;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = or i32 %%91, %%90, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_646_count);
  llvm_cbe_tmp__411 = (unsigned int )llvm_cbe_tmp__410 | llvm_cbe_tmp__409;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__411);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = or i32 %%92, %%87, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__412 = (unsigned int )llvm_cbe_tmp__411 | llvm_cbe_tmp__406;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%93, i32* %%c_4, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_648_count);
  *llvm_cbe_c_4 = llvm_cbe_tmp__412;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_649_count);
  llvm_cbe_tmp__413 = ( char *)(&llvm_cbe_c[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )16ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load i8* %%94, align 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_650_count);
  llvm_cbe_tmp__414 = (unsigned char )*llvm_cbe_tmp__413;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__414);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = zext i8 %%95 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_651_count);
  llvm_cbe_tmp__415 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__414&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__415);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = shl nuw i32 %%96, 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_652_count);
  llvm_cbe_tmp__416 = (unsigned int )llvm_cbe_tmp__415 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__416);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 17, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__417 = ( char *)(&llvm_cbe_c[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )17ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load i8* %%98, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__418 = (unsigned char )*llvm_cbe_tmp__417;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__418);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = zext i8 %%99 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_655_count);
  llvm_cbe_tmp__419 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__418&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__419);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = shl nuw nsw i32 %%100, 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_656_count);
  llvm_cbe_tmp__420 = (unsigned int )llvm_cbe_tmp__419 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__420);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 18, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_657_count);
  llvm_cbe_tmp__421 = ( char *)(&llvm_cbe_c[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )18ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load i8* %%102, align 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_658_count);
  llvm_cbe_tmp__422 = (unsigned char )*llvm_cbe_tmp__421;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__422);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = zext i8 %%103 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_659_count);
  llvm_cbe_tmp__423 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__422&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__423);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = shl nuw nsw i32 %%104, 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_660_count);
  llvm_cbe_tmp__424 = (unsigned int )llvm_cbe_tmp__423 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__424);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 19, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_661_count);
  llvm_cbe_tmp__425 = ( char *)(&llvm_cbe_c[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )19ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = load i8* %%106, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_662_count);
  llvm_cbe_tmp__426 = (unsigned char )*llvm_cbe_tmp__425;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__426);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = zext i8 %%107 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_663_count);
  llvm_cbe_tmp__427 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__426&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__427);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = or i32 %%101, %%97, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_664_count);
  llvm_cbe_tmp__428 = (unsigned int )llvm_cbe_tmp__420 | llvm_cbe_tmp__416;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__428);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = or i32 %%109, %%108, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_665_count);
  llvm_cbe_tmp__429 = (unsigned int )llvm_cbe_tmp__428 | llvm_cbe_tmp__427;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__429);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = or i32 %%110, %%105, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_666_count);
  llvm_cbe_tmp__430 = (unsigned int )llvm_cbe_tmp__429 | llvm_cbe_tmp__424;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__430);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%111, i32* %%c_5, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_667_count);
  *llvm_cbe_c_5 = llvm_cbe_tmp__430;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__430);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 20, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_668_count);
  llvm_cbe_tmp__431 = ( char *)(&llvm_cbe_c[(((signed long long )20ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )20ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = load i8* %%112, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_669_count);
  llvm_cbe_tmp__432 = (unsigned char )*llvm_cbe_tmp__431;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__432);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = zext i8 %%113 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_670_count);
  llvm_cbe_tmp__433 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__432&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__433);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = shl nuw i32 %%114, 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_671_count);
  llvm_cbe_tmp__434 = (unsigned int )llvm_cbe_tmp__433 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__434);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 21, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_672_count);
  llvm_cbe_tmp__435 = ( char *)(&llvm_cbe_c[(((signed long long )21ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )21ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load i8* %%116, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__436 = (unsigned char )*llvm_cbe_tmp__435;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__436);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = zext i8 %%117 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_674_count);
  llvm_cbe_tmp__437 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__436&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__437);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = shl nuw nsw i32 %%118, 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_675_count);
  llvm_cbe_tmp__438 = (unsigned int )llvm_cbe_tmp__437 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__438);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 22, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_676_count);
  llvm_cbe_tmp__439 = ( char *)(&llvm_cbe_c[(((signed long long )22ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )22ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load i8* %%120, align 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_677_count);
  llvm_cbe_tmp__440 = (unsigned char )*llvm_cbe_tmp__439;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__440);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = zext i8 %%121 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_678_count);
  llvm_cbe_tmp__441 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__440&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__441);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = shl nuw nsw i32 %%122, 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_679_count);
  llvm_cbe_tmp__442 = (unsigned int )llvm_cbe_tmp__441 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 23, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_680_count);
  llvm_cbe_tmp__443 = ( char *)(&llvm_cbe_c[(((signed long long )23ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )23ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load i8* %%124, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_681_count);
  llvm_cbe_tmp__444 = (unsigned char )*llvm_cbe_tmp__443;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__444);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = zext i8 %%125 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_682_count);
  llvm_cbe_tmp__445 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__444&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__445);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = or i32 %%119, %%115, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_683_count);
  llvm_cbe_tmp__446 = (unsigned int )llvm_cbe_tmp__438 | llvm_cbe_tmp__434;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__446);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = or i32 %%127, %%126, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_684_count);
  llvm_cbe_tmp__447 = (unsigned int )llvm_cbe_tmp__446 | llvm_cbe_tmp__445;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__447);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = or i32 %%128, %%123, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_685_count);
  llvm_cbe_tmp__448 = (unsigned int )llvm_cbe_tmp__447 | llvm_cbe_tmp__442;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%129, i32* %%c_6, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_686_count);
  *llvm_cbe_c_6 = llvm_cbe_tmp__448;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_687_count);
  llvm_cbe_tmp__449 = ( char *)(&llvm_cbe_c[(((signed long long )24ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )24ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = load i8* %%130, align 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_688_count);
  llvm_cbe_tmp__450 = (unsigned char )*llvm_cbe_tmp__449;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__450);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = zext i8 %%131 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_689_count);
  llvm_cbe_tmp__451 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__450&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__451);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = shl nuw i32 %%132, 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_690_count);
  llvm_cbe_tmp__452 = (unsigned int )llvm_cbe_tmp__451 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__452);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 25, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_691_count);
  llvm_cbe_tmp__453 = ( char *)(&llvm_cbe_c[(((signed long long )25ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )25ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = load i8* %%134, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_692_count);
  llvm_cbe_tmp__454 = (unsigned char )*llvm_cbe_tmp__453;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__454);
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = zext i8 %%135 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_693_count);
  llvm_cbe_tmp__455 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__454&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__455);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = shl nuw nsw i32 %%136, 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_694_count);
  llvm_cbe_tmp__456 = (unsigned int )llvm_cbe_tmp__455 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__456);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 26, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_695_count);
  llvm_cbe_tmp__457 = ( char *)(&llvm_cbe_c[(((signed long long )26ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )26ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load i8* %%138, align 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_696_count);
  llvm_cbe_tmp__458 = (unsigned char )*llvm_cbe_tmp__457;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__458);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = zext i8 %%139 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_697_count);
  llvm_cbe_tmp__459 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__458&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__459);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = shl nuw nsw i32 %%140, 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_698_count);
  llvm_cbe_tmp__460 = (unsigned int )llvm_cbe_tmp__459 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__460);
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 27, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_699_count);
  llvm_cbe_tmp__461 = ( char *)(&llvm_cbe_c[(((signed long long )27ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )27ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = load i8* %%142, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_700_count);
  llvm_cbe_tmp__462 = (unsigned char )*llvm_cbe_tmp__461;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__462);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = zext i8 %%143 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_701_count);
  llvm_cbe_tmp__463 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__462&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__463);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = or i32 %%137, %%133, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_702_count);
  llvm_cbe_tmp__464 = (unsigned int )llvm_cbe_tmp__456 | llvm_cbe_tmp__452;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__464);
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = or i32 %%145, %%144, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_703_count);
  llvm_cbe_tmp__465 = (unsigned int )llvm_cbe_tmp__464 | llvm_cbe_tmp__463;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__465);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = or i32 %%146, %%141, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_704_count);
  llvm_cbe_tmp__466 = (unsigned int )llvm_cbe_tmp__465 | llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__466);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%147, i32* %%c_7, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_705_count);
  *llvm_cbe_c_7 = llvm_cbe_tmp__466;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__466);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 28, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_706_count);
  llvm_cbe_tmp__467 = ( char *)(&llvm_cbe_c[(((signed long long )28ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )28ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load i8* %%148, align 4, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_707_count);
  llvm_cbe_tmp__468 = (unsigned char )*llvm_cbe_tmp__467;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__468);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = zext i8 %%149 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__469 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__468&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__469);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = shl nuw i32 %%150, 24, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_709_count);
  llvm_cbe_tmp__470 = (unsigned int )llvm_cbe_tmp__469 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__470);
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 29, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__471 = ( char *)(&llvm_cbe_c[(((signed long long )29ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )29ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = load i8* %%152, align 1, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_711_count);
  llvm_cbe_tmp__472 = (unsigned char )*llvm_cbe_tmp__471;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__472);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = zext i8 %%153 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_712_count);
  llvm_cbe_tmp__473 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__472&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__473);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = shl nuw nsw i32 %%154, 16, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__474 = (unsigned int )llvm_cbe_tmp__473 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__474);
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 30, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_714_count);
  llvm_cbe_tmp__475 = ( char *)(&llvm_cbe_c[(((signed long long )30ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )30ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = load i8* %%156, align 2, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_715_count);
  llvm_cbe_tmp__476 = (unsigned char )*llvm_cbe_tmp__475;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__476);
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = zext i8 %%157 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_716_count);
  llvm_cbe_tmp__477 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__476&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__477);
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = shl nuw nsw i32 %%158, 8, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_717_count);
  llvm_cbe_tmp__478 = (unsigned int )llvm_cbe_tmp__477 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__478);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 31, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_718_count);
  llvm_cbe_tmp__479 = ( char *)(&llvm_cbe_c[(((signed long long )31ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )31ull) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = load i8* %%160, align 1, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_719_count);
  llvm_cbe_tmp__480 = (unsigned char )*llvm_cbe_tmp__479;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__480);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = zext i8 %%161 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_720_count);
  llvm_cbe_tmp__481 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__480&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__481);
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = or i32 %%155, %%151, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_721_count);
  llvm_cbe_tmp__482 = (unsigned int )llvm_cbe_tmp__474 | llvm_cbe_tmp__470;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__482);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = or i32 %%163, %%162, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_722_count);
  llvm_cbe_tmp__483 = (unsigned int )llvm_cbe_tmp__482 | llvm_cbe_tmp__481;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__483);
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = or i32 %%164, %%159, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_723_count);
  llvm_cbe_tmp__484 = (unsigned int )llvm_cbe_tmp__483 | llvm_cbe_tmp__478;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__484);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%165, i32* %%c_8, align 4, !dbg !7 for 0x%I64xth hint within @wrapper_axi_encrypt  --> \n", ++aesl_llvm_cbe_724_count);
  *llvm_cbe_c_8 = llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__484);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @wrapper_axi_encrypt}\n");
  return llvm_cbe_tmp__341;
}


signed int wrapper_axi_decrypt(signed int *llvm_cbe_m_1, signed int *llvm_cbe_m_2, signed int *llvm_cbe_m_3, signed int *llvm_cbe_m_4, signed int *llvm_cbe_nsec_1, signed int *llvm_cbe_nsec_2, signed int *llvm_cbe_nsec_3, signed int *llvm_cbe_nsec_4, signed int *llvm_cbe_c_1, signed int *llvm_cbe_c_2, signed int *llvm_cbe_c_3, signed int *llvm_cbe_c_4, signed int *llvm_cbe_c_5, signed int *llvm_cbe_c_6, signed int *llvm_cbe_c_7, signed int *llvm_cbe_c_8, signed int *llvm_cbe_ad_1, signed int *llvm_cbe_ad_2, signed int *llvm_cbe_ad_3, signed int *llvm_cbe_ad_4, signed int *llvm_cbe_npub_1, signed int *llvm_cbe_npub_2, signed int *llvm_cbe_npub_3, signed int *llvm_cbe_npub_4, signed int *llvm_cbe_k_1, signed int *llvm_cbe_k_2, signed int *llvm_cbe_k_3, signed int *llvm_cbe_k_4) {
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
   char llvm_cbe_m[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_nsec_count = 0;
   char llvm_cbe_nsec[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
   char llvm_cbe_c[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ad_count = 0;
   char llvm_cbe_ad[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_npub_count = 0;
   char llvm_cbe_npub[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_k_count = 0;
   char llvm_cbe_k[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mlen_count = 0;
  signed long long llvm_cbe_mlen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
   char *llvm_cbe_tmp__485;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
   char *llvm_cbe_tmp__486;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
   char *llvm_cbe_tmp__487;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
   char *llvm_cbe_tmp__488;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
   char *llvm_cbe_tmp__489;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
   char *llvm_cbe_tmp__490;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
   char *llvm_cbe_tmp__491;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
   char *llvm_cbe_tmp__492;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
   char *llvm_cbe_tmp__493;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
   char *llvm_cbe_tmp__494;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
   char *llvm_cbe_tmp__495;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
   char *llvm_cbe_tmp__496;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
   char *llvm_cbe_tmp__497;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
   char *llvm_cbe_tmp__498;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
   char *llvm_cbe_tmp__499;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
   char *llvm_cbe_tmp__500;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
   char *llvm_cbe_tmp__501;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
   char *llvm_cbe_tmp__502;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
   char *llvm_cbe_tmp__503;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
   char *llvm_cbe_tmp__504;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
   char *llvm_cbe_tmp__505;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
   char *llvm_cbe_tmp__506;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  unsigned int llvm_cbe_tmp__507;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  unsigned char llvm_cbe_tmp__508;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  unsigned int llvm_cbe_tmp__509;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  unsigned int llvm_cbe_tmp__510;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
   char *llvm_cbe_tmp__511;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  unsigned char llvm_cbe_tmp__512;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  unsigned int llvm_cbe_tmp__513;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  unsigned int llvm_cbe_tmp__514;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
   char *llvm_cbe_tmp__515;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  unsigned char llvm_cbe_tmp__516;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  unsigned int llvm_cbe_tmp__517;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  unsigned int llvm_cbe_tmp__518;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
   char *llvm_cbe_tmp__519;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  unsigned char llvm_cbe_tmp__520;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  unsigned int llvm_cbe_tmp__521;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  unsigned int llvm_cbe_tmp__522;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  unsigned int llvm_cbe_tmp__523;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  unsigned int llvm_cbe_tmp__524;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
   char *llvm_cbe_tmp__525;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  unsigned char llvm_cbe_tmp__526;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  unsigned int llvm_cbe_tmp__527;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  unsigned int llvm_cbe_tmp__528;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
   char *llvm_cbe_tmp__529;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  unsigned char llvm_cbe_tmp__530;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  unsigned int llvm_cbe_tmp__531;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  unsigned int llvm_cbe_tmp__532;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
   char *llvm_cbe_tmp__533;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  unsigned char llvm_cbe_tmp__534;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  unsigned int llvm_cbe_tmp__535;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  unsigned int llvm_cbe_tmp__536;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
   char *llvm_cbe_tmp__537;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  unsigned char llvm_cbe_tmp__538;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  unsigned int llvm_cbe_tmp__539;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  unsigned int llvm_cbe_tmp__540;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  unsigned int llvm_cbe_tmp__541;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  unsigned int llvm_cbe_tmp__542;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
   char *llvm_cbe_tmp__543;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  unsigned char llvm_cbe_tmp__544;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  unsigned int llvm_cbe_tmp__545;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  unsigned int llvm_cbe_tmp__546;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
   char *llvm_cbe_tmp__547;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  unsigned char llvm_cbe_tmp__548;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  unsigned int llvm_cbe_tmp__549;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  unsigned int llvm_cbe_tmp__550;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
   char *llvm_cbe_tmp__551;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  unsigned char llvm_cbe_tmp__552;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  unsigned int llvm_cbe_tmp__553;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  unsigned int llvm_cbe_tmp__554;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
   char *llvm_cbe_tmp__555;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  unsigned char llvm_cbe_tmp__556;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  unsigned int llvm_cbe_tmp__557;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  unsigned int llvm_cbe_tmp__558;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  unsigned int llvm_cbe_tmp__559;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  unsigned int llvm_cbe_tmp__560;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
   char *llvm_cbe_tmp__561;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  unsigned char llvm_cbe_tmp__562;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  unsigned int llvm_cbe_tmp__563;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  unsigned int llvm_cbe_tmp__564;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
   char *llvm_cbe_tmp__565;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  unsigned char llvm_cbe_tmp__566;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  unsigned int llvm_cbe_tmp__567;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  unsigned int llvm_cbe_tmp__568;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
   char *llvm_cbe_tmp__569;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  unsigned char llvm_cbe_tmp__570;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  unsigned int llvm_cbe_tmp__571;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  unsigned int llvm_cbe_tmp__572;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
   char *llvm_cbe_tmp__573;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  unsigned char llvm_cbe_tmp__574;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  unsigned int llvm_cbe_tmp__575;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  unsigned int llvm_cbe_tmp__576;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  unsigned int llvm_cbe_tmp__577;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  unsigned int llvm_cbe_tmp__578;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  unsigned char llvm_cbe_tmp__579;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  unsigned int llvm_cbe_tmp__580;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  unsigned int llvm_cbe_tmp__581;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
   char *llvm_cbe_tmp__582;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  unsigned char llvm_cbe_tmp__583;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  unsigned int llvm_cbe_tmp__584;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  unsigned int llvm_cbe_tmp__585;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
   char *llvm_cbe_tmp__586;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  unsigned char llvm_cbe_tmp__587;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  unsigned int llvm_cbe_tmp__588;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  unsigned int llvm_cbe_tmp__589;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
   char *llvm_cbe_tmp__590;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  unsigned char llvm_cbe_tmp__591;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  unsigned int llvm_cbe_tmp__592;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  unsigned int llvm_cbe_tmp__593;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  unsigned int llvm_cbe_tmp__594;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  unsigned int llvm_cbe_tmp__595;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
   char *llvm_cbe_tmp__596;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  unsigned char llvm_cbe_tmp__597;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  unsigned int llvm_cbe_tmp__598;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  unsigned int llvm_cbe_tmp__599;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
   char *llvm_cbe_tmp__600;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  unsigned char llvm_cbe_tmp__601;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  unsigned int llvm_cbe_tmp__602;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  unsigned int llvm_cbe_tmp__603;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
   char *llvm_cbe_tmp__604;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  unsigned char llvm_cbe_tmp__605;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  unsigned int llvm_cbe_tmp__606;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  unsigned int llvm_cbe_tmp__607;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
   char *llvm_cbe_tmp__608;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  unsigned char llvm_cbe_tmp__609;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  unsigned int llvm_cbe_tmp__610;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  unsigned int llvm_cbe_tmp__611;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  unsigned int llvm_cbe_tmp__612;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  unsigned int llvm_cbe_tmp__613;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
   char *llvm_cbe_tmp__614;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  unsigned char llvm_cbe_tmp__615;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  unsigned int llvm_cbe_tmp__616;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  unsigned int llvm_cbe_tmp__617;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
   char *llvm_cbe_tmp__618;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  unsigned char llvm_cbe_tmp__619;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  unsigned int llvm_cbe_tmp__620;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  unsigned int llvm_cbe_tmp__621;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
   char *llvm_cbe_tmp__622;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  unsigned char llvm_cbe_tmp__623;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  unsigned int llvm_cbe_tmp__624;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  unsigned int llvm_cbe_tmp__625;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
   char *llvm_cbe_tmp__626;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  unsigned char llvm_cbe_tmp__627;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  unsigned int llvm_cbe_tmp__628;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  unsigned int llvm_cbe_tmp__629;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  unsigned int llvm_cbe_tmp__630;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  unsigned int llvm_cbe_tmp__631;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
   char *llvm_cbe_tmp__632;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  unsigned char llvm_cbe_tmp__633;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  unsigned int llvm_cbe_tmp__634;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  unsigned int llvm_cbe_tmp__635;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
   char *llvm_cbe_tmp__636;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  unsigned char llvm_cbe_tmp__637;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  unsigned int llvm_cbe_tmp__638;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  unsigned int llvm_cbe_tmp__639;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
   char *llvm_cbe_tmp__640;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  unsigned char llvm_cbe_tmp__641;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  unsigned int llvm_cbe_tmp__642;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  unsigned int llvm_cbe_tmp__643;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
   char *llvm_cbe_tmp__644;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  unsigned char llvm_cbe_tmp__645;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  unsigned int llvm_cbe_tmp__646;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  unsigned int llvm_cbe_tmp__647;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  unsigned int llvm_cbe_tmp__648;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  unsigned int llvm_cbe_tmp__649;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @wrapper_axi_decrypt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_785_count);
  llvm_cbe_tmp__485 = ( char *)(&llvm_cbe_c[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_1, i8* %%1), !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_786_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_1, ( char *)llvm_cbe_tmp__485);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 4, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_787_count);
  llvm_cbe_tmp__486 = ( char *)(&llvm_cbe_c[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_2, i8* %%2), !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_788_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_2, ( char *)llvm_cbe_tmp__486);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 8, !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_789_count);
  llvm_cbe_tmp__487 = ( char *)(&llvm_cbe_c[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_3, i8* %%3), !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_790_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_3, ( char *)llvm_cbe_tmp__487);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 12, !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__488 = ( char *)(&llvm_cbe_c[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_4, i8* %%4), !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_792_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_4, ( char *)llvm_cbe_tmp__488);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 16, !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_793_count);
  llvm_cbe_tmp__489 = ( char *)(&llvm_cbe_c[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_5, i8* %%5), !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_794_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_5, ( char *)llvm_cbe_tmp__489);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 20, !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_795_count);
  llvm_cbe_tmp__490 = ( char *)(&llvm_cbe_c[(((signed long long )20ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_6, i8* %%6), !dbg !8 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_796_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_6, ( char *)llvm_cbe_tmp__490);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 24, !dbg !9 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_797_count);
  llvm_cbe_tmp__491 = ( char *)(&llvm_cbe_c[(((signed long long )24ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_7, i8* %%7), !dbg !9 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_798_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_7, ( char *)llvm_cbe_tmp__491);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [32 x i8]* %%c, i64 0, i64 28, !dbg !9 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__492 = ( char *)(&llvm_cbe_c[(((signed long long )28ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%c_8, i8* %%8), !dbg !9 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_800_count);
  uint32ToByteArray((signed int *)llvm_cbe_c_8, ( char *)llvm_cbe_tmp__492);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_802_count);
  llvm_cbe_tmp__493 = ( char *)(&llvm_cbe_ad[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_1, i8* %%9), !dbg !9 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_803_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_1, ( char *)llvm_cbe_tmp__493);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_804_count);
  llvm_cbe_tmp__494 = ( char *)(&llvm_cbe_ad[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_2, i8* %%10), !dbg !10 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_805_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_2, ( char *)llvm_cbe_tmp__494);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 8, !dbg !10 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_806_count);
  llvm_cbe_tmp__495 = ( char *)(&llvm_cbe_ad[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_3, i8* %%11), !dbg !10 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_807_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_3, ( char *)llvm_cbe_tmp__495);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [16 x i8]* %%ad, i64 0, i64 12, !dbg !10 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__496 = ( char *)(&llvm_cbe_ad[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%ad_4, i8* %%12), !dbg !10 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_809_count);
  uint32ToByteArray((signed int *)llvm_cbe_ad_4, ( char *)llvm_cbe_tmp__496);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 0, !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__497 = ( char *)(&llvm_cbe_npub[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_1, i8* %%13), !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_812_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_1, ( char *)llvm_cbe_tmp__497);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 4, !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__498 = ( char *)(&llvm_cbe_npub[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_2, i8* %%14), !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_814_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_2, ( char *)llvm_cbe_tmp__498);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 8, !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__499 = ( char *)(&llvm_cbe_npub[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_3, i8* %%15), !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_816_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_3, ( char *)llvm_cbe_tmp__499);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [16 x i8]* %%npub, i64 0, i64 12, !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_817_count);
  llvm_cbe_tmp__500 = ( char *)(&llvm_cbe_npub[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%npub_4, i8* %%16), !dbg !11 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_818_count);
  uint32ToByteArray((signed int *)llvm_cbe_npub_4, ( char *)llvm_cbe_tmp__500);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 0, !dbg !12 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__501 = ( char *)(&llvm_cbe_k[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_1, i8* %%17), !dbg !12 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_821_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_1, ( char *)llvm_cbe_tmp__501);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 4, !dbg !12 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_822_count);
  llvm_cbe_tmp__502 = ( char *)(&llvm_cbe_k[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_2, i8* %%18), !dbg !12 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_823_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_2, ( char *)llvm_cbe_tmp__502);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 8, !dbg !12 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__503 = ( char *)(&llvm_cbe_k[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_3, i8* %%19), !dbg !12 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_825_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_3, ( char *)llvm_cbe_tmp__503);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [16 x i8]* %%k, i64 0, i64 12, !dbg !13 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_826_count);
  llvm_cbe_tmp__504 = ( char *)(&llvm_cbe_k[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @uint32ToByteArray(i32* %%k_4, i8* %%20), !dbg !13 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_827_count);
  uint32ToByteArray((signed int *)llvm_cbe_k_4, ( char *)llvm_cbe_tmp__504);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_829_count);
  llvm_cbe_tmp__505 = ( char *)(&llvm_cbe_m[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_830_count);
  llvm_cbe_tmp__506 = ( char *)(&llvm_cbe_nsec[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i32 @crypto_aead_decrypt(i8* %%21, i64* %%mlen, i8* %%22, i8* %%1, i64 32, i8* %%9, i64 16, i8* %%13, i8* %%17) nounwind, !dbg !15 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_831_count);
  llvm_cbe_tmp__507 = (unsigned int )crypto_aead_decrypt(( char *)llvm_cbe_tmp__505, (signed long long *)(&llvm_cbe_mlen), ( char *)llvm_cbe_tmp__506, ( char *)llvm_cbe_tmp__485, 32ull, ( char *)llvm_cbe_tmp__493, 16ull, ( char *)llvm_cbe_tmp__497, ( char *)llvm_cbe_tmp__501);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__507);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%21, align 16, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_834_count);
  llvm_cbe_tmp__508 = (unsigned char )*llvm_cbe_tmp__505;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__508);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i8 %%24 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_835_count);
  llvm_cbe_tmp__509 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__508&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__509);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nuw i32 %%25, 24, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_836_count);
  llvm_cbe_tmp__510 = (unsigned int )llvm_cbe_tmp__509 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__510);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 1, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_837_count);
  llvm_cbe_tmp__511 = ( char *)(&llvm_cbe_m[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i8* %%27, align 1, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_838_count);
  llvm_cbe_tmp__512 = (unsigned char )*llvm_cbe_tmp__511;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__512);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i8 %%28 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_839_count);
  llvm_cbe_tmp__513 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__512&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__513);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = shl nuw nsw i32 %%29, 16, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_840_count);
  llvm_cbe_tmp__514 = (unsigned int )llvm_cbe_tmp__513 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__514);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 2, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_841_count);
  llvm_cbe_tmp__515 = ( char *)(&llvm_cbe_m[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%31, align 2, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_842_count);
  llvm_cbe_tmp__516 = (unsigned char )*llvm_cbe_tmp__515;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__516);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i8 %%32 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_843_count);
  llvm_cbe_tmp__517 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__516&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__517);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = shl nuw nsw i32 %%33, 8, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_844_count);
  llvm_cbe_tmp__518 = (unsigned int )llvm_cbe_tmp__517 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__518);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 3, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_845_count);
  llvm_cbe_tmp__519 = ( char *)(&llvm_cbe_m[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i8* %%35, align 1, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_846_count);
  llvm_cbe_tmp__520 = (unsigned char )*llvm_cbe_tmp__519;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__520);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i8 %%36 to i32, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_847_count);
  llvm_cbe_tmp__521 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__520&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__521);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = or i32 %%30, %%26, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_848_count);
  llvm_cbe_tmp__522 = (unsigned int )llvm_cbe_tmp__514 | llvm_cbe_tmp__510;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__522);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = or i32 %%38, %%37, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_849_count);
  llvm_cbe_tmp__523 = (unsigned int )llvm_cbe_tmp__522 | llvm_cbe_tmp__521;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__523);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = or i32 %%39, %%34, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_850_count);
  llvm_cbe_tmp__524 = (unsigned int )llvm_cbe_tmp__523 | llvm_cbe_tmp__518;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__524);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%40, i32* %%m_1, align 4, !dbg !4 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_851_count);
  *llvm_cbe_m_1 = llvm_cbe_tmp__524;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__524);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_852_count);
  llvm_cbe_tmp__525 = ( char *)(&llvm_cbe_m[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load i8* %%41, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_853_count);
  llvm_cbe_tmp__526 = (unsigned char )*llvm_cbe_tmp__525;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__526);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = zext i8 %%42 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_854_count);
  llvm_cbe_tmp__527 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__526&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__527);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = shl nuw i32 %%43, 24, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_855_count);
  llvm_cbe_tmp__528 = (unsigned int )llvm_cbe_tmp__527 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__528);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 5, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_856_count);
  llvm_cbe_tmp__529 = ( char *)(&llvm_cbe_m[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i8* %%45, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_857_count);
  llvm_cbe_tmp__530 = (unsigned char )*llvm_cbe_tmp__529;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__530);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i8 %%46 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_858_count);
  llvm_cbe_tmp__531 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__530&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__531);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = shl nuw nsw i32 %%47, 16, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_859_count);
  llvm_cbe_tmp__532 = (unsigned int )llvm_cbe_tmp__531 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__532);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 6, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_860_count);
  llvm_cbe_tmp__533 = ( char *)(&llvm_cbe_m[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load i8* %%49, align 2, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_861_count);
  llvm_cbe_tmp__534 = (unsigned char )*llvm_cbe_tmp__533;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__534);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = zext i8 %%50 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_862_count);
  llvm_cbe_tmp__535 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__534&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__535);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = shl nuw nsw i32 %%51, 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_863_count);
  llvm_cbe_tmp__536 = (unsigned int )llvm_cbe_tmp__535 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__536);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 7, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_864_count);
  llvm_cbe_tmp__537 = ( char *)(&llvm_cbe_m[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load i8* %%53, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_865_count);
  llvm_cbe_tmp__538 = (unsigned char )*llvm_cbe_tmp__537;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__538);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = zext i8 %%54 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_866_count);
  llvm_cbe_tmp__539 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__538&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__539);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = or i32 %%48, %%44, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_867_count);
  llvm_cbe_tmp__540 = (unsigned int )llvm_cbe_tmp__532 | llvm_cbe_tmp__528;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__540);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = or i32 %%56, %%55, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_868_count);
  llvm_cbe_tmp__541 = (unsigned int )llvm_cbe_tmp__540 | llvm_cbe_tmp__539;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__541);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = or i32 %%57, %%52, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_869_count);
  llvm_cbe_tmp__542 = (unsigned int )llvm_cbe_tmp__541 | llvm_cbe_tmp__536;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__542);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%58, i32* %%m_2, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_870_count);
  *llvm_cbe_m_2 = llvm_cbe_tmp__542;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__542);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_871_count);
  llvm_cbe_tmp__543 = ( char *)(&llvm_cbe_m[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load i8* %%59, align 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_872_count);
  llvm_cbe_tmp__544 = (unsigned char )*llvm_cbe_tmp__543;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__544);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = zext i8 %%60 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_873_count);
  llvm_cbe_tmp__545 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__544&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__545);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = shl nuw i32 %%61, 24, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_874_count);
  llvm_cbe_tmp__546 = (unsigned int )llvm_cbe_tmp__545 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__546);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 9, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_875_count);
  llvm_cbe_tmp__547 = ( char *)(&llvm_cbe_m[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i8* %%63, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__548 = (unsigned char )*llvm_cbe_tmp__547;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__548);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = zext i8 %%64 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_877_count);
  llvm_cbe_tmp__549 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__548&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__549);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = shl nuw nsw i32 %%65, 16, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_878_count);
  llvm_cbe_tmp__550 = (unsigned int )llvm_cbe_tmp__549 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__550);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 10, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_879_count);
  llvm_cbe_tmp__551 = ( char *)(&llvm_cbe_m[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )10ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load i8* %%67, align 2, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_880_count);
  llvm_cbe_tmp__552 = (unsigned char )*llvm_cbe_tmp__551;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__552);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = zext i8 %%68 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_881_count);
  llvm_cbe_tmp__553 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__552&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__553);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = shl nuw nsw i32 %%69, 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_882_count);
  llvm_cbe_tmp__554 = (unsigned int )llvm_cbe_tmp__553 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__554);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 11, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_883_count);
  llvm_cbe_tmp__555 = ( char *)(&llvm_cbe_m[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )11ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load i8* %%71, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_884_count);
  llvm_cbe_tmp__556 = (unsigned char )*llvm_cbe_tmp__555;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__556);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = zext i8 %%72 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_885_count);
  llvm_cbe_tmp__557 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__556&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__557);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = or i32 %%66, %%62, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_886_count);
  llvm_cbe_tmp__558 = (unsigned int )llvm_cbe_tmp__550 | llvm_cbe_tmp__546;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__558);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = or i32 %%74, %%73, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_887_count);
  llvm_cbe_tmp__559 = (unsigned int )llvm_cbe_tmp__558 | llvm_cbe_tmp__557;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__559);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = or i32 %%75, %%70, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_888_count);
  llvm_cbe_tmp__560 = (unsigned int )llvm_cbe_tmp__559 | llvm_cbe_tmp__554;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__560);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%76, i32* %%m_3, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_889_count);
  *llvm_cbe_m_3 = llvm_cbe_tmp__560;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__560);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 12, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_890_count);
  llvm_cbe_tmp__561 = ( char *)(&llvm_cbe_m[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )12ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load i8* %%77, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_891_count);
  llvm_cbe_tmp__562 = (unsigned char )*llvm_cbe_tmp__561;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__562);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = zext i8 %%78 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_892_count);
  llvm_cbe_tmp__563 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__562&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__563);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = shl nuw i32 %%79, 24, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_893_count);
  llvm_cbe_tmp__564 = (unsigned int )llvm_cbe_tmp__563 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__564);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 13, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_894_count);
  llvm_cbe_tmp__565 = ( char *)(&llvm_cbe_m[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )13ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load i8* %%81, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_895_count);
  llvm_cbe_tmp__566 = (unsigned char )*llvm_cbe_tmp__565;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__566);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = zext i8 %%82 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_896_count);
  llvm_cbe_tmp__567 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__566&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__567);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = shl nuw nsw i32 %%83, 16, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__568 = (unsigned int )llvm_cbe_tmp__567 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__568);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 14, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_898_count);
  llvm_cbe_tmp__569 = ( char *)(&llvm_cbe_m[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )14ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = load i8* %%85, align 2, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_899_count);
  llvm_cbe_tmp__570 = (unsigned char )*llvm_cbe_tmp__569;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__570);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = zext i8 %%86 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_900_count);
  llvm_cbe_tmp__571 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__570&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__571);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = shl nuw nsw i32 %%87, 8, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_901_count);
  llvm_cbe_tmp__572 = (unsigned int )llvm_cbe_tmp__571 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__572);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds [16 x i8]* %%m, i64 0, i64 15, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_902_count);
  llvm_cbe_tmp__573 = ( char *)(&llvm_cbe_m[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )15ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'm' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load i8* %%89, align 1, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_903_count);
  llvm_cbe_tmp__574 = (unsigned char )*llvm_cbe_tmp__573;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__574);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = zext i8 %%90 to i32, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_904_count);
  llvm_cbe_tmp__575 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__574&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__575);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = or i32 %%84, %%80, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_905_count);
  llvm_cbe_tmp__576 = (unsigned int )llvm_cbe_tmp__568 | llvm_cbe_tmp__564;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__576);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = or i32 %%92, %%91, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_906_count);
  llvm_cbe_tmp__577 = (unsigned int )llvm_cbe_tmp__576 | llvm_cbe_tmp__575;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__577);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = or i32 %%93, %%88, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_907_count);
  llvm_cbe_tmp__578 = (unsigned int )llvm_cbe_tmp__577 | llvm_cbe_tmp__572;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__578);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%94, i32* %%m_4, align 4, !dbg !5 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_908_count);
  *llvm_cbe_m_4 = llvm_cbe_tmp__578;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__578);

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load i8* %%22, align 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_909_count);
  llvm_cbe_tmp__579 = (unsigned char )*llvm_cbe_tmp__506;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__579);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = zext i8 %%95 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_910_count);
  llvm_cbe_tmp__580 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__579&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__580);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = shl nuw i32 %%96, 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_911_count);
  llvm_cbe_tmp__581 = (unsigned int )llvm_cbe_tmp__580 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__581);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_912_count);
  llvm_cbe_tmp__582 = ( char *)(&llvm_cbe_nsec[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load i8* %%98, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_913_count);
  llvm_cbe_tmp__583 = (unsigned char )*llvm_cbe_tmp__582;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__583);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = zext i8 %%99 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_914_count);
  llvm_cbe_tmp__584 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__583&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__584);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = shl nuw nsw i32 %%100, 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_915_count);
  llvm_cbe_tmp__585 = (unsigned int )llvm_cbe_tmp__584 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__585);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_916_count);
  llvm_cbe_tmp__586 = ( char *)(&llvm_cbe_nsec[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load i8* %%102, align 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_917_count);
  llvm_cbe_tmp__587 = (unsigned char )*llvm_cbe_tmp__586;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__587);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = zext i8 %%103 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_918_count);
  llvm_cbe_tmp__588 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__587&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__588);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = shl nuw nsw i32 %%104, 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_919_count);
  llvm_cbe_tmp__589 = (unsigned int )llvm_cbe_tmp__588 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__589);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 3, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_920_count);
  llvm_cbe_tmp__590 = ( char *)(&llvm_cbe_nsec[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = load i8* %%106, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_921_count);
  llvm_cbe_tmp__591 = (unsigned char )*llvm_cbe_tmp__590;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__591);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = zext i8 %%107 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_922_count);
  llvm_cbe_tmp__592 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__591&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__592);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = or i32 %%101, %%97, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_923_count);
  llvm_cbe_tmp__593 = (unsigned int )llvm_cbe_tmp__585 | llvm_cbe_tmp__581;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__593);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = or i32 %%109, %%108, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_924_count);
  llvm_cbe_tmp__594 = (unsigned int )llvm_cbe_tmp__593 | llvm_cbe_tmp__592;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__594);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = or i32 %%110, %%105, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_925_count);
  llvm_cbe_tmp__595 = (unsigned int )llvm_cbe_tmp__594 | llvm_cbe_tmp__589;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__595);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%111, i32* %%nsec_1, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_926_count);
  *llvm_cbe_nsec_1 = llvm_cbe_tmp__595;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__595);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_927_count);
  llvm_cbe_tmp__596 = ( char *)(&llvm_cbe_nsec[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = load i8* %%112, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_928_count);
  llvm_cbe_tmp__597 = (unsigned char )*llvm_cbe_tmp__596;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__597);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = zext i8 %%113 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_929_count);
  llvm_cbe_tmp__598 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__597&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__598);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = shl nuw i32 %%114, 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_930_count);
  llvm_cbe_tmp__599 = (unsigned int )llvm_cbe_tmp__598 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__599);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 5, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_931_count);
  llvm_cbe_tmp__600 = ( char *)(&llvm_cbe_nsec[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load i8* %%116, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_932_count);
  llvm_cbe_tmp__601 = (unsigned char )*llvm_cbe_tmp__600;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__601);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = zext i8 %%117 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_933_count);
  llvm_cbe_tmp__602 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__601&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__602);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = shl nuw nsw i32 %%118, 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_934_count);
  llvm_cbe_tmp__603 = (unsigned int )llvm_cbe_tmp__602 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__603);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 6, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_935_count);
  llvm_cbe_tmp__604 = ( char *)(&llvm_cbe_nsec[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load i8* %%120, align 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_936_count);
  llvm_cbe_tmp__605 = (unsigned char )*llvm_cbe_tmp__604;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__605);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = zext i8 %%121 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_937_count);
  llvm_cbe_tmp__606 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__605&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__606);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = shl nuw nsw i32 %%122, 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_938_count);
  llvm_cbe_tmp__607 = (unsigned int )llvm_cbe_tmp__606 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__607);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 7, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_939_count);
  llvm_cbe_tmp__608 = ( char *)(&llvm_cbe_nsec[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load i8* %%124, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_940_count);
  llvm_cbe_tmp__609 = (unsigned char )*llvm_cbe_tmp__608;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__609);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = zext i8 %%125 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_941_count);
  llvm_cbe_tmp__610 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__609&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__610);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = or i32 %%119, %%115, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_942_count);
  llvm_cbe_tmp__611 = (unsigned int )llvm_cbe_tmp__603 | llvm_cbe_tmp__599;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__611);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = or i32 %%127, %%126, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_943_count);
  llvm_cbe_tmp__612 = (unsigned int )llvm_cbe_tmp__611 | llvm_cbe_tmp__610;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__612);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = or i32 %%128, %%123, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_944_count);
  llvm_cbe_tmp__613 = (unsigned int )llvm_cbe_tmp__612 | llvm_cbe_tmp__607;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__613);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%129, i32* %%nsec_2, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_945_count);
  *llvm_cbe_nsec_2 = llvm_cbe_tmp__613;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__613);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_946_count);
  llvm_cbe_tmp__614 = ( char *)(&llvm_cbe_nsec[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = load i8* %%130, align 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_947_count);
  llvm_cbe_tmp__615 = (unsigned char )*llvm_cbe_tmp__614;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__615);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = zext i8 %%131 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_948_count);
  llvm_cbe_tmp__616 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__615&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__616);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = shl nuw i32 %%132, 24, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_949_count);
  llvm_cbe_tmp__617 = (unsigned int )llvm_cbe_tmp__616 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__617);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 9, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_950_count);
  llvm_cbe_tmp__618 = ( char *)(&llvm_cbe_nsec[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = load i8* %%134, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_951_count);
  llvm_cbe_tmp__619 = (unsigned char )*llvm_cbe_tmp__618;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__619);
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = zext i8 %%135 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_952_count);
  llvm_cbe_tmp__620 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__619&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__620);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = shl nuw nsw i32 %%136, 16, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_953_count);
  llvm_cbe_tmp__621 = (unsigned int )llvm_cbe_tmp__620 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__621);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 10, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_954_count);
  llvm_cbe_tmp__622 = ( char *)(&llvm_cbe_nsec[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )10ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load i8* %%138, align 2, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_955_count);
  llvm_cbe_tmp__623 = (unsigned char )*llvm_cbe_tmp__622;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__623);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = zext i8 %%139 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_956_count);
  llvm_cbe_tmp__624 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__623&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__624);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = shl nuw nsw i32 %%140, 8, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_957_count);
  llvm_cbe_tmp__625 = (unsigned int )llvm_cbe_tmp__624 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__625);
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 11, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_958_count);
  llvm_cbe_tmp__626 = ( char *)(&llvm_cbe_nsec[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )11ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = load i8* %%142, align 1, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_959_count);
  llvm_cbe_tmp__627 = (unsigned char )*llvm_cbe_tmp__626;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__627);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = zext i8 %%143 to i32, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_960_count);
  llvm_cbe_tmp__628 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__627&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__628);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = or i32 %%137, %%133, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_961_count);
  llvm_cbe_tmp__629 = (unsigned int )llvm_cbe_tmp__621 | llvm_cbe_tmp__617;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__629);
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = or i32 %%145, %%144, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_962_count);
  llvm_cbe_tmp__630 = (unsigned int )llvm_cbe_tmp__629 | llvm_cbe_tmp__628;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__630);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = or i32 %%146, %%141, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_963_count);
  llvm_cbe_tmp__631 = (unsigned int )llvm_cbe_tmp__630 | llvm_cbe_tmp__625;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__631);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%147, i32* %%nsec_3, align 4, !dbg !6 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_964_count);
  *llvm_cbe_nsec_3 = llvm_cbe_tmp__631;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__631);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 12, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_965_count);
  llvm_cbe_tmp__632 = ( char *)(&llvm_cbe_nsec[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )12ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load i8* %%148, align 4, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_966_count);
  llvm_cbe_tmp__633 = (unsigned char )*llvm_cbe_tmp__632;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__633);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = zext i8 %%149 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_967_count);
  llvm_cbe_tmp__634 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__633&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__634);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = shl nuw i32 %%150, 24, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_968_count);
  llvm_cbe_tmp__635 = (unsigned int )llvm_cbe_tmp__634 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__635);
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 13, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_969_count);
  llvm_cbe_tmp__636 = ( char *)(&llvm_cbe_nsec[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )13ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = load i8* %%152, align 1, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_970_count);
  llvm_cbe_tmp__637 = (unsigned char )*llvm_cbe_tmp__636;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__637);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = zext i8 %%153 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_971_count);
  llvm_cbe_tmp__638 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__637&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__638);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = shl nuw nsw i32 %%154, 16, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_972_count);
  llvm_cbe_tmp__639 = (unsigned int )llvm_cbe_tmp__638 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__639);
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 14, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_973_count);
  llvm_cbe_tmp__640 = ( char *)(&llvm_cbe_nsec[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )14ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = load i8* %%156, align 2, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_974_count);
  llvm_cbe_tmp__641 = (unsigned char )*llvm_cbe_tmp__640;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__641);
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = zext i8 %%157 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_975_count);
  llvm_cbe_tmp__642 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__641&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__642);
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = shl nuw nsw i32 %%158, 8, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_976_count);
  llvm_cbe_tmp__643 = (unsigned int )llvm_cbe_tmp__642 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__643);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = getelementptr inbounds [16 x i8]* %%nsec, i64 0, i64 15, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_977_count);
  llvm_cbe_tmp__644 = ( char *)(&llvm_cbe_nsec[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )15ull) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'nsec' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = load i8* %%160, align 1, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_978_count);
  llvm_cbe_tmp__645 = (unsigned char )*llvm_cbe_tmp__644;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__645);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = zext i8 %%161 to i32, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_979_count);
  llvm_cbe_tmp__646 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__645&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__646);
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = or i32 %%155, %%151, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_980_count);
  llvm_cbe_tmp__647 = (unsigned int )llvm_cbe_tmp__639 | llvm_cbe_tmp__635;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__647);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = or i32 %%163, %%162, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_981_count);
  llvm_cbe_tmp__648 = (unsigned int )llvm_cbe_tmp__647 | llvm_cbe_tmp__646;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__648);
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = or i32 %%164, %%159, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_982_count);
  llvm_cbe_tmp__649 = (unsigned int )llvm_cbe_tmp__648 | llvm_cbe_tmp__643;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__649);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%165, i32* %%nsec_4, align 4, !dbg !7 for 0x%I64xth hint within @wrapper_axi_decrypt  --> \n", ++aesl_llvm_cbe_983_count);
  *llvm_cbe_nsec_4 = llvm_cbe_tmp__649;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__649);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @wrapper_axi_decrypt}\n");
  return llvm_cbe_tmp__507;
}

