#include "PCA9685.h"
void PCA9685_VoidPCA9685Init(PCA9685_t *Copy_stPCA9685)
{
    if (NULL != Copy_stPCA9685)
    {
        I2C_voidI2CInit(&I2C_OBJ);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_MODE1_ADD, Copy_stPCA9685->MODE1.mode1_reg);
        __delay_ms(10);
        /**
         * Prescaller = 25000000 / (4096* frequancy)
         */
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_PRESCALLER_ADD, ((25000000.0) / (4096.0 * Copy_stPCA9685->frequancy)));
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD, 0X00);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + 1, 0X00);
        __delay_ms(10);
    }
}
void PCA9685_VoidPCA9685SetDuty(PCA9685_t *Copy_stPCA9685, u8 pin, u8 duty)
{
    if (NULL != Copy_stPCA9685)
    {
        u16 pwm_value = duty * (4096.0 / 100.0);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin), 0x00);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin) + 1, 0x00);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin) + 2, pwm_value);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin) + 3, pwm_value >> 8);
        __delay_ms(10);
    }
}
void PCA9685_VoidPCA9685Servo(PCA9685_t *Copy_stPCA9685, u8 pin, u8 angle)
{
    if (NULL != Copy_stPCA9685)
    {
        u16 pwm_value = map(angle, 0.0, 180.0, 203, 410);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin), 0x00);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin) + 1, 0x00);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin) + 2, pwm_value);
        __delay_ms(10);
        I2C_u8WriteByteRegBlocking(&I2C_OBJ, Copy_stPCA9685->PCA9685_ADD, PCA9685_LED_ADD + (4 * pin) + 3, pwm_value >> 8);
        __delay_ms(10);
    }
}
