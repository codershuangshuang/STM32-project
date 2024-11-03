#include"bsp_led.h"
//bsp：borad support package板级支持包
//写一个GPIO初始化配置函数在这里，要利用到GPIOinit函数
//宏定义实现重映射的管脚寄存器统一放在bsp_led.h里面

void LED_GPIO_G_Config(void)//配置GPIO口的管脚、速度和模式、rcc时钟
{
	GPIO_InitTypeDef GPIO_InitStuct;
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	GPIO_InitStuct.GPIO_Pin = LED_PIN_G;
	GPIO_InitStuct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStuct.GPIO_Mode =  GPIO_Mode_Out_PP;
	
	
  GPIO_Init(LED_GPIO_PORT,&GPIO_InitStuct);
	
	
	
}

void LED_GPIO_B_Config(void)//配置GPIO口的管脚、速度和模式、rcc时钟
{
	GPIO_InitTypeDef GPIO_InitStuct;
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	GPIO_InitStuct.GPIO_Pin = LED_PIN_B;
	GPIO_InitStuct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStuct.GPIO_Mode =  GPIO_Mode_Out_PP;
	
	
  GPIO_Init(LED_GPIO_PORT,&GPIO_InitStuct);
	
	
	
}


void LED_GPIO_R_Config(void)//配置GPIO口的管脚、速度和模式、rcc时钟
{
	GPIO_InitTypeDef GPIO_InitStuct;
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	GPIO_InitStuct.GPIO_Pin = LED_PIN_R;
	GPIO_InitStuct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStuct.GPIO_Mode =  GPIO_Mode_Out_PP;
	
	
  GPIO_Init(LED_GPIO_PORT,&GPIO_InitStuct);
	
	
	
}

