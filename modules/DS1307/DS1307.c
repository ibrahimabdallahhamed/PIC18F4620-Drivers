#include "DS1307 .h"

void DS1307_voidGetData(I2C_t *i2c_object, DS1307_t *Copy_stDS1307)
{
    if (NULL != Copy_stDS1307 && NULL != i2c_object)
    {
        Copy_stDS1307->Seconds = I2C_u8ReadRegByte(i2c_object, DS1307_ADD, SECONDS_ADD);
        Copy_stDS1307->Minutes = I2C_u8ReadRegByte(i2c_object, DS1307_ADD, MINUTES_ADD);
        Copy_stDS1307->Hours = I2C_u8ReadRegByte(i2c_object, DS1307_ADD, HOURS_ADD);
        Copy_stDS1307->Days = I2C_u8ReadRegByte(i2c_object, DS1307_ADD, DAYS_ADD);
        Copy_stDS1307->Months = I2C_u8ReadRegByte(i2c_object, DS1307_ADD, MONTHS_ADD);
        Copy_stDS1307->Years = I2C_u8ReadRegByte(i2c_object, DS1307_ADD, YEARS_ADD);
    }
}