#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){

    uint8_t byte;
    uint8_t tap;
    uint32_t state;
    uint32_t bin_size;
    uint32_t bin_start;
    uint32_t bin[1024];

    bin_size = 0;
    state = 0;

    puts("[ Bootloader ]\tBootloader waiting for binary\n");

    set_outputs(GPIO_OUT, state);
    tap = getchar();
    byte = tap;
    
    while(byte == tap){
        byte = getchar();
    }

    bin_size |= (byte << 0); 
    byte = getchar(); while(byte != 0xff){byte = getchar();}
    bin_size |= (byte << 8); 
    byte = getchar(); while(byte != 0xff){byte = getchar();}
    bin_size |= (byte << 16); 
    byte = getchar(); while(byte != 0xff){byte = getchar();}
    bin_size |= (byte << 24);
    puthex(bin_size);

    puts("\n[ Bootloader ]\tReading is over\n");

    return 0;
}
