/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define W25QXX_IO2_Pin GPIO_PIN_2
#define W25QXX_IO2_GPIO_Port GPIOE
#define LCD_G0_Pin GPIO_PIN_5
#define LCD_G0_GPIO_Port GPIOE
#define LCD_G1_Pin GPIO_PIN_6
#define LCD_G1_GPIO_Port GPIOE
#define TOUCH_SDA_Pin GPIO_PIN_8
#define TOUCH_SDA_GPIO_Port GPIOI
#define TOUCH_SCLK_Pin GPIO_PIN_11
#define TOUCH_SCLK_GPIO_Port GPIOI
#define LCD_R1_Pin GPIO_PIN_2
#define LCD_R1_GPIO_Port GPIOA
#define TOUCH_RST_Pin GPIO_PIN_4
#define TOUCH_RST_GPIO_Port GPIOH
#define W25QXX_CLK_Pin GPIO_PIN_2
#define W25QXX_CLK_GPIO_Port GPIOB
#define LCD_BL_Pin GPIO_PIN_6
#define LCD_BL_GPIO_Port GPIOH
#define LED_Pin GPIO_PIN_7
#define LED_GPIO_Port GPIOH
#define LCD_R2_Pin GPIO_PIN_8
#define LCD_R2_GPIO_Port GPIOH
#define LCD_R3_Pin GPIO_PIN_9
#define LCD_R3_GPIO_Port GPIOH
#define LCD_R4_Pin GPIO_PIN_10
#define LCD_R4_GPIO_Port GPIOH
#define LCD_R5_Pin GPIO_PIN_11
#define LCD_R5_GPIO_Port GPIOH
#define LCD_R6_Pin GPIO_PIN_12
#define LCD_R6_GPIO_Port GPIOH
#define W25QXX_IO0_Pin GPIO_PIN_11
#define W25QXX_IO0_GPIO_Port GPIOD
#define W25QXX_IO1_Pin GPIO_PIN_12
#define W25QXX_IO1_GPIO_Port GPIOD
#define W25QXX_IO3_Pin GPIO_PIN_13
#define W25QXX_IO3_GPIO_Port GPIOD
#define TOUCH_INT_Pin GPIO_PIN_3
#define TOUCH_INT_GPIO_Port GPIOG
#define LCD_R7_Pin GPIO_PIN_6
#define LCD_R7_GPIO_Port GPIOG
#define LCD_B3_Pin GPIO_PIN_8
#define LCD_B3_GPIO_Port GPIOA
#define LCD_G2_Pin GPIO_PIN_13
#define LCD_G2_GPIO_Port GPIOH
#define LCD_G3_Pin GPIO_PIN_14
#define LCD_G3_GPIO_Port GPIOH
#define LCD_G4_Pin GPIO_PIN_15
#define LCD_G4_GPIO_Port GPIOH
#define LCD_G5_Pin GPIO_PIN_0
#define LCD_G5_GPIO_Port GPIOI
#define LCD_G6_Pin GPIO_PIN_1
#define LCD_G6_GPIO_Port GPIOI
#define LCD_G7_Pin GPIO_PIN_2
#define LCD_G7_GPIO_Port GPIOI
#define SDMMC_HPD_Pin GPIO_PIN_15
#define SDMMC_HPD_GPIO_Port GPIOA
#define LCD_B2_Pin GPIO_PIN_6
#define LCD_B2_GPIO_Port GPIOD
#define LCD_B1_Pin GPIO_PIN_12
#define LCD_B1_GPIO_Port GPIOG
#define LCD_R0_Pin GPIO_PIN_13
#define LCD_R0_GPIO_Port GPIOG
#define LCD_B0_Pin GPIO_PIN_14
#define LCD_B0_GPIO_Port GPIOG
#define W25QXX_CS_Pin GPIO_PIN_6
#define W25QXX_CS_GPIO_Port GPIOB
#define LCD_B4_Pin GPIO_PIN_4
#define LCD_B4_GPIO_Port GPIOI
#define LCD_B5_Pin GPIO_PIN_5
#define LCD_B5_GPIO_Port GPIOI
#define LCD_B6_Pin GPIO_PIN_6
#define LCD_B6_GPIO_Port GPIOI
#define LCD_B7_Pin GPIO_PIN_7
#define LCD_B7_GPIO_Port GPIOI
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
