#ifndef LEDM_H
#define LEDM_H
#include "Gpio.h"
#include "Std_Types.h"


/*________ FUNCTIONS ____________*/
void LEDM_Init(uint8 PortName, uint8 PinNum, uint8 PinMode,uint8 DefaultState, uint8 PinData);
void LEDM_Manage(uint8 PortName,uint8 PinNum);
unsigned long millis(void);
void delay(uint32 milliseconds);
#endif
