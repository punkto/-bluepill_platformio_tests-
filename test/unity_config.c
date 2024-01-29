// implements
#include "unity_config.h"

#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/usart.h>

void unityOutputStart()
{
  // already initialized in main.c
}

void unityOutputChar(char c)
{
  usart_send_blocking(USART1, c);
}

void unityOutputFlush() {}

void unityOutputComplete()
{
}