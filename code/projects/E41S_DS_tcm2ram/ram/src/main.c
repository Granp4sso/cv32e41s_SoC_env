#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){

    /* Insert your code here */
    uint8_t * tcm_ptr = (uint8_t *) 0x70000000;
    puts("[RAM] Zeroing TCM vector table\n");

    for(int i = 0; i < 0x80; i++){
        tcm_ptr[i] = 0x00;
    }

    puts("[RAM] Hello world, I am in ram! going to TCM\n");

    return 0;
}
