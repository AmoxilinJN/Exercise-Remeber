#include "KEY.h"
#include "Delay.h"

/*******************************************************************************   
Function:       // @Key_Init : 按键初始化函数
Description:    // 按键初始化函数，初始化引脚为PB1   
*******************************************************************************/
void Key_Init(void){
    //1.打开时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    //2.GPIO初始化
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_All;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStruct);
}

/*******************************************************************************   
Function:       // @Key_GetState : 获取按键状态函数
Notes:          // 按键按下需要用到延时检测
Return:         // 返回按键的状态：返回1即按键按下，返回0即按键未按下
*******************************************************************************/
uint8_t Key_GetState(uint16_t GPIO_Pin){
    uint8_t Key_State = 0;
    //检测到按键按下
    if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin) == 0){
        Delay_ms(15);
        while(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin) == 0) ; //等待按键松开
        Delay_ms(15);
        Key_State = 1; //按键被按下一次
    }
    return Key_State;
}
