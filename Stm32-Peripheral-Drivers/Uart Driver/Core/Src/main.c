
/**
  ******************************************************************************
  * @file    main.c
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Source file of main
  *  Created on: 20 juil. 2022
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
#include "../Inc/Uart.h"


#define USART_x USART2 /* change the specific USART from this line and check macros in Uart.h */


char rcv;
int main(void){

	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD);
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_15,LL_GPIO_MODE_OUTPUT);

	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA);
	USART_GPIO_Init(GPIOA,LL_GPIO_PIN_2,LL_GPIO_AF_7);
	USART_GPIO_Init(GPIOA,LL_GPIO_PIN_3,LL_GPIO_AF_7);
	USART2_ClockEnable;
	UART_Init(USART2);                       /* uart instialization */

  while(1){

	         /* To Transmit a string uncomment This line  */
	          //uart_write('b');       /* Function to Transmit one character */

	          //for(int itr=0 ; itr<90000;itr++){}
            if(USART_Read(USART2)=='b')
            {
	        LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_15);
            printf("Hello world /n ");
            }


           }


}







