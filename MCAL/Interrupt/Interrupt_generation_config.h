/* 
 * File:   Interrupt_generation_config.h
 * Author: dell
 *
 * Created on October 19, 2023, 10:45 PM
 */

#ifndef INTERRUPT_GENERATION_CONFIG_H
#define	INTERRUPT_GENERATION_CONFIG_H
/***********************Includes*****************/
#include "../../HAL/SERVO_MOTOR/SERVO_Config.h"
/************************************************/
#define INTERRUPT_FEATURE_ENABLE                       1
#define INTERRUPT_FEATURE_DISABLE                      0
#define INTERRUPT_PRIORITY_level                            INTERRUPT_FEATURE_DISABLE
#define INTERRUPT_EXTERNAL_INTERRUPT                        INTERRUPT_FEATURE_DISABLE
#define INTERRUPT_EXTERNAL_INTERRUPT_INTX                   INTERRUPT_FEATURE_DISABLE
#define INTERRUPT_EXTERNAL_INTERRUPT_RBX                    INTERRUPT_FEATURE_DISABLE
#define INTERRUPT_INTERNAL_INTERRUPT                        INTERRUPT_FEATURE_DISABLE
#define ADC_INTERRUPT_ENABLE                                INTERRUPT_FEATURE_DISABLE
#define TIMER0_INTERRUPT_ENABLE                             INTERRUPT_FEATURE_ENABLE
#define TIMER1_INTERRUPT_ENABLE                             INTERRUPT_FEATURE_DISABLE
#define TIMER2_INTERRUPT_ENABLE                             INTERRUPT_FEATURE_DISABLE
#define TIMER3_INTERRUPT_ENABLE                             INTERRUPT_FEATURE_DISABLE
#define CCP1_INTERRUPT_ENABLE                               INTERRUPT_FEATURE_DISABLE
#define CCP2_INTERRUPT_ENABLE                               INTERRUPT_FEATURE_DISABLE
#define USART_TX_INTERRUPT_ENABLE_CFG                       INTERRUPT_FEATURE_DISABLE
#define USART_RX_INTERRUPT_ENABLE_CFG                       INTERRUPT_FEATURE_ENABLE
#define SPI_INTERRUPT_ENABLE_CFG                            INTERRUPT_FEATURE_DISABLE
#define I2C_INTERRUPT_ENABLE_CFG                            INTERRUPT_FEATURE_DISABLE

/*************************************/
/**************************************/
#if SERVO_STATUS==SERVO_ENABLE
#define CCP1_INTERRUPT_ENABLE (INTERRUPT_FEATURE_ENABLE)  
#define CCP2_INTERRUPT_ENABLE (INTERRUPT_FEATURE_ENABLE)  
#endif
/************************************/
/************************************/

#endif	/* INTERRUPT_GENERATION_CONFIG_H */

