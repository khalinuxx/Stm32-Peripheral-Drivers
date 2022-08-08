
/**
  ******************************************************************************
  * @file   main.c
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
#include"Gpio.h"



#define PIN1 P12
#define PIN2 P13
#define PIN3 P14
#define PIN4 P15

int main()
{

	GPIO_Init_LL();





	while(1)
	{
		if(LL_GPIO_Read(GPIOA,P0)){

		 LL_GPIO_Write(GPIOD,PIN1,PIN_SET);
		 LL_GPIO_Write(GPIOD,PIN2,PIN_SET);
		 LL_GPIO_Write(GPIOD,PIN3,PIN_SET);
		 LL_GPIO_Write(GPIOD,PIN4,PIN_SET);


		}else{

		 LL_GPIO_Write(GPIOD,PIN1,PIN_RESET);
		 LL_GPIO_Write(GPIOD,PIN2,PIN_RESET);
		 LL_GPIO_Write(GPIOD,PIN3,PIN_RESET);
		 LL_GPIO_Write(GPIOD,PIN4,PIN_RESET);


		}

	}

}

void GPIO_Init_LL(void)
{
  LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */

  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD);
  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA);

  /*Configure GPIO pin Output Level */

  LL_GPIO_Write(GPIOA,P0,PIN_RESET);
   /*Configure GPIO pin : PA0 */

  GPIO_InitStruct.Pin = P0;
  GPIO_InitStruct.Mode = INPUT;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO ;
  GPIO_Init(GPIOA, &GPIO_InitStruct);

 LL_GPIO_Write(GPIOD,PIN1,PIN_RESET);
  /*Configure GPIO pin : PD12 */
  GPIO_InitStruct.Pin = PIN1  ;
  GPIO_InitStruct.Mode =OUTPUT ;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO  ;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_Init(GPIOD, &GPIO_InitStruct);

  LL_GPIO_Write(GPIOD,PIN2,PIN_RESET);
   /*Configure GPIO pin : PD13 */
   GPIO_InitStruct.Pin = PIN2  ;
   GPIO_InitStruct.Mode =OUTPUT ;
   GPIO_InitStruct.Pull = LL_GPIO_PULL_NO  ;
   GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
   GPIO_Init(GPIOD, &GPIO_InitStruct);


   LL_GPIO_Write(GPIOD,PIN3,PIN_RESET);
    /*Configure GPIO pin : PD14 */
    GPIO_InitStruct.Pin = PIN3  ;
    GPIO_InitStruct.Mode =OUTPUT ;
    GPIO_InitStruct.Pull = LL_GPIO_PULL_NO  ;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
    GPIO_Init(GPIOD, &GPIO_InitStruct);


    LL_GPIO_Write(GPIOD,PIN4,PIN_RESET);
     /*Configure GPIO pin : PD15 */
     GPIO_InitStruct.Pin = PIN4  ;
     GPIO_InitStruct.Mode =OUTPUT ;
     GPIO_InitStruct.Pull = LL_GPIO_PULL_NO  ;
     GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
     GPIO_Init(GPIOD, &GPIO_InitStruct);

}
