#include"bsp_led.h"
//bsp��borad support package�弶֧�ְ�
//дһ��GPIO��ʼ�����ú��������Ҫ���õ�GPIOinit����
//�궨��ʵ����ӳ��ĹܽżĴ���ͳһ����bsp_led.h����

void LED_GPIO_G_Config(void)//����GPIO�ڵĹܽš��ٶȺ�ģʽ��rccʱ��
{
	GPIO_InitTypeDef GPIO_InitStuct;
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	GPIO_InitStuct.GPIO_Pin = LED_PIN_G;
	GPIO_InitStuct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStuct.GPIO_Mode =  GPIO_Mode_Out_PP;
	
	
  GPIO_Init(LED_GPIO_PORT,&GPIO_InitStuct);
	
	
	
}

void LED_GPIO_B_Config(void)//����GPIO�ڵĹܽš��ٶȺ�ģʽ��rccʱ��
{
	GPIO_InitTypeDef GPIO_InitStuct;
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	GPIO_InitStuct.GPIO_Pin = LED_PIN_B;
	GPIO_InitStuct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStuct.GPIO_Mode =  GPIO_Mode_Out_PP;
	
	
  GPIO_Init(LED_GPIO_PORT,&GPIO_InitStuct);
	
	
	
}


void LED_GPIO_R_Config(void)//����GPIO�ڵĹܽš��ٶȺ�ģʽ��rccʱ��
{
	GPIO_InitTypeDef GPIO_InitStuct;
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	GPIO_InitStuct.GPIO_Pin = LED_PIN_R;
	GPIO_InitStuct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStuct.GPIO_Mode =  GPIO_Mode_Out_PP;
	
	
  GPIO_Init(LED_GPIO_PORT,&GPIO_InitStuct);
	
	
	
}

