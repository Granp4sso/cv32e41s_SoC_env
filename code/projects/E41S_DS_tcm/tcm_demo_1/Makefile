PROJECT = tcm_demo
MCU = DEMOSYSTEM

SRCS = $(wildcard src/*.c) $(wildcard lib/*.c)
OBJ = obj/
OBJS = $(addprefix $(OBJ), $(notdir $(SRCS:.c=.o)))
LD_SCRIPT = ld/$(MCU)_FLASH.ld
INC = -Iinc

# If you have 64-bit toolchain
# RV_PREFIX = riscv64-unknown-elf-
# 32BITCCFLAGS = -march=rv32im -mabi=ilp32
# 32BITODFLAGS = -mriscv:rv32
# CC = $(RV_PREFIX)gcc $(32BITCCFLAGS)
# OBJDUMP = $(RV_PREFIX)objdump $(32BITODFLAGS)
#
RV_PREFIX = /opt/rv32/bin/riscv32-unknown-elf-
CC = $(RV_PREFIX)gcc 
LD = $(RV_PREFIX)ld
OBJDUMP = $(RV_PREFIX)objdump
OBJCOPY = $(RV_PREFIX)objcopy

CFLAGS = -march=rv32im_zicsr_zifencei -O0 -c
LDFLAGS = -nostdlib -T$(LD_SCRIPT) 

RM      = rm -rf 					# Remove recursively command
MKDIR   = @mkdir -p $(@D) 			# Creates folders if not present
STARTUP = crt0

all: bin/$(PROJECT).bin

$(OBJ)%.o: src/%.c 
	$(MKDIR)
	$(CC) -o $@ $^ $(INC) $(CFLAGS)

$(OBJ)%.o: lib/%.c
	$(MKDIR)
	$(CC) -o $@ $^ $(INC) $(CFLAGS)

obj/$(STARTUP).o: src/$(STARTUP).s
	$(MKDIR)
	$(CC) -o obj/$(STARTUP).o src/$(STARTUP).s $(INC) $(CFLAGS)

bin/$(PROJECT).elf: $(OBJS) obj/$(STARTUP).o
	$(MKDIR)
	$(LD) -o $@ $^ $(LDFLAGS)

bin/$(PROJECT).bin: bin/$(PROJECT).elf
	$(OBJCOPY) -O binary bin/$(PROJECT).elf bin/$(PROJECT).bin

clean:
	-$(RM) obj
	-$(RM) bin

.PHONY: all clean

dump:
	$(OBJDUMP) -D bin/$(PROJECT).elf


