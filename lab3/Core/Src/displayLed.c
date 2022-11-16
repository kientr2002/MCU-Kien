/*
 * led.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#include "global.h"
#include "displayLed.h"


void led_horizontal(){
	switch(status_horizontal){
	case RED:
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);
		break;
	case YELLOW:
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);
		break;
	case GREEN:
		HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}

void led_vertical(){
	switch(status_vertical){
	case RED:
		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case YELLOW:
		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
		break;
	case GREEN:
		HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}

void auto_red(){
	HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
}

void auto_yellow(){
	HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
}

void auto_green(){
	HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_RESET);
}

void auto_off(){
	HAL_GPIO_WritePin(red_horizontal_GPIO_Port, red_horizontal_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow_horizontal_GPIO_Port, yellow_horizontal_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green_horizontal_GPIO_Port, green_horizontal_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(red_vertical_GPIO_Port, red_vertical_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow_vertical_GPIO_Port, yellow_vertical_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green_vertical_GPIO_Port, green_vertical_Pin, GPIO_PIN_SET);
}
