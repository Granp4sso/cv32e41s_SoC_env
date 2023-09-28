#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

//////////////////////////////////////////////////////////////////////////////////////
//     ___             _          __                 _                    ____      //
//    / __\ ___   ___ | |_       / /  ___   __ _  __| | ___ _ __   __   _|___ \     //
//   /__\/// _ \ / _ \| __|____ / /  / _ \ / _` |/ _` |/ _ \ '__|  \ \ / / __) |    //
//  / \/  \ (_) | (_) | ||_____/ /__| (_) | (_| | (_| |  __/ |      \ V / / __/     //
//  \_____/\___/ \___/ \__|    \____/\___/ \__,_|\__,_|\___|_|       \_/ |_____|    //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////

/*
    Boot-Loader v2 is a C implementation meant to support
    both RAM and TCM code injection into cv32e41s SoC.
    It is meant to program all the memories inside the SoC by means of the serial port.

    It uses a slightly different template compared to other projects.
    At boot time startup.s code will pass the control to this program.
    Once running, the Boot-Loader will obey to the following protocol:

    1 - Wait for the Mode-Word.
        -- Byte 0: memdev
            --- BIT 0 - RAM
            --- BIT 1 - TCM
            --- BITS 7:2 - reserved
        -- Byte 1: Boot from
            --- 0x00 - RAM
            --- 0x01 - TCM
            --- reserved
        -- Byte 2:
            --- 0x00 - No debug
            --- 0x01 - Show Memory Dump

    2 - Given the mode, for each device, it will receive in order
        -- Program Start Address
        -- Program Size
        -- Program Entry point
        -- Program data


    Boot-Loader will be loaded into the high RAM addresses, which restrict
    the size of the maximum actual RAM code. 

*/

#define MEM_NUM 2
#define RAM_ID 0
#define TCM_ID 1

void putbyte(uint32_t h);
void putmemid(uint32_t memid);
void putmem(uint8_t * baddr, uint32_t size);

int main(){

    uint8_t mode[4];
    uint8_t memdev;

    uint8_t * mem_ptr[MEM_NUM];
    uint32_t mem_program_start[MEM_NUM];
    uint32_t mem_entry_point[MEM_NUM];
    uint32_t mem_program_size[MEM_NUM];

    // Clean all vectors
    for(int i = 0; i < MEM_NUM; i++){
        mem_program_start[i] = 0x00000000;
        mem_entry_point[i] = 0x00000000;
        mem_program_size[i] = 0x00000000;
        mem_ptr[i] = (uint8_t *) 0x00000000;
    }

    memdev = mode[0];

    // Starting
    puts("[BootLoader] Boot Loader running, waiting for the host flasher\n");
    set_outputs(GPIO_OUT, 1);

    // Read Mode word
    for(int i = 0; i < 4; i++){  
        mode[i] = uart_in_wait(DEFAULT_UART);
    }

    for(int i = 0; i < MEM_NUM; i++){
        memdev = (mode[0] >> i) & 0x01;

        if(memdev){
            // If the device is selected in Mode, read start, size and entry point
            mem_program_start[i] |= uart_in_wait(DEFAULT_UART);
            mem_program_start[i] |= uart_in_wait(DEFAULT_UART) << 8;
            mem_program_start[i] |= uart_in_wait(DEFAULT_UART) << 16;
            mem_program_start[i] |= uart_in_wait(DEFAULT_UART) << 24;

            mem_program_size[i] |= uart_in_wait(DEFAULT_UART);
            mem_program_size[i] |= uart_in_wait(DEFAULT_UART) << 8;
            mem_program_size[i] |= uart_in_wait(DEFAULT_UART) << 16;
            mem_program_size[i] |= uart_in_wait(DEFAULT_UART) << 24;

            mem_entry_point[i] |= uart_in_wait(DEFAULT_UART);
            mem_entry_point[i] |= uart_in_wait(DEFAULT_UART) << 8;
            mem_entry_point[i] |= uart_in_wait(DEFAULT_UART) << 16;
            mem_entry_point[i] |= uart_in_wait(DEFAULT_UART) << 24;

            mem_ptr[i] = (uint8_t *) mem_program_start[i];

            //Now write the memory
            for(int j = 0; j < mem_program_size[i]; j++){    
                *(mem_ptr[i] + j) = uart_in_wait(DEFAULT_UART);
                set_outputs(GPIO_OUT, j+1);
            }
        }
    }

    // Debug prints
    puts("[BootLoader] Mode is "); putbyte(mode[3]); putbyte(mode[2]); putbyte(mode[1]); putbyte(mode[0]); puts("\n");

    for(int i = 0; i < MEM_NUM; i++){
        memdev = (mode[0] >> i) & 0x01;
        if(memdev){
            puts("[BootLoader] "); putmemid(i); puts(" starting at\t\t"); puthex((uint32_t) mem_ptr[i]); puts("\n");
            puts("[BootLoader] "); putmemid(i); puts(" entry point is\t\t"); puthex((uint32_t) mem_entry_point[i]); puts("\n");
            puts("[BootLoader] "); putmemid(i); puts(" code size is\t\t"); puthex((uint32_t) mem_program_size[i]); puts("\n");
             
            if(mode[2]){
                puts("\n[BootLoader][Debug] Dumping Memory "); putmemid(i); puts("\n\n");
                putmem(mem_ptr[i], mem_program_size[i]);
            }
            puts("\n");
        }
    } 

    puts("[BootLoader] System booting from "); putmemid(mode[1]); puts(" -> "); puthex((uint32_t) mem_entry_point[mode[1]]);
    puts("\n\n");
    //Jump to entry point according to Mode byte 1 (Stack will not be cleaned)
    //__asm__ volatile("li x1, 0x00100080");
    __asm__ volatile("lw ra, %0" : : "m"(mem_entry_point[mode[1]]));
    __asm__ volatile("jalr zero, 0(ra)");

}

void putbyte(uint32_t h){

    int cur_digit;
    cur_digit = h >> 4;
    if (cur_digit < 10) putchar('0' + cur_digit);
    else putchar('A' - 10 + cur_digit);

    cur_digit = h & 0x0f;
    if (cur_digit < 10) putchar('0' + cur_digit);
    else putchar('A' - 10 + cur_digit);
}

void putmemid(uint32_t memid){
    switch(memid){
        case RAM_ID: puts("RAM"); break;
        case TCM_ID: puts("TCM"); break;
    }
}

void putmem(uint8_t * baddr, uint32_t size){
    for(int i = 0; i < size; i++){    
        if(i % 16 == 0) { puthex((uint32_t)baddr + i); puts("\t"); }
        putbyte(*(baddr + i)); 
        if(i % 16 == 7) puts("    ");
        else if(i % 16 == 15) puts("\n");
        else puts(" ");
    }
}
