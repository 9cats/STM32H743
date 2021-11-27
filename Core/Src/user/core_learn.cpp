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

/* 相对时间 转 绝对时间 */
#define osAbsTime(time) osKernelGetTickCount() + time

osThreadId_t myTask1Handle;
const osThreadAttr_t myTask1_attributes = {
  .name = "myTask1",
  .stack_size = 1024,
  .priority = (osPriority_t) osPriorityBelowNormal1,
};

osThreadId_t myTask2Handle;
const osThreadAttr_t myTask2_attributes = {
  .name = "myTask2",
  .stack_size = 1024,
  .priority = (osPriority_t) osPriorityBelowNormal1,
};

void MyTask1(void * argument){
	uint32_t count = 0;
	for(;;)
	{
//		osThreadJoin(myTask1Handle);
//		cout << "[Task1]count:" << count++ << endl;
		osDelayUntil(osAbsTime(1000));
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
	myTask1Handle = osThreadNew(MyTask1, NULL, &myTask1_attributes);

	//2.任务的删除
	myTask2Handle = osThreadNew(MyTask2, NULL, &myTask2_attributes);
}
