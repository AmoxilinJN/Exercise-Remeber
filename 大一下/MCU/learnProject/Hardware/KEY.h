#ifndef __KET_H
#define __KET_H

#include "stm32f10x.h"

void Key_Init(void);
uint8_t Key_GetState(uint16_t GPIO_Pin);

#endif
