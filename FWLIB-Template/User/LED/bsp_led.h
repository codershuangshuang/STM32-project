#ifndef _BSP_LED_H
#define _BSP_LED_H
#include "stm32f10x.h"

#define LED_PIN_G        GPIO_Pin_0
#define LED_PIN_B        GPIO_Pin_1
#define LED_PIN_R        GPIO_Pin_5
#define LED_GPIO_PORT    GPIOB
#define LED_GPIO_CLK     RCC_APB2Periph_GPIOB

#define ON 1
#define OFF 0

void LED_GPIO_G_Config(void);
void LED_GPIO_B_Config(void);
void LED_GPIO_R_Config(void);

#define LED_G(a)  if(a) \
	                       GPIO_ResetBits(LED_GPIO_PORT, LED_PIN_G); \
                  else  GPIO_SetBits(LED_GPIO_PORT, LED_PIN_G);
                       
#define LED_B(a)   if(a) \
	                       GPIO_ResetBits(LED_GPIO_PORT, LED_PIN_B); \
                   else  GPIO_SetBits(LED_GPIO_PORT, LED_PIN_B);

#define LED_R(a)   if(a) \
	                       GPIO_ResetBits(LED_GPIO_PORT, LED_PIN_R); \
                   else  GPIO_SetBits(LED_GPIO_PORT, LED_PIN_R);


//异或1改变，异或0不变，低电平点亮LED
#define LED_G_TOGGLE        {LED_GPIO_PORT->ODR ^= LED_PIN_G;}
#define LED_R_TOGGLE        {LED_GPIO_PORT->ODR ^= LED_PIN_R;}


#endif

