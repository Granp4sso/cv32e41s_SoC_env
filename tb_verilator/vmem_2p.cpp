#include "vmem_2p.h"
#include "logger.h"

uint32_t log2u(uint8_t a){
	switch(a){
		case 1: return 0; break;
		case 2: return 1; break;
		case 4: return 2; break;
		case 8: return 3; break;
		default: return 0; break;
	}
}

void vmem_init(vmem_2p_t * Memory, char * path, uint32_t size, uint32_t inst_baddr, uint32_t data_baddr, uint8_t log){

	printf("[VMemory\t] Initializing Memory - Creating memory of size %08d Bytes\n", size);

	Memory->mem = (vmem_cell_t *) malloc(sizeof(vmem_cell_t)*size);
	Memory->mem_size = size; 
	Memory->mem_baddr[INST_PORT] = inst_baddr;
	Memory->mem_baddr[DATA_PORT] = data_baddr;

	printf("[VMemory\t] Initializing Memory - Port 0 (Data)\n"); 

	for( int i = 0; i < Memory->mem_size; i++ ) {
		Memory->mem[i].cell = 0x00;
		Memory->mem[i].attr = CLEAN;
	}

	Memory->mem_state[INST_PORT] = VMEM_INST_FIRST_REQUEST; 	Memory->mem_state[DATA_PORT] = VMEM_DATA_FIRST_REQUEST;
	Memory->mem_addr[INST_PORT] = 0;	Memory->mem_addr[DATA_PORT] = 0;
	Memory->mem_op[INST_PORT] = 0;		Memory->mem_op[DATA_PORT] = 0;
	Memory->mem_strb[INST_PORT] = 0;	Memory->mem_strb[DATA_PORT] = 0;

	printf("[VMemory\t] Initializing Memory - Port 1 (Inst)\n"); 

	FILE *binfile  = fopen(path, "r");
	uint32_t temp;
	int i = 0;

	if(binfile == NULL){
		printf("[VMemory\t] ERROR : Could not open BIN file\n"); 
		exit(-1); // must include stdlib.h 
	}

	Memory->mem[0].cell = 0x13; Memory->mem[0].attr = EXECUTED;
	Memory->mem[1].cell = 0x00; Memory->mem[1].attr = EXECUTED;
	Memory->mem[2].cell = 0x00; Memory->mem[2].attr = EXECUTED;
	Memory->mem[3].cell = 0x00; Memory->mem[3].attr = EXECUTED;

	printf("[VMemory\t] Binary file opened\n");

	while(!feof(binfile)){
		if(i > Memory->mem_size) {printf("[VMemory\t] ERROR : Memory is too small to contain the binary\n"); exit(-1);}
		fread(&Memory->mem[i++].cell, sizeof(uint8_t), 1, binfile);
	}

	printf("[VMemory\t] Program is %08d Bytes, Memory usage is %03.2f perc.\n", i, (double)(i*100)/Memory->mem_size);
	printf("[VMemory\t] Binary loaded\n");

	// Enable memory logging
	if(log){
		printf("[VMemory\t] opening logfile\n");

		Memory->log = fopen("logfile","w+");
		if(!Memory->log){
			printf("[VMemory\t] ERROR: logfile not opened\n");
			exit(-1);
		}

		printf("[VMemory\t] logfile prepared\n");
	}
	else Memory->log = NULL;

}

void vmem_print(vmem_2p_t * Memory, uint32_t base, uint32_t range){

	// Align base to 32 bits if it is not, and then relocate it to the baddr
	base &= 0xfffffffc; 
	base -= Memory->mem_baddr[INST_PORT];
	
	printf("\n\t\t00 01 02 03 04 05 06 07\t\t08 09 0A 0B 0C 0D 0E 0F\n\n");
	for(int i = 0; i < range/16; i++){
	
		printf("0x%08x\t",16*i + Memory->mem_baddr[INST_PORT] + base );
		for(int j = 0; j < 16; j++) {
			switch(Memory->mem[16*i+j+base].attr){
				case CLEAN: 		printf("%02x ",Memory->mem[16*i+j+base].cell);						break;	//White
				case WRITTEN: 		printf("\x1b[33m%02x \x1b[0m",Memory->mem[16*i+j+base].cell);		break;	//Yellow
				case READ: 			printf("\x1b[34m%02x \x1b[0m",Memory->mem[16*i+j+base].cell);		break;	//Blue
				case EXECUTED: 		printf("\x1b[36m%02x \x1b[0m",Memory->mem[16*i+j+base].cell);		break;	//Cyan
				case WRITTEN|READ: 	printf("\x1b[32m%02x \x1b[0m",Memory->mem[16*i+j+base].cell);		break;	//Green
				default: 			printf("\x1b[35m%02x ",Memory->mem[16*i+j+base].cell);				break;	//Magenta for undefined
			}
			if(j == 7) printf("\t");
		}
		printf("\n");
	}
}

void vmem_protocol(vmem_2p_t * Memory, VuCup_top *tb, const int port){

	if(tb->mem_addr_o[INST_PORT] - Memory->mem_baddr[INST_PORT] >= Memory->mem_size && tb->mem_req_o[INST_PORT]){
		printf("[VMemory\t] ERROR: Requesting out of range memory location <0x%08x> on instruction port\n", tb->mem_addr_o[INST_PORT]);
		//exit(-1);
	}

	if(tb->mem_addr_o[DATA_PORT] - Memory->mem_baddr[DATA_PORT] >= Memory->mem_size && tb->mem_req_o[DATA_PORT]){
		printf("[VMemory\t] ERROR: Requesting out of range memory location <0x%08x> on data port\n", tb->mem_addr_o[DATA_PORT]);
		//exit(-1);
	}
	
	if(port == INST_PORT) vmem_inst_protocol(Memory, tb); 
	else if (port == DATA_PORT) vmem_data_protocol(Memory, tb); 
	else { printf("[VMemory\t] ERROR: Unrecognized port\n"); exit(-1); }

}


void vmem_inst_protocol(vmem_2p_t * Memory, VuCup_top *tb){

	// Supporting the instruction OBI memory protocol for openHW cv32e40 family (p,s,x). WHAT ABOUT COMPRESSED INSTRUCTIONS?

	// The protocol il always going to provide back-to-back responses, because no other master is in the uCup SoC at the moment

	switch(Memory->mem_state[INST_PORT]){

		case VMEM_INST_FIRST_REQUEST:

			if(tb->mem_req_o[INST_PORT]){
				Memory->mem_addr[INST_PORT] = tb->mem_addr_o[INST_PORT] - Memory->mem_baddr[INST_PORT];
				Memory->mem_state[INST_PORT] = VMEM_INST_B2B_REQUEST;
			}
			tb->mem_rvalid_i[INST_PORT] = 0;

		break;

		case VMEM_INST_B2B_REQUEST:

			uint32_t req_addr = Memory->mem_addr[INST_PORT];
			uint32_t temp0 = (Memory->mem[req_addr + 0].cell);
			uint32_t temp1 = (Memory->mem[req_addr + 1].cell << 8);
			uint32_t temp2 = (Memory->mem[req_addr + 2].cell << 16);
			uint32_t temp3 = (Memory->mem[req_addr + 3].cell << 24);
				
			tb->mem_rvalid_i[INST_PORT] = 1;
			tb->mem_rdata_i[INST_PORT] = temp3 | temp2 | temp1 | temp0;
					
			Memory->mem[req_addr + 0].attr |= EXECUTED;
			Memory->mem[req_addr + 1].attr |= EXECUTED;
			Memory->mem[req_addr + 2].attr |= EXECUTED;
			Memory->mem[req_addr + 3].attr |= EXECUTED;
				
			if(Memory->log) fprintf(Memory->log,"[VMemory\t] FETCH: Instruction\t0x%08x - Address 0x%08x",temp3|temp2|temp1|temp0, req_addr + Memory->mem_baddr[INST_PORT]);

			// If a B2B transaction is required
			if(tb->mem_req_o[INST_PORT]){
				Memory->mem_addr[INST_PORT] = tb->mem_addr_o[INST_PORT] - Memory->mem_baddr[INST_PORT];
				Memory->mem_state[INST_PORT] = VMEM_INST_B2B_REQUEST;
			}
			else Memory->mem_state[INST_PORT] = VMEM_INST_FIRST_REQUEST;
		
			

		break;
	}
}


void vmem_data_protocol(vmem_2p_t * Memory, VuCup_top *tb){

	// Supporting the instruction OBI memory protocol for openHW cv32e40 family (p,s,x)

	// The protocol here is for loads and store. The memory follows a unified address space for both instructions and data, so be careful ;)

	switch(Memory->mem_state[DATA_PORT]){
		case VMEM_DATA_FIRST_REQUEST: {
			if(tb->mem_req_o[DATA_PORT]){
				Memory->mem_addr[DATA_PORT] = tb->mem_addr_o[DATA_PORT] - Memory->mem_baddr[DATA_PORT];
				Memory->mem_strb[DATA_PORT] = tb->mem_be_o[DATA_PORT];
				Memory->mem_op[DATA_PORT] = tb->mem_we_o[DATA_PORT];
				Memory->mem_wdata[DATA_PORT] = tb->mem_wdata_o[DATA_PORT];
				Memory->mem_state[DATA_PORT] = VMEM_DATA_B2B_REQUEST;
			}
			tb->mem_rvalid_i[DATA_PORT] = 0;
		break;
		}
		case VMEM_DATA_B2B_REQUEST: 
		
			uint32_t req_addr = Memory->mem_addr[DATA_PORT];
		
			if(Memory->mem_op[DATA_PORT] == DATA_PORT_READ) {
				// Perform a LOAD (i.e. Read transaction)
				uint32_t temp[4];

				req_addr = (req_addr & 0xfffffffc);
				temp[0] = (Memory->mem[req_addr + 0].cell);
				temp[1] = (Memory->mem[req_addr + 1].cell << 8);
				temp[2] = (Memory->mem[req_addr + 2].cell << 16);
				temp[3] = (Memory->mem[req_addr + 3].cell << 24);

				switch(Memory->mem_strb[DATA_PORT]){
					case 0x1: case 0x2: case 0x4: case 0x8: 	

						req_addr += log2u(Memory->mem_strb[DATA_PORT]);
						temp[0] = temp[log2u(Memory->mem_strb[DATA_PORT])];
						tb->mem_rdata_i[DATA_PORT] = temp[0];
						Memory->mem[req_addr].attr |= READ;
						if(Memory->log)
							fprintf(Memory->log,"\n\t\t      [VMemory\t] LOAD: Data\t\t0x%08x - Address 0x%08x - Byte Enable 0x%01x",temp[0], req_addr + Memory->mem_baddr[DATA_PORT], Memory->mem_strb[DATA_PORT]);
					break;
					case 0x3: case 0xC:

						req_addr += log2u((Memory->mem_strb[DATA_PORT] >> 2) + 1);
						temp[0] = temp[log2u((Memory->mem_strb[DATA_PORT] >> 2) + 1) + 0];
						temp[1] = temp[log2u((Memory->mem_strb[DATA_PORT] >> 2) + 1) + 1];

						tb->mem_rdata_i[DATA_PORT] = temp[1] | temp[0];
						Memory->mem[req_addr + 0].attr |= READ;
						Memory->mem[req_addr + 1].attr |= READ;
						if(Memory->log)
							fprintf(Memory->log,"\n\t\t      [VMemory\t] LOAD: Data\t\t0x%08x - Address 0x%08x - Byte Enable 0x%01x",temp[1]|temp[0], req_addr + Memory->mem_baddr[DATA_PORT], Memory->mem_strb[DATA_PORT]);
					break;
					case 0xf:
						tb->mem_rdata_i[DATA_PORT] = temp[3] | temp[2] | temp[1] | temp[0]; 
						Memory->mem[req_addr + 0].attr |= READ;
						Memory->mem[req_addr + 1].attr |= READ;
						Memory->mem[req_addr + 2].attr |= READ;
						Memory->mem[req_addr + 3].attr |= READ;
						if(Memory->log)
							fprintf(Memory->log,"\n\t\t      [VMemory\t] LOAD: Data\t\t0x%08x - Address 0x%08x - Byte Enable 0x%01x",temp[3]|temp[2]|temp[1]|temp[0], req_addr + Memory->mem_baddr[DATA_PORT], Memory->mem_strb[DATA_PORT]);
					break;
				}
				
			} else if(Memory->mem_op[DATA_PORT] == DATA_PORT_WRITE){
				
				uint32_t wdata;

				switch(Memory->mem_strb[DATA_PORT]){
					case 0x1: case 0x2: case 0x4: case 0x8:

						req_addr = (req_addr & 0xfffffffc) + log2u(Memory->mem_strb[DATA_PORT]);

						wdata = Memory->mem_wdata[DATA_PORT] >> (8*log2u(Memory->mem_strb[DATA_PORT]));
 						Memory->mem[req_addr].cell = (uint8_t)(wdata & 0x000000ff);
						Memory->mem[req_addr].attr |= WRITTEN;
						if(Memory->log)
							fprintf(Memory->log,"\n\t\t      [VMemory\t] STORE: Data\t\t0x%08x - Address 0x%08x - Byte Enable 0x%01x",Memory->mem[req_addr].cell, req_addr + Memory->mem_baddr[DATA_PORT], Memory->mem_strb[DATA_PORT]);
					break;
					case 0x3: case 0xC:

						req_addr = (req_addr & 0xfffffffc) + log2u((Memory->mem_strb[DATA_PORT] >> 2) + 1);

						wdata = Memory->mem_wdata[DATA_PORT] >> (8*log2u((Memory->mem_strb[DATA_PORT] >> 2) + 1));
						Memory->mem[req_addr + 0].cell = (uint8_t)(wdata & 0x000000ff);
						Memory->mem[req_addr + 0].attr |= WRITTEN;
						Memory->mem[req_addr + 1].cell = (uint8_t)((wdata & 0x0000ff00) >> 8);
						Memory->mem[req_addr + 1].attr |= WRITTEN;
						if(Memory->log)
							fprintf(Memory->log,"\n\t\t      [VMemory\t] STORE: Data\t\t0x0000%02x%02x - Address 0x%08x - Byte Enable 0x%01x",Memory->mem[req_addr + 1].cell, Memory->mem[req_addr + 0].cell, req_addr + Memory->mem_baddr[DATA_PORT], Memory->mem_strb[DATA_PORT]);	
					break;
					case 0xf:
						Memory->mem[req_addr + 0].cell = (uint8_t)(Memory->mem_wdata[DATA_PORT] & 0x000000ff);
						Memory->mem[req_addr + 0].attr |= WRITTEN;
						Memory->mem[req_addr + 1].cell = (uint8_t)((Memory->mem_wdata[DATA_PORT] & 0x0000ff00) >> 8);
						Memory->mem[req_addr + 1].attr |= WRITTEN;
						Memory->mem[req_addr + 2].cell = (uint8_t)((Memory->mem_wdata[DATA_PORT] & 0x00ff0000) >> 16);
						Memory->mem[req_addr + 2].attr |= WRITTEN;
						Memory->mem[req_addr + 3].cell = (uint8_t)((Memory->mem_wdata[DATA_PORT] & 0xff000000) >> 24);
						Memory->mem[req_addr + 3].attr |= WRITTEN;
						if(Memory->log)
							fprintf(Memory->log,"\n\t\t      [VMemory\t] STORE: Data\t\t0x%02x%02x%02x%02x - Address 0x%08x - Byte Enable 0x%01x",Memory->mem[req_addr + 3].cell, Memory->mem[req_addr + 2].cell, Memory->mem[req_addr + 1].cell, Memory->mem[req_addr + 0].cell, req_addr + Memory->mem_baddr[DATA_PORT], Memory->mem_strb[DATA_PORT]);	
					break;

				}
			}

			tb->mem_rvalid_i[DATA_PORT] = 1;
					
			// If a B2B transaction is required
			if(tb->mem_req_o[DATA_PORT]){
				Memory->mem_addr[DATA_PORT] = tb->mem_addr_o[DATA_PORT] - Memory->mem_baddr[DATA_PORT];
				Memory->mem_strb[DATA_PORT] = tb->mem_be_o[DATA_PORT];
				Memory->mem_op[DATA_PORT] = tb->mem_we_o[DATA_PORT];
				Memory->mem_wdata[DATA_PORT] = tb->mem_wdata_o[DATA_PORT];
				Memory->mem_state[DATA_PORT] = VMEM_DATA_B2B_REQUEST;
			}
			else Memory->mem_state[DATA_PORT] = VMEM_DATA_FIRST_REQUEST;
		
		break;
	}
}

void vmem_free(vmem_2p_t * Memory){
	if(Memory->log) fclose(Memory->log);
	free(Memory->mem);
}