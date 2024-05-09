#include "../LEDM/LEDM.h"
#include "Utils.h"
#include "Gpio.h"
#include "Gpio_Private.h"
int LedState=0;
void LEDM_Init(uint8 PortName, uint8 PinNum, uint8 PinMode, uint8 DefaultState, uint8 PinData){
	GPIO_Init(PortName,  PinNum, PinMode, DefaultState);
	GPIO_Write(PortName, PinNum, PinData);

}

void LEDM_Manage(uint8 PortName,uint8 PinNum){
	 static unsigned long previousMillis = 0;
	    unsigned long currentMillis = millis();

	    // Check if it's time to change the LED state
	    if (currentMillis - previousMillis >= 500) {
	        previousMillis = currentMillis;

	        // Toggle LED state
	        LedState = !LedState;
	        	GPIO_Write(PortName,PinNum, LedState);}

}
//void delay(uint32_t milliseconds) {
//    for (volatile uint32_t i = 0; i < milliseconds * 1000; i++);  // Loop for 1ms * milliseconds
//}
