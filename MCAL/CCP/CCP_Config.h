#ifndef CCP_CONFIG_H
#define CCP_CONFIG_H
/***********************Includes*****************/
#include "../../HAL/SERVO_MOTOR/SERVO_Config.h"
/*******************MACRO DECLERATIONS***************/
#define CCP_CAPTURE_MODE  0
#define CCP_COMPARE_MODE  1
#define CCP_PWM_MODE      2

#define CCP_1_SELECT_MODE (CCP_PWM_MODE)  
#define CCP_2_SELECT_MODE (CCP_PWM_MODE)
/*************************************/
/**************************************/
#if SERVO_STATUS==SERVO_ENABLE
#define CCP_1_SELECT_MODE (CCP_COMPARE_MODE)  
#define CCP_2_SELECT_MODE (CCP_COMPARE_MODE)  
#endif
/************************************/
/************************************/  
/*******************MACRO FUNCTIONS******************/
/* ----------------- Data Type Declarations -----------------*/

#endif /* CCP_CONFIG_H */
