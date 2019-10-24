################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lpc_yogurera_lib/Modulo_de_Relay.c \
../lpc_yogurera_lib/Sensor_de_Temperatura.c 

OBJS += \
./lpc_yogurera_lib/Modulo_de_Relay.o \
./lpc_yogurera_lib/Sensor_de_Temperatura.o 

C_DEPS += \
./lpc_yogurera_lib/Modulo_de_Relay.d \
./lpc_yogurera_lib/Sensor_de_Temperatura.d 


# Each subdirectory must supply rules for building sources it contributes
lpc_yogurera_lib/%.o: ../lpc_yogurera_lib/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__USE_LPCOPEN -D__LPC17XX__ -D__REDLIB__ -I"C:\Users\matia\Documents\MCUXpressoIDE_10.1.1_606\workspace\Proyecto_Yogurera\lpc_yogurera_lib" -I"C:\Users\matia\Documents\MCUXpressoIDE_10.1.1_606\workspace\lpc_board_nxp_lpcxpresso_1769\inc" -I"C:\Users\matia\Documents\MCUXpressoIDE_10.1.1_606\workspace\lpc_chip_175x_6x\inc" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


