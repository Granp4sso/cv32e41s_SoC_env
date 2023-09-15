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

switch_to_user:

# This time main is a U-mode code, so let's change MPP, MEPC and then perform MRET 

  la    a0, user_code 
  csrw  mepc, a0         # Load user code address into mepc
  csrr  a1, mstatus
  li    a0, 0xffffe7ff   # Mask MPP in mstatus (00 means User mode)

  # We need to configure the PMP as well, otherwise User mode code will always trap

  # NAPOT Formula: NAPOT_Encoding = [Base_addr + ((Range/2) - 1) >> 2]
  # Region 0x00100000 - 0x00110000 is the standard memory region 
  # [0x00100000 + ((0x10000/2) - 1))] >> 2 = [0x00107fff ] >> 2 = 0x00041fff
  li    a2, 0x00041fff
  csrw  pmpaddr0, a2     

  # Region 0x60104000 - 0x60104200 has to be relocated
  # [0x60104000 + ((0x200/2) - 1))] >> 2 = 0x601040ff >> 2 = 0x1804103f
  li    a2, 0x1804103f
  csrw  pmpaddr1, a2    

  # Region 0x80000000 - 0x80100000 is t he peripheral region (using the UART)
  # [0x80000000 + ((0x100000/2) - 1))] >> 2 = 0x8007ffff >> 2 = 0x1804003f
  li    a2, 0x2001ffff
  csrw  pmpaddr2, a2

  # Write permissions and encoding: 
  #   Region 0: NAPOT - XWR - Unlocked : 0b00011111 = 0x1f
  #   Region 1: NAPOT - XWR - Unlocked : 0b00011111 = 0x1f
  #   Region 2: NAPOT - -WR - Unlocked : 0b00011011 = 0x1b
  li    a2, 0x001b1f1f
  csrw  pmpcfg0, a2     

  # Configure the PMR relocation offset for the two regions
  li    a2, 0x00000000
  csrw  0xbc0, a2    # Region 0 - Offset 0x00000000

  li    a2, 0xE0000000
  csrw  0xbc1, a2    # Region 1 - Offset 0xE0000000 (-0x60000000 )

  # Let's change Machine previous privilege with a0 value

  and   a1, a1, a0
  csrw  mstatus, a1

  addi a0, a0, 0
  addi a1, a0, 0

  la    ra, sleep_loop  # Set sleep_loop as a return address. Once the main stops its execution it will come back to wfi.
  mret                  # Use MRET to jump to main in user mode

user_code:

	jal   x1, main
	

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
