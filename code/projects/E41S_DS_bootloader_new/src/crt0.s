# Bootloader is going to run in the last 4KB of memory
# first 128 bytes are used for vector table (empty), then the reset handler clear all registers (124 more bytes)
# finally 12 more bytes are required to jump to main, for a total of 264 bytes.
# The number of bytes to be left free are MemSize - BootloaderSize - 260. In our case it is 64K - 4KB - 260 = 61148 = EEDC
# Main will start exactly at MemSize - BootloaderSize = 0x0010f000

#include "demo_system_regs.h"

.section .text

reset_handler:

  /* Set CSRs init values  */
  li x10, 0x1800
  csrs mstatus, x10
  # Set vectored mode
  csrsi mtvec, 0x1

  .section .isr_vector, "ax"
  .option norvc;

  .rept 32
    nop
  .endr

  /* set all registers to zero */
  mv  x1, x0
  la   sp, _stack_start
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

  la    x1, main
  jalr  x0, x1, 0

  .rept 0xeedc
    .byte 0
  .endr
