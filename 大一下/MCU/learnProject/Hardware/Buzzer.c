#include "Buzzer.h"

/*******************************************************************************   
Function:       // @Buzzer_Init : Buzzer初始化函数
Description:    // Buzzer初始化函数，初始化引脚为PB   
*******************************************************************************/
void Buzzer_Init(uint16_t GPIO_Pin){
    // 1、打开对应时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

    // 2、GPIO初始化
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP; // 推挽输出
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStruct);

    // 3、操作引脚
    GPIO_SetBits(GPIOB, GPIO_Pin_All);
}

/*******************************************************************************   
Function:       // @Buzzer_State_Set : 设置Buzzer状态函数
Description:    // 置0 Buzzer响 
*******************************************************************************/
void Buzzer_State_Set(uint16_t GPIO_Pin, BitAction BitVal){
    GPIO_WriteBit(GPIOB, GPIO_Pin, BitVal);
}
