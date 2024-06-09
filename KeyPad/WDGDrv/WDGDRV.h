#ifndef WDDRV_H
#define WDDRV_H

#include "Nvic.h"

#define WWDG_BASE (0x40002C00)

#define WWDG_CR (*(volatile uint32_t *)(WWDG_BASE + 0x00))
#define WWDG_CFR (*(volatile uint32_t *)(WWDG_BASE + 0x04))
#define WWDG_SR (*(volatile uint32_t *)(WWDG_BASE + 0x08))

// #define NVIC_ISER1 (*(volatile uint32_t *)(0xE000E104))

void WDGDrv_Init(void);
void WDGDrv_IsrNotification(void);
#endif