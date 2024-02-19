#include "motor_sta.h"

void Motor_Control(Motor_typedef *motor, motor_status sta, uint8_t speed)
{
	switch(sta)
	{
		case motor_ccf:
			HAL_GPIO_WritePin(motor->GPIOx, motor->GPIO_Pin, GPIO_PIN_RESET);
			pwm_controller(motor->htim, motor->channel, motor->speed);
			break;
		case motor_ccwb:
			HAL_GPIO_WritePin(motor->GPIOx, motor->GPIO_Pin, GPIO_PIN_SET);
			pwm_controller(motor->htim, motor->channel, 100 - motor->speed);
			break;
		case motor_stop:
			HAL_GPIO_WritePin(motor->GPIOx, motor->GPIO_Pin, GPIO_PIN_RESET);
			pwm_controller(motor->htim, motor->channel, 0);
			break;
	}
}
//void Motor_init(Motor_typedef *motor, motor_status sta)
//{
//	motor->speed = 0;
//}
