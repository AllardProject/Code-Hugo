################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
..\Lib\rs485\RS485.cpp 

LINK_OBJ += \
.\Lib\rs485\RS485.cpp.o 

CPP_DEPS += \
.\Lib\rs485\RS485.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Lib\rs485\RS485.cpp.o: ..\Lib\rs485\RS485.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\Hugo\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino5/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\Hugo\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.2\cores\arduino" -I"C:\Users\Hugo\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.2\variants\standard" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


