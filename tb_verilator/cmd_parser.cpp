#include "cmd_parser.h"

char cmd_list[CMD_LIST_LENGTH][64] = {
    "mem_show",
    "mem_size",
    "mem_data_baddr",
    "mem_inst_baddr",
    "bin_path",
    "terminal_show",
    "lcd_show",
    "sim_cycles",
    "halt_addr",
    "log",
    "trace",
    "two_dev",
    "bin_path_2"
};

void parse_cmd(int argc, char **argv, struct conf_t * cfg){
    
    int pos;

    // Default CFG values

    cfg->MemShow = 0;
    cfg->MemSize = 64*1024;                                             // 64 KiB of Memory
    cfg->MemDataBaddr = 0x00100000;                                     // Default cv32e41s RAM starting address
    cfg->MemInstBaddr = 0x00100000;                                     // Default cv32e41s RAM starting address
    cfg->TerminalShow = 0;                                              // Terminal from UART 
    cfg->LCDShow = 0;                                                   // LCD from SPI not supported ATM
    strcpy(cfg->BinPath,"code/bin/out.bin");
    cfg->SimCycles = 200000;                                            // Default is 200000 cycles
    cfg->HaltAddr = cfg->MemInstBaddr + cfg->MemSize;                   // Default is end of memory
    cfg->Log = 0;
    cfg->Trace = 0;

    if(argc == 1) { printf("[Parser\t] No arguments selected, SoC running\n"); return; }
    
    for(int i = 1; i < argc; i++){

        pos = find_cmd(argv[i]);
        if(pos == -1){ printf("[Parser\t] Argument %s unrecognized, failed to run\n", argv[i]); exit(-1);}

        switch(pos){
            case MEM_SHOW : 
                printf("[Parser\t] Memory view enabled\n");
                cfg->MemShow = 1;
            break;
            case MEM_CSIZE : 
                cfg->MemSize = atoi(argv[++i]);
                printf("[Parser\t] Memory size set to %08d Bytes\n", cfg->MemSize);
            break;
            case MEM_DATA_BADDR : 
                cfg->MemDataBaddr = (int)strtol(argv[++i], NULL, 16); 
                printf("[Parser\t] Memory Data Base Addr set to 0x%08x\n", cfg->MemDataBaddr);
            break;
            case MEM_INST_BADDR : 
                cfg->MemInstBaddr = (int)strtol(argv[++i], NULL, 16); 
                printf("[Parser\t] Memory Instr Base Addr set to 0x%08x\n", cfg->MemInstBaddr);
            break;
            case BIN_PATH : 
                strcpy(cfg->BinPath, argv[++i]);
                printf("[Parser\t] Binary file located at %s\n", cfg->BinPath);
            break;
            case TERMINAL_SHOW : 
                printf("[Parser\t] Terminal enabled\n");
                cfg->TerminalShow = 1;
            break;
            case LCD_SHOW : 
            
            break;
            case SIM_CYCLES:
                cfg->SimCycles = atoi(argv[++i]);;
                printf("[Parser\t] Simulation Clock Cycles set at %ld\n", cfg->SimCycles);
            break;
            case HALT_ADDR:
                cfg->HaltAddr = (int)strtol(argv[++i], NULL, 16); 
                printf("[Parser\t] Halt Address set to 0x%08x\n", cfg->HaltAddr);
            break;
            case LOG:
                printf("[Parser\t] Logfile enabled\n");
                cfg->Log = 1;
            break;
            case TRACE:
                printf("[Parser\t] VCD Trace generation enabled\n");
                cfg->Trace = 1;
            break;
            case TWO_DEV:
                printf("[Parser\t] Two devices required, connection on SPI\n");
                cfg->TwoDev = 1;
            break;
            case BIN_PATH_2:
                strcpy(cfg->BinPath2, argv[++i]);
                printf("[Parser\t] Second binary file located at %s\n", cfg->BinPath);
            break;
        }

    }

}

int find_cmd(char * cmd){

    for(int i = 0; i < CMD_LIST_LENGTH; i++){
        if(!strcmp(cmd_list[i],cmd)) return i;
    }

    return -1;
    
}