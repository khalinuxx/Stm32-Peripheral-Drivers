
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

void GPIO_Init(GPIO_TypeDef *GPIOx,  uint32_t Pin,uint32_t Mode);
void EXTI_Line_Init(uint32_t Port,uint32_t InPin,uint32_t priority);
void GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t Pin,int PinState);

#define Avg_Slope .0025   // V/C
#define V25  0.76   // V
#define VSENSE 3.3/4096  // 12 bit res

uint32_t temp;
float val ;
int main()
{

    LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD);

    GPIO_Init(GPIOD,LL_GPIO_PIN_12,LL_GPIO_MODE_OUTPUT);
    GPIO_Init(GPIOD,LL_GPIO_PIN_13,LL_GPIO_MODE_OUTPUT);
    GPIO_Init(GPIOD,LL_GPIO_PIN_14,LL_GPIO_MODE_OUTPUT);
    GPIO_Init(GPIOD,LL_GPIO_PIN_15,LL_GPIO_MODE_OUTPUT);




	LL_AHB1_GRP1_EnableClock( LL_AHB1_GRP1_PERIPH_GPIOA);
	LL_GPIO_SetPinMode(GPIOA,LL_GPIO_PIN_0,LL_GPIO_MODE_INPUT);
	//EXTI_Line_Init(LL_SYSCFG_EXTI_PORTA,LL_GPIO_PIN_0,0);



	//ADC_GPIO_Init(GPIOA,LL_GPIO_PIN_1); //Channel PIN Initializing
	ADC1_EnableClock;// ADC Clock Enable
	ADC_Init(ADC1);// ADC Initializing
	ADC_REG_Init(ADC1);// ADC Regular Group Initializing
	ADC_Com_Init(ADC1);// ADC commun Parameters Initializing
	//ADC_IRQ_Init(0);
	ADC_Channel_Init(ADC1,LL_ADC_REG_RANK_1,LL_ADC_CHANNEL_TEMPSENSOR);//ADC Channel Initializing
	LL_ADC_Enable(ADC1); //ADC Enabling

 	while(1)
	{

		LL_ADC_REG_StartConversionSWStart(ADC1);

		temp=ADC_Read(ADC1);
		val =  (((VSENSE*temp )-V25) / Avg_Slope) + 25;
		for(int itr=0;itr<90000;itr++){}

	}
}





void GPIO_Init(GPIO_TypeDef *GPIOx,  uint32_t Pin,uint32_t Mode)
{
  LL_GPIO_InitTypeDef GPIO_InitStruct = {0};
if(Mode==LL_GPIO_MODE_OUTPUT)
{
  /*Configure GPIO pin Output Level */
  LL_GPIO_ResetOutputPin (GPIOx,Pin);
  GPIO_InitStruct.Mode = Mode;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
}
if(Mode==LL_GPIO_MODE_INPUT)
{		 /*Configure GPIO pin input Level */

			  GPIO_InitStruct.Mode = Mode;
}
GPIO_InitStruct.Pin = Pin;
GPIO_InitStruct.Pull = LL_GPIO_PULL_NO ;
LL_GPIO_Init(GPIOx, &GPIO_InitStruct);

}





/*
void EXTI_Line_Init(uint32_t Port,uint32_t InPin,uint32_t priority)
{


	 //LL_EXTI_LINE_0=LL_GPIO_PIN_0 ****
	 //     ........ = .........
	 //     .........................
	 // LL_EXTI_LINE_15=LL_GPIO_PIN_15


	LL_APB2_GRP1_EnableClock (LL_APB2_GRP1_PERIPH_SYSCFG);
	LL_SYSCFG_SetEXTISource(Port, LL_SYSCFG_EXTI_LINE0);
	LL_EXTI_EnableIT_0_31 (InPin);
	LL_EXTI_EnableFallingTrig_0_31(InPin);
	NVIC_EnableIRQ(EXTI0_IRQn);
	NVIC_SetPriority(EXTI0_IRQn,priority);
}

*/




void GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t Pin,int PinState)
{
	 if(PinState == 0)
	 {
     LL_GPIO_ResetOutputPin (GPIOx, Pin); /* Reset the port pin */
	 }
	 else
	 {
	  LL_GPIO_SetOutputPin (GPIOx, Pin); /* Set the port pin */
	 }
}

void EXTI0_IRQHandler(void)
{
 	if (LL_EXTI_IsActiveFlag_0_31(LL_GPIO_PIN_0)!= RESET)
 	{
 		//Interrupt Actions Begin

 		LL_ADC_REG_StartConversionSWStart(ADC1);




         //Interrupt Actions End

 		LL_EXTI_ClearFlag_0_31(LL_GPIO_PIN_0);
 	};
}




void ADC_IRQHandler(void)
{
	if(LL_ADC_IsActiveFlag_OVR(ADC1)!=0)
	{

		GPIO_Write(GPIOD,LL_GPIO_PIN_12, 1);

	} else {

		LL_ADC_ClearFlag_EOCS(ADC1);

		temp= LL_ADC_REG_ReadConversionData32(ADC1);

		GPIO_Write(GPIOD,LL_GPIO_PIN_14, 1);
		for(int itr=0;itr<90000;itr++){}

	}
	LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_15);
}



