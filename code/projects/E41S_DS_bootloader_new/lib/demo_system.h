// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef DEMO_SYSTEM_H_
#define DEMO_SYSTEM_H_

#include <stdint.h>

#include "demo_system_regs.h"
#include "uart.h"
#include "gpio.h"

#define UART_IRQ_NUM 16
#define UART_IRQ (1 << UART_IRQ_NUM)
#define DEFAULT_UART UART_FROM_BASE_ADDR(UART0_BASE)

#define GPIO_OUT GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_OUT_REG)
#define GPIO_IN GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_IN_REG)
#define GPIO_IN_DBNC GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_IN_DBNC_REG)
#define GPIO_OUT_SHIFT GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_OUT_SHIFT_REG)

/**
 * Writes character to default UART. Signature matches c stdlib function
 * of the same name.
 *
 * @param c Character to output
 * @returns Character output (never fails so no EOF ever returned)
 */
int putchar(int c);

/**
 * Reads character from default UART. Signature matches c stdlib function
 * of the same name.
 *
 * @returns Character from the uart rx fifo
 */
int getchar(void);

/**
 * Writes string to default UART. Signature matches c stdlib function of
 * the same name.
 *
 * @param str String to output
 * @returns 0 always (never fails so no error)
 */
int puts(const char *str);

/**
 * Writes ASCII hex representation of number to default UART.
 *
 * @param h Number to output in hex
 */
void puthex(uint32_t h);

/**
 * Writes ASCII dec representation of number to default UART.
 *
 * @param h Number to output in decimal
 */
void putdec(uint32_t n);



#endif
