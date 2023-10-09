#include <stdio.h>
#include <stdlib.h>
#include "wsoc.h"
#include "cmd_parser.h"

int main(int argc, char **argv){

	wsoc_t wsoc;
	conf_t cfg;
	FILE * logfile;
	char MemViewCmd [256];
	unsigned tickcount = 0;
	int i = 0;

	// Call the CMD parser and extract the configuration
	parse_cmd(argc, argv, &cfg);

	// Initialize the WSOC instance
	wsoc_init(&wsoc, &cfg);

	printf("[Sim::Cycle::%08d] Starting Simulation for %ld Cycles\n\n", i, cfg.SimCycles);

	// Simulation LOOP
	while(i < cfg.SimCycles){

		wsoc_eval(&wsoc, &cfg);
		i++;
	}

	// Stop Program

	printf("\n[Sim::Cycle::%08d] Simulation completed\n", i);
	if(cfg.Log) fprintf(wsoc.vRAM.log, "[Sim::Cycle::%08d] Simulation completed\n", i);
	
	wsoc_memshow(&wsoc, &cfg);

	printf("[Sim::Cycle::%08d] Press any key to exit\n", i);
	getchar();

	// Free Area

	wsoc_destroy(&wsoc);

}



