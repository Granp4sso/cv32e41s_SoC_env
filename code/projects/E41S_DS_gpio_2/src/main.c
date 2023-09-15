#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){

    /* Insert your code here */
    
    int v[] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int s = 0;

	for(int i = 0; i < n; i++) s+=v[i];
	s = 0x00000000;
	set_outputs(GPIO_OUT, s);
    
    	for(int j = 0; j < 0x10; j++){
    		for(int i = 0; i < 1000000; i++);
    		set_outputs(GPIO_OUT, j);
    	}
    	
    	puts("Ciao Daniele\nCiao cv32e41s\n");
    

    return 0;
}
