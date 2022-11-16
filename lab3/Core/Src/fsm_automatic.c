/*
 * fsm_button.c
 *
 *  Created on: Nov 15, 2022
 *      Author: ADMIN
 */
#include <fsm_automatic.h>
#include "software_timer.h"

void fsm_mode_run(){
	switch(status_mode){
	case MODE1:

		if(isbutton1pressed() == 1){
			status_mode = MODE2;
			convert_flag = 0;
			timer2_flag = 1;
		}
		break;
	case MODE2:
		if(isbutton1pressed() == 1){
			status_mode = MODE3;
			convert_flag = 0;
			timer3_flag = 1;
		}
		break;
	case MODE3:
		if(isbutton1pressed() == 1){
			status_mode = MODE4;
			convert_flag = 0;
			timer4_flag = 1;
		}
		break;
	case MODE4:
		if(isbutton1pressed() == 1){
			status_mode = MODE1;
			convert_flag = 0;
			timer1_flag = 1;
		}
		break;
	default:
		break;
	}
}

void fsm_button_run(){
	if(isbutton2pressed() == 1){
		if(status_mode == MODE2){
				MAX_RED++;
		} else if (status_mode == MODE3){
				MAX_YELLOW++;
		} else {
				MAX_GREEN++;
		}
	}
	if(isbutton3pressed() == 1){
		status_mode = MODE1;
		convert_flag = 0;
		timer1_flag = 1;
	}
}
