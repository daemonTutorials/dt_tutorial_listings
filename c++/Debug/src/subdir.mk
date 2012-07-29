################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Spielwiese.cpp \
../src/belltone.cpp \
../src/grafic_x11.cpp \
../src/hello_world.cpp \
../src/without_namespace.cpp 

OBJS += \
./src/Spielwiese.o \
./src/belltone.o \
./src/grafic_x11.o \
./src/hello_world.o \
./src/without_namespace.o 

CPP_DEPS += \
./src/Spielwiese.d \
./src/belltone.d \
./src/grafic_x11.d \
./src/hello_world.d \
./src/without_namespace.d 


# Each subdirectory must supply rules for building sources it contributes
src/Spielwiese.o: ../src/Spielwiese.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/Spielwiese.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


