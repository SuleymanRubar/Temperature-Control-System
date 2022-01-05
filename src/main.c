#include <stdlib.h>
#include "mylibrary.h"

#define _CRT_SECURE_NO_WARNINGS
#define		NOMINAL_TEMPERATURE		25
#define		SIZE					10

int32_t val = 0;
extern int32_t flag;

int main(void) {
	init_display();
	init_motor();
	init_sensor();
	printf("\n");
	display_powerOn();
	printf("\n");
	while (flag!=SIZE) {
		val = getTempValue();
		writeToLCD(val);
		if (val > NOMINAL_TEMPERATURE)
			motor_fanOn();
		else
			motor_fanOff();
		delay();
	}
	putchar('\n');
	display_powerOff();
	putchar('\n');
	return (EXIT_SUCCESS);
}