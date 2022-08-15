/**
  ******************************************************************************
  * @file    ADC.h
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Header file of ADC LL Driver.
  * Created on: 1 Aug. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  ******************************************************************************
  */

#ifndef ADC_H_
#define ADC_H_

/* Define to prevent recursive inclusion -------------------------------------*/
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_adc.h"
#include "stm32f4xx_ll_bus.h"
#include"stm32f4xx_ll_exti.h"


#define ADC1_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_ADC1)
#define ADC2_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_ADC2)
#define ADC3_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_ADC3)

/* don't forget to Enable GPIO Clock Before The Next Function */
void ADC_GPIO_Init(GPIO_TypeDef *GPIOx,uint32_t Pin);
/* don't forget to Enable ADC Clock Before The Next Function */
void ADC_Init(ADC_TypeDef *ADCx);
void ADC_REG_Init(ADC_TypeDef *ADCx);
void ADC_Com_Init(ADC_TypeDef *ADCx);
void ADC_Channel_Init(ADC_TypeDef *ADCx,uint32_t Rank , uint32_t Channel);

uint32_t ADC_Read(ADC_TypeDef *ADCx);

void ADC_IRQ_Init(uint32_t priority);

#endif /* ADC_H_ */
