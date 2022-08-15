
/**
  ******************************************************************************
  * @file   main.c
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Source file of GPIO LL Driver.
  * Created on: 15 juil. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#include "../Inc/Gpio.h"

int main()
{
	  /* GPIO Ports Clock Enable */
	GPIOD_ClockEnable;
	GPIOA_ClockEnable;
	GPIO_Init(GPIOA,P0,INPUT);
	GPIO_Init(GPIOD,P13,OUTPUT);
	GPIO_Init(GPIOD,P15,OUTPUT);
	while(1)
	{
		if(GPIO_Read(GPIOA,P0)){
			GPIO_Write(GPIOD,P13,PIN_SET);
		}else{
			GPIO_Write(GPIOD,P13,PIN_RESET);
		}
	}
}






/*Uncomment The Next Section If U Want To Use GPIO EXTI Interrupt*/
/*
void EXTI_callback(uint32_t Pin)
{

	if (LL_EXTI_IsActiveFlag_0_31(Pin)!= RESET)
	{
		//Interrupt Actions Begin

		LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_13);
		LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_15);

        //Interrupt Actions End

		LL_EXTI_ClearFlag_0_31(Pin);
	}

}

void EXTI0_IRQHandler(void)
{
	EXTI_callback(P0);
}*/

