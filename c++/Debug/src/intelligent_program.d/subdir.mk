################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/intelligent_program.d/intelligent_program.cpp \
../src/intelligent_program.d/ki.ns.cpp \
../src/intelligent_program.d/person.class.cpp \
../src/intelligent_program.d/test.cpp \
../src/intelligent_program.d/test2.cpp 

OBJS += \
./src/intelligent_program.d/intelligent_program.o \
./src/intelligent_program.d/ki.ns.o \
./src/intelligent_program.d/person.class.o \
./src/intelligent_program.d/test.o \
./src/intelligent_program.d/test2.o 

CPP_DEPS += \
./src/intelligent_program.d/intelligent_program.d \
./src/intelligent_program.d/ki.ns.d \
./src/intelligent_program.d/person.class.d \
./src/intelligent_program.d/test.d \
./src/intelligent_program.d/test2.d 


# Each subdirectory must supply rules for building sources it contributes
src/intelligent_program.d/%.o: ../src/intelligent_program.d/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


