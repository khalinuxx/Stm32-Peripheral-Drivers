################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_adc.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_exti.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_gpio.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_rcc.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_utils.c 

OBJS += \
./ADC_Drivers/Src/stm32f4xx_ll_adc.o \
./ADC_Drivers/Src/stm32f4xx_ll_exti.o \
./ADC_Drivers/Src/stm32f4xx_ll_gpio.o \
./ADC_Drivers/Src/stm32f4xx_ll_rcc.o \
./ADC_Drivers/Src/stm32f4xx_ll_utils.o 

C_DEPS += \
./ADC_Drivers/Src/stm32f4xx_ll_adc.d \
./ADC_Drivers/Src/stm32f4xx_ll_exti.d \
./ADC_Drivers/Src/stm32f4xx_ll_gpio.d \
./ADC_Drivers/Src/stm32f4xx_ll_rcc.d \
./ADC_Drivers/Src/stm32f4xx_ll_utils.d 


# Each subdirectory must supply rules for building sources it contributes
ADC_Drivers/Src/stm32f4xx_ll_adc.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_adc.c ADC_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/ADC Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Drivers/Src/stm32f4xx_ll_exti.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_exti.c ADC_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/ADC Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Drivers/Src/stm32f4xx_ll_gpio.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_gpio.c ADC_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/ADC Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Drivers/Src/stm32f4xx_ll_rcc.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_rcc.c ADC_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/ADC Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Drivers/Src/stm32f4xx_ll_utils.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Src/stm32f4xx_ll_utils.c ADC_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/ADC Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

