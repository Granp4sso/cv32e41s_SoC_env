###############################################################################
# Tools
PREFIX     = riscv32-unknown-elf
GDB        = $(PREFIX)-gdb

###############################################################################

###############################################################################

TARGET_PATH = 	../code/projects/E41S_DS_bootloader_new/bin/
TARGET_NAME = 	bootloader
SRECFLAGS = 	-offset 0x0000 -byte-swap 4			

SCRIPTDIR = 	util_mem/
LOADSCRIPT = 	load_demo_system.sh
VMEM_DIR =		vmem/

###############################################################################

prepare:
	cp $(TARGET_PATH)$(TARGET_NAME).bin $(VMEM_DIR)$(TARGET_NAME).bin
	cp $(TARGET_PATH)$(TARGET_NAME).elf $(VMEM_DIR)$(TARGET_NAME).elf

vmem: prepare
	@echo "\n[srec_cat]      $(VMEM_DIR)$(TARGET_NAME).vmem"
	srec_cat $(VMEM_DIR)$(TARGET_NAME).bin -binary $(SRECFLAGS) -o $(VMEM_DIR)$(TARGET_NAME).vmem -vmem

run: vmem
	@echo "\n[RUN]      Running $(VMEM_DIR)$(TARGET_NAME).bin"
	cd $(SCRIPTDIR); ./$(LOADSCRIPT) run ../$(VMEM_DIR)$(TARGET_NAME).elf

debug: $(VMEM_DIR)$(TARGET).elf
	@if ! nc -z localhost 3333; then \
		echo "\n[Error] OpenOCD is not running!\n"; exit 1; \
	else \
		$(GDB) ./$(VMEM_DIR)$(TARGET).elf -ex "target extended localhost:3333" ; \
	fi

clear:
	@echo "[RM]      $(VMEM_DIR)$(TARGET_NAME).bin"; rm -f $(VMEM_DIR)$(TARGET_NAME).bin
	@echo "[RM]      $(VMEM_DIR)$(TARGET_NAME).vmem"; rm -f $(VMEM_DIR)$(TARGET_NAME).vmem
