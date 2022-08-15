
/**
  ******************************************************************************
  * @file    WDG.h
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   header file of WhatchDoG LL Driver.
  * Created on: 10 Aug. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#include"WDG.h"
#include"stm32f4xx_ll_utils.h"
#include"stm32f4xx_ll_rcc.h"
#include"stm32f4xx_ll_gpio.h"
void Check_restart_source(void);

int main(void)
{
	LL_RCC_ClocksTypeDef RCC_Clock={0};
	LL_RCC_GetSystemClocksFreq(&RCC_Clock);



	LL_Init1msTick(RCC_Clock.SYSCLK_Frequency);
	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD);
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_15,LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_13,LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_14,LL_GPIO_MODE_OUTPUT);

	IWDG_Init(IWDG,LL_IWDG_PRESCALER_64,499);//---[0     1000]-------
	Check_restart_source();
	//WWDG_Init(LL_WWDG_PRESCALER_4,83, 70);//---[13    20]---------

   LL_GPIO_SetOutputPin (GPIOD, LL_GPIO_PIN_15);

	while(1)
	{

		LL_mDelay(1100);
		IWDG_Refresh();
		//WWDG_Refresh(83);

	}

}


void Check_restart_source(void)
{
	if(LL_RCC_IsActiveFlag_IWDGRST())
	{
		LL_RCC_ClearResetFlags();

		LL_GPIO_SetOutputPin (GPIOD, LL_GPIO_PIN_13);
		//if the restart was from IWDG the orange led PD13 will Set

	}
	if(LL_RCC_IsActiveFlag_WWDGRST())
	{
		LL_RCC_ClearResetFlags();

		LL_GPIO_SetOutputPin (GPIOD, LL_GPIO_PIN_14);
		//if the restart was from WWDG the Red led PD14 will Set
	}

}


