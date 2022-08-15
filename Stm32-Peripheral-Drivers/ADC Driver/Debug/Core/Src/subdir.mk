################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ADC.c \
../Core/Src/main.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c 

OBJS += \
./Core/Src/ADC.o \
./Core/Src/main.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o 

C_DEPS += \
./Core/Src/ADC.d \
./Core/Src/main.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_FULL_LL_DRIVER -DSTM32F407xx -c -I../../../DRIVERS/CMSIS/Core/Include -I../../../DRIVERS/CMSIS/Device/ST/STM32F4xx/Include -I../../../DRIVERS/STM32F4xx_LL_Driver/ADC_Drivers/Inc -I"../../../Stm32-Peripheral-Drivers/ADC Driver/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

