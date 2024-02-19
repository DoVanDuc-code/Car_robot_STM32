#include "uart.h"
#include "drive_car.h"
#define LEN 60
uint8_t buff[LEN];
uint8_t buff_index;
uint8_t flag;
void receive_uart(uint8_t receive_data)
{
	if(receive_data != NULL)
	{
		buff[buff_index++] = receive_data;
		flag = 1;
	}	
	if(buff[1] == 'o' || buff[1] == '0')
		{
			flag = 0;
		}
}

void uart_handle(void)
{
	if(flag == 1)
	{
		drive_car(buff);
		buff_index = 0;
		flag = 0;
	}
}
void uart_init(void)
{

}
