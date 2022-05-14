#include "MyStm32f407xx.h"
#include "MyStm32f407xx.h"
#include <stdint.h>
#include <stdio.h>
#define BTN_PRESSED ENABLE

int wiper_on(void)
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );


	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
			return 1;
		else
			return 0;

}

void delay(void)
{
	for (uint32_t i = 0; i < 50000000; i++);
}
void delay_4_hz(void){
	for (uint32_t i = 0; i < 25000000; i++);
}
void delay_8_hz(void){
	for (uint32_t i = 0; i < 7500000; i++);
}

void ACC_mode_on(void)
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
}

void igniton_off(void)
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
}


int wiper_speed_changes_4_Hz(void)
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_4_hz();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_4_hz();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_4_hz();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_4_hz();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_4_hz();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_4_hz();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
			return 1;
		else
			return 0;
}

int wiper_speed_changes_8_Hz(void)
{
	        GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			delay_8_hz();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			delay_8_hz();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
			delay_8_hz();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
			delay_8_hz();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			delay_8_hz();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			delay_8_hz();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

			if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
					return 1;
				else
					return 0;
}


void wiper_off(void)
{
	        GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
			delay();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			delay();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			delay();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

}





