/*
 * display.c
 *
 *  Created on: Nov 15, 2022
 *      Author: ADMIN
 */


#include "display.h"

void display(){
	  if(status_mode == MODE1){
		  if(timer1_flag == 1){
		  		  if(convert_flag == 0){
		  				HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , SET );
		  				HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , RESET );
		  			  display7SEGforMode(status_mode,led_buffer[1], led_buffer[3]);
		  			  convert_flag = 1;
		  			  setTimer1(500);
		  			  led_horizontal();
		  			  led_vertical();
		  		  } else {
		  				HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , RESET );
		  				HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , SET );
		  			  display7SEGforMode(status_mode,led_buffer[0], led_buffer[2]);
		  			  convert_flag = 0;
		  			  setTimer1(500);
		  			  counter_horizontal();
		  			  counter_vertical();
		  		  }
		  	  }
	  } else if(status_mode == MODE2){
			 if(timer2_flag == 1){
				 if(convert_flag == 0){
				HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , SET );
				HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , RESET );
					display7SEGforMode(status_mode,MAX_RED%10, MAX_RED%10);
				 auto_red();
				  setTimer2(500);
				  convert_flag = 1;
				 } else {
					HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , RESET );
					HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , SET );
						display7SEGforMode(status_mode,MAX_RED/10, MAX_RED/10);
				  auto_off();
				  setTimer2(500);
				  convert_flag = 0;
				 }
			 }
	  } else if(status_mode == MODE3){
			 if(timer3_flag == 1){
				 if(convert_flag == 0){
				HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , SET );
				HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , RESET );
					display7SEGforMode(status_mode,MAX_YELLOW%10, MAX_YELLOW%10);
				 auto_yellow();
				  setTimer3(500);
				  convert_flag = 1;
				 } else {
					HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , RESET );
					HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , SET );
						display7SEGforMode(status_mode,MAX_YELLOW/10, MAX_YELLOW/10);
				  auto_off();
				  setTimer3(500);
				  convert_flag = 0;
				 }
			 }
	  } else {
			 if(timer4_flag == 1){
				 if(convert_flag == 0){
				HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , SET );
				HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , RESET );
					display7SEGforMode(status_mode,MAX_GREEN%10, MAX_GREEN%10);
				 auto_green();
				  setTimer4(500);
				  convert_flag = 1;
				 } else {
					HAL_GPIO_WritePin ( EN0_GPIO_Port, EN0_Pin , RESET );
					HAL_GPIO_WritePin ( EN1_GPIO_Port, EN1_Pin , SET );
						display7SEGforMode(status_mode,MAX_GREEN/10, MAX_GREEN/10);
				  auto_off();
				  setTimer4(500);
				  convert_flag = 0;
				 }
			 }
	  }
}
