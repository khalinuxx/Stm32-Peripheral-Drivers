
/**
  ******************************************************************************
  * @file    Uart.c
  * @author  Khalil Mansouri & Mouadh Dahech
  * @brief   Source file of Uart LL Driver.
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

/*---------------------------------------------USARTx Initialization Function---------------------------------------------------------*/





void USART_GPIO_Init(GPIO_TypeDef * GPIOx, uint32_t PIN ,uint32_t Alternate )
{

	  LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

	  GPIO_InitStruct.Pin = PIN;
	  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
	  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_VERY_HIGH;
	  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
	  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	  GPIO_InitStruct.Alternate = Alternate;
	  LL_GPIO_Init(GPIOx, &GPIO_InitStruct);

}


/**
  * @brief  Initialize The Usart Peripheral
  * @param  USARTx The USART instance where x can be [1..6]
  *
  *
  * @USART_InitStruct This instance containe all The USART Parameters
  * @Membre Fields   @BaudRate ---> containe USART Baudrate
  *                  @DataWidth ---> Set Word length it Can Be LL_USART_DATAWIDTH_8B or LL_USART_DATAWIDTH_9B
  *                  @StopBits  ---> Set the length of the stop bits This parameter can be one of the following values:
  *                                                                                               LL_USART_STOPBITS_0_5
  *                                                                                               LL_USART_STOPBITS_1
  *                                                                                               LL_USART_STOPBITS_1_5
  *                                                                                               LL_USART_STOPBITS_2
  *                  @Parity ---> Configure Parity : This parameter can be
  *                                                   LL_USART_PARITY_NONE
  *                                                   LL_USART_PARITY_EVEN
  *                                                   LL_USART_PARITY_ODD
  *                  @TransferDirection ---> Configure simultaneously enabled/disabled states of Transmitter and Receiver
  *                                                                                               LL_USART_DIRECTION_NONE
  *                                                                                               LL_USART_DIRECTION_RX
  *                                                                                               LL_USART_DIRECTION_TX
  *                                                                                               LL_USART_DIRECTION_TX_RX
  *                  @HardwareFlowControl ---> Configure HW Flow Control mode it can be :
  *                                                               LL_USART_HWCONTROL_NONE
  *                                                               LL_USART_HWCONTROL_RTS
  *                                                               LL_USART_HWCONTROL_CTS
  *                                                               LL_USART_HWCONTROL_RTS_CTS
  *                  @OverSampling  ---> Set Oversampling to 8-bit or 16-bit mode This parameter can be LL_USART_OVERSAMPLING_16 or LL_USART_OVERSAMPLING_8
  *
  *
  * @retval None
  */
void UART_Init(USART_TypeDef *USARTx)
	{

	  LL_USART_InitTypeDef USART_InitStruct = {0};

/*------------------------------- UART Configuration ---------------------------- */
	  USART_InitStruct.BaudRate = 115200;
	  USART_InitStruct.DataWidth = LL_USART_DATAWIDTH_8B;
	  USART_InitStruct.StopBits = LL_USART_STOPBITS_1;
	  USART_InitStruct.Parity = LL_USART_PARITY_NONE;
	  USART_InitStruct.TransferDirection = LL_USART_DIRECTION_TX_RX;
	  USART_InitStruct.HardwareFlowControl = LL_USART_HWCONTROL_NONE;
	  USART_InitStruct.OverSampling = LL_USART_OVERSAMPLING_16;
	  LL_USART_Init(USARTx, &USART_InitStruct);
	  LL_USART_ConfigAsyncMode(USARTx);    /* Perform basic configuration of USART for enabling use in Asynchronous Mode (UART) */
	//LL_USART_ConfigSyncMode (USARTx);    /* if u want to use USARTx in Synchronous Mode Uncomment this line and delete the LL_USART_ConfigAsyncMode function */
	  LL_USART_Enable(USARTx);             /* USARTx Must be enabled before using the LL_USART_Init function */


	}

/**
  * @brief  Write a byte on USART Periph.
  * @param  ch Data That will be Send
  * @param  USARTx The USART Instance .
  * @retval None
  */
void USART_Write(int ch,USART_TypeDef *USARTx)
{
	LL_USART_EnableDirectionTx (USARTx);
	while (!LL_USART_IsActiveFlag_TXE (USARTx)){}  /* Check if the USART Transmit Data Register Empty Flag is set or not */
	LL_USART_TransmitData8(USARTx,ch);             /* Write in Transmitter Data Register (Transmit Data value, 8 bits) */
}


/**
  * @brief  Recive data from The Usart Periph.
  * @param  USARTx The USART Instance .
  * @retval Data recieved
  */
char USART_Read(USART_TypeDef *USARTx)
{

	while (!LL_USART_IsActiveFlag_RXNE(USARTx)){}  /* Check if the USART Transmit Data Register Empty Flag is set or not */
	 return LL_USART_ReceiveData8(USARTx);         /* Write in Receiver Data Register (Transmit Data value, 8 bits) */
}


/**
  * @brief  Write a Set of Byte
  * @param  ch Set of Byte
  * @param  USARTx The USART Instance .
  * @retval None
  */
int __io_putchar(int ch)
{
	USART_Write(ch,USART2);
	return ch;
}
