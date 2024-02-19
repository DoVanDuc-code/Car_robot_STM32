#include "drive_car.h"

void drive_car(uint8_t *buff)
{
	if(buff[0] == 'r' || buff[0] == '0')
	{
		Control_Car(Car_Right_Sta, 70);
	}
}
