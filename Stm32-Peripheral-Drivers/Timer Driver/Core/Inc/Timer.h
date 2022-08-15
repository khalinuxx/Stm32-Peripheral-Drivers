
/**
  ******************************************************************************
  * @file    Timer.h
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Header file of Delay LL Driver.
  * Created on: 26 juil. 2022
  ******************************************************************************
  * @attention
  *
  * Copyright NOTICE: (c) 2022 ACTIA Engineering Services, R&D Team.
  * All rights reserved.
  ******************************************************************************
  */



#ifndef TDELAY_H_
#define TDELAY_H_


#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_tim.h"
#include "stm32f4xx_ll_rcc.h"

/*--------------------------------Timers Clock Enabling Defines -------------------------*/
/* @Note This Defines was set specifically for the STM32f4 Board for other boards open the DataSheet and check Functional overview
 *
 */
#define TIM1_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM1)
#define TIM2_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM2)
#define TIM3_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM3)
#define TIM4_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM4)
#define TIM5_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM5)
#define TIM6_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM6)
#define TIM7_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM7)

#define TIM8_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM8)
#define TIM9_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM9)
#define TIM10_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM10)
#define TIM11_EnableClock LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM11)

#define TIM12_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM12)
#define TIM13_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM13)
#define TIM14_EnableClock LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM14)

/*--------------------------------Timers Clock Disabling Defines -------------------------*/
/* @Note This Defines was set specifically for the STM32f4 Board for other boards open the DataSheet and check Functional overview
 *
 */
#define TIM1_DisableClock LL_APB2_GRP1_DisableClock(LL_APB2_GRP1_PERIPH_TIM1)
#define TIM2_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM2)
#define TIM3_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM3)
#define TIM4_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM4)
#define TIM5_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM5)
#define TIM6_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM6)
#define TIM7_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM7)

#define TIM8_DisableClock LL_APB2_GRP1_DisableClock(LL_APB2_GRP1_PERIPH_TIM8)
#define TIM9_DisableClock LL_APB2_GRP1_DisableClock(LL_APB2_GRP1_PERIPH_TIM9)
#define TIM10_DisableClock LL_APB2_GRP1_DisableClock(LL_APB2_GRP1_PERIPH_TIM10)
#define TIM11_DisableClock LL_APB2_GRP1_DisableClock(LL_APB2_GRP1_PERIPH_TIM11)

#define TIM12_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM12)
#define TIM13_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM13)
#define TIM14_DisableClock LL_APB1_GRP1_DisableClock(LL_APB1_GRP1_PERIPH_TIM14)


/* Don't forget to Enable GPIO clock before the next Function */
void TIM_GPIO_Init(GPIO_TypeDef *GPIOx,uint32_t Pin,uint32_t Alternate);

/*------------------------------------Delay Functions----------------------------------------------*/
/* Don't forget to Enable TIMER clock before the next Function */
void TDelay_Init (TIM_TypeDef *TIMx);
void uDelay(uint16_t us,TIM_TypeDef *TIMx);
void mDelay(uint16_t ms , TIM_TypeDef *TIMx);


/*------------------------------------INPUT/OUTPUT COMPARE Functions-------------------------------------*/
/* Don't forget to Enable TIMER clock before the next Function */
void TIM_OC_Init (TIM_TypeDef *TIMx);
void TIM_OC_CHANNEL_Init(TIM_TypeDef *TIMx, uint32_t Channel);


/*------------------------------------INPUT Capture Functions-------------------------------------*/
/* Don't forget to Enable TIMER clock before the next Function */
void TIM_IC_Init(TIM_TypeDef *TIMx,int TIM_freq);
void TIM_IC_CHANNEL_Init(TIM_TypeDef *TIMx, uint32_t Channel);
uint32_t TIM_IC_GetCap(TIM_TypeDef *TIMx,uint32_t Channel);


/*------------------------------------PWM Functions------------------------------------------------*/
/* Don't forget to Enable TIMER clock before the next Function */
void TIM_PWM_Init(TIM_TypeDef *TIMx);
void TIM_PWM_Channel_Init(TIM_TypeDef *TIMx, uint32_t Channel);
/* Don't forget to use LL_TIM_GPIO_Init to initialize the GPIO Pin */
void TIM_PWM_SetDuty(TIM_TypeDef *TIMx,uint32_t Channel,int Duty);
void TIM_PWM_SetFreq(TIM_TypeDef *TIMx,int pwmF);

#endif /* TDELAY_H_ */
