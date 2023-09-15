# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#include "demo_system_regs.h"

.section .text

reset_handler:

  /* set all registers to zero */
  mv  x1, x0
  mv  x2, x1
  mv  x3, x1
  mv  x4, x1
  mv  x5, x1
  mv  x6, x1
  mv  x7, x1
  mv  x8, x1
  mv  x9, x1
  mv x10, x1
  mv x11, x1
  mv x12, x1
  mv x13, x1
  mv x14, x1
  mv x15, x1
  mv x16, x1
  mv x17, x1
  mv x18, x1
  mv x19, x1
  mv x20, x1
  mv x21, x1
  mv x22, x1
  mv x23, x1
  mv x24, x1
  mv x25, x1
  mv x26, x1
  mv x27, x1
  mv x28, x1
  mv x29, x1
  mv x30, x1
  mv x31, x1

  /* stack initilization */
  la   sp, _stack_start

  /* set interrupt to vectored */
  csrsi mtvec, 0x001

_start:
  .global _start

  /* clear BSS */
  la x26, _bss_start
  la x27, _bss_end

  bge x26, x27, zero_loop_end

zero_loop:
  sw x0, 0(x26)
  addi x26, x26, 4
  ble x26, x27, zero_loop
zero_loop_end:

/* let's try to write and readsome Supervisor CSRs */

csrr  x10, sstatus
li    x10, 0xf0e0d0c0
csrw  sstatus, x10
csrr  x11, sstatus
li    x12, 0x0000fff0
csrc  sstatus, x12
csrr  x11, sstatus
li    x12, 0x00000010
csrs  sstatus, x12
csrr  x11, sstatus

csrr  x10, sie
li    x10, 0xf0e0d0c1
csrw  sie, x10
csrr  x11, sie
li    x12, 0x0000fff0
csrc  sie, x12
csrr  x11, sie
li    x12, 0x00000020
csrs  sie, x12
csrr  x11, sie


csrr  x10, stvec
li    x10, 0xf0e0d0c2
csrw  stvec, x10
csrr  x11, stvec
li    x12, 0x0000fff0
csrc  stvec, x12
csrr  x11, stvec
li    x12, 0x00000030
csrs  stvec, x12
csrr  x11, stvec

csrr  x10, scounteren
li    x10, 0xf0e0d0c3
csrw  scounteren, x10
csrr  x11, scounteren
li    x12, 0x0000fff0
csrc  scounteren, x12
csrr  x11, scounteren
li    x12, 0x00000040
csrs  scounteren, x12
csrr  x11, scounteren

csrr  x10, senvcfg
li    x10, 0xf0e0d0c4
csrw  senvcfg, x10
csrr  x11, senvcfg
li    x12, 0x0000fff0
csrc  senvcfg, x12
csrr  x11, senvcfg
li    x12, 0x00000050
csrs  senvcfg, x12
csrr  x11, senvcfg

csrr  x10, sepc
li    x10, 0xf0e0d0c5
csrw  sepc, x10
csrr  x11, sepc
li    x12, 0x0000fff0
csrc  sepc, x12
csrr  x11, sepc
li    x12, 0x00000060
csrs  sepc, x12
csrr  x11, sepc

csrr  x10, scause
li    x10, 0xf0e0d0c6
csrw  scause, x10
csrr  x11, scause
li    x12, 0x0000fff0
csrc  scause, x12
csrr  x11, scause
li    x12, 0x00000070
csrs  scause, x12
csrr  x11, scause

csrr  x10, stval
li    x10, 0xf0e0d0c7
csrw  stval, x10
csrr  x11, stval
li    x12, 0x0000fff0
csrc  stval, x12
csrr  x11, stval
li    x12, 0x00000080
csrs  stval, x12
csrr  x11, stval

csrr  x10, sip
li    x10, 0xf0e0d0c8
csrw  sip, x10
csrr  x11, sip
li    x12, 0x0000fff0
csrc  sip, x12
csrr  x11, sip
li    x12, 0x00000090
csrs  sip, x12
csrr  x11, sip

csrr  x10, satp
li    x10, 0xf0e0d0c9
csrw  satp, x10
csrr  x11, satp
li    x12, 0x0000fff0
csrc  satp, x12
csrr  x11, satp
li    x12, 0x000000a0
csrs  satp, x12
csrr  x11, satp

csrr  x10, scontext
li    x10, 0xf0e0d0ca
csrw  scontext, x10
csrr  x11, scontext
li    x12, 0x0000fff0
csrc  scontext, x12
csrr  x11, scontext
li    x12, 0x000000b0
csrs  scontext, x12
csrr  x11, scontext

# Machine mode can Succesfully read, write, set and clear the SCSRs, let's see if user mode fails

la    a0, user_mode_area 
csrw  mepc, a0         # Load main addres into mepc
csrr  a1, mstatus
li    a0, 0xffffe7ff   # Mask MPP in mstatus (00 means User mode)

# We need to configure the PMP as well, otherwise User mode code will always trap

li    a2, 0xffffffff
csrw  pmpaddr0, a2    # Whole address space with NAPOT encoding 

li    a2, 0x0000001f
csrw  pmpcfg0, a2     # pmp0cfg - NAPOT - RXW - Unlocked : 0b00011111 = 0x1f

# Let's change Machine previous privilege wtih a0 value

and   a1, a1, a0
csrw  mstatus, a1

addi a0, a0, 0
addi a1, a0, 0

la    ra, sleep_loop  # Set sleep_loop as a return address.
mret                  # Use MRET to jump to user_mode_area


user_mode_area:

# At this point the code is running in User Mode. It can do basic operations, but it must fail in accessing SCSRs

li  a0, 0x01234567
li  a1, 0x00000001
add a1, a1, a0
csrr  a0, sstatus
csrw  sstatus, a1

nop
nop
nop
nop
nop


sleep_loop:
  wfi
  j sleep_loop

default_exc_handler:
  jal x0, sleep_loop

/* =================================================== [ exceptions ] === */
/* This section has to be down here, since we have to disable rvc for it  */

  .section .isr_vector, "ax"
  .option norvc;

  /* All unimplemented interrupts/exceptions go to the default_exc_handler. */
  .org 0x00
  jal x0, reset_handler       # For simulation the reset_handler must be the first entry in the vector table
  .rept 32
  jal x0, default_exc_handler
  .endr
  # jal x0, reset_handler         # For syntesis the reset_handler must be the last entry in the vector table (correct behaviour)
