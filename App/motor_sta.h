#ifndef MOTOR_STA_H
#define MOTOR_STA_H

#include "control_pwm.h"
typedef enum
{
	motor_ccf,
	motor_ccwb, 
	motor_stop
}motor_status;

typedef struct
{
	GPIO_TypeDef *GPIOx;
	uint16_t GPIO_Pin;
	uint8_t speed;		//duty cycle = speed = 0 -> 100
	uint32_t channel;
	TIM_HandleTypeDef *htim;
	motor_status motor_sta;
}Motor_typedef;

void Motor_Control(Motor_typedef *motor, motor_status sta, uint8_t speed);
//void Motor_init(Motor_handle *motor, motor_status sta);
#endif
