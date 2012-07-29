################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/qt_gui/qt_gui.o 

CPP_SRCS += \
../src/qt_gui/qt_gui.cpp 

OBJS += \
./src/qt_gui/qt_gui.o 

CPP_DEPS += \
./src/qt_gui/qt_gui.d 


# Each subdirectory must supply rules for building sources it contributes
src/qt_gui/qt_gui.o: ../src/qt_gui/qt_gui.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -c -pipe -O2 -Wall -W -D_REENTRANT -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -o /home/maik/Eclipse/Spielwiese/src/qt_gui/qt_gui.o /home/maik/Eclipse/Spielwiese/src/qt_gui/qt_gui.cpp; g++ -Wl,-O1 -o /home/maik/Eclipse/Spielwiese/src/qt_gui/qt_gui /home/maik/Eclipse/Spielwiese/src/qt_gui/qt_gui.o    -L/usr/lib/i386-linux-gnu -lQtGui -lQtCore -lpthread; -O0 -g3 -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/qt_gui/qt_gui.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


