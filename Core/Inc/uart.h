#pragma once

#include "main.h"

struct Uart {
	UART_HandleTypeDef *huart;
	uint8_t buf[64];
	size_t read_idx;
};

void uart_init(struct Uart *uart);

size_t uart_available(struct Uart *uart);

uint8_t uart_read(struct Uart *uart);
