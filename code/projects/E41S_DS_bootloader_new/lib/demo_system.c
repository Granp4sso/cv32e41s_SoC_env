// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "demo_system.h"
#include "dev_access.h"
#include "uart.h"
#include "dev_access.h"

int putchar(int c) {
#ifdef SIM_CTRL_OUTPUT
  DEV_WRITE(SIM_CTRL_BASE + SIM_CTRL_OUT, c);
#else
  if (c == '\n') {
    uart_out(DEFAULT_UART, '\r');
  }

  uart_out(DEFAULT_UART, c);
#endif

  return c;
}

int getchar(void) {
  return uart_in(DEFAULT_UART);
}

int puts(const char *str) {
  while (*str) {
    putchar(*str++);
  }

  return 0;
}

void puthex(uint32_t h) {
  int cur_digit;
  // Iterate through h taking top 4 bits each time and outputting ASCII of hex
  // digit for those 4 bits

  for (int i = 0; i < 8; i++) {
    cur_digit = h >> 28;

    if (cur_digit < 10)
      putchar('0' + cur_digit);
    else
      putchar('A' - 10 + cur_digit);

    h <<= 4;
  }
}

void putdec(uint32_t n){
	if( n > 9 ) putdec(n/10);
	putchar('0' + (n % 10));
}

