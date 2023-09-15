###################################################################
#     ___             _          __                 _             #
#    / __\ ___   ___ | |_       / /  ___   __ _  __| | ___ _ __   #
#   /__\/// _ \ / _ \| __|____ / /  / _ \ / _` |/ _` |/ _ \ '__|  #
#  / \/  \ (_) | (_) | ||_____/ /__| (_) | (_| | (_| |  __/ |     #
#  \_____/\___/ \___/ \__|    \____/\___/ \__,_|\__,_|\___|_|     #
#                                                                 #
###################################################################  

# Bootloader is going to run in the last 256 bytes of memory

# x0 - Zero Register
# x1 - Byte Register
# x2 - Address Register
# x3 - Temp Register 0
# x4 - Temp Regsiter 1
# x5 - UART RX reg
# x6 - UART status reg
# x7 - GPIO address [debug]
# x10 - Byte Counter Register
# x11 - Size Register
# x12 - Entry point Register
# x13 - State Register
# x14 - RAM Base Address Register

# Bootloader is going to run in the last 256 bytes of memory
# first 3 instructions are used to jump to the bootloader (12 bytes), so the rept value is
# going to be MemorySize - 12 - 256. In our case it is 64K - 12 - 256 = 0xfee4

reset:
.org 0x00
  # DEBUG
  addi  x8, x8, 1
  li    x7, 0x80000000
  sw    x8, 0(x7)
  la    x1, bootloader
  jalr  x0, x1, 0

.rept 0x68
  .byte 0
.endr

j       reset

.rept 0xfe7C
  .byte 0
.endr

# Clean Registers

bootloader:

  mv    x1, x0
  li    x2, 0x1
  mv    x3, x0
  mv    x4, x0
  li    x5, 0x80001000
  addi  x6, x5, 0x8
  mv    x10, x0
  mv    x11, x0
  mv    x12, x0
  li    x13, 2
  li    x14, 0x00100000

  
start:

  # Read UART status reg (check if a byte is available)
  lw    x1, 0(x6)
  beq   x1, x2, start     # if UART status reg is 1 then there is no byte to read

  # If a byte is available, read RX reg
  lbu   x1, 0(x5)
  
  # If state is 0 jump to read_data, otherwise shift the current bytes (size and address regs are on 32 bits)
  beq   x13, x0, read_data

shift_byte:

  mv    x3, x10
  li    x4, 8
  mul   x4, x3, x4
  sll   x3, x1, x4
  
  # If state is 1, save result in Entry point reg, otherwise in Size reg
  li    x4, 1
  beq   x13, x4, read_entry

read_size:
  
  # DEBUG
  addi  x8, x8, 1
  sw    x8, 0(x7)

  add   x11, x3, x11
  j     tail
    
read_entry:

  # DEBUG
  addi  x8, x8, 1
  sw    x8, 0(x7)

  add   x12, x3, x12
  j     tail

read_data:
  # DEBUG
  addi  x8, x8, 1
  sw    x8, 0(x7)

  # Store the read byte in main memory
  sb      x1, 0(x14)
  addi    x14, x14, 1
  j       tail

tail:

  # Increase the byte counter and change state is possible
  addi  x10, x10, 1
  beq   x13, x0, read_data_state
  
  read_meta_state:
    li  x3, 4
    bne x10, x3, skip
    
    change_state:
    addi    x13, x13, -1
    li      x10, 0
        
    skip:
    j       start        
        
  read_data_state: 
    # If all Binary bytes have been read, jump to the end
    bne     x10, x11, skip
    j       end
    
end:

    # DEBUG
      mv    x8, x11
      sw    x8, 0(x7)

    # Wait for approx 1 seconds at 40 Mhz
    # li      x1, 0xffffffff
    # addi    x1, x1, -1
    # bne     x0, x1, end

    # DEBUG
      lw    x8, 0(x12)
      srli  x8, x8, 16
      sw    x8, 0(x7)

    # Jump to RAM entry point
    # csrrw   x0, 0x305 ,x14       # Set MTVEC to base ram address for the running code

    jalr    x0, x12, 0

    

  