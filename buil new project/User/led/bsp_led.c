//bsp �弶֧�ְ���ÿ���������ǲ�һ���ģ��е�ߵ�ƽ�������еĵ͵�ƽ
#include "bsp_led.h"

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIOR_InitStructure;
	GPIO_InitTypeDef GPIOG_InitStructure;
	GPIO_InitTypeDef GPIOB_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);//����APB2�ϵ�ʱ��
	//RCC_APB2PeriphClockCmd(LEDR_GPIO_CLK|LEDG_GPIO_CLK|LEDB_GPIO_CLK,ENABLE);
	
	
	//���ú������˿ڣ�Ƶ�ʡ������ʽ
	GPIOR_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIOR_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIOR_InitStructure.GPIO_Pin=LEDR_GPIO_PIN;
	GPIO_Init(GPIOB,&GPIOR_InitStructure);
	//�����̵�����˿�
	GPIOG_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIOG_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIOG_InitStructure.GPIO_Pin=LEDG_GPIO_PIN;
	GPIO_Init(GPIOB,&GPIOG_InitStructure);
	//������������˿�
	GPIOB_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIOB_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIOB_InitStructure.GPIO_Pin=LEDB_GPIO_PIN;
	GPIO_Init(GPIOB,&GPIOB_InitStructure);
	
	//�رյ�
		GPIO_SetBits(GPIOB,LEDR_GPIO_PIN);
		GPIO_SetBits(GPIOB,LEDB_GPIO_PIN);
		GPIO_SetBits(GPIOB,LEDG_GPIO_PIN);
	
	

}