#include "../lib/demo_system.h"
#include "../lib/dev_access.h"


#include "../lib/BMC.h"
#define SIM 0
#define SLEEP for(int i=0;i<10000000;i++); 

int main(){
    uint8_t data [MAX_LENGTH];
   puts("PU\n");
   BMCinit();
   uint8_t length;
   HeaderType type = BMCAuthenticate();
    while (type != PEERACCEPT && type != PEERREJECT){
        type = BMCReceiveData(data,&length);
        #ifndef SIM
        SLEEP
        #endif
    }
    
    #ifndef SIM
    SLEEP
    #endif
    type = BMCReceiveData(data,&length);
    while (type != FINISH){
        type = BMCReceiveData(data,&length);
        #ifndef SIM
        SLEEP
        #endif
    }
    char toSend[] = "Ciao";
    BMCSendData(toSend,4);
    #ifndef SIM
    SLEEP
    #endif
    type = BMCReceiveData(data,&length);

    if(type == DATA){
        for(int i=0;i<length;i++){
           
            putchar(data[i]);
        }
    }
    puts("\n");

    return 0;
}
