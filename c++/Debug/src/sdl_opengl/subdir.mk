################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/sdl_opengl/3d.cpp \
../src/sdl_opengl/quad.cpp \
../src/sdl_opengl/triangle.cpp 

OBJS += \
./src/sdl_opengl/3d.o \
./src/sdl_opengl/quad.o \
./src/sdl_opengl/triangle.o 

CPP_DEPS += \
./src/sdl_opengl/3d.d \
./src/sdl_opengl/quad.d \
./src/sdl_opengl/triangle.d 


# Each subdirectory must supply rules for building sources it contributes
src/sdl_opengl/3d.o: ../src/sdl_opengl/3d.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 `sdl-config --cflags --libs` -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/sdl_opengl/3d.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sdl_opengl/quad.o: ../src/sdl_opengl/quad.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 `sdl-config --cflags --libs` -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/sdl_opengl/quad.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sdl_opengl/triangle.o: ../src/sdl_opengl/triangle.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 `sdl-config --cflags --libs` -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/sdl_opengl/triangle.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


