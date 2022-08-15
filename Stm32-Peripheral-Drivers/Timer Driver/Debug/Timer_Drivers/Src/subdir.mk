################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_exti.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_gpio.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_rcc.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_tim.c \
C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_utils.c 

OBJS += \
./Timer_Drivers/Src/stm32f4xx_ll_exti.o \
./Timer_Drivers/Src/stm32f4xx_ll_gpio.o \
./Timer_Drivers/Src/stm32f4xx_ll_rcc.o \
./Timer_Drivers/Src/stm32f4xx_ll_tim.o \
./Timer_Drivers/Src/stm32f4xx_ll_utils.o 

C_DEPS += \
./Timer_Drivers/Src/stm32f4xx_ll_exti.d \
./Timer_Drivers/Src/stm32f4xx_ll_gpio.d \
./Timer_Drivers/Src/stm32f4xx_ll_rcc.d \
./Timer_Drivers/Src/stm32f4xx_ll_tim.d \
./Timer_Drivers/Src/stm32f4xx_ll_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Timer_Drivers/Src/stm32f4xx_ll_exti.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_exti.c Timer_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I"../../../Stm32-Peripheral-Drivers/Gpio Driver/Core/Inc" -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Timer_Drivers/Src/stm32f4xx_ll_gpio.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_gpio.c Timer_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I"../../../Stm32-Peripheral-Drivers/Gpio Driver/Core/Inc" -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Timer_Drivers/Src/stm32f4xx_ll_rcc.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_rcc.c Timer_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I"../../../Stm32-Peripheral-Drivers/Gpio Driver/Core/Inc" -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Timer_Drivers/Src/stm32f4xx_ll_tim.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_tim.c Timer_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I"../../../Stm32-Peripheral-Drivers/Gpio Driver/Core/Inc" -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Timer_Drivers/Src/stm32f4xx_ll_utils.o: C:/Users/kalil/Desktop/PFA/STM2/Stm32-Peripheral-Drivers/DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Src/stm32f4xx_ll_utils.c Timer_Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVER -c -I"../../../Stm32-Peripheral-Drivers/Gpio Driver/Core/Inc" -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/Timer_Drivers/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

