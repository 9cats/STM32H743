#include "usart.h"
extern "C"{
  #include "FreeRTOS.h"
}

//stdio 重定向
extern "C" int _write(int file, char *ptr, int len)
{
	int count = len;
	if (file == 1) { // stdout
		while (count > 0) {
			if(*ptr == '\n')
				HAL_UART_Transmit(&huart1, (uint8_t *)"\r\n", 2, 0xFFFFFFFF);
			else
				HAL_UART_Transmit(&huart1, (uint8_t *)ptr   , 1, 0xFFFFFFFF);
			++ptr;--count;
		}
	}
	return len;
}

//重载new和delete 使用freertos内存分配
void * operator new(size_t size)
{
	return pvPortMalloc(size);
}

void operator delete (void * pointer)
{
	vPortFree(pointer);
}

