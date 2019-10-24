################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include lpc_yogurera_proj/src/subdir.mk
-include lpc_yogurera_lib/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Proyecto_Yogurera.axf

# Tool invocations
Proyecto_Yogurera.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\Users\matia\Documents\MCUXpressoIDE_10.1.1_606\workspace\lpc_board_nxp_lpcxpresso_1769\Debug" -L"C:\Users\matia\Documents\MCUXpressoIDE_10.1.1_606\workspace\lpc_chip_175x_6x\Debug" -Xlinker -Map="Proyecto_Yogurera.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -mcpu=cortex-m3 -mthumb -T "Proyecto_Yogurera_Debug.ld" -o "Proyecto_Yogurera.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Proyecto_Yogurera.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "Proyecto_Yogurera.axf"; # arm-none-eabi-objcopy -v -O binary "Proyecto_Yogurera.axf" "Proyecto_Yogurera.bin" ; # checksum -p LPC1769 -d "Proyecto_Yogurera.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
