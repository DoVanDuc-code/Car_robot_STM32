#ifndef CONTROL_PWM_H
#define CONTROL_PWM_H

#include <stdint.h> 
#include "stm32f1xx_hal.h"

void pwm_controller(TIM_HandleTypeDef *htim, uint32_t channel, uint8_t duty_cycle);
void pwm_init(void);
#endif
