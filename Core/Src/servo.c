/*
 * servo.c
 * SG90 servomotor Drivers
 * Created: 20/06/2021 
 * Author: Halim
 */ 

#include "servo.h"

// Mapping of the servo
int map(int st1, int fn1, int st2, int fn2, int value)
{
	return (1.0*(value-st1))/((fn1-st1)*1.0) * (fn2-st2)+st2;
}

// Move the servo by a specific angle
void servo_write(int angle)
{
	htim1.Instance->CCR1 = map(0,180,50,250,angle);
}

// Back and forth rotation of the servo
void servo_wipe(void)
{
		for(int i = 35; i <= 145; i++)
		{
			servo_write(i);
			HAL_Delay(10);
		}
		for(int i = 145; i >= 35; i--)
		{
			servo_write(i);
			HAL_Delay(10);
		}
}

// Stop the servo 
void servo_stop(void)
{
	servo_write(35);	
	HAL_Delay(10);
}

