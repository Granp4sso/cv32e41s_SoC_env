#ifndef wSOC
#define wSOC
#include "VuCup_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "vmem_2p.h"
#include "vterm.h"
#include "logger.h"
#include "cmd_parser.h"

#define CLK_NS 10

struct wsoc_t{
    VuCup_top *     tb;
	VerilatedVcdC * trace;
	vmem_2p_t       vRAM;
	vterm_t         vterm;
    uint64_t        clkcnt;
};

void wsoc_init(wsoc_t * wsoc, conf_t * cfg, uint8_t is_slave);
void wsoc_eval(wsoc_t * wsoc, conf_t * cfg);
void wsoc_cycle(wsoc_t * wsoc, conf_t * cfg);
void wsoc_break(wsoc_t * wsoc, conf_t * cfg);
void wsoc_memshow(wsoc_t * wsoc, conf_t * cfg);
void wsoc_tick(int tickcount, VuCup_top *tb, VerilatedVcdC *tfp);
void trace_init(VuCup_top *tb, VerilatedVcdC * tfp, conf_t * cfg);
void wsoc_destroy(wsoc_t * wsoc);




#endif