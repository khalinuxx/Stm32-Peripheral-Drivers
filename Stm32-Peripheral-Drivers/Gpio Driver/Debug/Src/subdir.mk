################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Gpio.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/Gpio.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/Gpio.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F407xx -DUSE_FULL_LL_DRIVERS -c -I../Inc -I"C:/Users/kalil/Desktop/Udemy - Embedded Systems STM32 Low-Layer APIs(LL) Driver Development 2021-5/02 Getting Started/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/kalil/Desktop/Udemy - Embedded Systems STM32 Low-Layer APIs(LL) Driver Development 2021-5/02 Getting Started/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/kalil/Desktop/Udemy - Embedded Systems STM32 Low-Layer APIs(LL) Driver Development 2021-5/02 Getting Started/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

