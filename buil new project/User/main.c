#include "stm32f10x.h"
#include "bsp_led.h"

void delay(uint32_t a);

int main(void)
{
	
	LED_GPIO_Config();
	while(1)
	{
		LEDB_Hi;
		LEDG_Lo;
		LEDR_Hi;
		delay(0x200000);
		LEDB_Lo;
		LEDG_Hi;
		LEDR_Hi;
		delay(0x200000);	
		LEDB_Hi;
		LEDG_Lo;
		LEDR_Hi;
		delay(0x200000);	
		LEDB_Hi;
		LEDG_Hi;
		LEDR_Lo;
		delay(0x200000);	
		LEDB_Lo;
		LEDG_Hi;
		LEDR_Lo;
		delay(0x200000);	
		LEDB_Hi;
		LEDG_Lo;
		LEDR_Lo;	
		delay(0x200000);	
		LEDB_Lo;
		LEDG_Lo;
		LEDR_Lo;			
	}
}

void delay(uint32_t a)
{
	int b=100;
	for( b=100;b>0;b--)
		for( ;a>0;a--);

}


