/*
 * bsp.h
 *
 *  Created on: 15 de ago. de 2016
 *      Author: facun
 */

#ifndef BSP_BSP_H_
#define BSP_BSP_H_

#include "stdint.h"

#define RGB_PORT GPIOB

#define RGB_ROJO	 	(uint16_t)0x0001U
#define RGB_VERDE	 	(uint16_t)0x0002U
#define RGB_AZUL	 	(uint16_t)0x0010U
#define RGB_AMARILLO	RGB_ROJO | RGB_VERDE
#define RGB_VIOLETA		RGB_AZUL | RGB_ROJO
#define RGB_CELESTE		RGB_VERDE| RGB_AZUL
#define RGB_LEDS		RGB_ROJO | RGB_VERDE | RGB_AZUL


	void CLOCK_CONTROL_REGISTER_Config(void);
	void TIMER_Init(void);
	void GPIO_Config(void);

	void RGB_ON(uint16_t led);
	void RGB_OFF(uint16_t led);

#endif /* BSP_BSP_H_ */

