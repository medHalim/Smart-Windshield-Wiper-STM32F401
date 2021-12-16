/*
 * servo.h
 * 
 * Created: 20/06/2021 
 * Author: Halim
 */ 

// Includes
#include "main.h"
#include "globalVar.h"

extern TIM_HandleTypeDef htim1;

// Function prototypes
int map(int st1, int fn1, int st2, int fn2, int value);
void servo_write(int angle);
void servo_wipe(void);
void servo_stop(void);
