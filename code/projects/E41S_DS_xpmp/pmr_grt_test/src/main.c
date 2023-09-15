#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){

    // Simulation requires 1.1M cycles

    uint8_t * vptr = (uint8_t *) 0x60104000;
    puts("[ PMR-GRT test ] Welcome to user mode\n");
    puts("[ PMR-GRT test ] Writing into address 0x60104000\n");

    for(uint8_t i = 0; i < 5; i++) vptr[i] = i;
    puts("[ PMR-GRT test ] Reading from 0x60104000\n");

    for(uint8_t i = 0; i < 5; i++){
        puts("[ PMR-GRT test ] ");
        putdec(vptr[i]);
        puts("\n");
    }


    return 0;
}
