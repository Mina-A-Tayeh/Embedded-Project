// Team Members
// Name: Omar Emad Sayed Ahmed - Section: 1 - B.N: 45
// Name: Nourhan Ahmed Hanafy  - Section: 2 - B.N: 42
// Name: Mariem Magdy Malak    - Section: 1 - B.N: 45
// Name: Mina Adel Tayeh       - Section: 2 - B.N: 42

#include <stdio.h>
#include <stdbool.h>
#include "Gpio.h"
#include "Rcc.h"
#include "Std_Types.h"
#include "../LEDM/LEDM.h"

int main(){
Rcc_Init();
Rcc_Enable(RCC_GPIOA);
LEDM_Init(A, 0, GPIO_OUTPUT,GPIO_PUSH_PULL);
LEDM_Init(A, 1, GPIO_OUTPUT,GPIO_PUSH_PULL);
volatile unsigned long delay;


Rcc_Enable(RCC_APB1ENR);

while(1){
	LEDM_Manage(A, 0); // Manage LED blinking
	for (delay = 0; delay < 7000; delay++);   // Wait for 10 milliseconds


}



return 0;
}


