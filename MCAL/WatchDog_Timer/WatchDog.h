#ifndef WATCHDOG_H
#define WATCHDOG_H
/***********************Includes*****************/
#include "../../LIB/STDTYPES.h"
#include "../../LIB/pic18f4620.h"
/*******************MACRO DECLERATIONS***************/
/*******************MACRO FUNCTIONS******************/
#define WATCHDOG_CONFEIG_FREQUANCY() (OSCCONbits.IRCF = 0)
#define WATCHDOG_ENABLE()             \
    {                                 \
        (WDTCONbits.SWDTEN = 1);      \
        CLRWDT();                     \
        WATCHDOG_CONFEIG_FREQUANCY(); \
    }
#define WATCHDOG_DISABLE() (WDTCONbits.SWDTEN = 0)

#endif /* WATCHDOG_H */
