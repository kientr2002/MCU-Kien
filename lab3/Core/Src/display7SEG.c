/*
 * display7SEG.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */
#include "display7SEG.h"
unsigned char num[] = {0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};
int state_traffic = RED_GREEN;
int flagGreen_Yellow = 0;
int index_horizontal = 5;
int index_vertical = 9;
int led_buffer[4] = {0, 5, 0, 3};
int SEGstate = RED_GREEN;
int flag_counter = 0;
void display7SEGforMode(int mode){
	switch(mode){
	case MODE1:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, SET);
		break;
	case MODE2:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, RESET);
		break;
	case MODE3:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, RESET);
		break;
	case MODE4:
		  HAL_GPIO_WritePin(MODE_LED7_0_GPIO_Port, MODE_LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_1_GPIO_Port, MODE_LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_2_GPIO_Port, MODE_LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_3_GPIO_Port, MODE_LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_4_GPIO_Port, MODE_LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(MODE_LED7_5_GPIO_Port, MODE_LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(MODE_LED7_6_GPIO_Port, MODE_LED7_6_Pin, RESET);
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


void display7SEG(){
	if(flag_counter == 0){
		HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , RESET );
		HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , SET );
	} else {
		HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , SET );
		HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , RESET );
	}
		switch(SEGstate){
		case RED_GREEN:
		displayLED(led_status);
		if(timer1_flag == 1){
			if(flag_counter == 0){
				GPIOB->ODR = num[led_buffer[1]];
				GPIOA->ODR = num[led_buffer[3]];
				led_status = TRAFFIC_RED_GREEN;
				flag_counter = 1;
			} else {
				GPIOB->ODR = num[led_buffer[0]];
				GPIOA->ODR = num[led_buffer[2]];
				led_buffer[1]--;
				led_buffer[3]--;
				if(led_buffer[3] == 0){
					led_buffer[3] = 2;
					SEGstate = RED_YELLOW;
				}
				flag_counter = 0;
			}
			setTimer1(500);

		  }
			break;

		case RED_YELLOW:
			displayLED(led_status);
			if(timer1_flag == 1){
				if(flag_counter == 0){
					GPIOB->ODR = num[led_buffer[1]];
					GPIOA->ODR = num[led_buffer[3]];
					led_status = TRAFFIC_RED_YELLOW;
					flag_counter = 1;
				} else {
					GPIOB->ODR = num[led_buffer[0]];
					GPIOA->ODR = num[led_buffer[2]];
					led_buffer[1]--;
					led_buffer[3]--;
					if(led_buffer[1] == 0){
						led_buffer[1] = 3;
						if(led_buffer[3] == 0){
							led_buffer[3] = 5;
						}
						SEGstate = GREEN_RED;
					}
					flag_counter = 0;
				}
				setTimer1(500);
			}

			break;
		case GREEN_RED:
			displayLED(led_status);
			if(timer1_flag == 1){
				if(flag_counter == 0){
					GPIOB->ODR = num[led_buffer[1]];
					GPIOA->ODR = num[led_buffer[3]];
					led_status = TRAFFIC_GREEN_RED;
					flag_counter = 1;
				} else {
					GPIOB->ODR = num[led_buffer[0]];
					GPIOA->ODR = num[led_buffer[2]];
					led_buffer[1]--;
					led_buffer[3]--;
					if(led_buffer[1] == 0){
						led_buffer[1] = 2;
						SEGstate = YELLOW_RED;
					}
					flag_counter = 0;
				}
				setTimer1(500);
			  }
			break;
		case YELLOW_RED:
			displayLED(led_status);
			if(timer1_flag == 1){
						if(flag_counter == 0){
							GPIOB->ODR = num[led_buffer[1]];
							GPIOA->ODR = num[led_buffer[3]];
							led_status = TRAFFIC_YELLOW_RED;
							flag_counter = 1;
						} else {
							GPIOB->ODR = num[led_buffer[0]];
							GPIOA->ODR = num[led_buffer[2]];
							led_buffer[1]--;
							led_buffer[3]--;
							if(led_buffer[3] == 0){
								led_buffer[3] = 3;
								if(led_buffer[1] == 0){
									led_buffer[1] = 5;
								}
								SEGstate = RED_GREEN;
							}
							flag_counter = 0;
						}
						setTimer1(500);
					}
			break;
		default:
			break;
		}

}

