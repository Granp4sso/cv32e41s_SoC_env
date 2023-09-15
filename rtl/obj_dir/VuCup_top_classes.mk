# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VuCup_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VuCup_top \
	VuCup_top__1 \
	VuCup_top__2 \
	VuCup_top__3 \
	VuCup_top__4 \
	VuCup_top___024unit \
	VuCup_top_cv32e41s_csr__pi19 \
	VuCup_top_cv32e41s_csr__pi19__1 \
	VuCup_top_cv32e41s_csr__W8_Mff_S1_R0 \
	VuCup_top_cv32e41s_csr__pi18 \
	VuCup_top_cv32e41s_pmp__P0_PB10_X1_XB0 \
	VuCup_top_cv32e41s_pmp__P0_PB10_X1_XB0__1 \
	VuCup_top_cv32e41s_pmp__P0_PB10_X1_XB0__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VuCup_top__Slow \
	VuCup_top__1__Slow \
	VuCup_top__2__Slow \
	VuCup_top___024unit__Slow \
	VuCup_top_cv32e41s_csr__pi19__Slow \
	VuCup_top_cv32e41s_csr__W8_Mff_S1_R0__Slow \
	VuCup_top_cv32e41s_csr__pi18__Slow \
	VuCup_top_cv32e41s_pmp__P0_PB10_X1_XB0__Slow \
	VuCup_top_cv32e41s_pmp__P0_PB10_X1_XB0__1__Slow \
	VuCup_top_cv32e41s_pmp__P0_PB10_X1_XB0__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VuCup_top__Dpi \
	VuCup_top__Trace \
	VuCup_top__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VuCup_top__Syms \
	VuCup_top__Trace__Slow \
	VuCup_top__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
