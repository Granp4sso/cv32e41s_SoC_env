# Usage with Vitis IDE:
# In Vitis IDE create a Single Application Debug launch configuration,
# change the debug type to 'Attach to running target' and provide this 
# tcl script in 'Execute Script' option.
# Path of this script: C:\Users\Pietro\workspace\ascon_uart_zynq7000_receiver_system\_ide\scripts\systemdebugger_ascon_uart_zynq7000_receiver_system_standalone.tcl
# 
# 
# Usage with xsct:
# To debug using xsct, launch xsct and run below command
# source C:\Users\Pietro\workspace\ascon_uart_zynq7000_receiver_system\_ide\scripts\systemdebugger_ascon_uart_zynq7000_receiver_system_standalone.tcl
# 
connect -url tcp:127.0.0.1:3121
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo 210279653001A" && jtag_device_ctx=="jsn-Zybo-210279653001A-4ba00477-0"}
rst -system
after 3000
targets -set -filter {jtag_cable_name =~ "Digilent Zybo 210279653001A" && level==0 && jtag_device_ctx=="jsn-Zybo-210279653001A-13722093-0"}
fpga -file C:/Users/Pietro/workspace/ascon_uart_zynq7000_receiver/_ide/bitstream/ascon_uart_zynq7000.bit
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo 210279653001A" && jtag_device_ctx=="jsn-Zybo-210279653001A-4ba00477-0"}
loadhw -hw C:/Users/Pietro/workspace/ascon_uart_zynq7000/export/ascon_uart_zynq7000/hw/ascon_uart_zynq7000.xsa -mem-ranges [list {0x40000000 0xbfffffff}] -regs
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo 210279653001A" && jtag_device_ctx=="jsn-Zybo-210279653001A-4ba00477-0"}
source C:/Users/Pietro/workspace/ascon_uart_zynq7000_receiver/_ide/psinit/ps7_init.tcl
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "*A9*#0" && jtag_cable_name =~ "Digilent Zybo 210279653001A" && jtag_device_ctx=="jsn-Zybo-210279653001A-4ba00477-0"}
dow C:/Users/Pietro/workspace/ascon_uart_zynq7000_receiver/Debug/ascon_uart_zynq7000_receiver.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "*A9*#0" && jtag_cable_name =~ "Digilent Zybo 210279653001A" && jtag_device_ctx=="jsn-Zybo-210279653001A-4ba00477-0"}
con
