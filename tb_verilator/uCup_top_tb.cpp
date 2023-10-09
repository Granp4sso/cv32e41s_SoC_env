#include <stdio.h>
#include <stdlib.h>
#include "wsoc.h"
#include "cmd_parser.h"

int main(int argc, char **argv){

	wsoc_t wsoc[2];
	conf_t cfg;
	FILE * logfile;
	char MemViewCmd [256];
	unsigned tickcount = 0;
	int i = 0;

	// Call the CMD parser and extract the configuration
	parse_cmd(argc, argv, &cfg);

	// Initialize the WSOC instance
	wsoc_init(&wsoc[0], &cfg, 0); // SPI Master
	if(cfg.TwoDev) {
		wsoc_init(&wsoc[1], &cfg, 1); // SPI Slave
		
		// Connect two devices over SPI
		wsoc[1].tb->spi_rx_i = wsoc[0].tb->spi_tx_o;
		wsoc[0].tb->spi_rx_i = wsoc[1].tb->spi_tx_o;
	}

	printf("[Sim::Cycle::%08d] Starting Simulation for %ld Cycles\n\n", i, cfg.SimCycles);

	// Simulation LOOP
	while(i < cfg.SimCycles){

		wsoc_eval(&wsoc[0], &cfg);
		if(cfg.TwoDev) wsoc_eval(&wsoc[1], &cfg);
		i++;
	}

	// Stop Program

	printf("\n[Sim::Cycle::%08d] Simulation completed\n", i);
	if(cfg.Log) fprintf(wsoc[0].vRAM.log, "[Sim::Cycle::%08d] Simulation completed\n", i);
	
	wsoc_memshow(&wsoc[0], &cfg);

	printf("[Sim::Cycle::%08d] Press any key to exit\n", i);
	getchar();

	// Free Area

	wsoc_destroy(&wsoc[0]);
	if(cfg.TwoDev) wsoc_destroy(&wsoc[1]);

}



