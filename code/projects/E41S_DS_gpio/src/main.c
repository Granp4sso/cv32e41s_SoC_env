#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){

    /* Insert your code here */
    
    puts("GPIO Test\n");
    
    int v[] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int s = 0;

	for(int i = 0; i < n; i++) s+=v[i];
	s = 10;
	set_outputs(GPIO_OUT, s);
    
    	
    

    return 0;
}
