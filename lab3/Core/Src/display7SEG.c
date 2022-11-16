/*
 * display7SEG.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */
#include "display7SEG.h"
#include "global.h"

void display7SEGforMode(int mode, int counter_horizontal, int counter_vertical){
	switch(mode){
	case MODE1:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, SET);
		  horizontal_7SEG(counter_horizontal);
		  vertical_7SEG(counter_vertical);
		break;
	case MODE2:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, RESET);
		  horizontal_7SEG(counter_horizontal);
		  vertical_7SEG(counter_vertical);
		break;
	case MODE3:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, RESET);
		  horizontal_7SEG(counter_horizontal);
		  vertical_7SEG(counter_vertical);
		break;
	case MODE4:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, RESET);
		  horizontal_7SEG(counter_horizontal);
		  vertical_7SEG(counter_vertical);
		break;
	default:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, SET);
		break;
	}
}
void horizontal_7SEG(int index){
	switch(index){
	case 0:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, SET);
		break;
	case 1:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, SET);
		break;
	case 2:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	case 3:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	case 4:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	case 5:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	case 6:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	case 7:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, SET);
		break;
	case 8:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	case 9:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, RESET);
		break;
	default:
		  HAL_GPIO_WritePin(LED7h_0_GPIO_Port, LED7h_0_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_1_GPIO_Port, LED7h_1_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_2_GPIO_Port, LED7h_2_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_3_GPIO_Port, LED7h_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_4_GPIO_Port, LED7h_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_5_GPIO_Port, LED7h_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7h_6_GPIO_Port, LED7h_6_Pin, SET);
		break;
	}
}

void vertical_7SEG(int index){
	switch(index){
		case 0:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, SET);
			break;
		case 1:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, SET);
			break;
		case 2:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		case 3:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		case 4:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		case 5:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		case 6:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		case 7:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, SET);
			break;
		case 8:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		case 9:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, RESET);
			break;
		default:
			  HAL_GPIO_WritePin(LED7v_0_GPIO_Port, LED7v_0_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_1_GPIO_Port, LED7v_1_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_2_GPIO_Port, LED7v_2_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_3_GPIO_Port, LED7v_3_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_4_GPIO_Port, LED7v_4_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_5_GPIO_Port, LED7v_5_Pin, SET);
			  HAL_GPIO_WritePin(LED7v_6_GPIO_Port, LED7v_6_Pin, SET);
			break;
		}
}


