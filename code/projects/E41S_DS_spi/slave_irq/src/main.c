#include "../lib/demo_system.h"
#include "../lib/dev_access.h"
#include "../lib/spi.h"

int main(){

    uint8_t * spi_reg = (uint8_t *) 0x80004000;
    spi_t spi;
    uint32_t speed;

    spi_init(&spi, spi_reg, speed);
    puts("[Slave] Wait for the master\n");
    spi_slave_interrupt_enable();
    __asm__("wfi");

    return 0;
}
