/*
 * counter.c
 *
 *  Created on: Nov 15, 2022
 *      Author: ADMIN
 */
#include "counter.h"
int convert_counter = 0;
void counter_horizontal(){
	if(status_horizontal == RED){
		if(convert_counter == 1){
			led_buffer[0]--;
			led_buffer[1] = 10;
			convert_counter = 0;
		}
		if(led_buffer[0] >= 1 && led_buffer[1] == 0){
			led_buffer[0]--;
			led_buffer[1] = 10;
		}
		led_buffer[1]--;
		if(led_buffer[1] == 0){
			if(led_buffer[0] == 0){
				if(MAX_GREEN >= 10){
					led_buffer[0] = MAX_GREEN/10;
					led_buffer[1] = MAX_GREEN%10;
				} else {
					led_buffer[1] = MAX_GREEN;
				}


				status_horizontal = GREEN;
				convert_led_horizontal = 1;
			} else {
				if(convert_counter == 0){
					convert_counter = 1;
				}
			}
		}
	} else if(status_horizontal == GREEN){
		if(convert_counter == 1){
			led_buffer[0]--;
			led_buffer[1] = 10;
			convert_counter = 0;
		}
		if(led_buffer[0] >= 1 && led_buffer[1] == 0){
			led_buffer[0]--;
			led_buffer[1] = 10;
		}
		led_buffer[1]--;
		if(led_buffer[1] == 0){
			if(led_buffer[0] == 0){
			if(MAX_YELLOW >= 10){
				led_buffer[0] = MAX_YELLOW/10;
				led_buffer[1] = MAX_YELLOW%10;
			} else {
				led_buffer[1] = MAX_YELLOW;
			}
			status_horizontal = YELLOW;
			convert_led_horizontal = 1;
			} else {
				if(convert_counter == 0){
					convert_counter = 1;
				}
			}
		}
	} else {
		if(convert_counter == 1){
			led_buffer[0]--;
			led_buffer[1] = 10;
			convert_counter = 0;
		}
		if(led_buffer[0] >= 1 && led_buffer[1] == 0){
			led_buffer[0]--;
			led_buffer[1] = 10;
		}
		led_buffer[1]--;
		if(led_buffer[1] == 0){
			if(led_buffer[0] == 0){
			if(MAX_RED >= 10){
				led_buffer[0] = MAX_RED/10;
				led_buffer[1] = MAX_RED%10;
			} else {
				led_buffer[1] = MAX_RED;
			}
			status_horizontal = RED;
			convert_led_horizontal = 1;
			} else {
				if(convert_counter == 0){
					convert_counter = 1;
				}
			}
		}
	}
}
int convert_counter2 = 0;
void counter_vertical(){
	if(status_vertical == RED){
		if(convert_counter2 == 1){
			led_buffer[2]--;
			led_buffer[3] = 10;
			convert_counter2 = 0;
		}
		if(led_buffer[2] >= 1 && led_buffer[3] == 0){
			led_buffer[2]--;
			led_buffer[3] = 10;
		}
		led_buffer[3]--;
		if(led_buffer[3] == 0){
			if(led_buffer[2] == 0){
				if(MAX_GREEN >= 10){
					led_buffer[2] = MAX_GREEN/10;
					led_buffer[3] = MAX_GREEN%10;
				} else {
					led_buffer[3] = MAX_GREEN;
				}


				status_vertical = GREEN;
				convert_led_vertical = 1;
			} else {
				if(convert_counter2 == 0){
					convert_counter2 = 1;
				}
			}
		}
	} else if(status_vertical == GREEN){
		if(convert_counter2 == 1){
			led_buffer[2]--;
			led_buffer[3] = 10;
			convert_counter2 = 0;
		}
		if(led_buffer[2] >= 1 && led_buffer[3] == 0){
			led_buffer[2]--;
			led_buffer[3] = 10;
		}
		led_buffer[3]--;
		if(led_buffer[3] == 0){
			if(led_buffer[2] == 0){
			if(MAX_YELLOW >= 10){
				led_buffer[2] = MAX_YELLOW/10;
				led_buffer[3] = MAX_YELLOW%10;
			} else {
				led_buffer[3] = MAX_YELLOW;
			}
			status_vertical = YELLOW;
			convert_led_vertical = 1;
			} else {
				if(convert_counter2 == 0){
					convert_counter2 = 1;
				}
			}
		}
	} else {
		if(convert_counter2 == 1){
			led_buffer[2]--;
			led_buffer[3] = 10;
			convert_counter2 = 0;
		}
		if(led_buffer[2] >= 1 && led_buffer[3] == 0){
			led_buffer[2]--;
			led_buffer[3] = 10;
		}
		led_buffer[3]--;
		if(led_buffer[3] == 0){
			if(led_buffer[2] == 0){
			if(MAX_RED >= 10){
				led_buffer[2] = MAX_RED/10;
				led_buffer[3] = MAX_RED%10;
			} else {
				led_buffer[3] = MAX_RED;
			}
			status_vertical = RED;
			convert_led_vertical = 1;
			} else {
				if(convert_counter2 == 0){
					convert_counter2 = 1;
				}
			}
		}
	}
}



