# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
namespace eval ::optrace {
  variable script "/home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.runs/synth_1/top_nexys7.tcl"
  variable category "vivado_synth"
}

# Try to connect to running dispatch if we haven't done so already.
# This code assumes that the Tcl interpreter is not using threads,
# since the ::dispatch::connected variable isn't mutex protected.
if {![info exists ::dispatch::connected]} {
  namespace eval ::dispatch {
    variable connected false
    if {[llength [array get env XILINX_CD_CONNECT_ID]] > 0} {
      set result "true"
      if {[catch {
        if {[lsearch -exact [package names] DispatchTcl] < 0} {
          set result [load librdi_cd_clienttcl[info sharedlibextension]] 
        }
        if {$result eq "false"} {
          puts "WARNING: Could not load dispatch client library"
        }
        set connect_id [ ::dispatch::init_client -mode EXISTING_SERVER ]
        if { $connect_id eq "" } {
          puts "WARNING: Could not initialize dispatch client"
        } else {
          puts "INFO: Dispatch client connection id - $connect_id"
          set connected true
        }
      } catch_res]} {
        puts "WARNING: failed to connect to dispatch server - $catch_res"
      }
    }
  }
}
if {$::dispatch::connected} {
  # Remove the dummy proc if it exists.
  if { [expr {[llength [info procs ::OPTRACE]] > 0}] } {
    rename ::OPTRACE ""
  }
  proc ::OPTRACE { task action {tags {} } } {
    ::vitis_log::op_trace "$task" $action -tags $tags -script $::optrace::script -category $::optrace::category
  }
  # dispatch is generic. We specifically want to attach logging.
  ::vitis_log::connect_client
} else {
  # Add dummy proc if it doesn't exist.
  if { [expr {[llength [info procs ::OPTRACE]] == 0}] } {
    proc ::OPTRACE {{arg1 \"\" } {arg2 \"\"} {arg3 \"\" } {arg4 \"\"} {arg5 \"\" } {arg6 \"\"}} {
        # Do nothing
    }
  }
}

proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
OPTRACE "synth_1" START { ROLLUP_AUTO }
set_param chipscope.maxJobs 4
OPTRACE "Creating in-memory project" START { }
create_project -in_memory -part xc7a50ticsg324-1L

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.cache/wt [current_project]
set_property parent.project_path /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part digilentinc.com:nexys-a7-50t:part0:1.3 [current_project]
set_property ip_output_repo /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
OPTRACE "Creating in-memory project" END { }
OPTRACE "Adding files" START { }
read_verilog {
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_assert_dummy_macros.svh
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_assert_sec_cm.svh
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_util_memload.svh
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/new/assertions.svh
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/bhv/include/cv32e41s_wrapper.vh
}
set_property file_type "Verilog Header" [get_files /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_assert_dummy_macros.svh]
set_property file_type "Verilog Header" [get_files /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_assert_sec_cm.svh]
set_property file_type "Verilog Header" [get_files /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_util_memload.svh]
set_property file_type "Verilog Header" [get_files /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/new/assertions.svh]
read_verilog -library xil_defaultlib -sv {
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_assert.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_util_pkg.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_flop_macros.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_fifo_sync.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/bus.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/nexys/clkgen_xil7series.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e40p_clock_gate.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/include/cv32e41s_pkg.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_alert.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_alignment_buffer.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_alu.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_alu_b_cpop.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_b_decoder.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_clic_int_controller.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_compressed_decoder.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_controller.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_controller_bypass.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_controller_fsm.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_core.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_cs_registers.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_csr.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_data_obi_interface.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_debug_triggers.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_decoder.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/dm_pkg.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/cv32e41s_demo_system.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_div.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_dummy_instr.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_ex_stage.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_ff_one.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_i_decoder.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_id_stage.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_if_stage.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_incore.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_instr_obi_interface.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_int_bus.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_int_controller.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_lfsr.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_load_store_unit.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_lsu_response_filter.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_m_decoder.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_mpu_test.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_mult.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_obi_integrity_fifo.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_pc_check.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_pc_target.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_pma.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_pmp.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_pmp_walker_64.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_popcnt.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_prefetch_unit.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_prefetcher.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_ram_struct.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_rchk_check.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_register_file.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_register_file_ecc.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_register_file_wrapper.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_rpm.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_sequencer.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/bhv/cv32e41s_sffr.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/bhv/cv32e41s_sffs.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_sleep_unit.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_tcm.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_wb_stage.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_wpt.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_write_buffer.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/cv32e41s_core/cv32e41s_xpmp.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/debounce.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/debug_rom.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/debug_rom_one_scratch.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/dm_csrs.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/dm_mem.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/dm_sba.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/dm_top.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/new/dmi_bscane_tap.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/dmi_cdc.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/dm/dmi_jtag.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/gpio.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_count.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_fifo_async.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_fifo_sync_cnt.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_flop.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_flop_2sync.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim_generic/prim_generic_flop.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_ram_2p_pkg.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim_generic/prim_generic_ram_2p.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/pwm.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/pwm_wrapper.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/ram_2p.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/spi_master.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/spi_slave.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/spi_top.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/timer.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/uCup_top.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/demo_system/uart.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/nexys/top_nexys7.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/bhv/include/cv32e41s_rvfi_pkg.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_ram_1p_pkg.sv
  /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/sources_1/imports/prim/prim_secded_pkg.sv
}
OPTRACE "Adding files" END { }
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/constrs_1/imports/constraints/pins_nexys7.xdc
set_property used_in_implementation false [get_files /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/constrs_1/imports/constraints/pins_nexys7.xdc]

set_param ips.enableIPCacheLiteLoad 1

read_checkpoint -auto_incremental -incremental /home/stefano/Desktop/RISC-V/MCU/cv32e41s_soc/cv32e41s_SoC_env/fpga/vivado/cv32e41s_soc_design/cv32e41s_soc_design.srcs/utils_1/imports/synth_1/top_nexys7.dcp
close [open __synthesis_is_running__ w]

OPTRACE "synth_design" START { }
synth_design -top top_nexys7 -part xc7a50ticsg324-1L
OPTRACE "synth_design" END { }
if { [get_msg_config -count -severity {CRITICAL WARNING}] > 0 } {
 send_msg_id runtcl-6 info "Synthesis results are not added to the cache due to CRITICAL_WARNING"
}


OPTRACE "write_checkpoint" START { CHECKPOINT }
# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef top_nexys7.dcp
OPTRACE "write_checkpoint" END { }
OPTRACE "synth reports" START { REPORT }
create_report "synth_1_synth_report_utilization_0" "report_utilization -file top_nexys7_utilization_synth.rpt -pb top_nexys7_utilization_synth.pb"
OPTRACE "synth reports" END { }
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
OPTRACE "synth_1" END { }
