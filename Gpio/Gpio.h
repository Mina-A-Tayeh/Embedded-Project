#ifndef GPIO_H
#define GPIO_H
#include "Std_Types.h"

/*PortName*/
#define A 'A'
#define B 'B'
#define C 'C'
#define D 'D'

/*PinMode*/
#define GPIO_INPUT  0x00
#define GPIO_OUTPUT 0x01
#define GPIO_AF     0x02
#define GPIO_ANALOG 0x03

/*DefaultState OUTPUT*/
#define GPIO_PUSH_PULL  0x00
#define GPIO_OPEN_DRAIN 0x01

/*DefaultState INPUT*/
#define GPIO_PULL_UP  0x01
#define GPIO_PULL_DOWN 0x02

/*OK Indicates that the pin is OUTPUT, NOK indicates that the pin is NOT OUTPUT*/
#define OK 0x01
#define NOK 0x00


/*Data*/
#define LOW  0x00
#define HIGH 0x01


void GPIO_Init(uint8 PortName, uint8 PinNum, uint8 PinMode,
		uint8 DefaultState);
void GPIO_Write(uint8 PortName, uint8 PinId, uint8 PinData);


#endif /* GPIO_H */
