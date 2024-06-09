#include "../LEDM/LEDM.h"
#include "Utils.h"
#include "Gpio.h"
#include "Gpio_Private.h"
static int LedState=0;
static int LedState2=0;
int counter=0;
void LEDM_Init(uint8 PortName, uint8 PinNum, uint8 PinMode, uint8 DefaultState){
	GPIO_Init(PortName,  PinNum, PinMode, DefaultState);

}

void LEDM_Manage(uint8 PortName,uint8 PinNum){
	counter++;
	if(counter==50){
		LedState=!LedState;
		GPIO_Write(PortName, PinNum, LedState);
		counter=0;
	}
	LedState2=!LedState2;
	GPIO_Write(A, 1, LedState2);



//	 static unsigned long previousMillis = 0;
//	    unsigned long currentMillis = millis();
//
//	    // Check if it's time to change the LED state
//	    if (currentMillis - previousMillis >= 500) {
//	        previousMillis = currentMillis;
//
//	        // Toggle LED state
//	        LedState = !LedState;
//	        	GPIO_Write(PortName,PinNum, LedState);}

}
//void delay(uint32_t milliseconds) {
//    for (volatile uint32_t i = 0; i < milliseconds * 1000; i++);  // Loop for 1ms * milliseconds
//}
