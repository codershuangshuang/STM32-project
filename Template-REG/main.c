#include"stm32f10x.h"
#include"stm32f10x_gpio.h"
#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(unsigned int nCount);

int main(void)
{
#if 0
	while(1)
	{
	
		//打开GPIO端口时钟
	  *(unsigned int*)0x40021018 |= (1<<3);
	  //配置IO口为输出，端口低寄存器
		*(unsigned int*)0x40010C00 |= ((1)<<(4*0));
		*(unsigned int*)0x40010C0C &=~(1<<0);//轻灵
		*(unsigned int*)0x40010C0C |=(1<<1);
		*(unsigned int*)0x40010C0C |=(1<<5);
		SOFT_DELAY;
		
		
		
	  *(unsigned int*)0x40010C00 |= ((1)<<(4*1));
		*(unsigned int*)0x40010C0C |=(1<<0);
		*(unsigned int*)0x40010C0C &=~(1<<1);
		*(unsigned int*)0x40010C0C |=(1<<5);
		SOFT_DELAY;
	  
	  
	  //控制ODR寄存器
	 
		*(unsigned int*)0x40010C00 |= ((1)<<(4*5));
	  *(unsigned int*)0x40010C0C |=(1<<0);
		*(unsigned int*)0x40010C0C |=(1<<1);
		*(unsigned int*)0x40010C0C &=~(1<<5);
		SOFT_DELAY;

	 
	}
#else
	while(1)
	{
	
		//打开GPIO端口时钟
	  RCC->APB2ENR |= (1<<3);
	  //配置IO口为输出，端口低寄存器
		GPIOB->CRL &=~((0x0f)<<(4*0));
		GPIOB->CRL |= ((1)<<(4*0));
		GPIO_ResetBits(GPIOB,GPIO_Pin_0); //清零
		GPIO_SetBits(GPIOB,GPIO_Pin_1);//置位
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		SOFT_DELAY;
		
		
		GPIOB->CRL &=~((0x0f)<<(4*1));
	  GPIOB->CRL |= ((1)<<(4*1));
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		SOFT_DELAY;
	  
	  
	  //控制ODR寄存器
	  GPIOB->CRL &=~((0x0f)<<(4*5));
		GPIOB->CRL |= ((1)<<(4*5));
	  GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		SOFT_DELAY;

	 
	}






#endif
	
	
	
	
}

void Delay(unsigned int nCount)
{
	for(;nCount !=0; nCount--);
}

//置位|=，清零&=~
void SystemInit(void)
{
}