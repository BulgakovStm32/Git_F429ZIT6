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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

//Drivers
#include "i2c_ST.h"

//Application
#include "Blink.h"


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
#define I2C_PWR_EN_Pin GPIO_PIN_3
#define I2C_PWR_EN_GPIO_Port GPIOC
#define PWR_BUT_Pin GPIO_PIN_0
#define PWR_BUT_GPIO_Port GPIOA
#define LAN_nRST_Pin GPIO_PIN_3
#define LAN_nRST_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOA
#define LAN_PWR_EN_Pin GPIO_PIN_12
#define LAN_PWR_EN_GPIO_Port GPIOB
#define USB_PWR_EN_Pin GPIO_PIN_13
#define USB_PWR_EN_GPIO_Port GPIOB
#define USB_OverCurrent_Pin GPIO_PIN_8
#define USB_OverCurrent_GPIO_Port GPIOD
#define FAN1_EN_Pin GPIO_PIN_6
#define FAN1_EN_GPIO_Port GPIOD
#define FAN2_EN_Pin GPIO_PIN_7
#define FAN2_EN_GPIO_Port GPIOD
#define LIDAR_PWR_EN_Pin GPIO_PIN_9
#define LIDAR_PWR_EN_GPIO_Port GPIOB
#define JETSON_PWR_EN_Pin GPIO_PIN_1
#define JETSON_PWR_EN_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
