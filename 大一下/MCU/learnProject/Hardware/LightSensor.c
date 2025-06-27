#include "LightSensor.h"

/*******************************************************************************   
Function:       // @LightSensor_Init : 按键初始化函数
Description:    // 按键初始化函数，初始化引脚为PB1   
*******************************************************************************/
void LightSensor_Init(uint16_t GPIO_Pin){
    //1.打开时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    //2.GPIO初始化
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStruct);
}

/*******************************************************************************   
Function:       // @LightSensor_GetState : 获取按键状态函数
Description:    // 返回0为亮 
*******************************************************************************/
uint8_t LightSensor_GetState(uint16_t GPIO_Pin){
    return GPIO_ReadInputDataBit(GPIOB, GPIO_Pin);
}
