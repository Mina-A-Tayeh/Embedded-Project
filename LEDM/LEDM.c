#include "../LEDM/LEDM.h"
#include "Utils.h"
#include "Gpio.h"
#include "Gpio_Private.h"
#include <time.h>
int LedState=0;
void LEDM_Init(uint8 PortName, uint8 PinNum, uint8 PinMode, uint8 DefaultState, uint8 PinData){
	GPIO_Init(PortName,  PinNum, PinMode, DefaultState);
	GPIO_Write(PortName, PinNum, PinData);

}

void LEDM_Manage(uint8 PortName,uint8 PinNum){
	 static unsigned long previousMillis = 0;
	 for (volatile uint32 i = 0; i <= 2000000 * 1000; i++){
		 uint32 currentMillis=i*1000;
		    if (currentMillis - previousMillis >= 250000*1000) {
		        previousMillis = currentMillis;

		        // Toggle LED state
		        LedState = !LedState;
		        GPIO_Write(PortName,PinNum, LedState);}

	}
	 }


	    // Check if it's time to change the LED state

void delay(uint32 milliseconds) {
    for (volatile uint32 i = 0; i < milliseconds * 1000; i++);  // Loop for 1ms * milliseconds
}
//unsigned long millis() {
//	for (volatile uint32 i = 0; i < milliseconds * 1000; i++){
//
//	}
//    struct timespec now;
//    clock_gettime(CLOCK_MONOTONIC, &now);
//    return now.tv_sec * 1000 + now.tv_nsec / 1000000;
//}
