//*** Verilator testbench template ***

#include <stdio.h>
#include <stdlib.h>
#include "VuCup_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "vmem_2p.h"
#include "vterm.h"
#include "logger.h"
#include "cmd_parser.h"

#define CLK_NS 10
//#define BOOTLOADER_INPUT_UARTS 1

void tick(int tickcount, VuCup_top *tb, VerilatedVcdC *tfp);
void trace_init(VuCup_top *tb, VerilatedVcdC * tfp, conf_t * cfg);

int main(int argc, char **argv){
	
	VuCup_top * tb = new VuCup_top;
	VerilatedVcdC * tfp = new VerilatedVcdC;
	vmem_2p ext_vmem;
	vterm term;
	conf_t cfg;
	FILE * logfile;
	char MemViewCmd [256];
	unsigned tickcount = 0;
	int i = 0;

	// Call the CMD parser and extract the configuration
	parse_cmd(argc, argv, &cfg);

	// Generate trace.vcd file
	trace_init(tb, tfp, &cfg);
	
	// Initialize Memory
	vmem_init(&ext_vmem, cfg.BinPath, cfg.MemSize, cfg.MemInstBaddr, cfg.MemDataBaddr, cfg.Log);

	// Initialize Terminal
	vterm_init(&term, 10000000, 2*CLK_NS);

	printf("[Sim::Cycle::%08d] Starting Simulation for %ld Cycles\n\n", i, cfg.SimCycles);

	// Simulation LOOP
	while(i < cfg.SimCycles){
	
		if(!i) tb->rst_sys_ni = 0;
		else{
			tb->uart_rx_i = 1;
			tb->rst_sys_ni = 1;

			if(cfg.Log) fprintf(ext_vmem.log, "[Sim::Cycle::%08d]", i);
			vmem_protocol(&ext_vmem, tb, INST_PORT);
			vmem_protocol(&ext_vmem, tb, DATA_PORT);
			if(cfg.TerminalShow) vterm_rx_protocol(&term, tb);
			if(cfg.Log) fprintf(ext_vmem.log, "\n");

			#ifdef BOOTLOADER_INPUT_UARTS
				vterm_tx_bootloader(&term, tb);
			#endif

		}

		// Break Point handling
		if(ext_vmem.mem_addr[INST_PORT] + ext_vmem.mem_baddr[INST_PORT] == cfg.HaltAddr){
			printf("\t\t      [Break\t] Simulation Halted at Address 0x%08x\n", cfg.HaltAddr);
			if(cfg.MemShow){

				uint32_t base;
				uint32_t range;

				printf("\t\t      [MemView\t] MemView Enabled, press p to inspect memory or q to exit\n");

				while(1){
					printf("\t\t      [MemView\t] ");
					fgets(MemViewCmd, 256, stdin);
					if ((strlen(MemViewCmd) > 0) && (MemViewCmd[strlen (MemViewCmd) - 1] == '\n'))
						MemViewCmd[strlen (MemViewCmd) - 1] = '\0';

					if(strlen(MemViewCmd) == 1 && MemViewCmd[0] == 'q') break;
					else if(MemViewCmd[0] == 'p'){
						base = (int)strtol(MemViewCmd + 2, NULL, 16); 
						range = (int)strtol(MemViewCmd + 12, NULL, 10); 
						printf("\t\t      [MemView\t] Printing %0d Bytes from addr 0x%08x\n", range, base);
						vmem_print(&ext_vmem, base, range);
						printf("\n");
					}
					else printf("\t\t      [MemView\t] Unrecognized command\n");
				}
			}
			else{
				printf("\t\t      [Break\t] Press any key to resume\n");
				getchar();
			}
		}
		
		tick(++tickcount,tb,tfp);
		i++;
	}

	// Stop Program

	printf("\n[Sim::Cycle::%08d] Simulation completed\n", i);
	if(cfg.Log) fprintf(ext_vmem.log, "[Sim::Cycle::%08d] Simulation completed\n", i);
	
	if(cfg.MemShow){

		uint32_t base;
		uint32_t range;

		printf("\t\t      [MemView\t] MemView Enabled, press p to inspect memory or q to exit\n");

		while(1){
			printf("\t\t      [MemView\t] ");
			fgets(MemViewCmd, 256, stdin);
			if ((strlen(MemViewCmd) > 0) && (MemViewCmd[strlen (MemViewCmd) - 1] == '\n'))
				MemViewCmd[strlen (MemViewCmd) - 1] = '\0';

			if(strlen(MemViewCmd) == 1 && MemViewCmd[0] == 'q') break;
			else if(MemViewCmd[0] == 'p'){
				base = (int)strtol(MemViewCmd + 2, NULL, 16); 
				range = (int)strtol(MemViewCmd + 12, NULL, 10); 
				printf("\t\t      [MemView\t] Printing %0d Bytes from addr 0x%08x\n", range, base);
				vmem_print(&ext_vmem, base, range);
				printf("\n");
			}
			else printf("\t\t      [MemView\t] Unrecognized command\n");
		}
	} else {
		printf("[Sim::Cycle::%08d] Press any key to exit\n", i);
		getchar();
	}

	// Free Area

	vmem_free(&ext_vmem);
	delete tb;
	delete tfp;

}

void tick(int tickcount, VuCup_top *tb, VerilatedVcdC *tfp){
	tb->eval();
	if(tfp) //dump 2ns before the tick
		tfp->dump(tickcount*CLK_NS - 2);
	tb->clk_sys_i = 1;
	tb->eval();
	if(tfp) //Tick every CLK_NS
		tfp->dump(tickcount*CLK_NS);
	tb->clk_sys_i = 0;
	tb->eval();
	if(tfp){ //Trailing edge dump
		tfp->dump(tickcount*CLK_NS+5);
		tfp->flush();
	}
}

void trace_init(VuCup_top *tb, VerilatedVcdC * tfp, conf_t * cfg){

	if(cfg->Trace){
		Verilated::traceEverOn(true);

		printf("[tb\t] Trace generation ON\n");

		tb->trace(tfp,99);
		tfp->open("waves/trace.vcd");
	}

}

