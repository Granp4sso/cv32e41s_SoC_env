#include "vterm.h"

void vterm_init(vterm * term, uint32_t baudrate, uint32_t clk_period){

    printf("[VTerm\t] Initializing virtual terminal\n"); 

    term->bitnum = 0;
    term->state = VTERM_STATE_TX_IDLE;
    for(int i = 0; i < 8; i++) term->buffer[i] = 0x0;
    term->baudrate = baudrate;
    term->baudcnt = 0;

    // let's have baudrate in Ggiga Symbols per second and clk_period in Nano seconds
    term->baudlimit = (1000000000 / baudrate) / (clk_period);
    
    printf("[VTerm\t] Vterm initialized with baudrate = %08u, clk per variation = %04u\n", term->baudrate, term->baudlimit); 
}

// 1/baudrate 
void vterm_rx_protocol(vterm * term, VuCup_top * tb){

    switch(term->state){
        case VTERM_STATE_RX_IDLE:
            if(tb->uart_tx_o == 0){
                term->state = VTERM_STATE_RX_START;
               // printf("[VTerm\t] Start bit identified\n");
            }
        break;
        case VTERM_STATE_RX_START:
            term->baudcnt++;
            if(term->baudcnt == term->baudlimit){
                //printf("[VTerm\t] Symbol changed after %u\n",term->baudcnt);
                term->state = VTERM_STATE_RX_PROC;
                term->buffer[term->bitnum++] = tb->uart_tx_o;
                term->baudcnt = 0;
                //printf("[VTerm\t] New symbol! %u\n",tb->uart_tx_o);
            }
        break;
        case VTERM_STATE_RX_PROC:
            if(term->bitnum < 8){
                
                term->baudcnt++;
                if(term->baudcnt == term->baudlimit) {
                    //printf("[VTerm\t] New symbol! %u\n",tb->uart_tx_o);
                    term->buffer[term->bitnum++] = tb->uart_tx_o; 
                    term->baudcnt = 0;
                }

            } else {
                term->state = VTERM_STATE_RX_STOP;
            }
        break;
        case VTERM_STATE_RX_STOP:
            term->baudcnt++;
            if(term->baudcnt == term->baudlimit){
                uint8_t c = 0x00;
                for(int i = 0; i < 8; i++) c |= (term->buffer[i] << i);
                printf("%c", c);

                term->baudcnt = 0;
                term->bitnum = 0;
                if(tb->uart_tx_o == 0) term->state = VTERM_STATE_RX_START;
                else term->state = VTERM_STATE_RX_IDLE;
            }
        break;
    }    

}

void vterm_tx_protocol(vterm * term, VuCup_top * tb, uint8_t msg, uint8_t start){

    

    switch(term->state){
        case VTERM_STATE_TX_IDLE:
            term->bitnum = 0;
            term->state = (start) ? VTERM_STATE_TX_START : VTERM_STATE_TX_IDLE;
            //printf("[VTerm\t] TX idle\n");
        break;
        case VTERM_STATE_TX_START:
            term->baudcnt++;
            tb->uart_rx_i = 0;
            if(term->baudcnt == term->baudlimit){
                term->state = VTERM_STATE_TX_PROC;
                term->baudcnt = 0;
            }
            //printf("[VTerm\t] TX start %d\n", tb->uart_rx_i);
        break;
        case VTERM_STATE_TX_PROC:
            if(term->bitnum < 8){
                //printf("[VTerm\t] TX proc %u\n", tb->uart_rx_i);
                term->baudcnt++;
                tb->uart_rx_i = term->bitnum % 2;//(msg & (1 << term->bitnum)) >> term->bitnum;
                if(term->baudcnt == term->baudlimit) {
                    term->bitnum++;
                    term->baudcnt = 0;
                }

            } else {
                term->state = VTERM_STATE_TX_STOP;
            }
            
        break;
        case VTERM_STATE_TX_STOP:
            term->baudcnt++;
            if(term->baudcnt == term->baudlimit){
                term->baudcnt = 0;
                term->bitnum = 0;
                term->state = VTERM_STATE_TX_IDLE;
            }
            //printf("[VTerm\t] TX stop\n");
        break;
    }    

}

uint8_t start = 1;

void vterm_tx_bootloader(vterm * term, VuCup_top * tb){

    uint8_t msg = 0xf2;

    if(start){
        vterm_tx_protocol(term, tb, msg, start);
        //printf("[VTerm\t] TX start\n");
        start = 0;
    }
    else if(term->state != VTERM_STATE_TX_IDLE){
        vterm_tx_protocol(term, tb, msg, start);
        //printf("[VTerm\t] TX ongoing\n");
    }
    else{
        //printf("[VTerm\t] TX completed\n");
        start = 1;
    }


}