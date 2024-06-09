#include "Nvic.h"

#include "Bit_Operations.h"

#define NVIC_BASE (0xE000E100)

uint32 NVIC_ISER_Addresses [3]={0xE000E100,0xE000E104,0xE000E108};
uint32 NVIC_ICER_Addresses [3]={0xE000E180,0xE000E184,0xE000E188};


//Another solution
// uint32 *NVIC_ISER_0=0xE000E100;

void Nvic_EnableInterrupt(uint8 IRQn) {
  uint32 *nvic_iser_address=NVIC_ISER_Addresses[IRQn >> 5]; 
  // /32 -> return 0,1,2
  SET_BIT(*nvic_iser_address, IRQn & 0x1F);
  // mod 32 -> 0,1....,31
}

void Nvic_DisableInterrupt(uint8 IRQn) {
  uint32 *nvic_icer__address=NVIC_ICER_Addresses[IRQn >> 5];
  SET_BIT(*nvic_icer__address, IRQn & 0x1F);
}
