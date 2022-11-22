/*
 * sch.c
 *
 *  Created on: Nov 21, 2022
 *      Author: ADMIN
 */
#include "sch.h"
#include "stdint.h"


sTask SCH_tasks_G[SCH_MAX_TASKS];

//SCH_Init

void Timer_init(){

}

void  Watchdog_init(){

}


void SCH_Init(void) {
    unsigned char i;
    for (i = 0; i < SCH_MAX_TASKS; i++) {
        SCH_Delete_Task(i);
    }
    // Reset the global error variable
    // - SCH_Delete_Task() will generate an error code,
    // (because the task array is empty)
    Error_code_G = 0;
    Timer_init();
    Watchdog_init();
}


//SCH_Add_Task

unsigned char SCH_Add_Task(void (* pFunction)(), unsigned int DELAY, unsigned int PERIOD)
{
    unsigned char Index = 0;
    // First find a gap in the array (if there is one)
    while ((SCH_tasks_G[Index].pTask != 0) && (Index < SCH_MAX_TASKS))
    {
    	//Notification with user: Program is adding function to scheduler.
    	Index++;
    }
    // Have we reached the end of the list?
    if (Index == SCH_MAX_TASKS)
    {
        // Task list is full
        // Set the global error variable
        Error_code_G = ERROR_SCH_TOO_MANY_TASKS;
        // Also return an error code
        return SCH_MAX_TASKS;
    }
    // If we're here, there is a space in the task array
    SCH_tasks_G[Index].pTask = pFunction;
    SCH_tasks_G[Index].Delay = DELAY;
    SCH_tasks_G[Index].Period = PERIOD;
    SCH_tasks_G[Index].RunMe = 0;
    // return position of task (to allow later deletion)
    return Index;
}

//SCH_Update

void SCH_Update(void){
    unsigned char Index;
    // NOTE: calculations are in *TICKS* (not milliseconds)
    for (Index = 0; Index < SCH_MAX_TASKS; Index++) {
        // Check if there is a task at this location
        if (SCH_tasks_G[Index].pTask){
            if (SCH_tasks_G[Index].Delay == 0) {
                // The task is due to run
                // Inc. the 'RunMe' flag
                SCH_tasks_G[Index].RunMe += 1;
                if (SCH_tasks_G[Index].Period) {
                    // Schedule periodic tasks to run again
                    SCH_tasks_G[Index].Delay = SCH_tasks_G[Index].Period;
                }
            } else {
                // Not yet ready to run: just decrement the delay
                SCH_tasks_G[Index].Delay -= 1;
            }
        }
    }
}


//SCH_Dispatch_Tasks


//void  SCH_Report_Status(){
//
//}
//SCH_Go_To_Sleep(){
//
//}
void SCH_Dispatch_Tasks(void)
{
    unsigned char Index;
    // Dispatches (runs) the next task (if one is ready)
    for (Index = 0; Index < SCH_MAX_TASKS; Index++){
        if (SCH_tasks_G[Index].RunMe > 0) {
            (*SCH_tasks_G[Index].pTask)(); // Run the task
            SCH_tasks_G[Index].RunMe -= 1; // Reset / reduce RunMe flag
            // Periodic tasks will automatically run again
            // - if this is a 'one shot' task, remove it from the array
            if (SCH_tasks_G[Index].Period == 0)
            {
                SCH_Delete_Task(Index);
            }
        }
    }
    // Report system status
//    SCH_Report_Status();
    // The scheduler enters idle mode at this point
//    SCH_Go_To_Sleep();
}

//SCH_Delete_Task


unsigned char SCH_Delete_Task(int TASK_INDEX){
    unsigned char Return_code;
    if (SCH_tasks_G[TASK_INDEX].pTask == 0) {
        // No task at this location...
        //
        // Set the global error variable
        Error_code_G = ERROR_SCH_CANNOT_DELETE_TASK;

        // ...also return an error code
        Return_code = RETURN_ERROR;
    } else {
        Return_code = RETURN_NORMAL;
    }
    SCH_tasks_G[TASK_INDEX].pTask = 0x0000;
    SCH_tasks_G[TASK_INDEX].Delay = 0;
    SCH_tasks_G[TASK_INDEX].Period = 0;
    SCH_tasks_G[TASK_INDEX].RunMe = 0;
    return Return_code; // return status
}


void LED_RED_ON(){
	HAL_GPIO_TogglePin(LED_0_5s_GPIO_Port, LED_0_5s_Pin);
}
void LED_YELLOW_ON(){
	HAL_GPIO_TogglePin(LED_1_0s_GPIO_Port, LED_1_0s_Pin);
}
void LED_GREEN_ON(){
	HAL_GPIO_TogglePin(LED_1_5s_GPIO_Port, LED_1_5s_Pin);
}
void LED_BLUE_ON(){
	HAL_GPIO_TogglePin(LED_2_0s_GPIO_Port, LED_2_0s_Pin);
}
void LED_WHITE_ON(){
	HAL_GPIO_TogglePin(LED_2_5s_GPIO_Port, LED_2_5s_Pin);
}

