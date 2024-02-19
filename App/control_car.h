#ifndef CONTROL_CAR_H
#define CONTROL_CAR_H

#include "motor_sta.h"

typedef enum
{
	Car_Stop_Sta, 
	Car_Forward_Sta,
	Car_Backward_Sta,
	Car_Left_Sta,
	Car_Right_Sta
}CarState;

void Control_Car( CarState car_sta, uint8_t speed);
void Control_Car_init(void);
#endif
