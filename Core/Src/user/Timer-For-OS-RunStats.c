#include "tim.h"

/* Record RTOS RunTimeCounter */
uint32_t RTOS_RunTimeCounter;

/* The Hareware Timer ISR */
void TIM6_DAC_IRQHandler(void)
{
	RTOS_RunTimeCounter ++;
	__HAL_TIM_CLEAR_IT(&htim6, TIM_IT_UPDATE);
}

/* RTOS Configure Timer For Runtime Stats Function */
void configureTimerForRunTimeStats(void)
{
  RTOS_RunTimeCounter = 0;
  HAL_TIM_Base_Start_IT(&htim6);
}

/* RTOS Get Run Time Counter Value From ISR Function */
uint32_t getRunTimeCounterValue(void) {
  return RTOS_RunTimeCounter;
}

