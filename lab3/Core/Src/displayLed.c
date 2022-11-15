/*
 * led.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#include "global.h"
#include "displayLed.h"


void displayLED(int led_status){
	switch(led_status){
	case RED:
		//TO DO
			HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

			HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case YELLOW:
		//TO DO
			HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

			HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
			setTimer2(1000);
		break;
	case GREEN:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_RESET);
		break;
	case TRAFFIC_RED_GREEN:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_RESET);
		break;
	case TRAFFIC_RED_YELLOW:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case TRAFFIC_GREEN_RED:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case TRAFFIC_YELLOW_RED:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	default:
		// TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	}
}
