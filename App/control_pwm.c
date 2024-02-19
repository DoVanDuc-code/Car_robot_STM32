#include "control_pwm.h"
extern TIM_HandleTypeDef htim1;
void pwm_controller(TIM_HandleTypeDef *htim, uint32_t channel, uint8_t duty_cycle)
{
	uint16_t val;
	val = (uint16_t)duty_cycle * (htim->Instance->ARR)/100;
	switch(channel)
	{
		case TIM_CHANNEL_1:
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, val);
			break;
		case TIM_CHANNEL_2:
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, val);
			break;
		case TIM_CHANNEL_3:
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_3, val);
			break;
		case TIM_CHANNEL_4:
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_4, val);
			break;
	}
}
void pwm_init(void)
{

}
