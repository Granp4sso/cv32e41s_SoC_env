// Copyright lowRISC contributors & University of Naples, Federico II
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include <stdint.h>
#include "spi.h"
#include "dev_access.h"
#include "demo_system.h"

void spi_init(spi_t *spi, spi_reg_t spi_reg, uint32_t speed) {
  spi->reg = spi_reg;
  spi->speed = speed;
}

void spi_send_byte_blocking(spi_t *spi, char c) {
  // Wait untill the SPI fifo is not full
  while(DEV_READ(spi->reg + SPI_STATUS_REG) & SPI_MASTER_TX_FULL);
  // Send a byte
  DEV_WRITE(spi->reg + SPI_MASTER_TX_REG, c);
}

char spi_recv_byte_blocking(spi_t *spi){
  // Wait untill the SPI fifo does not has a message
  while(DEV_READ(spi->reg + SPI_STATUS_REG) & SPI_SLAVE_RX_EMPTY);
  // Read the byte
  return DEV_READ(spi->reg + SPI_SLAVE_RX_REG);
}

uint32_t spi_get_status(spi_t *spi){
   return (uint32_t) DEV_READ(spi->reg + SPI_STATUS_REG);
}

void spi_slave_handler(void) __attribute__((interrupt));

void spi_slave_handler(void) {
  // Read the byte
  putchar(DEV_READ(SPI0_BASE + SPI_SLAVE_RX_REG));
}

void spi_slave_interrupt_enable() {

  install_exception_handler(17, &spi_slave_handler);
  enable_interrupts(SPI_IRQ);
  set_global_interrupt_enable(1);
}

