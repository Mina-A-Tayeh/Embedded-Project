
#include "WDGDRV.h"
void WDGDrv_Init(void){
    // Configure WWDG
    WWDG_CFR = (1 << 9) | (3 << 7) | 0x7F;  // Enable EWI, set prescaler to 8, set window value to 0x7F
    WWDG_CR = (1 << 7) | 0x7F;  // Activate watchdog and set counter to 0x7F

    Nvic_EnableInterrupt(0); //EWI for watchdog
}

void WDGDrv_IsrNotification(void){
    if (WDGM_MainFunction() == 1 && WDGM_ProvideSuppervisionStatus() == 1) {
        WWDG_CR = (1 << 7) | 0x7F;  // Refresh watchdog
    }

    // Clear EWI flag
    WWDG_SR &= ~(1 << 0);
}

