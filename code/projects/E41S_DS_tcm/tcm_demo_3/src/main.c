#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

static int x=0;
void  __attribute__((section (".tcm_fn"))) hello_from_tcm()
{
    uint8_t *  data_tcm=(uint8_t*)0x70002000;

    for(uint16_t idx=0;idx<128;idx++)
    {
        x+=*(data_tcm+idx);
    }
}

int main()
{
    uint16_t idx;
    uint32_t * tcm_fns=(uint32_t*)0x00104000;
    uint8_t * data_tcm=(uint8_t*)0x70002000;
    uint32_t *  test=(uint32_t*)0x70000000;
    for(idx=0;idx<1024;idx++)
    {
        *(test+idx)=*(tcm_fns+idx);
    }
    
    for(idx=0;idx<128;idx++)
    {
        *(data_tcm+idx)=1;
    }
    
    void (*f_ptr)()=(void*)test;
    (*f_ptr)();
    puthex(x);
    return 0;
}