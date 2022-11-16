/*
 * global.h
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <fsm_automatic.h>
#include "main.h"
#include "software_timer.h"
#include "displayLed.h"
#include "display7SEG.h"
#include "input_reading.h"
#include "display.h"
#include "counter.h"


//input_reading.h
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define HoldTimer	500


//displayLED.h
#define RED						0
#define	YELLOW					1
#define	GREEN					2


//display7SEGforMode
#define MODE1					21
#define MODE2					22
#define MODE3					23
#define MODE4					24

//Mode display
#define MODEDISPLAY1			31
#define MODEDISPLAY2			32

extern int status_horizontal;
extern int status_vertical;
extern int led_buffer[4];
extern int status_mode;
extern int display_mode;
extern int convert_flag;
extern int MAX_RED;
extern int MAX_YELLOW;
extern int MAX_GREEN;
extern int convert_led_horizontal;
extern int convert_led_vertical;
extern int CYCLE;

#endif /* INC_GLOBAL_H_ */
