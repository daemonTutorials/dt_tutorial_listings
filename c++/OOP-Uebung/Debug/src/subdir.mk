################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fahrzeug.cpp \
../src/LKW.cpp \
../src/MaxSpeedReached.cpp \
../src/OOP-Uebung.cpp \
../src/PKW.cpp 

OBJS += \
./src/Fahrzeug.o \
./src/LKW.o \
./src/MaxSpeedReached.o \
./src/OOP-Uebung.o \
./src/PKW.o 

CPP_DEPS += \
./src/Fahrzeug.d \
./src/LKW.d \
./src/MaxSpeedReached.d \
./src/OOP-Uebung.d \
./src/PKW.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


