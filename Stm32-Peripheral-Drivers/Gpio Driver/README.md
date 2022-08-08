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
### GPIO_Init(GPIO_TypeDef  *GPIOx, LL_GPIO_InitTypeDef *GPIO_Init)
- GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
- GPIO_Init param go and check [STM32F4 HAL AND LL DRIVER description](https://www.st.com/resource/en/user_manual/um1725-description-of-stm32f4-hal-and-lowlayer-drivers-stmicroelectronics.pdf) Page 1503
### LL_GPIO_Write(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin,LL_PinState PinState)
- GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
- GPIO_Pin specifies the port bit to be written. This parameter can be one of Px where x can be (0..15 or all).
- PinState specifies the value to be written to the selected bit. It can be PIN_SET or PIN_RESET
### LL_GPIO_Read(GPIO_TypeDef  *GPIOx,uint32_t GPIO_Pin)
- GPIOx where x can be (A..K) to select the GPIO peripheral for STM32F429X device or x can be (A..I) to select the GPIO peripheral for STM32F40XX and STM32F427X devices.
- GPIO_Pin specifies the port bit to read.This parameter can be Px where x can be (0..15 or all).

## Usage

To use this driver in your project you need to: 

- copy `\Stm32-Peripheral-Drivers\Gpio Driver\Src\Gpio.c` and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\Gpio Driver\Inc\Gpio.h` and paste it on your project `Inc` directory
