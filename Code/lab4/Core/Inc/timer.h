/*
 * timer.h
 *
 *  Created on: Nov 21, 2022
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#define TICK 10

extern int timer1_flag;
extern int timer1_counter;

void setTimer1(int duration);
void timer1_run();

#endif /* INC_TIMER_H_ */
