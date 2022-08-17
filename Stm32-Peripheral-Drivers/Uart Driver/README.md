# STM32 USART/UART (Synchronous/Asynchronous) DRIVER 

This Driver Allow User To Transmit And Recive Data Using Usart Perpheral on The STM32F4xx Features.


---

## Features
The UART Driver includes the following features:

- Initializes the USARx peripheral according to the specified parameters
- Transmit data .
- Reads data.
---
## Clocks
### USART Clock Enable
To Enable Clock For USARTs Just Use The Next Instruction 
- USARTx_ClockEnable; ----> Where x Can Be 1,2,3 or 6 
- UARTx_ClockEnable;  ----> Where x Can Be 4 or 5
### USART Clock Disable
To Disable Clock For USARTs Just Use The Next Instruction 
- USARTx_ClockDisable; ----> Where x Can Be 1,2,3 or 6 
- UARTx_ClockDisable;  ----> Where x Can Be 4 or 5
---
## USART Funtions
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
## USART Interrupt Funtions
### USART_IType_Enable(USART_TypeDef *USARTx,IT_Type IT)
- Enable USART Interrupts
- USARTx The USART Instance
- IT   Enable Specific Interrupt wich Can Be: 
-                              TX_IT   ------> Enable TX Empty Interrupt.
-                              TC_IT   ------> Enable Transmission Complete Interrupt.
-                              PE_IT   ------> Enable Parity Error Interrupt
-                              RX_IT   ------> Enable RX Not Empty Interrupt.
-                              IDLE_IT ------> Enable IDLE Line is detected Interrupt.
### USART_IType_Disable(USART_TypeDef *USARTx,IT_Type IT)
- Disable USART Interrupts
- USARTx The USART Instance
- IT   Disable Specific Interrupt wich Can Be: 
-                              TX_IT   ------> Disable TX Empty Interrupt.
-                              TC_IT   ------> Disable Transmission Complete Interrupt.
-                              PE_IT   ------> Disable Parity Error Interrupt
-                              RX_IT   ------> Disable RX Not Empty Interrupt.
-                              IDLE_IT ------> Disable IDLE Line is detected Interrupt.
### USART_NVIC_Init(USART_TypeDef *USARTx,IRQn_Type IRQn, uint32_t priority)
- Initialize The NVIC
- IRQn  Interrupt number.
- priority  Priority to set.
### USART Handlers
- void USART1_IRQHandler(void) 
- void USART2_IRQHandler(void)
- void USART3_IRQHandler(void)
- void UART4_IRQHandler(void)
- void UART5_IRQHandler(void)
- void USART6_IRQHandler(void)

## Usage

To Use This Driver in Your Project You Need To: 

- copy `\Stm32-Peripheral-Drivers\Uart Driver\Src\Uart.c` file and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\Uart Driver\Inc\Uart.h` file and paste it on your project `Inc` directory
