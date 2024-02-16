#ifndef DS1307 _H
#define DS1307 _H
/***********************Includes*****************/
#include "../../../COTS/LIB/STDTYPES.h"
#include "../../../COTS/LIB/pic18f4620.h"
#include "../../../COTS/MCAL/I2C/I2C.h"
/*******************MACRO DECLERATIONS***************/
#define DS1307_ADD  0b11010000
#define SECONDS_ADD 0X01
#define MINUTES_ADD 0X02
#define HOURS_ADD 0X04
#define DAYS_ADD 0X05
#define MONTHS_ADD 0X06
#define YEARS_ADD 0X00
/*******************MACRO FUNCTIONS******************/
/* ----------------- Data Type Declarations -----------------*/
typedef struct
{
    u8 Seconds;
    u8 Minutes;
    u8 Hours;
    u8 Days;
    u8 Months;
    u8 Years;
} DS1307_t;

void DS1307_voidGetData(I2C_t *i2c_object ,DS1307_t * Copy_stDS1307);
#endif /* DS1307 _H */
