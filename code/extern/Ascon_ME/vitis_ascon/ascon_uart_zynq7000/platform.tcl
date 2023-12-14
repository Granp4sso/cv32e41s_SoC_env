# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\Users\Pietro\workspace\ascon_uart_zynq7000\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\Users\Pietro\workspace\ascon_uart_zynq7000\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {ascon_uart_zynq7000}\
-hw {C:\Users\Pietro\Desktop\Embedded_Systems\ascon_2_boards\vivado_ascon_uart_zynq7000\ascon_uart_zynq7000.xsa}\
-proc {ps7_cortexa9_0} -os {standalone} -out {C:/Users/Pietro/workspace}

platform write
platform generate -domains 
platform active {ascon_uart_zynq7000}
platform generate
platform config -updatehw {C:/Users/Pietro/Desktop/Embedded_Systems/ascon_2_boards/vivado_ascon_uart_zynq7000/ascon_uart_zynq7000.xsa}
platform generate -domains 
