#include "LED.h"

/*******************************************************************************   
Function:       // @LED_Init : LED初始化函数
Description:    // LED初始化函数，初始化引脚为PA0   
*******************************************************************************/
void LED_Init(void){
    // 1、打开对应时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    // 2、GPIO初始化
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP; // 推挽输出
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_All;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStruct);

    // 3、操作引脚
    GPIO_SetBits(GPIOA, GPIO_Pin_All);
}

/*******************************************************************************   
Function:       // @LED_State_Set : 设置LED状态函数
Description:    // 置1 LED灯灭 
*******************************************************************************/
void LED_State_Set(uint16_t GPIO_Pin, BitAction BitVal){
    GPIO_WriteBit(GPIOA, GPIO_Pin, BitVal);
}
