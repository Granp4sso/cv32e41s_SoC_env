#include "../lib/demo_system.h"
#include "../lib/dev_access.h"
#include "../lib/BMC.h"
#define SIM 0
#define SLEEP for(int i=0;i<10000000;i++); 

int main(){

    uint8_t data [MAX_LENGTH];
    puts("P\n");
    BMCinit();
    uint8_t length;
    HeaderType type = BMCReceiveData(data,&length);
    while (type != FINISH){
        type = BMCReceiveData(data,&length);
        #ifndef SIM
        SLEEP
        #endif
    }
    puts("\n");
    type = BMCAuthenticate();
    while (type != PEERACCEPT && type != PEERREJECT){
        type = BMCReceiveData(data,&length);
        #ifndef SIM
        SLEEP
        #endif
    }
   
    type = BMCReceiveData(data,&length);

    if(type == DATA){
        for(int i=0;i<length;i++){
           
            putchar(data[i]);
        }
    }
    puts("\n");
    BMCSendData(data,length);
    return 0;
}
