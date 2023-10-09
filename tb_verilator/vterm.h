#ifndef VTERM
#define VTERM

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "VuCup_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// State Machine Macros 

#define VTERM_STATE_RX_IDLE     0
#define VTERM_STATE_RX_START    1
#define VTERM_STATE_RX_PROC     2
#define VTERM_STATE_RX_STOP     3

#define VTERM_STATE_TX_IDLE     0
#define VTERM_STATE_TX_START    1
#define VTERM_STATE_TX_PROC     2
#define VTERM_STATE_TX_STOP     3

struct vterm_t{

    uint8_t buffer[8];
    uint8_t state;
    uint8_t bitnum;

    uint32_t baudrate;
    uint32_t baudcnt;
    uint32_t baudlimit;
};

void vterm_init(vterm_t * term, uint32_t baudrate, uint32_t clk_period);
void vterm_rx_protocol(vterm_t * term, VuCup_top * tb);
void vterm_tx_protocol(vterm_t * term, VuCup_top * tb, uint8_t msg, uint8_t start);
void vterm_tx_bootloader(vterm_t * term, VuCup_top * tb);


#endif