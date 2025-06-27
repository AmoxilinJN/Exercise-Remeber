#ifndef __LED_H
#define __LED_H

#include "stm32f10x.h"

void LED_Init(void);
void LED_State_Set(uint16_t GPIO_Pin, BitAction BitVal);

#endif
