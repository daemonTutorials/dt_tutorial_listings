################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Spielwiese.cpp 

OBJS += \
./src/Spielwiese.o 

CPP_DEPS += \
./src/Spielwiese.d 


# Each subdirectory must supply rules for building sources it contributes
src/Spielwiese.o: ../src/Spielwiese.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/Spielwiese.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


