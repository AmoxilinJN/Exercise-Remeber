#ifndef __LIGHT_SENSOR_H
#define __LIGHT_SENSOR_H

#include "stm32f10x.h"

void LightSensor_Init(uint16_t GPIO_Pin);
uint8_t LightSensor_GetState(uint16_t GPIO_Pin);

#endif
