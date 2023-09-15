#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "VuCup_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define MEM_TYPE_DATA 			0
#define MEM_TYPE_INSTR 			1

#define CLEAN   	0x00
#define WRITTEN 	0x01
#define READ		0x02
#define EXECUTED 	0x04

#define INST_PORT 	1
#define DATA_PORT	0
#define PORT_NUM	2

#define DATA_PORT_READ	0
#define DATA_PORT_WRITE 1

// State Machine Macros for INST port

#define VMEM_INST_FIRST_REQUEST 1
#define VMEM_INST_B2B_REQUEST	2

#define VMEM_DATA_FIRST_REQUEST 1
#define VMEM_DATA_B2B_REQUEST	2


struct vmem_cell{
	uint8_t cell;
	uint8_t attr;
};

struct vmem_2p{

	vmem_cell * mem;
	uint32_t mem_size;
	uint32_t mem_baddr[PORT_NUM];

	int mem_state[PORT_NUM];
	int mem_addr[PORT_NUM];
	int mem_op[PORT_NUM];
	int mem_strb[PORT_NUM];
	int mem_wdata[PORT_NUM];

	uint32_t delay;
	FILE * log;

};

void vmem_init(vmem_2p * Memory, char * path, uint32_t size, uint32_t inst_baddr, uint32_t data_baddr, uint8_t log);
void vmem_print(vmem_2p * Memory);

void vmem_protocol(vmem_2p * Memory, VuCup_top *tb, const int port);
void vmem_inst_protocol(vmem_2p * Memory, VuCup_top *tb);
void vmem_data_protocol(vmem_2p * Memory, VuCup_top *tb);
void vmem_print(vmem_2p * Memory, uint32_t base, uint32_t range);
void vmem_free(vmem_2p * Memory);

