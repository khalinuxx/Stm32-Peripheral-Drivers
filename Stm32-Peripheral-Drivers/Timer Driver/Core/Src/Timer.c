
/**
  ******************************************************************************
  * @file    Timer.c
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Source file of Delay LL Driver.
  * Created on: 26 juil. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#include "../Inc/Timer.h"






/*-----------------------------------Delay Functions---------------------------------------------------------*/

/**
  * @brief  Initialise Timer x for the delay 1ms  .
  * @param  TIMx Timer Instance
  */

void TDelay_Init (TIM_TypeDef *TIMx)
{
	LL_TIM_InitTypeDef TIM_InitStruct={0};


	LL_RCC_ClocksTypeDef RCC_Clock={0};
	LL_RCC_GetSystemClocksFreq(&RCC_Clock);

	TIM_InitStruct.Prescaler=(RCC_Clock.SYSCLK_Frequency/1000000)-1;/* Set the Prescaler Register :Timer freq 10Khz       */
	TIM_InitStruct.CounterMode=LL_TIM_COUNTERMODE_UP ;      /* Set the CounterMode Register   */
	TIM_InitStruct.Autoreload=0xFFFF;                         /* Set the Autoreload Register   : 10KHz/10= 1KHz <=> 1ms */
	TIM_InitStruct.ClockDivision=LL_TIM_CLOCKDIVISION_DIV1 ;/* Set the ClockDivision Register */
	LL_TIM_Init (TIMx,&TIM_InitStruct);                     /* Set the Configurations         */
	LL_TIM_EnableCounter(TIMx);                             /* Enable the Counter Mode        */

}

/**
  * @brief  Pauses the program for the amount of time (in microseconds)  .
  * @param  TIMx Timer Instance
  * @param  ms the number of microseconds to pause.
  */
void uDelay(uint16_t us,TIM_TypeDef *TIMx)
{
	 LL_TIM_SetCounter (TIMx, 0);
	 while(TIMx->CNT< us){}

}


/**
  * @brief  Pauses the program for the amount of time (in milliseconds)  .
  * @param  TIMx Timer Instance
  * @param  ms the number of milliseconds to pause.
  */

void mDelay(uint16_t ms,TIM_TypeDef *TIMx)
{

for(int i=0;i<ms;i++)
{
	uDelay(1000,TIMx);
}

}

/*-----------------------------------------------------------------------------------------------------------------*/





/*---------------------------------------------------OUTPUT COMPARE FUNCTIONS--------------------------------------------------------------*/


/**
  * @brief  Initialize the timer For the output compare mode  .
  * @param  TIMx Timer Instance
  * @param  channels LL_TIM_CHANNEL_CHx where x can be (1..4).
  */
void TIM_OC_Init (TIM_TypeDef *TIMx)
{
	LL_TIM_InitTypeDef TIM_InitStruct={0};
	LL_RCC_ClocksTypeDef RCC_Clock={0};
	LL_RCC_GetSystemClocksFreq(&RCC_Clock);

	TIM_InitStruct.Prescaler=(RCC_Clock.SYSCLK_Frequency/10000)-1;/* Set the Prescaler Register : 10Khz       */
	TIM_InitStruct.CounterMode=LL_TIM_COUNTERMODE_UP ;      /* Set the CounterMode Register   */
	TIM_InitStruct.Autoreload=10000-1;                      /* Set the Autoreload Register   : 10KHz/10KHz= 1Hz <=> 1s */
	TIM_InitStruct.ClockDivision=LL_TIM_CLOCKDIVISION_DIV1 ;/* Set the ClockDivision Register */
	LL_TIM_Init (TIMx,&TIM_InitStruct);                     /* Set the Configurations         */
	LL_TIM_EnableCounter(TIMx);                             /* Enable the Counter Mode        */


	LL_TIM_SetCounter(TIMx,0);                              /* Reset The Counter */
	LL_TIM_EnableCounter(TIMx);                             /* Enabling the counter */

}



/**
  * @brief  Configure the channel with the pin to the OUTPUT Compare Mode  .
  * @param  TIMx Timer Instance
  * @param  channels LL_TIM_CHANNEL_CHx where x can be (1..4).
  */

void TIM_OC_CHANNEL_Init(TIM_TypeDef *TIMx, uint32_t Channel)
{

	LL_TIM_OC_SetMode(TIMx,Channel,LL_TIM_OCMODE_TOGGLE);  /* Define the behavior of the output reference signal */
	LL_TIM_CC_EnableChannel(TIMx,Channel);                 /* Enable the Capture compare channex  */
}

void TIM_IC_Init(TIM_TypeDef *TIMx,int TIM_freq)
{
LL_TIM_InitTypeDef TIM_InitStruct={0};
LL_RCC_ClocksTypeDef RCC_Clock={0};
LL_RCC_GetSystemClocksFreq(&RCC_Clock);

TIM_InitStruct.Prescaler=(RCC_Clock.SYSCLK_Frequency/TIM_freq)-1;/* Set the Prescaler Register : 10Khz       */
TIM_InitStruct.CounterMode=LL_TIM_COUNTERMODE_UP ;      /* Set the CounterMode Register   */
TIM_InitStruct.ClockDivision=LL_TIM_CLOCKDIVISION_DIV1 ;/* Set the ClockDivision Register */
LL_TIM_Init (TIMx,&TIM_InitStruct);                     /* Set the Configurations         */
LL_TIM_EnableCounter(TIMx);                             /* Enable the Counter Mode        */
}


/**
  * @brief  Configure the channel with the pin to the INPUT Compare Mode  .
  * @param  TIMx Timer Instance
  * @param  channels LL_TIM_CHANNEL_CHx where x can be (1..4).
  */
void TIM_IC_CHANNEL_Init (TIM_TypeDef *TIMx, uint32_t Channel)
{


	LL_TIM_IC_SetActiveInput(TIMx,Channel,LL_TIM_ACTIVEINPUT_DIRECTTI);
	LL_TIM_IC_SetPolarity(TIMx,Channel,LL_TIM_IC_POLARITY_RISING);
	LL_TIM_CC_EnableChannel(TIMx,Channel);
	LL_TIM_EnableCounter(TIMx);
}

/**
  * @brief  return INPUT Compare Capture  .
  * @param  TIMx Timer Instance
  * @param  channels LL_TIM_CHANNEL_CHx where x can be (1..4).
  */
uint32_t TIM_IC_GetCap(TIM_TypeDef *TIMx,uint32_t Channel)
{
	uint32_t Capture;
	while(!LL_TIM_IsActiveFlag_UPDATE(TIMx)){}
	switch(Channel)
	{
	case LL_TIM_CHANNEL_CH1:
		Capture= LL_TIM_IC_GetCaptureCH1 (TIMx);
		  break;
	case LL_TIM_CHANNEL_CH2:
		Capture= LL_TIM_IC_GetCaptureCH2 (TIMx);
		  break;
	case LL_TIM_CHANNEL_CH3:
		Capture= LL_TIM_IC_GetCaptureCH3 (TIMx);
	      break;
	case LL_TIM_CHANNEL_CH4:
		Capture= LL_TIM_IC_GetCaptureCH4 (TIMx);
	      break;

	}
return Capture;
}


/*-----------------------------------------------------------------------------------------------------------------*/






/*----------------------------------------------PWM Functions-------------------------------------------------------------------*/

/**
  * @brief  Initialize the Timer x for PWM mode   .
  * @param  TIMx Timer Instance
  */

 void TIM_PWM_Init(TIM_TypeDef *TIMx)
{


  LL_TIM_InitTypeDef TIM_InitStruct = {0};

  /* Timer x Config  */
  TIM_InitStruct.Prescaler = 0;                            /* Set Prescaler For Timer x         */
  TIM_InitStruct.CounterMode = LL_TIM_COUNTERMODE_UP;      /* Set Counter Mode for Timer x      */
  TIM_InitStruct.Autoreload = 65535;                       /* Set ARR For Timer x               */
  TIM_InitStruct.ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;/* Set SysClock Division For Timer x */
  LL_TIM_Init(TIMx, &TIM_InitStruct);                      /* Valid the previous Config         */

  LL_TIM_EnableARRPreload(TIMx);                           /* Enable auto-reload (ARR) preload  */
  LL_TIM_SetClockSource(TIMx, LL_TIM_CLOCKSOURCE_INTERNAL);/* Set Clock Source for Timer x      */

}


 /**
   * @brief  Configure Timer Channel for the pwm mode   .
   * @param  TIMx Timer Instance
   * @param  channels LL_TIM_CHANNEL_CHx where x can be (1..4)
   */

void TIM_PWM_Channel_Init(TIM_TypeDef *TIMx, uint32_t Channel)
{

	  LL_TIM_OC_InitTypeDef TIM_OC_InitStruct = {0};



	 LL_TIM_OC_EnablePreload(TIMx, Channel);

	  TIM_OC_InitStruct.OCMode = LL_TIM_OCMODE_PWM1;        /* Set Output Compare Mode */
	  TIM_OC_InitStruct.OCState = LL_TIM_OCSTATE_DISABLE;   /* Set Output Compare State */
	  TIM_OC_InitStruct.OCNState = LL_TIM_OCSTATE_DISABLE;
	  TIM_OC_InitStruct.CompareValue = 0;                   /* Set Output Compare value */
	  TIM_OC_InitStruct.OCPolarity = LL_TIM_OCPOLARITY_HIGH;/* Set Output Compare Polarity */

	  LL_TIM_OC_Init(TIMx, Channel, &TIM_OC_InitStruct);    /* Valid the pervious Config */
	  LL_TIM_OC_DisableFast(TIMx, Channel);


	  LL_TIM_SetTriggerOutput(TIMx, LL_TIM_TRGO_RESET);
	  LL_TIM_DisableMasterSlaveMode(TIMx);

}


/**
  * @brief  Configure the GPIO Pin for the pwm mode   .
  * @param  GPIOx GPIO Instance
  * @param  Pin  LL_GPIO_PIN_x where x can be (0..15)
  * @param  Alternate LL_GPIO_AF_x where x can be (0..15)
  */

void TIM_GPIO_Init(GPIO_TypeDef *GPIOx,uint32_t Pin,uint32_t Alternate)
{


	  LL_GPIO_InitTypeDef GPIO_InitStruct = {0};
	  /**TIMx GPIO Configuration

	  */
	  GPIO_InitStruct.Pin = Pin;
	  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
	  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
	  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	  GPIO_InitStruct.Alternate = Alternate;
	  LL_GPIO_Init(GPIOx, &GPIO_InitStruct);

}


/**
  * @brief  Set PWM Frequency .
  * @param  TIMx TIMER Instance
  * @param  pwmF PWM frequency
  */

void TIM_PWM_SetFreq(TIM_TypeDef *TIMx,int pwmF)
{

	uint32_t Prescaler;
	LL_RCC_ClocksTypeDef RCC_Clock={0};
	LL_RCC_GetSystemClocksFreq(&RCC_Clock);

	Prescaler = RCC_Clock.SYSCLK_Frequency/(LL_TIM_GetAutoReload (TIMx)*pwmF);
    LL_TIM_SetPrescaler (TIMx, Prescaler);
}

/**
  * @brief  Set PWM Duty Cycle   .
  * @param  TIMx TIMER Instance
  * @param  channels LL_TIM_CHANNEL_CHx where x can be (1..4)
  * @param  Duty PWM Duty Cycle varies between 0 and 100
  */

void TIM_PWM_SetDuty(TIM_TypeDef *TIMx,uint32_t Channel,int Duty)
{
	int CCR_Value=0;
	LL_TIM_CC_EnableChannel (TIMx, Channel);
	LL_TIM_EnableCounter(TIMx);

	if(Duty>100)
	{
		Duty=100;
	}
	if(Duty<0)
	{
		Duty=0;
	}


	CCR_Value=(LL_TIM_GetAutoReload (TIMx)/100)*Duty;

	switch(Channel)
	{
	case LL_TIM_CHANNEL_CH1:
		  TIMx->CCR1 = CCR_Value;
		  break;
	case LL_TIM_CHANNEL_CH2:
		  TIMx->CCR2 = CCR_Value;
		  break;
	case LL_TIM_CHANNEL_CH3:
	      TIMx->CCR3 = CCR_Value;
	      break;
	case LL_TIM_CHANNEL_CH4:
	      TIMx->CCR4 = CCR_Value;
	      break;

	}
}

