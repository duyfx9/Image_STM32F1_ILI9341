/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

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

/* USER CODE BEGIN Private defines */
#define T_IRQ_Pin 			GPIO_PIN_1
#define T_IRQ_GPIO_Port 	GPIOB
#define T_CLK_Pin 			GPIO_PIN_0
#define T_CLK_GPIO_Port 	GPIOB
#define T_DIN_Pin	 		GPIO_PIN_4
#define T_DIN_GPIO_Port 	GPIOC
#define T_DO_Pin 			GPIO_PIN_2
#define T_DO_GPIO_Port 		GPIOB
#define T_CS_Pin 			GPIO_PIN_5
#define T_CS_GPIO_Port 		GPIOC

#define LD4_Pin 			GPIO_PIN_12
#define LD4_GPIO_Port 		GPIOD
#define LD3_Pin 			GPIO_PIN_13
#define LD3_GPIO_Port 		GPIOD
#define LD5_Pin 			GPIO_PIN_14
#define LD5_GPIO_Port 		GPIOD
#define LD6_Pin 			GPIO_PIN_15
#define LD6_GPIO_Port 		GPIOD

#define RESET_Pin 			GPIO_PIN_0
#define RESET_GPIO_Port 	GPIOA
#define DC_Pin	 			GPIO_PIN_1
#define DC_GPIO_Port 		GPIOA
#define CS_Pin 				GPIO_PIN_2
#define CS_GPIO_Port 		GPIOA

#define READ_X 				0xD0
#define READ_Y 				0x90
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
