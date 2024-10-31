#include"stm32f10x.h"
#include"stm32f10x_gpio.h"
#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(unsigned int nCount);

int main(void)
{
#if 0
	while(1)
	{
	
		//��GPIO�˿�ʱ��
	  *(unsigned int*)0x40021018 |= (1<<3);
	  //����IO��Ϊ������˿ڵͼĴ���
		*(unsigned int*)0x40010C00 |= ((1)<<(4*0));
		*(unsigned int*)0x40010C0C &=~(1<<0);//����
		*(unsigned int*)0x40010C0C |=(1<<1);
		*(unsigned int*)0x40010C0C |=(1<<5);
		SOFT_DELAY;
		
		
		
	  *(unsigned int*)0x40010C00 |= ((1)<<(4*1));
		*(unsigned int*)0x40010C0C |=(1<<0);
		*(unsigned int*)0x40010C0C &=~(1<<1);
		*(unsigned int*)0x40010C0C |=(1<<5);
		SOFT_DELAY;
	  
	  
	  //����ODR�Ĵ���
	 
		*(unsigned int*)0x40010C00 |= ((1)<<(4*5));
	  *(unsigned int*)0x40010C0C |=(1<<0);
		*(unsigned int*)0x40010C0C |=(1<<1);
		*(unsigned int*)0x40010C0C &=~(1<<5);
		SOFT_DELAY;

	 
	}
#else
	while(1)
	{
	
		//��GPIO�˿�ʱ��
	  RCC->APB2ENR |= (1<<3);
	  //����IO��Ϊ������˿ڵͼĴ���
		GPIOB->CRL &=~((0x0f)<<(4*0));
		GPIOB->CRL |= ((1)<<(4*0));
		GPIO_ResetBits(GPIOB,GPIO_Pin_0); //����
		GPIO_SetBits(GPIOB,GPIO_Pin_1);//��λ
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		SOFT_DELAY;
		
		
		GPIOB->CRL &=~((0x0f)<<(4*1));
	  GPIOB->CRL |= ((1)<<(4*1));
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		SOFT_DELAY;
	  
	  
	  //����ODR�Ĵ���
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

//��λ|=������&=~
void SystemInit(void)
{
}