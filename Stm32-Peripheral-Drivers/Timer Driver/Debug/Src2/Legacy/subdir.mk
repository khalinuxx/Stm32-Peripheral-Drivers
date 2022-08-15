################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kalil/Desktop/Udemy\ -\ Embedded\ Systems\ STM32\ Low-Layer\ APIs(LL)\ Driver\ Development\ 2021-5/02\ Getting\ Started/Drivers/STM32F4xx_HAL_Driver/Src/Legacy/stm32f4xx_hal_can.c 

OBJS += \
./Src2/Legacy/stm32f4xx_hal_can.o 

C_DEPS += \
./Src2/Legacy/stm32f4xx_hal_can.d 


# Each subdirectory must supply rules for building sources it contributes
Src2/Legacy/stm32f4xx_hal_can.o: C:/Users/kalil/Desktop/Udemy\ -\ Embedded\ Systems\ STM32\ Low-Layer\ APIs(LL)\ Driver\ Development\ 2021-5/02\ Getting\ Started/Drivers/STM32F4xx_HAL_Driver/Src/Legacy/stm32f4xx_hal_can.c Src2/Legacy/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I../Inc -I"C:/Users/kalil/Desktop/Udemy - Embedded Systems STM32 Low-Layer APIs(LL) Driver Development 2021-5/02 Getting Started/Drivers/CMSIS/Include" -I"C:/Users/kalil/Desktop/Udemy - Embedded Systems STM32 Low-Layer APIs(LL) Driver Development 2021-5/02 Getting Started/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/Udemy - Embedded Systems STM32 Low-Layer APIs(LL) Driver Development 2021-5/02 Getting Started/Drivers/STM32F4xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

