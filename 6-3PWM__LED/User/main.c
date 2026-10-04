#include "stm32f10x.h"                  // Device head头头
#include "Delay.h"//延时函数
#include"OLED.h"
#include"PWM.h"


uint8_t i;

int main(void){
	
	OLED_Init();
	PWM_Init();

	

	while(1)

	{
		for(i=0;i<=100;i++){
			PWM_SetCompare1(i);
			Delay_ms (10);}
		for(i=100;i<=100;i--){
			PWM_SetCompare1(i);
			Delay_ms (10);}
		
		
	}
	
}
