#include "../lib/demo_system.h"
#include "../lib/dev_access.h"
#include "../lib/timer.h"

int main(){

    const uint64_t time_base = 4*1000; //clock cycles
    uint64_t current_time = 0;
    uint64_t elapsed_time = 0;
    uint64_t cycle_time = 0;
   

    puts("TIMER DEMO\n");

    //Initialize the Timer to install the exception handler for it
    timer_init();                   //I have commented the fence instruction since it stucks the program
    puts("Timer initialized\n");    

    //Enable the timer by passing a base time for the increments
    timer_enable(time_base);        //For some reason interrupts doesn't work
    puts("Timer enabled\n");    

    cycle_time = get_mcycle64();    // the functions get_mcycle and timer_read return the same result
    current_time = timer_read();    // but the function timer_read is usable also in user space
    elapsed_time = get_elapsed_time();  //Handler is never called and this variable remains 0

    puts("cycle time :");
    putdec(cycle_time);
    puts("\n");
    puts("current time: ");
    putdec(current_time);
    puts("\n");
    puts("elapsed time: ");
    putdec(elapsed_time);
    puts("\n\n\n");

    uint64_t start_time = 0;
    uint64_t end_time = 0;

    // Lets measure the time of a for cycle
    for(int i = 0; i<10 ; i++){
        start_time = timer_read();

        // Time to measure
        for(int i = 0; i<10 ; i++);
        
        end_time = timer_read();
        elapsed_time = end_time - start_time;
        
        // Print or Save result
        puts("elapsed time: ");
        putdec(elapsed_time);
        puts("\t");
        puts("start time: ");
        putdec(start_time);
        puts("\t");
        puts("end time: ");
        putdec(end_time);
        puts("\n");
    }

    timer_disable();
    puts("timer disabled\n");


    return 0;
}
