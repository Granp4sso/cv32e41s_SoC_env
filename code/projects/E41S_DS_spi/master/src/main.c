#include "../lib/demo_system.h"
#include "../lib/dev_access.h"

#include "../lib/spi.h"

int main(){

    uint8_t * spi_reg = (uint8_t *) 0x80004000;
    spi_t spi;
    uint32_t speed;

    puts("[SPI Master] Initialize SPI module\n");
    spi_init(&spi, spi_reg, speed);

    puts("[SPI Master] Sending character 'A'\n");
    spi_send_byte_blocking(&spi, 'A');

    puts("[SPI Master] Sending characters 'BCDE'\n");
    spi_send_byte_blocking(&spi, 'B');
    spi_send_byte_blocking(&spi, 'C');
    spi_send_byte_blocking(&spi, 'D');
    spi_send_byte_blocking(&spi, 'E');

    puthex(spi_reg[0x10]);


    return 0;
}
