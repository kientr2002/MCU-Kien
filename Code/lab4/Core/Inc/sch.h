/*
 * sch.h
 *
 *  Created on: Nov 21, 2022
 *      Author: ADMIN
 */

#ifndef INC_SCH_H_
#define INC_SCH_H_

#include "main.h"


typedef struct{
	void (*pTask)(void);
	uint32_t 	Delay;
	uint32_t 	Period;
	uint8_t 	RunMe;
	uint32_t 	TaskID;
}sTasks;

#define SCH_MAX_TASKS	40

unsigned char Error_code_G = 0;

void SCH_Init(void);
void SCH_Add_Task ( void (*pFunction)() ,
					uint32_t DELAY,
					uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
unsigned char SCH_Delete_Task(const tByte TASK_INDEX);


#endif /* INC_SCH_H_ */
