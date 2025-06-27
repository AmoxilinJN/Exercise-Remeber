#include "stm32f10x.h"                  // Device header
#include "Delay.h" 
#include "OLED.h"
#include "LightSensor.h"
#include "Buzzer.h"

/*******************************************************************************   
Function:       // @main : 程序主函数
Description:    // 按下按键LED灯亮，再次按下LED灯灭。 按键接PB1口， 控制接PA0口的LED灯  
*******************************************************************************/

int main(void){
	OLED_Init();
	OLED_ShowString(1,1,"Hello,World!");
	OLED_ShowString(2,1,"Ciallo~");

	LightSensor_Init(GPIO_Pin_13);
	Buzzer_Init(GPIO_Pin_12);
	
	
	while(1){
		if(LightSensor_GetState(GPIO_Pin_13) == 0){
			Buzzer_State_Set(GPIO_Pin_12,0);
			OLED_ShowString(3,1,"Light!");
		}
		else{
			Buzzer_State_Set(GPIO_Pin_12,1);
			OLED_ShowString(3,1,"Dark!");
		}
	}
	
}
