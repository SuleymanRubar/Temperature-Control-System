// LCD Display
// Temperature Sensor
// Fan Motor

#include <stdint.h>
#include <stdio.h>

#ifndef _EMBEDDED_H
#define _EMBEDDED_H

void delay();

void init_display();
void display_powerOn();
void display_powerOff();
void writeToLCD(int32_t);

void init_sensor();
int32_t getTempValue();

void init_motor();
void motor_fanOn();
void motor_fanOff();

#endif // !_EMBEDDED_H