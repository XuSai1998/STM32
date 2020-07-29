//bsp 板级支持包，每个开发板是不一样的，有点高电平点亮、有的低电平
#include "bsp_led.h"

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIOR_InitStructure;
	GPIO_InitTypeDef GPIOG_InitStructure;
	GPIO_InitTypeDef GPIOB_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);//开启APB2上的时钟
	//RCC_APB2PeriphClockCmd(LEDR_GPIO_CLK|LEDG_GPIO_CLK|LEDB_GPIO_CLK,ENABLE);
	
	
	//设置红灯输出端口，频率、输出方式
	GPIOR_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIOR_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIOR_InitStructure.GPIO_Pin=LEDR_GPIO_PIN;
	GPIO_Init(GPIOB,&GPIOR_InitStructure);
	//设置绿灯输出端口
	GPIOG_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIOG_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIOG_InitStructure.GPIO_Pin=LEDG_GPIO_PIN;
	GPIO_Init(GPIOB,&GPIOG_InitStructure);
	//设置蓝灯输出端口
	GPIOB_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIOB_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIOB_InitStructure.GPIO_Pin=LEDB_GPIO_PIN;
	GPIO_Init(GPIOB,&GPIOB_InitStructure);
	
	//关闭灯
		GPIO_SetBits(GPIOB,LEDR_GPIO_PIN);
		GPIO_SetBits(GPIOB,LEDB_GPIO_PIN);
		GPIO_SetBits(GPIOB,LEDG_GPIO_PIN);
	
	

}