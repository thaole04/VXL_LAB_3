/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
extern int pre_timer;
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
#define BUTTON0_Pin GPIO_PIN_13
#define BUTTON0_GPIO_Port GPIOC
#define BUTTON1_Pin GPIO_PIN_14
#define BUTTON1_GPIO_Port GPIOC
#define BUTTON2_Pin GPIO_PIN_15
#define BUTTON2_GPIO_Port GPIOC
#define LED_RED_X_Pin GPIO_PIN_1
#define LED_RED_X_GPIO_Port GPIOA
#define LED_AMBER_X_Pin GPIO_PIN_2
#define LED_AMBER_X_GPIO_Port GPIOA
#define LED_GREEN_X_Pin GPIO_PIN_3
#define LED_GREEN_X_GPIO_Port GPIOA
#define LED_RED_Y_Pin GPIO_PIN_4
#define LED_RED_Y_GPIO_Port GPIOA
#define LED_AMBER_Y_Pin GPIO_PIN_5
#define LED_AMBER_Y_GPIO_Port GPIOA
#define LED_GREEN_Y_Pin GPIO_PIN_6
#define LED_GREEN_Y_GPIO_Port GPIOA
#define LED_STATUS_Pin GPIO_PIN_7
#define LED_STATUS_GPIO_Port GPIOA
#define SEG0_A_Pin GPIO_PIN_0
#define SEG0_A_GPIO_Port GPIOB
#define SEG0_B_Pin GPIO_PIN_1
#define SEG0_B_GPIO_Port GPIOB
#define SEG0_C_Pin GPIO_PIN_2
#define SEG0_C_GPIO_Port GPIOB
#define SEG2_C_Pin GPIO_PIN_10
#define SEG2_C_GPIO_Port GPIOB
#define SEG2_D_Pin GPIO_PIN_11
#define SEG2_D_GPIO_Port GPIOB
#define SEG3_A_Pin GPIO_PIN_12
#define SEG3_A_GPIO_Port GPIOB
#define SEG3_B_Pin GPIO_PIN_13
#define SEG3_B_GPIO_Port GPIOB
#define SEG3_C_Pin GPIO_PIN_14
#define SEG3_C_GPIO_Port GPIOB
#define SEG3_D_Pin GPIO_PIN_15
#define SEG3_D_GPIO_Port GPIOB
#define SEG0_D_Pin GPIO_PIN_3
#define SEG0_D_GPIO_Port GPIOB
#define SEG1_A_Pin GPIO_PIN_4
#define SEG1_A_GPIO_Port GPIOB
#define SEG1_B_Pin GPIO_PIN_5
#define SEG1_B_GPIO_Port GPIOB
#define SEG1_C_Pin GPIO_PIN_6
#define SEG1_C_GPIO_Port GPIOB
#define SEG1_D_Pin GPIO_PIN_7
#define SEG1_D_GPIO_Port GPIOB
#define SEG2_A_Pin GPIO_PIN_8
#define SEG2_A_GPIO_Port GPIOB
#define SEG2_B_Pin GPIO_PIN_9
#define SEG2_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
