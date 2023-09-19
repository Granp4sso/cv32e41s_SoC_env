
#Variables
VERILATOR = /usr/share/verilator/include
VLTSTD = /usr/share/verilator/include/vltstd/

ROOT_TOP = rtl
FILENAME = uCup_top
OLDFILENAME = cv32e41s_demo_system
TESTBENCH = tb_verilator/$(FILENAME)_tb
OLDTESTBENCH = tb_verilator/$(OLDFILENAME)_tb

TESTBENCH_SW_ENV = tb_verilator/$(FILENAME)_tb.cpp tb_verilator/vmem_2p.cpp tb_verilator/cmd_parser.cpp tb_verilator/vterm.cpp tb_verilator/logger.cpp

TRACE_DIR = waves

VINCLUDE = -y bhv -y cv32e41s_core -y cv32e41s_core/include -y cv32e41s_core/bhv -y demo_system -y primitives/prim -y primitives/prim_generic -y dm
WARNINGSBYPASS = -Wno-UNUSED -Wno-PINCONNECTEMPTY -Wno-SYNCASYNCNET -Wno-IMPORTSTAR -Wno-MODDUP 
WARNINGSBYPASS_CV32E41S = -Wno-VARHIDDEN -Wno-WIDTH -Wno-LITENDIAN -Wno-UNOPTFLAT -Wno-UNDRIVEN

#Targets

verilate_traced: traced tbchange
	g++ -I $(VERILATOR) -I $(VLTSTD) -I $(ROOT_TOP)/obj_dir -I c_tb $(VERILATOR)/verilated.cpp $(VERILATOR)/verilated_vcd_c.cpp $(TESTBENCH_SW_ENV) $(ROOT_TOP)/obj_dir/V$(FILENAME)__ALL.a -o $(FILENAME)_run

verilate_debug: traced_debug tbchange
	g++ -I $(VERILATOR) -I $(VLTSTD) -I $(ROOT_TOP)/obj_dir -I c_tb $(VERILATOR)/verilated.cpp $(VERILATOR)/verilated_vcd_c.cpp $(TESTBENCH_SW_ENV) $(ROOT_TOP)/obj_dir/V$(FILENAME)__ALL.a -o $(FILENAME)_run

tbchange:
	mv $(OLDTESTBENCH).cpp $(TESTBENCH).cpp; sed -i 's/$(OLDFILENAME)/$(FILENAME)/g' $(TESTBENCH).cpp

traced:
	cd $(ROOT_TOP); \
	verilator -Wall $(WARNINGSBYPASS) $(WARNINGSBYPASS_CV32E41S) --top-module $(FILENAME) --trace -cc $(FILENAME).sv $(VINCLUDE);
	cd $(ROOT_TOP)/obj_dir; make -f V$(FILENAME).mk

traced_debug:
	cd $(ROOT_TOP); \
	verilator --debug --gdbbt -Wall $(WARNINGSBYPASS) $(WARNINGSBYPASS_CV32E41S) --top-module $(FILENAME) --trace -cc $(FILENAME).sv $(VINCLUDE);
	cd $(ROOT_TOP)/obj_dir; make -f V$(FILENAME).mk

wave:
	gtkwave $(TRACE_DIR)/trace.vcd $(TRACE_DIR)/conf.gtkw &

clean:
	rm -r $(ROOT_TOP)/obj_dir
	rm $(FILENAME)_run
	rm $(TRACE_DIR)/trace.vcd
	
git:
	git submodule update --remote --merge					# Update submodules
	
