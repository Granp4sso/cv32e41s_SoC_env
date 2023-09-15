#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

static int x=0;
void  __attribute__((section (".tcm_fn"))) hello_from_tcm()
{
	x=0xa2fe;
    //puts("Hello from tcm\n");
}

int main()
{
    uint16_t idx;
    uint32_t * tcm_fns=(uint32_t*)0x00104000;
    uint32_t * test=(uint32_t*)0x70000000;
    //uint32_t * real_tcm_area=(uint32_t*)0x00102000;
    for(idx=0;idx<1024;idx++)
    {
        //*(real_tcm_area+idx)=*(tcm_fns+idx);
        *(test+idx)=*(tcm_fns+idx);
        //*(tcm_fns+idx)=0;
    }
    uint8_t check=1;
    
    for(idx=0;idx<1024;idx++)
    {
        if(*(test+idx)!=*(tcm_fns+idx))
            check=0;
    }
    void (*f_ptr)()=(void*)test;
    (*f_ptr)();
    puthex(x);
    return 0;
}