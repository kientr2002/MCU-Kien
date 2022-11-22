/*
 * sch.h
 *
 *  Created on: Nov 21, 2022
 *      Author: ADMIN
 */

#ifndef INC_SCH_H_
#define INC_SCH_H_

#include "main.h"
#include "timer.h"

typedef struct {
    // Pointer to the task (must be a 'void (void)' function)
	void ( * pTask)(void);
	// Delay (ticks) until the function will (next) be run
	uint32_t Delay;
	// Interval (ticks) between subsequent runs.
	uint32_t Period;
	// Incremented (by scheduler) when task is due to execute
	uint8_t RunMe;
	//This is a hint to solve the question below.
	uint32_t TaskID;
} sTask;


// MUST BE ADJUSTED FOR EACH NEW PROJECT
#define SCH_MAX_TASKS			40
#define	NO_TASK_ID				0

// Error for scheduler
#define ERROR_SCH_TOO_MANY_TASKS							41
#define ERROR_SCH_WAITING_FOR_SLAVE_TO_ACK					42
#define ERROR_SCH_WAITING_FOR_START_COMMAND_FROM_MASTER		43
#define ERROR_SCH_ONE_OR_MORE_SLAVES_DID_NOT_START			44
#define ERROR_SCH_LOST_SLAVE								45
#define ERROR_SCH_CAN_BUS_ERROR								46
#define ERROR_I2C_WRITE_BYTE_AT24C64						47
#define ERROR_SCH_CANNOT_DELETE_TASK  						48

//Return for dcheduler
#define RETURN_ERROR 			51
#define RETURN_NORMAL 			52

//Error variable
unsigned char Error_code_G;


//Scheduler function
void SCH_Init(void);
unsigned char SCH_Add_Task(void (* pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
unsigned char SCH_Delete_Task(int TASK_INDEX);


//Processing function with 5 color led.
void LED_RED_ON();
void LED_YELLOW_ON();
void LED_GREEN_ON();
void LED_BLUE_ON();
void LED_WHITE_ON();

#endif /* INC_SCH_H_ */
