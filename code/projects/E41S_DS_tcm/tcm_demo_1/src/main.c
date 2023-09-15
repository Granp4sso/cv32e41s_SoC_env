#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){
    // 1000 bytes after
    uint8_t * tcm_mem_ptr=(uint8_t*)0x70002000;
    uint16_t tcm_sum=0;
    uint16_t i;
    for( i=0;i<4096;i++)
        *(tcm_mem_ptr+i)=1;
    // now check if the memorized values are correct..
    // IN a system without the tcm we'll see, using mem_show that the tcm mem
    // area is full of 1, in the tcm system this mem area is empty but the result is TCM_OK
    for( i=0;i<4096;i++)
        tcm_sum+=*(tcm_mem_ptr+i);
    if(tcm_sum==4096)
        puts("TCM OK \n");
    else 
        puts("TCM FAIL");
    return 0;
}