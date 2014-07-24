################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/libraries/EEPROM/EEPROM.cpp 

CPP_DEPS += \
./Libraries/EEPROM/EEPROM.cpp.d 

LINK_OBJ += \
./Libraries/EEPROM/EEPROM.cpp.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/EEPROM/EEPROM.cpp.o: /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/libraries/EEPROM/EEPROM.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=155 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR    -I"/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/cores/arduino" -I"/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/variants/standard" -I"/Users/HAL/Documents/Arduino/libraries/GSM_GPS_Shield_UNO_DUEMILANOVE" -I"/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/libraries/SPI" -I"/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/libraries/EEPROM" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


