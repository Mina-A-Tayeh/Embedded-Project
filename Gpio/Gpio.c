#include "Gpio.h"
#include "Gpio_Private.h"
#include "Utils.h"

void GPIO_Init(uint8 PortName, uint8 PinNum, uint8 PinMode,
		uint8 DefaultState) {
	//check which port to configure
	switch (PortName) {
	case A:
		GPIOA_MODER &= ~(0x03 << (PinNum * 2)); //Clearing the selected pin
		GPIOA_MODER |= (PinMode << (PinNum * 2)); //Set the mode of the selected pin (OUTPUT or INPUT)
		//Check if the pin mode is OUTPUT or INPUT
		switch(PinMode){
		case GPIO_INPUT: // INPUT case
			GPIOA_PUPDR &= ~(0x03 << (PinNum * 2)); //Clearing the selected pin
			GPIOA_PUPDR |= (DefaultState << (PinNum * 2)); //Set the pin as (PULL_UP or PULL_DOWN)
					break;
		case GPIO_OUTPUT: // OUTPUT case
			GPIOA_OTYPER &= ~(0x01 << PinNum); //Clearing the selected pin
			GPIOA_OTYPER |= (DefaultState << PinNum); //Set the pin as (PUSH/PULL or OPEN DRAIN)
					break;
		default:
			break;
		}
		break;
		//Repeat for other ports
	case B:
			GPIOB_MODER &= ~(0x03 << (PinNum * 2));
			GPIOB_MODER |= (PinMode << (PinNum * 2));

			switch(PinMode){
			case GPIO_INPUT:
				GPIOB_PUPDR &= ~(0x03 << (PinNum * 2));
				GPIOB_PUPDR |= (DefaultState << (PinNum * 2));
						break;
			case GPIO_OUTPUT:
				GPIOB_OTYPER &= ~(0x01 << PinNum);
				GPIOB_OTYPER |= (DefaultState << PinNum);
						break;
			default:
				break;
			}
			break;
	case C:
			GPIOC_MODER &= ~(0x03 << (PinNum * 2));
			GPIOC_MODER |= (PinMode << (PinNum * 2));

			switch(PinMode){
			case GPIO_INPUT:
				GPIOC_PUPDR &= ~(0x03 << (PinNum * 2));
				GPIOC_PUPDR |= (DefaultState << (PinNum * 2));
						break;
			case GPIO_OUTPUT:
				GPIOC_OTYPER &= ~(0x01 << PinNum);
				GPIOC_OTYPER |= (DefaultState << PinNum);
						break;
			default:
				break;
			}
			break;
	case D:
			GPIOD_MODER &= ~(0x03 << (PinNum * 2));
			GPIOD_MODER |= (PinMode << (PinNum * 2));

			switch(PinMode){
			case GPIO_INPUT:
				GPIOD_PUPDR &= ~(0x03 << (PinNum * 2));
				GPIOD_PUPDR |= (DefaultState << (PinNum * 2));
						break;
			case GPIO_OUTPUT:
				GPIOD_OTYPER &= ~(0x01 << PinNum);
				GPIOD_OTYPER |= (DefaultState << PinNum);
						break;
			default:
				break;
			}
			break;
	}
}

void GPIO_Write(uint8 PortName, uint8 PinId, uint8 PinData) {
		//Select the port name
		switch (PortName) {
		case A:
				GPIOA_ODR &= ~(0x1 << PinId);
				GPIOA_ODR |= (PinData << PinId); //Write the given data in the output
			break;
		//Repeat for other ports
		case B:
				GPIOB_ODR &= ~(0x1 << PinId);
				GPIOB_ODR |= (PinData << PinId);
			break;
		case C:
				GPIOC_ODR &= ~(0x1 << PinId);
				GPIOC_ODR |= (PinData << PinId);
			break;
		case D:
				GPIOD_ODR &= ~(0x1 << PinId);
				GPIOD_ODR |= (PinData << PinId);
			break;
		default:
			break;}
		return;}


















