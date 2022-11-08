/*
 * led.h
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#ifndef INC_DISPLAYLED_H_
#define INC_DISPLAYLED_H_
#include "main.h"


#define ON_RED_HORIZONTAL		0
#define	ON_YELLOW_HORIZONTAL	1
#define	ON_GREEN_HORIZONTAL		2
#define ON_RED_VERTICAL			3
#define	ON_YELLOW_VERTICAL		4
#define	ON_GREEN_VERTICAL		5
#define	ON_ALL		6
#define OFF_ALL		7


void displayLED(int led_status);

#endif /* INC_DISPLAYLED_H_ */
