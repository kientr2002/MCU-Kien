/*
 * fsm_button.c
 *
 *  Created on: Nov 15, 2022
 *      Author: ADMIN
 */
#include "fsm_button.h"

void fsm_button_run(){
	if(isbutton1pressed() == 1){
		display7SEGforMode(MODE2);
	} else if(isbutton2pressed() == 1){
		display7SEGforMode(MODE3);
	} else if(isbutton3pressed() == 1){
		display7SEGforMode(MODE4);
	} else {
		display7SEGforMode(MODE1);
	}
}

