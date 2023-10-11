#include "wsoc.h"

void wsoc_init(wsoc_t * wsoc, conf_t * cfg, uint8_t is_slave){

    wsoc->tb = new VuCup_top();
    wsoc->trace = new VerilatedVcdC();
    wsoc->clkcnt = 0;

	// Generate trace.vcd file
	trace_init(wsoc->tb, wsoc->trace, cfg, is_slave);
	
	// Initialize Memory
	
	if(!is_slave) vmem_init(&wsoc->vRAM, cfg->BinPath, cfg->MemSize, cfg->MemInstBaddr, cfg->MemDataBaddr, cfg->Log);
	else vmem_init(&wsoc->vRAM, cfg->BinPath2, cfg->MemSize, cfg->MemInstBaddr, cfg->MemDataBaddr, cfg->Log);

	// Initialize Terminal
	vterm_init(&wsoc->vterm, 10000000, 2*CLK_NS);
}

void wsoc_cycle(wsoc_t * wsoc, conf_t * cfg){

    if(!wsoc->clkcnt) wsoc->tb->rst_sys_ni = 0;
	else{
		wsoc->tb->uart_rx_i = 1;
		wsoc->tb->rst_sys_ni = 1;

		if(cfg->Log) fprintf(wsoc->vRAM.log, "[Sim::Cycle::%08ld]", wsoc->clkcnt);
		vmem_protocol(&wsoc->vRAM, wsoc->tb, INST_PORT);
		vmem_protocol(&wsoc->vRAM, wsoc->tb, DATA_PORT);
		if(cfg->TerminalShow) vterm_rx_protocol(&wsoc->vterm, wsoc->tb);
		if(cfg->Log) fprintf(wsoc->vRAM.log, "\n");

	}
}

void wsoc_break(wsoc_t * wsoc, conf_t * cfg){

    // Break Point handling
	if(wsoc->vRAM.mem_addr[INST_PORT] + wsoc->vRAM.mem_baddr[INST_PORT] == cfg->HaltAddr){
		printf("\t\t      [Break\t] Simulation Halted at Address 0x%08x\n", cfg->HaltAddr);
		wsoc_memshow(wsoc, cfg);

		printf("\t\t      [Break\t] Press any key to resume\n");
		getchar();
	}
}

void wsoc_tick(int tickcount, VuCup_top *tb, VerilatedVcdC *tfp){
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

void wsoc_eval(wsoc_t * wsoc, conf_t * cfg){

	wsoc_cycle(wsoc, cfg);
	wsoc_break(wsoc, cfg);
    wsoc_tick(++wsoc->clkcnt,wsoc->tb,wsoc->trace);
}

void trace_init(VuCup_top *tb, VerilatedVcdC * tfp, conf_t * cfg, uint8_t is_slave){

	if(cfg->Trace){
		Verilated::traceEverOn(true);

		printf("[tb\t] Trace generation ON\n");

		tb->trace(tfp,99);
		if(is_slave) tfp->open("waves/trace_slave.vcd");
		else tfp->open("waves/trace.vcd");
	}

}

void wsoc_memshow(wsoc_t * wsoc, conf_t * cfg){

	uint32_t base;
	uint32_t range;
	char MemViewCmd [256];

	if(cfg->MemShow){

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
				vmem_print(&wsoc->vRAM, base, range);
				printf("\n");
			}
			else printf("\t\t      [MemView\t] Unrecognized command\n");
		}
	}
}

void wsoc_destroy(wsoc_t * wsoc){

    vmem_free(&wsoc->vRAM);
	delete wsoc->tb;
	delete wsoc->trace;
}