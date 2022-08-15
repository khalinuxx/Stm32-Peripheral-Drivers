################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_exti.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_gpio.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_rcc.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_utils.c 

OBJS += \
./WDG_Drivers/Src/stm32f4xx_ll_exti.o \
./WDG_Drivers/Src/stm32f4xx_ll_gpio.o \
./WDG_Drivers/Src/stm32f4xx_ll_rcc.o \
./WDG_Drivers/Src/stm32f4xx_ll_utils.o 

C_DEPS += \
./WDG_Drivers/Src/stm32f4xx_ll_exti.d \
./WDG_Drivers/Src/stm32f4xx_ll_gpio.d \
./WDG_Drivers/Src/stm32f4xx_ll_rcc.d \
./WDG_Drivers/Src/stm32f4xx_ll_utils.d 


# Each subdirectory must supply rules for building sources it contributes
WDG_Drivers/Src/stm32f4xx_ll_exti.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_exti.c WDG_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/WDG Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
WDG_Drivers/Src/stm32f4xx_ll_gpio.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_gpio.c WDG_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/WDG Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
WDG_Drivers/Src/stm32f4xx_ll_rcc.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_rcc.c WDG_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/WDG Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
WDG_Drivers/Src/stm32f4xx_ll_utils.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Src/stm32f4xx_ll_utils.c WDG_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/WDG_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/WDG Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

