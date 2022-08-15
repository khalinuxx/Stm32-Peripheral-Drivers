################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_adc.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_exti.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_gpio.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_rcc.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_utils.c 

OBJS += \
./ADC_Driver/Src/stm32f4xx_ll_adc.o \
./ADC_Driver/Src/stm32f4xx_ll_exti.o \
./ADC_Driver/Src/stm32f4xx_ll_gpio.o \
./ADC_Driver/Src/stm32f4xx_ll_rcc.o \
./ADC_Driver/Src/stm32f4xx_ll_utils.o 

C_DEPS += \
./ADC_Driver/Src/stm32f4xx_ll_adc.d \
./ADC_Driver/Src/stm32f4xx_ll_exti.d \
./ADC_Driver/Src/stm32f4xx_ll_gpio.d \
./ADC_Driver/Src/stm32f4xx_ll_rcc.d \
./ADC_Driver/Src/stm32f4xx_ll_utils.d 


# Each subdirectory must supply rules for building sources it contributes
ADC_Driver/Src/stm32f4xx_ll_adc.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_adc.c ADC_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../Inc -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Driver/Src/stm32f4xx_ll_exti.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_exti.c ADC_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../Inc -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Driver/Src/stm32f4xx_ll_gpio.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_gpio.c ADC_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../Inc -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Driver/Src/stm32f4xx_ll_rcc.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_rcc.c ADC_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../Inc -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
ADC_Driver/Src/stm32f4xx_ll_utils.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Src/stm32f4xx_ll_utils.c ADC_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../Inc -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/ADC_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

