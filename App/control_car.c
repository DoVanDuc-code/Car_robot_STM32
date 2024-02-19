#include "control_car.h"

Motor_typedef motor_1;
Motor_typedef motor_2;
Motor_typedef motor_3;
Motor_typedef motor_4;

void Control_Car(CarState car_sta, uint8_t speed)
{
	switch(car_sta)
	{
		case Car_Stop_Sta:
			Motor_Control(&motor_1, motor_stop, 0);
			Motor_Control(&motor_2, motor_stop, 0);
			Motor_Control(&motor_3, motor_stop, 0);
			Motor_Control(&motor_4, motor_stop, 0);
			break;
		case Car_Forward_Sta:
			Motor_Control(&motor_1, motor_ccf, speed);
			Motor_Control(&motor_2, motor_ccf, speed);
			Motor_Control(&motor_3, motor_ccf, speed);
			Motor_Control(&motor_4, motor_ccf, speed);
			break;
		case Car_Backward_Sta:
			Motor_Control(&motor_1, motor_ccwb, speed);
			Motor_Control(&motor_2, motor_ccwb, speed);
			Motor_Control(&motor_3, motor_ccwb, speed);
			Motor_Control(&motor_4, motor_ccwb, speed);
			break;
		case Car_Left_Sta:
			Motor_Control(&motor_1, motor_ccwb, speed);
			Motor_Control(&motor_2, motor_ccf, speed);
			Motor_Control(&motor_3, motor_ccf, speed);
			Motor_Control(&motor_4, motor_ccwb, speed);
			break;
		case Car_Right_Sta:
			Motor_Control(&motor_1, motor_ccf, speed);
			Motor_Control(&motor_2, motor_ccwb, speed);
			Motor_Control(&motor_3, motor_ccwb, speed);
			Motor_Control(&motor_4, motor_ccf, speed);
			break;
		default:
			break;
	}
}
void Control_Car_init(void)
{
			Motor_Control(&motor_1, motor_stop, 0);
			Motor_Control(&motor_2, motor_stop, 0);
			Motor_Control(&motor_3, motor_stop, 0);
			Motor_Control(&motor_4, motor_stop, 0);
}
