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

  # We need to configure the PMP-TRIE otherwise User mode code will always trap
  # NB: Machine mode can still be protected by the Locked PMP, however we do not
  # care to program it in this example

  # Program the xpmpcfg register to enable the TRIE. Bit 0 is the only writable
  li	    a0, 0x013   
  csrw	  0x7c4, a0

  # Also let's program the Region Protection Memory

  la      a0, 0x70003000  # Bank 0 Address
  la      a2, 0x70003200  # Bank 1 Address

  # Level 1 - No Guard, Valid, No Limit, nptr 0x8
  li      a1, 0x00440003
  sw      a1, 0(a0)
  li      a1, 0x00000000
  sw      a1, 0(a2)

  # Level 1 - No Guard, Valid, No Limit, nptr 0x10 (Used for Peripherals)
  li      a1, 0x00860001
  sw      a1, 4(a0)
  li      a1, 0x00000000
  sw      a1, 4(a2)

  # Level 2 - No Guard, Valid, Limit, nptr 0x10 (Used for non reloc code)
  li      a1, 0x00860001
  sw      a1, 8(a0)
  li      a1, 0x00000000
  sw      a1, 8(a2)

  # Level 2 - No Guard, Valid, Limit, nptr 0x14 (Used for reloc code)
  li      a1, 0x00A60001
  sw      a1, 12(a0)
  li      a1, 0x00000000
  sw      a1, 12(a2)

  # Limit - All permissions, No Relocation
  li      a1, 0x80000007
  sw      a1, 16(a0)
  li      a1, 0x00000000
  sw      a1, 16(a2)

  # Limit - All permissions, Relocation (0x6010400 -> 0x0010400)
  li      a1, 0x80000007
  sw      a1, 20(a0)
  li      a1, 0xE0000000
  sw      a1, 20(a2)
  
  # Clean used registers
  li      a0, 0x0
  li      a1, 0x0
  li      a2, 0x0

  # Now let's do the context switch

  la    a0, user_code 
  csrw  mepc, a0         # Load user code address into mepc
  csrr  a1, mstatus
  li    a0, 0xffffe7ff   # Mask MPP in mstatus (00 means User mode)

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
