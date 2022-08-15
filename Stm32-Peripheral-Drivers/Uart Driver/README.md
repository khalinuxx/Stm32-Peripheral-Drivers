# STM32 USART/UART (Synchronous/Asynchronous) DRIVER 

This Driver Allow User To Transmit And Recive Data Using Usart Perpheral on The STM32F4xx Features.


---

## Features
The UART Driver includes the following features:

- Initializes the USARx peripheral according to the specified parameters
- Transmit data .
- Reads data.
---
## Funtions
This driver contain 3 funtions
### UART_Init(USART_TypeDef *USARTx)
- Initialize The Usart Peripheral
- USARTx where x can be (1..6) to select the USART peripheral for STM32F407XX device.
* Note : To Change The Uart Configs Open Uart.c file Line 44
* USART_InitStruct param go and check [STM32F4 HAL AND LL DRIVER description](https://www.st.com/resource/en/user_manual/um1725-description-of-stm32f4-hal-and-lowlayer-drivers-stmicroelectronics.pdf) Page 2020.
### USART_Write(int ch,USART_TypeDef *USARTx)
- This Function Allow User Write a byte on USART Periph.
- USARTx The USART Instance
- ch Data That will be Send.
### USART_Read(USART_TypeDef *USARTx)
- Recive data from The Usart Periph.
- USARTx The USART Instance
- returned the Recieved Data
### printf(string str)
- Function to Write a Set of Byte
- str Set of Byte
* Note : to change Usart Peripheral Open Uart.c file and go to line 131  
## Usage

To Use This Driver in Your Project You Need To: 

- copy `\Stm32-Peripheral-Drivers\Uart Driver\Src\Uart.c` file and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\Uart Driver\Inc\Uart.h` file and paste it on your project `Inc` directory
