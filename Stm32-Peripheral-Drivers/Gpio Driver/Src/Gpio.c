
/**
  ******************************************************************************
  * @file    Gpio.c
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Source file of GPIO LL Driver.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#include"stm32f4xx_ll_gpio.h"

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







/**
  * @brief  GPIO Bit SET and Bit RESET enumeration
  */
typedef enum
{
  PIN_RESET = 0,
  PIN_SET
}LL_PinState;

/**
  * @brief  Initializes the GPIOx peripheral according to the specified parameters in the LL_GPIO_Init.
  * @param  GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or
  *                      x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
  * @param  CLOCK_Periph  This parameter can be a combination of the following values:
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOA
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOB
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOC
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOD (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOE (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOF (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOG (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOH (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOI (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOJ (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_GPIOK (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_CRC
  *         @arg @ref LL_AHB1_GRP1_PERIPH_BKPSRAM (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_CCMDATARAM (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_DMA1
  *         @arg @ref LL_AHB1_GRP1_PERIPH_DMA2
  *         @arg @ref LL_AHB1_GRP1_PERIPH_RNG (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_DMA2D (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_ETHMAC (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_ETHMACTX (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_ETHMACRX (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_ETHMACPTP (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_OTGHS (*)
  *         @arg @ref LL_AHB1_GRP1_PERIPH_OTGHSULPI (*)
  *
  *         (*) value not defined in all devices.
  *         the configuration information for the specified GPIO peripheral.
  * @param  GPIO_Pin specifies the port bit to be written.
  *          This parameter can be one of Px where x can be (0..15 or all).
  * @param  OutputType This parameter can be one of the following values:
  *         @arg @ref LL_GPIO_OUTPUT_PUSHPULL
  *         @arg @ref LL_GPIO_OUTPUT_OPENDRAIN
  * @param  Speed This parameter can be one of the following values:
  *         @arg @ref LL_GPIO_SPEED_FREQ_LOW
  *         @arg @ref LL_GPIO_SPEED_FREQ_MEDIUM
  *         @arg @ref LL_GPIO_SPEED_FREQ_HIGH
  *         @arg @ref LL_GPIO_SPEED_FREQ_VERY_HIGH
  * @param  Pull This parameter can be one of the following values:
  *         @arg @ref LL_GPIO_PULL_NO
  *         @arg @ref LL_GPIO_PULL_UP
  *         @arg @ref LL_GPIO_PULL_DOWN
  * @retval None
  */
void GPIO_Init(GPIO_TypeDef  *GPIOx, LL_GPIO_InitTypeDef *GPIO_Init)
{

	  LL_GPIO_SetPinPull (GPIOx,GPIO_Init->Pin , GPIO_Init->Pull); /* Configure gpio pull-up or pull-down for a dedicated pin on a dedicated port. */
	  //LL_GPIO_SetPinOutputType (GPIOx, GPIO_Init->Pin, GPIO_Init->Mode); /* Configure gpio output type for several pins on dedicated port. */
	  LL_GPIO_SetPinMode(GPIOx, GPIO_Init->Pin, GPIO_Init->Mode);
	  LL_GPIO_SetPinSpeed (GPIOx, GPIO_Init->Pin, GPIO_Init->Speed);	  /* Configure gpio speed for a dedicated pin on dedicated port. */

}




  /**
    * @brief  Sets or clears the selected data port bit.
    *
    * @note   This function use the LL pin Set/Reset functions to set or clear the selected pin
    *
    * @param  GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or
    *                      x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
    * @param  GPIO_Pin specifies the port bit to be written.
    *          This parameter can be one of Px where x can be (0..15 or all).
    * @param  PinState specifies the value to be written to the selected bit.
    *          This parameter can be one of the LL_GPIO_PinState enum values:
    *            @arg PIN_RESET: to clear the port pin
    *            @arg PIN_SET: to set the port pin
    * @retval None
    */
 void LL_GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin,LL_PinState PinState)
 {
	 if(PinState == PIN_RESET)
	 {
      LL_GPIO_ResetOutputPin (GPIOx, GPIO_Pin); /* Reset the port pin */
	 }
	 else
	 {
		 LL_GPIO_SetOutputPin (GPIOx, GPIO_Pin); /* Set the port pin */
	 }

 }



 /**
   * @brief  Reads the specified input port pin.
   * @param  GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or
   *                      x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
   * @param  GPIO_Pin specifies the port bit to read.
   *         This parameter can be Px where x can be (0..15 or all).
   * @retval The input port pin value.
   */
 int LL_GPIO_Read(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin){

		if(LL_GPIO_IsInputPinSet(GPIOx,GPIO_Pin))
		{
		   return 1;
		}
		else
		{
			return 0;
		}

 }
