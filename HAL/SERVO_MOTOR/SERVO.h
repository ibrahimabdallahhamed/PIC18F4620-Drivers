#ifndef SERVO_H
#define SERVO_H
/***********************Includes*****************/
#include "../../LIB/pic18f4620.h"
#include "../../LIB/STDTYPES.h"
#include "../../LIB/BITMATH.h"
#include "../../LIB/MATH.h"
#include "../../MCAL/GPIO/GPIO_Interface.h"
#include "../../MCAL/TIMER3/TIMER3.h"
#include "../../MCAL/CCP/CCP.h"
#include "SERVO_Config.h"


/*******************MACRO DECLERATIONS***************/

/*******************MACRO FUNCTIONS******************/
/* ----------------- Data Type Declarations -----------------*/
#if SERVO_STATUS==SERVO_ENABLE
void SERVO_voidServoInit(void);
void SERVO_voidSetAngle(u8 Copy_u8Angle);
#endif
#endif /* SERVO_H */
