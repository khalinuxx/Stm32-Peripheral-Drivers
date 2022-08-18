
/**
  ******************************************************************************
  * @file    Gpio.h
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Source file of GPIO LL Driver.
  * Created on: 15 juil. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  ******************************************************************************
  */

#ifndef GPIO_H_
#define GPIO_H_

/* Define to prevent recursive inclusion -------------------------------------*/
#include"stm32f4xx_ll_bus.h"
#include"stm32f4xx_ll_gpio.h"
#include"stm32f4xx_ll_exti.h"
#include"stm32f4xx_ll_system.h"

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
/*--------------------------------GPIO Ports Clock Enabling Defines -------------------------*/
/* @Note This Defines was set specifically for the STM32f4 Board for other boards open the DataSheet and check Functional overview
 *
 */
#define GPIOA_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA)
#define GPIOB_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOB)
#define GPIOC_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOC)
#define GPIOD_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD)
#define GPIOE_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOE)
#define GPIOF_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOF)
#define GPIOG_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOG)
#define GPIOH_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOH)
#define GPIOI_ClockEnable LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOI)

/*--------------------------------GPIO Ports Clock Disabling Defines -------------------------*/
/* @Note This Defines was set specifically for the STM32f4 Board for other boards open the DataSheet and check Functional overview
 *
 */
#define GPIOA_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOA)
#define GPIOB_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOB)
#define GPIOC_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOC)
#define GPIOD_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOD)
#define GPIOE_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOE)
#define GPIOF_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOF)
#define GPIOG_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOG)
#define GPIOH_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOH)
#define GPIOI_ClockDisable LL_AHB1_GRP1_DisableClock(LL_AHB1_GRP1_PERIPH_GPIOI)


/**
  * @brief  GPIO Bit SET and Bit RESET enumeration
  */
typedef enum
{
  PIN_RESET = 0,
  PIN_SET = 1
}ll_pinstate_t;





/*Functions Prototypes*/
/* Don't forget to Enable the peripheral Clock before the Next Function */
void GPIO_Init(GPIO_TypeDef *GPIOx,  uint32_t Pin,uint32_t Mode);
void GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin,ll_pinstate_t PinState);
ll_pinstate_t GPIO_Read(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin);
void EXTI_Line_Init(uint32_t Port,uint32_t Pin,uint32_t priority);

#endif /* GPIO_H_ */
