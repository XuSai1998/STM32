#ifndef _BSP_LED_H_
#define _BSP_LED_H_

#include "stm32f10x.h"


//红
#define LEDR_GPIO_PORT  GPIOB
#define LEDR_GPIO_CLK   RCC_APB2Periph_GPIOB
#define LEDR_GPIO_PIN   GPIO_Pin_5

//绿
#define LEDG_GPIO_PORT  GPIOB
#define LEDG_GPIO_CLK   RCC_APB2Periph_GPIOB
#define LEDG_GPIO_PIN   GPIO_Pin_0

//蓝灯
#define LEDB_GPIO_PORT  GPIOB
#define LEDB_GPIO_CLK   RCC_APB2Periph_GPIOB
#define LEDB_GPIO_PIN   GPIO_Pin_1

// 分别为输出 高、低、反转电平
#define digitalHi(p,i)  {p->BSRR=i;}
#define digitalLo(p,i)  {p->BRR=i;}
#define digitalToggle(p,i)  {p->ODR ^=i;}

//各个灯输出方式定义
#define LEDR_Toggle  digitalToggle(GPIOB, LEDR_GPIO_PIN )
#define LEDR_Hi  digitalHi(GPIOB, LEDR_GPIO_PIN )
#define LEDR_Lo  digitalLo(GPIOB, LEDR_GPIO_PIN )

#define LEDG_Toggle  digitalToggle(GPIOB,LEDG_GPIO_PIN)
#define LEDG_Hi  digitalHi(GPIOB,LEDG_GPIO_PIN)
#define LEDG_Lo  digitalLo(GPIOB,LEDG_GPIO_PIN)

#define LEDB_Toggle  digitalToggle(GPIOB,LEDB_GPIO_PIN)
#define LEDB_Hi  digitalHi(GPIOB,LEDB_GPIO_PIN)
#define LEDB_Lo  digitalLo(GPIOB,LEDB_GPIO_PIN)

void LED_GPIO_Config(void);


#endif

