/*
 * timer.c
 *
 *  Created on: Nov 2, 2022
 *      Author: ADMIN
 */
#include "main.h"
#include "input_reading.h"
#include "software_timer.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if(htim->Instance == TIM2){
		timerRun();
		button_reading();
	}
}

