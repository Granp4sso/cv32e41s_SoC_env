#ifndef CMD_PARSER
#define CMD_PARSER


#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define CMD_LIST_LENGTH     128
#define MEM_SHOW            0
#define MEM_CSIZE           1
#define MEM_DATA_BADDR      2
#define MEM_INST_BADDR      3
#define BIN_PATH            4
#define TERMINAL_SHOW       5
#define LCD_SHOW            6
#define SIM_CYCLES          7
#define HALT_ADDR           8
#define LOG                 9
#define TRACE               10
#define TWO_DEV             11
#define BIN_PATH_2          12


struct conf_t{
    
    uint8_t     MemShow;
    uint32_t    MemSize;
    uint32_t    MemInstBaddr;
    uint32_t    MemDataBaddr;
    uint8_t     TerminalShow;   
    uint8_t     LCDShow;        // Not Supported ATM
    uint64_t    SimCycles;
    uint32_t    HaltAddr;    
    uint8_t     Log;
    uint8_t     Trace;
    uint8_t     TwoDev;

    char        BinPath[512];
    char        BinPath2[512];
};


void parse_cmd(int argc, char **argv, struct conf_t * cfg);
int find_cmd(char * cmd);


#endif