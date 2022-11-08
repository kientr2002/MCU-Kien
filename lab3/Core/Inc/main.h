/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#define ha1_Pin GPIO_PIN_0
#define ha1_GPIO_Port GPIOA
#define ha2_Pin GPIO_PIN_1
#define ha2_GPIO_Port GPIOA
#define ha3_Pin GPIO_PIN_2
#define ha3_GPIO_Port GPIOA
#define ha4_Pin GPIO_PIN_3
#define ha4_GPIO_Port GPIOA
#define hb1_Pin GPIO_PIN_4
#define hb1_GPIO_Port GPIOA
#define hb2_Pin GPIO_PIN_5
#define hb2_GPIO_Port GPIOA
#define hb3_Pin GPIO_PIN_6
#define hb3_GPIO_Port GPIOA
#define hb4_Pin GPIO_PIN_7
#define hb4_GPIO_Port GPIOA
#define button1_Pin GPIO_PIN_0
#define button1_GPIO_Port GPIOB
#define button2_Pin GPIO_PIN_1
#define button2_GPIO_Port GPIOB
#define button3_Pin GPIO_PIN_2
#define button3_GPIO_Port GPIOB
#define mode2_Pin GPIO_PIN_10
#define mode2_GPIO_Port GPIOB
#define mode3_Pin GPIO_PIN_11
#define mode3_GPIO_Port GPIOB
#define mode4_Pin GPIO_PIN_12
#define mode4_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_15
#define LED_RED_GPIO_Port GPIOB
#define va1_Pin GPIO_PIN_8
#define va1_GPIO_Port GPIOA
#define va2_Pin GPIO_PIN_9
#define va2_GPIO_Port GPIOA
#define va3_Pin GPIO_PIN_10
#define va3_GPIO_Port GPIOA
#define va4_Pin GPIO_PIN_11
#define va4_GPIO_Port GPIOA
#define vb1_Pin GPIO_PIN_12
#define vb1_GPIO_Port GPIOA
#define vb2_Pin GPIO_PIN_13
#define vb2_GPIO_Port GPIOA
#define vb3_Pin GPIO_PIN_14
#define vb3_GPIO_Port GPIOA
#define vb4_Pin GPIO_PIN_15
#define vb4_GPIO_Port GPIOA
#define red1_Pin GPIO_PIN_3
#define red1_GPIO_Port GPIOB
#define yellow1_Pin GPIO_PIN_4
#define yellow1_GPIO_Port GPIOB
#define green1_Pin GPIO_PIN_5
#define green1_GPIO_Port GPIOB
#define red2_Pin GPIO_PIN_6
#define red2_GPIO_Port GPIOB
#define yellow2_Pin GPIO_PIN_7
#define yellow2_GPIO_Port GPIOB
#define green2_Pin GPIO_PIN_8
#define green2_GPIO_Port GPIOB
#define mode1_Pin GPIO_PIN_9
#define mode1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
