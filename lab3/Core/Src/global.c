/*
 * global.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */
#include "global.h"

int status_vertical = GREEN;
int status_horizontal = RED;
int status_mode=MODE1;
int led_buffer[4] = {0, 5, 0, 3};
int display_mode = MODEDISPLAY1;
int convert_flag = 0;
int MAX_RED = 5;
int MAX_YELLOW = 2;
int MAX_GREEN = 3;
int convert_led_horizontal = 0;
int convert_led_vertical = 0;
