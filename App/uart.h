#ifndef UART_H
#define UART_H

#include "stdint.h"
#include "string.h"

void receive_uart(uint8_t receive_data);
void uart_handle(void);
void uart_init(void);
#endif
