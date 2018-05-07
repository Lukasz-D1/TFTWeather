/*
 * dht11.h
 *
 *  Created on: 09.04.2018
 *      Author: Artur
 */

#ifndef DHT11_H_
#define DHT11_H_
#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_tim.h"
#include "stm32f4xx_usart.h"
#include "misc.h"
#include "stdio.h"
#include "math.h"

void DHT11Read(u8 *Rh,u8 *RhDec,u8 *Temp,u8 *TempDec, u8 *ChkSum);
void DHT11_delay_us(int us);
void DHT11initGPIOasInput(void);
void DHT11initGPIOasOutput(void);
void DHT11initTIM2(void);

#endif /* DHT11_H_ */