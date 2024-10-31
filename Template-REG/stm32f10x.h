//用来存放STM32寄存器映射的代码
//外设perirhral
#ifndef _STM32F10X_H
#define _STM32F10X_H


#define PERIPH_BASE            ((unsigned int)0x40000000)
#define APB1PERIPH_BASE         PERIPH_BASE
#define APB2PERIPH_BASE        (PERIPH_BASE+0x10000)
#define AHBPERIPH_BASE         (PERIPH_BASE+0x20000)


#define RCC_BASE                (AHBPERIPH_BASE+0x1000)
#define GPIOB_BASE               (APB2PERIPH_BASE+0x0C00)


#define RCC_APB2ENR             *(unsigned int*)(RCC_BASE+0x18)


#define GPIOB_CRL               *(unsigned int*)GPIOB_BASE
#define GPIOB_CRH               *(unsigned int*)(GPIOB_BASE+0x04)
#define GPIOB_IDR               *(unsigned int*)(GPIOB_BASE+0x08)
#define GPIOB_ODR               *(unsigned int*)(GPIOB_BASE+0x0C)
#define GPIOB_BSRR              *(unsigned int*)(GPIOB_BASE+0x10)
#define GPIOB_BRR               *(unsigned int*)(GPIOB_BASE+0x14)
#define GPIOB_LCKR              *(unsigned int*)(GPIOB_BASE+0x18)
	


typedef unsigned int         unit32_t;
typedef unsigned short       unit16_t;

typedef struct
{
	unit32_t CRL;
	unit32_t CRH;
	unit32_t IDR;
	unit32_t ODR;
	unit32_t BSRR;
	unit32_t BRR;
	unit32_t LCKR;
}GPIO_TypeDef;

#define GPIOB    ((GPIO_TypeDef*)GPIOB_BASE)

typedef struct
{
	unit32_t CR;
	unit32_t CFGR;
	unit32_t CIR;
	unit32_t APB2RSTR;
	unit32_t APB1RSTR;
	unit32_t AHBENR;
	unit32_t APB2ENR;
	unit32_t APB1ENR;
	unit32_t BDCR;
	unit32_t CSR;
	
}RCC_TypeDef;

#define RCC  ((RCC_TypeDef*)RCC_BASE)





#endif



















