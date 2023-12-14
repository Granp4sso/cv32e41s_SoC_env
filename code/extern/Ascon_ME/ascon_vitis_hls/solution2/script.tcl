############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
## Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
############################################################
open_project ascon_vitis_hls
set_top axi_ascon
add_files ascon_vitis_hls/source/aead.c
add_files ascon_vitis_hls/source/api.h
add_files ascon_vitis_hls/source/ascon.h
add_files ascon_vitis_hls/source/axi_ascon.c
add_files ascon_vitis_hls/source/constants.h
add_files ascon_vitis_hls/source/crypto_aead.h
add_files ascon_vitis_hls/source/permutations.h
add_files ascon_vitis_hls/source/printstate.c
add_files ascon_vitis_hls/source/printstate.h
add_files ascon_vitis_hls/source/round.h
add_files ascon_vitis_hls/source/word.h
add_files ascon_vitis_hls/source/wrapper_axi_ascon.c
add_files -tb ascon_vitis_hls/source/axi_ascon_tb.c -cflags "-Wno-unknown-pragmas"
open_solution "solution2" -flow_target vivado
set_part {xc7z010-clg400-1}
create_clock -period 10 -name default
config_export -display_name axi_ascon -format ip_catalog -output C:/Users/Pietro/Desktop/Embedded_Systems/ascon -rtl verilog
config_cosim -tool xsim
source "./ascon_vitis_hls/solution2/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -output C:/Users/Pietro/Desktop/Embedded_Systems/ascon
