#ifndef PCA9685_H
#define PCA9685_H
/***********************Includes*****************/
#include "../../LIB/STDTYPES.h"
#include "../../LIB/MATH.h"
#include "../../MCAL/I2C/I2C.h"

/*******************MACRO DECLERATIONS***************/
#define PCA9685_MODE1_ADD 0X00
#define PCA9685_PRESCALLER_ADD 0XFE
#define PCA9685_LED_ADD 0X06
#define DISABLE 0
#define ENABLE 1
/*******************MACRO FUNCTIONS******************/
/* ----------------- Data Type Declarations -----------------*/
I2C_t I2C_OBJ =
    {
        .master_clk = 100000,
        .i2c_cfg.i2c_general_call = GENERAL_CALL_DISABLE,
        .i2c_cfg.i2c_mode = I2C_MASTER,
        .i2c_cfg.i2c_mode_cfg = I2C_MASTER_DEFIENED_CLOCK,
        .i2c_cfg.i2c_slew_rate = SLEW_RATE_DISABLE,
        .i2c_cfg.i2c_smBUS = SMBUS_DISABLE};

typedef union
{

    struct
    {
        u8 ALLCALL : 1;
        u8 SUB3 : 1;
        u8 SUB2 : 1;
        u8 SUB1 : 1;
        u8 SLEEP : 1;
        u8 AUTO_INCREMENT : 1;
        u8 EXTCLK : 1;
        u8 RESTART : 1;
    };
    u8 mode1_reg;
} PCA9685_mode1_t;
typedef struct
{
    u16 frequancy;
    PCA9685_mode1_t MODE1;
    u8 PCA9685_ADD;
} PCA9685_t;

/*------------------------------Functions Declerations--------------*/
void PCA9685_VoidPCA9685Init(PCA9685_t *Copy_stPCA9685);
void PCA9685_VoidPCA9685SetDuty(PCA9685_t *Copy_stPCA9685, u8 pin, u8 duty);
void PCA9685_VoidPCA9685Servo(PCA9685_t *Copy_stPCA9685, u8 pin, u8 angle);

#endif /* PCA9685_H */
