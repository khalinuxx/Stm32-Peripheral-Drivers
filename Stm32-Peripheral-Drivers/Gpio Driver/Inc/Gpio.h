
/**
  ******************************************************************************
  * @file    Gpio.h
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Header file of GPIO LL Driver.
  *  Created on: 15 juil. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services.
  * All rights reserved.
  *
  * This software is placed in the public domain and may be used for any purpose
  * You can find this code on https://github.com/mouadhgit/Stm32-Peripheral-Drivers
  ******************************************************************************
  */

#ifndef GPIO_H_
#define GPIO_H_

/* Define to prevent recursive inclusion -------------------------------------*/
#include"stm32f4xx_ll_bus.h"
#include"stm32f4xx_ll_gpio.h"



/** @defgroup Px PIN
  * @{
  */

#define P0  LL_GPIO_PIN_0 /*!< Select pin 0 */
#define P1  LL_GPIO_PIN_1 /*!< Select pin 1 */
#define P2  LL_GPIO_PIN_2 /*!< Select pin 2 */
#define P3  LL_GPIO_PIN_3 /*!< Select pin 3 */
#define P4  LL_GPIO_PIN_4 /*!< Select pin 4 */
#define P5  LL_GPIO_PIN_5 /*!< Select pin 5 */
#define P6  LL_GPIO_PIN_6 /*!< Select pin 6 */
#define P7  LL_GPIO_PIN_7 /*!< Select pin 7 */
#define P8  LL_GPIO_PIN_8 /*!< Select pin 8 */
#define P9  LL_GPIO_PIN_9 /*!< Select pin 9 */
#define P10  LL_GPIO_PIN_10 /*!< Select pin 10 */
#define P11  LL_GPIO_PIN_11 /*!< Select pin 11 */
#define P12  LL_GPIO_PIN_12 /*!< Select pin 12 */
#define P13  LL_GPIO_PIN_13 /*!< Select pin 13 */
#define P14  LL_GPIO_PIN_14 /*!< Select pin 14 */
#define P15  LL_GPIO_PIN_15 /*!< Select pin 15 */
#define P_ALL  LL_GPIO_PIN_ALL /*!< Select all pin */

#define OUTPUT LL_GPIO_MODE_OUTPUT
#define INPUT  LL_GPIO_MODE_INPUT

typedef enum
{
  PIN_RESET = 0,
  PIN_SET
}LL_PinState;



/**
  * @}
  */
/**
  * @brief GPIO Init structure definition
  */
typedef struct
{
  uint32_t Pin;       /*!< Specifies the GPIO pins to be configured.
                           This parameter can be any value of @ref GPIO_pins_define */

  uint32_t Mode;      /*!< Specifies the operating mode for the selected pins.
                           This parameter can be a value of @ref GPIO_mode_define */

  uint32_t Pull;      /*!< Specifies the Pull-up or Pull-Down activation for the selected pins.
                           This parameter can be a value of @ref GPIO_pull_define */

  uint32_t Speed;     /*!< Specifies the speed for the selected pins.
                           This parameter can be a value of @ref GPIO_speed_define */

  uint32_t Alternate;  /*!< Peripheral to be connected to the selected pins.
                            This parameter can be a value of @ref GPIO_Alternate_function_selection */
}LL_GPIO_InitTypeDef;



void GPIO_Init(GPIO_TypeDef  *GPIOx, LL_GPIO_InitTypeDef *GPIO_Init);
void LL_GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin,LL_PinState PinState);
int LL_GPIO_Read(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin);
void GPIO_Init_LL(void);
#endif /* GPIO_H_ */
