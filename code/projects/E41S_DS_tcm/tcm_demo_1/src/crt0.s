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

    /* test loads */
  /*li    a5, 0xaabbccdd
  add   sp,sp,-4
  sw    a5, 0(sp)
  lw    a4, 0(sp)
  li    a5, 0x11223344
  add   sp,sp,-1
  sb    a5, 0(sp)
  lbu   a4, 0(sp)
  add   sp,sp,-3
  li    a5, 0x55667788
  sh    a5, 0(sp)
  lhu   a4, 0(sp)*/



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

/* jump to main program entry point (argc = argv = 0) */
  addi x10, x0, 0
  addi x11, x0, 0
  
  jal x1, main

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
  # jal x0, reset_handler
  .rept 32
  jal x0, default_exc_handler
  .endr
  jal x0, reset_handler
