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
  
# jump to main program entry point (argc = argv = 0) 
# This time main is a U-mode code, so let's change MPP, MEPC and then perform MRET 

  la    a0, main 
  csrw  mepc, a0         # Load main addres into mepc
  csrr  a1, mstatus
  li    a0, 0xffffe7ff   # Mask MPP in mstatus (00 means User mode)

  # We need to configure the PMP as well, otherwise User mode code will always trap

  li    a2, 0xffffffff
  csrw  pmpaddr0, a2    # Whole address space with NAPOT encoding 
  
  li    a2, 0x0000001f
  csrw  pmpcfg0, a2     # pmp0cfg - NAPOT - RXW - Unlocked : 0b00011111 = 0x1f

  # Let's change Machine previous privilege wutg a0 value

  and   a1, a1, a0
  csrw  mstatus, a1

  addi a0, a0, 0
  addi a1, a0, 0

  la    ra, sleep_loop  # Set sleep_loop as a return address. Once the main stops its execution it will come back to wfi.
  mret                  # Use MRET to jump to main in user mode
  # jal x1, main

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
  jal x0, reset_handler
  .rept 31
  jal x0, default_exc_handler
  .endr
  jal x0, reset_handler
