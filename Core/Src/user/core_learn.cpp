extern "C"{
  #include "FreeRTOS.h"
  #include "task.h"
  #include "main.h"
  #include "cmsis_os2.h"
  #include "stdio.h"
}
#include "core_learn.h"
#include "iostream"
#include "sstream"
#include "vector"
using namespace std;

#include "touchgfx_com.hpp"


GFX_Message_AD msg_ad = {
	.sta      = GFX_Message_AD::IDLE,
	.ad_value = 0
};

void MyTask1(void * argument){
	uint32_t count = 0;
	uint32_t currentTime;
	for(;;)
	{
		currentTime = osKernelGetTickCount();

		msg_ad.setValue(count++);

		osDelayUntil(currentTime + 100);
	}
}

void MyTask2(void * argument){

	osDelay(1000);
//	cout << "[Task2]start" << endl;
	osDelay(1000);
//	cout << "[Task2]end" << endl;
	osThreadExit();
}

void mytask_creat(void)
{
	//	vector<int> arr;
	//	arr.push_back(1);

	//1.任务创建
	const osThreadAttr_t myTask1_attributes = {
	  .name = "myTask1",
	  .stack_size = 1024,
	  .priority = (osPriority_t) osPriorityBelowNormal1,
	};
	osThreadNew(MyTask1, NULL, &myTask1_attributes);

	//2.任务的删除
	const osThreadAttr_t myTask2_attributes = {
	  .name = "myTask2",
	  .stack_size = 1024,
	  .priority = (osPriority_t) osPriorityBelowNormal1,
	};
	osThreadNew(MyTask2, NULL, &myTask2_attributes);
}
