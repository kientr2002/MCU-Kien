/*
 * input_reading.c
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#include "main.h"
#include "input_reading.h"


//button1
int TimerForKeybutton1Press = HoldTimer;
int button1_flag = 0;
int KeyRegbutton1_0 = NORMAL_STATE;
int KeyRegbutton1_1 = NORMAL_STATE;
int KeyRegbutton1_2 = NORMAL_STATE;
int KeyRegbutton1_3 = NORMAL_STATE;
//button2
int TimerForKeybutton2Press = HoldTimer;
int button2_flag = 0;
int KeyRegbutton2_0 = NORMAL_STATE;
int KeyRegbutton2_1 = NORMAL_STATE;
int KeyRegbutton2_2 = NORMAL_STATE;
int KeyRegbutton2_3 = NORMAL_STATE;
//button3
int TimerForKeybutton3Press = HoldTimer;
int button3_flag = 0;
int KeyRegbutton3_0 = NORMAL_STATE;
int KeyRegbutton3_1 = NORMAL_STATE;
int KeyRegbutton3_2 = NORMAL_STATE;
int KeyRegbutton3_3 = NORMAL_STATE;

//Button is press?

int isbutton1pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isbutton2pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isbutton3pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

//sub key
void subKeybutton1Process(){
	//TODO
	button1_flag = 1;
}
void subKeybutton2Process(){
	//TODO
	button2_flag = 1;
}
void subKeybutton3Process(){
	//TODO
	button3_flag = 1;
}

void input_reading(){
	//TODO
		getKeyinputButton1();
		getKeyinputButton2();
		getKeyinputButton3();
}

void getKeyinputButton1(){
	KeyRegbutton1_0 = KeyRegbutton1_1;
	KeyRegbutton1_1 = KeyRegbutton1_2;
	KeyRegbutton1_2 = HAL_GPIO_ReadPin(button1_GPIO_Port, button1_Pin);
	if((KeyRegbutton1_0 == KeyRegbutton1_1) && (KeyRegbutton1_1 == KeyRegbutton1_2)){
		if(KeyRegbutton1_3 != KeyRegbutton1_2){
			KeyRegbutton1_3 = KeyRegbutton1_2;
			if(KeyRegbutton1_2 == PRESSED_STATE){
				//TODO
				subKeybutton1Process();
				TimerForKeybutton1Press = HoldTimer;
			}
		} else {
			TimerForKeybutton1Press--;
			if(TimerForKeybutton1Press == 0){
				//TODO
				if(KeyRegbutton1_2 == PRESSED_STATE){
					subKeybutton1Process();
				}
				TimerForKeybutton1Press = HoldTimer;
			}
		}
	}
}

void getKeyinputButton2(){
	KeyRegbutton2_0 = KeyRegbutton2_1;
	KeyRegbutton2_1 = KeyRegbutton2_2;
	KeyRegbutton2_2 = HAL_GPIO_ReadPin(button2_GPIO_Port, button2_Pin);
	if((KeyRegbutton2_0 == KeyRegbutton2_1) && (KeyRegbutton2_1 == KeyRegbutton2_2)){
		if(KeyRegbutton2_3 != KeyRegbutton2_2){
			KeyRegbutton2_3 = KeyRegbutton2_2;
			if(KeyRegbutton2_2 == PRESSED_STATE){
				//TODO
				subKeybutton2Process();
				TimerForKeybutton2Press = HoldTimer;
			}
		} else {
			TimerForKeybutton2Press--;
			if(TimerForKeybutton2Press == 0){
				//TODO
				if(KeyRegbutton2_2 == PRESSED_STATE){
					subKeybutton2Process();
				}
				TimerForKeybutton2Press = HoldTimer;
			}
		}
	}
}

void getKeyinputButton3(){
	KeyRegbutton3_0 = KeyRegbutton3_1;
	KeyRegbutton3_1 = KeyRegbutton3_2;
	KeyRegbutton3_2 = HAL_GPIO_ReadPin(button3_GPIO_Port, button3_Pin);
	if((KeyRegbutton3_0 == KeyRegbutton3_1) && (KeyRegbutton3_1 == KeyRegbutton3_2)){
		if(KeyRegbutton3_3 != KeyRegbutton3_2){
			KeyRegbutton3_3 = KeyRegbutton3_2;
			if(KeyRegbutton3_2 == PRESSED_STATE){
				//TODO
				subKeybutton3Process();
				TimerForKeybutton3Press = HoldTimer;
			}
		} else {
			TimerForKeybutton3Press--;
			if(TimerForKeybutton3Press == 0){
				//TODO
				if(KeyRegbutton3_2 == PRESSED_STATE){
					subKeybutton3Process();
				}
				TimerForKeybutton3Press = HoldTimer;
			}
		}
	}
}
