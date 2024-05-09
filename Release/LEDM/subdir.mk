################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LEDM/LEDM.c 

C_DEPS += \
./LEDM/LEDM.d 

OBJS += \
./LEDM/LEDM.o 


# Each subdirectory must supply rules for building sources it contributes
LEDM/%.o: ../LEDM/%.c LEDM/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra -g -DNDEBUG -DSTM32F401xE -DHSE_VALUE=8000000 -I"C:\Users\lenovo\Desktop\Embedded-Project\Lib" -I"C:\Users\lenovo\Desktop\Embedded-Project\LEDM" -I"../include" -I"C:\Users\lenovo\Desktop\Embedded-Project\Gpio" -I"C:\Users\lenovo\Desktop\Embedded-Project\Rcc" -I"../system/include" -I"../system/include/cmsis" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


