#ifndef __BUZZER_H
#define __BUZZER_H

#include "stm32f10x.h"

void Buzzer_Init(uint16_t GPIO_Pin);
void Buzzer_State_Set(uint16_t GPIO_Pin, BitAction BitVal);

#endif
