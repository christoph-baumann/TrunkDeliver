################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/avr-libc/subdir.mk
-include arduino/core/subdir.mk
-include Libraries/SPI/subdir.mk
-include Libraries/GSM_GPS_Shield_UNO_DUEMILANOVE/subdir.mk
-include Libraries/EEPROM/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/arduino.ar \

ELF += \
TrunkDeliver.elf \

EEP += \
TrunkDeliver.eep \

FLASH_IMAGE += \
TrunkDeliver.hex \


# All Target
all: TrunkDeliver

# Tool invocations
TrunkDeliver: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-size" -A "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/TrunkDeliver.elf"
	@echo 'Finished building target: $@'
	@echo ' '

/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar" rcs "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

TrunkDeliver.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc" -Os -Wl,--gc-sections -mmcu=atmega328p -o "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/TrunkDeliver.elf"   $(LINK_OBJ) $(AR)  "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/arduino.ar" "-L/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

TrunkDeliver.eep: $(ELF)
	@echo 'Create eeprom image'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/TrunkDeliver.elf" "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/TrunkDeliver.eep"
	@echo 'Finished building: $@'
	@echo ' '

TrunkDeliver.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-objcopy" -O ihex -R .eeprom "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/TrunkDeliver.elf" "/Users/HAL/Documents/Studium_Telekom/Programmierung/TrunkDeliver/Release/TrunkDeliver.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_DEPS)$(AR)$(FLASH_IMAGE)$(EEP)$(CXX_DEPS)$(C++_DEPS)$(ELF)$(CC_DEPS)$(AR_OBJ)$(CPP_DEPS)$(LINK_OBJ)$(C_UPPER_DEPS)$(SIZEDUMMY) TrunkDeliver
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
