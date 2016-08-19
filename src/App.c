/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/
#include "bsp/bsp.h"


void delay_ms(void);

uint8_t led = 0;
uint16_t counter = 1000;

int main(void)
{
	CLOCK_CONTROL_REGISTER_Config();
	TIMER_Init();
	GPIO_Config();
	while(1)
	{
		if(!counter)
		{
			RGB_OFF(RGB_LEDS);
			if(led>6)
				led=0;
			else
				led++;

			counter=1000;
		}

		switch (led)
		{
			case 0:
			RGB_ON(RGB_ROJO);
			break;

			case 1:
			RGB_ON(RGB_VERDE);
			break;

			case 2:
			RGB_ON(RGB_AZUL);
			break;

			case 3:
			RGB_ON(RGB_AMARILLO);
			break;

			case 4:
			RGB_ON(RGB_VIOLETA);
			break;

			case 5:
			RGB_ON(RGB_CELESTE);
			break;

			case 6:
			RGB_ON(RGB_LEDS);
			break;
		}
	}

}

void delay_ms(void)
{
	if(counter)
		counter--;
}
