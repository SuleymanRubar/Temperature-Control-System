#include "embedded.h"
#define		SIZE	10

const int32_t values[SIZE] = { 5,40,12,19,27,24,26,34,37,10 };
int32_t flag = 0;

void delay() {
	int64_t num = 500000000;
	while (num--)
		;
}

void init_display() {
	printf("Display Initializing...\n");
}
void display_powerOn() {
	printf("LCD ON!\n");
}
void display_powerOff() {
	printf("LCD OFF!\n");
}
void writeToLCD(int32_t num) {
	printf("Temperature Value : %d\n", num);
}

void init_sensor() {
	printf("Sensor Initiliazing...\n");
}
int32_t getTempValue() {
	static int32_t counter = 0;
	int32_t temp = values[counter++];
	flag = counter;
	return temp;
}

void init_motor() {
	printf("Motor Initiliazing...\n");
}
void motor_fanOn() {
	printf("FAN ON!\n");
}
void motor_fanOff() {
	printf("FAN OFF!\n");
}