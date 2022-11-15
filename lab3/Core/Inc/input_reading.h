/*
 * input_reading.h
 *
 *  Created on: Nov 8, 2022
 *      Author: ADMIN
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_
#include "global.h"

int isbutton1pressed();
int isbutton2pressed();
int isbutton3pressed();

void subKeybutton1Process();
void subKeybutton2Process();
void subKeybutton3Process();

void input_reading();

void getKeyinputButton1();
void getKeyinputButton2();
void getKeyinputButton3();

#endif /* INC_INPUT_READING_H_ */
