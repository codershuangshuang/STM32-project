#ifndef _STM32F10X_GPIO_H
#define _STM32F10X_GPIO_H

#include "stm32f10x.h"

#define GPIO_Pin_0       ((unit16_t)0x0001)
#define GPIO_Pin_1       ((unit16_t)0x0002)
#define GPIO_Pin_2       ((unit16_t)0x0004)
#define GPIO_Pin_3       ((unit16_t)0x0008)
#define GPIO_Pin_4       ((unit16_t)0x0010)
#define GPIO_Pin_5       ((unit16_t)0x0020)
#define GPIO_Pin_6       ((unit16_t)0x0040)
#define GPIO_Pin_7       ((unit16_t)0x0080)

#define GPIO_Pin_8       ((unit16_t)0x0100)
#define GPIO_Pin_9       ((unit16_t)0x0200)
#define GPIO_Pin_10      ((unit16_t)0x0400)
#define GPIO_Pin_11      ((unit16_t)0x0800)
#define GPIO_Pin_12      ((unit16_t)0x1000)
#define GPIO_Pin_13      ((unit16_t)0x2000)
#define GPIO_Pin_14      ((unit16_t)0x4000)
#define GPIO_Pin_15      ((unit16_t)0x8000)
#define GPIO_Pin_A11     ((unit16_t)0xFFFF) /*选择全部引脚*/  //（1111111111111111）b

void GPIO_SetBits(GPIO_TypeDef *GPIOx,unit16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef *GPIOx,unit16_t GPIO_Pin);









#endif  /* _STM32F10X_GPIO_H */



