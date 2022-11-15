/*
 * global.h
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "displayLed.h"
#include "display7SEG.h"
#include "input_reading.h"



//input_reading.h
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define HoldTimer	500


//displayLED.h
#define RED						0
#define	YELLOW					1
#define	GREEN					2
#define TRAFFIC_RED_GREEN		3
#define TRAFFIC_RED_YELLOW 		4
#define TRAFFIC_GREEN_RED 		5
#define TRAFFIC_YELLOW_RED 		6



//display7SEG.h
#define RED_GREEN				10
#define RED_YELLOW 				11
#define GREEN_RED 				12
#define YELLOW_RED 				13

//display7SEGforMode
#define MODE1					21
#define MODE2					22
#define MODE3					23
#define MODE4					24


int ledstate;
int led_status;
extern int CYCLE;

#endif /* INC_GLOBAL_H_ */
