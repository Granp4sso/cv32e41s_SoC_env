#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){

    /* Insert your code here */
    uint8_t * tcm_ptr = (uint8_t *) 0x70000000;
    puts("[RAM] Writing dummy program to TCM\n");

    tcm_ptr[0x00] = 0x13;  tcm_ptr[0x01] = 0x0F;  tcm_ptr[0x02] = 0xF0;  tcm_ptr[0x03] = 0x0F;
    tcm_ptr[0x04] = 0xB7;  tcm_ptr[0x05] = 0x0F;  tcm_ptr[0x06] = 0x00;  tcm_ptr[0x07] = 0x80;
    tcm_ptr[0x08] = 0x93;  tcm_ptr[0x09] = 0x8F;  tcm_ptr[0x0A] = 0x0F;  tcm_ptr[0x0B] = 0x00;
    tcm_ptr[0x0C] = 0x23;  tcm_ptr[0x0D] = 0xA0;  tcm_ptr[0x0E] = 0xEF;  tcm_ptr[0x0F] = 0x01;
    tcm_ptr[0x10] = 0x6F;  tcm_ptr[0x11] = 0xF0;  tcm_ptr[0x12] = 0x1F;  tcm_ptr[0x13] = 0xFF;

    puts("[RAM] reading dummy program from TCM\n");
    for(int i = 0; i < 0x80; i++){
        putbyte(tcm_ptr[i]); puts(" "); if(i % 16 == 15) puts("\n");
    }

    puts("\n[RAM] Hello world, I am in ram! going to TCM\n");

    //Jump to entry point according to Mode byte 1 (Stack will not be cleaned)
    __asm__ volatile("li x1, 0x70000000");
    __asm__ volatile("nop");
    __asm__ volatile("nop");
    //__asm__ volatile("lw ra, %0" : : "m"(mem_entry_point[mode[1]]));
    __asm__ volatile("jalr zero, 0(ra)");

    return 0;
}
