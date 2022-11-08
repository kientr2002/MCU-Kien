/*
 * led.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#include <displayLed.h>

void displayLED(int led_status){
	switch(led_status){
	case ON_RED_HORIZONTAL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case ON_YELLOW_HORIZONTAL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case ON_GREEN_HORIZONTAL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case ON_RED_VERTICAL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case ON_YELLOW_VERTICAL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case ON_GREEN_VERTICAL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_RESET);
		break;
	case ON_ALL:
		//TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_RESET);
		break;
	case OFF_ALL:
		// TO DO
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	default:
		//NOTHING
		break;
	}
}
