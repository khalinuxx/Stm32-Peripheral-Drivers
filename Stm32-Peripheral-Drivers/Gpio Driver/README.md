# STM32 Gpio DRIVER 

This driver manages the General Purpose IOs on a gateway using the Driver model.

---

## Features
The GPIO Driver includes the following features:

- Initializes the GPIOx peripheral according to the specified parameters
- Sets or clears the selected data port bit.
- Reads the specified input port pin.
---
## Funtions
This driver contain 3 funtions
### GPIO_Init(GPIO_TypeDef *GPIOx,  uint32_t Pin,uint32_t Mode);
- GPIOx: where x can be (A..K) to select the GPIO peripheral for STM32F429X device or x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
- Pin: specifies the Configured pin
- Mode: This parameter can be INPUT or OUTPUT
### LL_GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin,LL_PinState PinState)
- GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
- GPIO_Pin specifies the port bit to be written. This parameter can be one of Px where x can be (0..15 or all).
- PinState specifies the value to be written to the selected bit. It can be PIN_SET or PIN_RESET
### LL_GPIO_Read(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin)
- GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
- GPIO_Pin specifies the port bit to read.This parameter can be Px where x can be (0..15 or all).
## EXTI GPIO Interrupt Functions
### EXTI_Line_Init(uint32_t Port,uint32_t InPin,uint32_t priority)
- Initialize EXTI interrupt Line and NVIC.
- Port This parameter `LL_SYSCFG_EXTI_PORTx` where x can be (A..H) 
- InPin specifies the Line refer to the INPUT Pin
- priority  Interrupt Priority to set.
### EXTI_callback(uint32_t InPin)
- This Function Handel the Interrupt Action. you can write what u want to happend After the interruption
- InPin specifies the Line refer to the INPUT Pin
### EXTI IRQ Handlers
- This is The Interrupt Handler Function
  *        void EXTI0_IRQHandler(void), line EXTI0 ,PIN0
  *        void EXTI1_IRQHandler(void), line EXTI1 ,PIN1
  *        void EXTI2_IRQHandler(void), line EXTI2 ,PIN2
  *        void EXTI3_IRQHandler(void), line EXTI3 ,PIN3
  *        void EXTI4_IRQHandler(void), line EXTI4 ,PIN4
  *        void EXTI9_5_IRQHandler(void), lines EXTI5 to EXTI9 ,PIN5 to PIN9
  *        void EXTI15_10_IRQHandler(void), lines EXTI10 to EXTI15 ,PIN10 to PIN15
## Usage

To use this driver in your project you need to: 

- copy `\Stm32-Peripheral-Drivers\Gpio Driver\Src\Gpio.c` file and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\Gpio Driver\Inc\Gpio.h` file and paste it on your project `Inc` directory
