#include"stm32f10x.h"
#include"bsp_led.h"
#include "bsp_key.h"

void Delay(uint32_t count)
{
	for(;count !=0;count--);
}

int main(void)
{
  
/*	LED_GPIO_G_Config();
  LED_GPIO_B_Config();
  LED_GPIO_R_Config();
	//配置GPIO口的管脚、速度和模式、rcc时钟
	while(1)
	{
		LED_G(ON);
		//打开绿灯
		Delay(0x1FFFFF);
		LED_G(OFF);
		Delay(0x1FFFFF);
	  //关闭绿灯
		
		
		Delay(0x1FFFFF);
		LED_B(ON);
		Delay(0x1FFFFF);
		LED_B(OFF);
		Delay(0x1FFFFF);
		
		LED_R(ON);
		Delay(0x1FFFFF);
		LED_R(OFF);
		Delay(0x1FFFFF);
		
		
	}
*/

	// 来到这里的时候，系统的时钟已经被配置成72M。
	LED_GPIO_G_Config();
	LED_GPIO_R_Config();
	KEY1_GPIO_Config();
	KEY2_GPIO_Config();
	
	while(1)
	{
		if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) ==KEY_ON )
			LED_G_TOGGLE;
		
		
	  if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) ==KEY_ON )
			LED_R_TOGGLE;
		// if
	}

}

