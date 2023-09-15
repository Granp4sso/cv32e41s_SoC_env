#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

int main(){
    
    // Testing external bus to rpm writes and reads
    
    uint16_t rpm_size = 1024;
    uint8_t * rpm_b0_ptr = (uint8_t*) 0x70003000;
    uint8_t * rpm_b1_ptr = rpm_b0_ptr + rpm_size/2;
    uint16_t rpm_sum = 0;
    
    
    // Write int rpm bank 0
    for(int i = 0; i < rpm_size/2; i++) rpm_b0_ptr[i] = 0x02;
    
    // Let's check if we wrote the correct values into the rpm
    for(int i = 0; i < rpm_size/2; i++) rpm_sum += rpm_b0_ptr[i];
     
    if(rpm_sum == rpm_size) puts("[testing RPM]\tBank 0 Memory Test Passed\n");
    else puts("[testing RPM]\tBank 0 Memory Test Failed\n");
        
    rpm_sum = 0;
    
    // Write int rpm bank 0
    for(int i = 0; i < rpm_size/2; i++) rpm_b1_ptr[i] = 0x02;
    
    // Let's check if we wrote the correct values into the rpm
    for(int i = 0; i < rpm_size/2; i++) rpm_sum += rpm_b1_ptr[i];    
        
    if(rpm_sum == rpm_size) puts("[testing RPM]\tBank 1 Memory Test Passed\n");
    else puts("[testing RPM]\tBank 1 Memory Test Failed\n");
    
    return 0;
}
