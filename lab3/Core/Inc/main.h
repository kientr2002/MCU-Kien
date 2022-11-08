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
#define EN0_Pin GPIO_PIN_1
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_2
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_3
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_4
#define EN3_GPIO_Port GPIOA
#define button1_Pin GPIO_PIN_5
#define button1_GPIO_Port GPIOA
#define button2_Pin GPIO_PIN_6
#define button2_GPIO_Port GPIOA
#define button3_Pin GPIO_PIN_7
#define button3_GPIO_Port GPIOA
#define LED7_0_Pin GPIO_PIN_0
#define LED7_0_GPIO_Port GPIOB
#define LED7_1_Pin GPIO_PIN_1
#define LED7_1_GPIO_Port GPIOB
#define LED7_2_Pin GPIO_PIN_2
#define LED7_2_GPIO_Port GPIOB
#define MODE_LED7_2_Pin GPIO_PIN_10
#define MODE_LED7_2_GPIO_Port GPIOB
#define MODE_LED7_3_Pin GPIO_PIN_11
#define MODE_LED7_3_GPIO_Port GPIOB
#define MODE_LED7_4_Pin GPIO_PIN_12
#define MODE_LED7_4_GPIO_Port GPIOB
#define MODE_LED7_5_Pin GPIO_PIN_13
#define MODE_LED7_5_GPIO_Port GPIOB
#define MODE_LED7_6_Pin GPIO_PIN_14
#define MODE_LED7_6_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_15
#define LED_RED_GPIO_Port GPIOB
#define red_horizontal_Pin GPIO_PIN_8
#define red_horizontal_GPIO_Port GPIOA
#define yellow_horizontal_Pin GPIO_PIN_9
#define yellow_horizontal_GPIO_Port GPIOA
#define green_horizontal_Pin GPIO_PIN_10
#define green_horizontal_GPIO_Port GPIOA
#define red_vertical_Pin GPIO_PIN_11
#define red_vertical_GPIO_Port GPIOA
#define yellow_vertical_Pin GPIO_PIN_12
#define yellow_vertical_GPIO_Port GPIOA
#define green_vertical_Pin GPIO_PIN_13
#define green_vertical_GPIO_Port GPIOA
#define VERTICAL_6_Pin GPIO_PIN_14
#define VERTICAL_6_GPIO_Port GPIOA
#define LED7_3_Pin GPIO_PIN_3
#define LED7_3_GPIO_Port GPIOB
#define LED7_4_Pin GPIO_PIN_4
#define LED7_4_GPIO_Port GPIOB
#define LED7_5_Pin GPIO_PIN_5
#define LED7_5_GPIO_Port GPIOB
#define LED7_6_Pin GPIO_PIN_6
#define LED7_6_GPIO_Port GPIOB
#define MODE_LED7_0_Pin GPIO_PIN_8
#define MODE_LED7_0_GPIO_Port GPIOB
#define MODE_LED7_1_Pin GPIO_PIN_9
#define MODE_LED7_1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
