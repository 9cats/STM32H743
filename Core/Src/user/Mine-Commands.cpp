/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os2.h"

/* FreeRTOS+CLI includes. */
#include "FreeRTOS_CLI.h"

/* Standard includes. */
#include "string.h"
#include "iostream"
#include "sstream"
#include "iomanip"
using namespace std;

/* User includes */
#include "myClass.hpp"
#include "core_learn.h"

/* RTOS RunTime Counter; */
extern uint32_t RTOS_RunTimeCounter;

/* Define the Carriage-Return Line-Feed */
#define CRLF "\r\n"
#define TAB  "    "

const char * evalState(eTaskState state)
{
	switch(state){
		case eRunning  :return "X";
		case eReady    :return "R";
		case eBlocked  :return "B";
		case eSuspended:return "S";
		case eDeleted  :return "D";
		case eInvalid  :return "I";
		default: return "?";
	}
}

BaseType_t Command_Info( char *WriteBuffer, size_t len, const char *CommandString );
static const CLI_Command_Definition_t xInfo =
{
	"info",
	"\r\ninfo: show sys info\r\n",
	Command_Info, /* The function to run. */
	0 /* No parameters are expected. */
};
BaseType_t Command_Info( char *WriteBuffer, size_t len, const char *CommandString )
{
	stringstream sstr;

	/* Remove compile time warnings about unused parameters */
	( void ) CommandString;
	( void ) len;
	configASSERT( WriteBuffer );

	/* Generate a table of task stats. */
	osVersion_t osv;
	osStatus_t  status;

	/* Get the osKernel Info */
	status = osKernelGetInfo(&osv, WriteBuffer, configCOMMAND_INT_MAX_OUTPUT_SIZE);
	/* Console the osKerner Info */
	if(status == osOK) {

		/* Malloc The Table To Console */
		uint32_t TaskNumber = uxTaskGetNumberOfTasks();
		uint32_t TotalRunTime;
		TaskStatus_t * TaskStatus  = new TaskStatus_t[TaskNumber];

		/* Get The Total RTOS Run Time */
		uxTaskGetSystemState(TaskStatus, TaskNumber, &TotalRunTime);
		/* Console Header */
		sstr << TAB << "+---------------+--+--+---+-------+--------------+" << CRLF
				 << TAB << "|   task name   |ID|PL| S | stack |  run state   |" << CRLF
				 << TAB << "+---------------+--+--+---+-------+--------------+" << CRLF;
		/* Console Body */
		for(uint32_t i=0; i<TaskNumber; i++){
			sstr << TAB;
			sstr << "|" << left  << setw(15) << TaskStatus[i].pcTaskName
					 << "|" << left  << setw(2)  << TaskStatus[i].xTaskNumber
					 << "|" << left  << setw(2)  << TaskStatus[i].uxCurrentPriority
					 << "| "<< left  <<   evalState(TaskStatus[i].eCurrentState) << " "
					 << "| "<< left  << setw(6)  << TaskStatus[i].usStackHighWaterMark
					 << "|" << left  << setw(10) << TaskStatus[i].ulRunTimeCounter     << "-" << right << setw(2) << TaskStatus[i].ulRunTimeCounter  * 100 / TotalRunTime << "%"
					 << "|" << CRLF;
		}
		/* Console Footer */
		sstr << TAB << "+---------------+--+--+---+-------+--------------+" << CRLF;

		/* Console System Info */
		sstr << TAB << " * System current heap:" << xPortGetFreeHeapSize() << CRLF
				 << TAB << " * System minimum heap:" << xPortGetMinimumEverFreeHeapSize() << CRLF;

		/* Output To Arr */
		sstr >> WriteBuffer;

		/* free */
		delete []TaskStatus;
	}

	return pdFALSE;
}

void vRegisterMineCommands(void)
{
	FreeRTOS_CLIRegisterCommand( &xInfo );

}
