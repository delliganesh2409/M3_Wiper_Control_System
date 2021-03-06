/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "wiper.h"

void delay(void);
void ACC_mode_on(void);
void igniton_off(void);
int wiper_on(void);
int wiper_speed_changes_4_Hz(void);
int wiper_speed_changes_8_Hz(void);
void wiper_off(void);
void delay_4_hz(void);
void delay_8_hz(void);


int main(void)
{

	GPIO_Handle_t GpioLed, GpioLed1, GpioLed2, GpioLed3, GpioBtn;


	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);


	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed1);


	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed2);


	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed3);


	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GpioBtn);
	uint32_t count=0;

	while (1)
	{
		GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_0, DISABLE);
		if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
		{
			count++;
		   if (count == 1)
			{
				delay();
				ACC_mode_on();
				GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_RESET);
			}
		    else if(count == 2)
			{
		    	while(count==2){
		    		if(wiper_on()==1){
		    			break;
		    		}
		    	}

			}
			else if(count == 3)
			{
				while(count==3){
					if(wiper_speed_changes_4_Hz()==1){
						break;
					}
				}
			}
			else if(count == 4)
			{
				while(count==4){
					if(wiper_speed_changes_8_Hz()==1){
						break;
					}
				}

			}
			else if(count == 5){
				wiper_off();
			}
			else if(count==6){
				delay();
				igniton_off();
				count=0;
			}
		}
	}
}
