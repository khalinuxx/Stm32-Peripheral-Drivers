
/**
  ******************************************************************************
  * @file    main.c
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   main file of Reading Values from Temp sensor using ADC Driver .
  * Created on: 1 Aug. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#include "../Inc/ADC.h"
#include"stm32f4xx_ll_system.h"



#define Avg_Slope .0025   // V/C
#define V25  0.76   // V
#define VSENSE 3.3/4096  // 12 bit res

uint32_t temp;
float val ;
int main()
{

    LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD);

    LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_12,LL_GPIO_MODE_OUTPUT);
    LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_13,LL_GPIO_MODE_OUTPUT);
    LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_14,LL_GPIO_MODE_OUTPUT);
    LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_15,LL_GPIO_MODE_OUTPUT);




	LL_AHB1_GRP1_EnableClock( LL_AHB1_GRP1_PERIPH_GPIOA);
	LL_GPIO_SetPinMode(GPIOA,LL_GPIO_PIN_0,LL_GPIO_MODE_INPUT);





	ADC1_EnableClock;// ADC Clock Enable
	ADC_Init(ADC1);// ADC Initializing
	ADC_REG_Init(ADC1);// ADC Regular Group Initializing
	ADC_Com_Init(ADC1);// ADC commun Parameters Initializing
	ADC_IRQ_Init(0);
    ADC_IType_Enable(ADC1,EOCS_IT);
	ADC_Channel_Init(ADC1,LL_ADC_REG_RANK_1,LL_ADC_CHANNEL_TEMPSENSOR);//ADC Channel Initializing
	LL_ADC_Enable(ADC1); //ADC Enabling

 	while(1)
	{
	if(LL_GPIO_IsInputPinSet(GPIOA,LL_GPIO_PIN_0))
	{
			LL_ADC_REG_StartConversionSWStart(ADC1);

	}
//temp=ADC_Read(ADC1);
		//val =  (((VSENSE*temp )-V25) / Avg_Slope) + 25;
		//for(int itr=0;itr<90000;itr++){}

	}
}










void ADC_IRQHandler(void)
{
	if(LL_ADC_IsEnabledIT_OVR(ADC1) && LL_ADC_IsActiveFlag_OVR(ADC1)!=0)
	{

		LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_12);

	}

	if(LL_ADC_IsEnabledIT_EOCS(ADC1) && LL_ADC_IsActiveFlag_EOCS(ADC1))
		{

		LL_ADC_ClearFlag_EOCS(ADC1);

		temp= LL_ADC_REG_ReadConversionData32(ADC1);

		LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_14);


	}

}



