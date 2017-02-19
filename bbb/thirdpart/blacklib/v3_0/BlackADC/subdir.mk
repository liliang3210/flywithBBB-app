################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../thirdpart/blacklib/v3_0/BlackADC/BlackADC.cpp 

OBJS += \
./thirdpart/blacklib/v3_0/BlackADC/BlackADC.o 

CPP_DEPS += \
./thirdpart/blacklib/v3_0/BlackADC/BlackADC.d 


# Each subdirectory must supply rules for building sources it contributes
thirdpart/blacklib/v3_0/BlackADC/%.o: ../thirdpart/blacklib/v3_0/BlackADC/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-linux-gnueabihf-g++ -std=c++0x -I/usr/arm-linux-gnueabihf/include/c++/4.8.4 -I"/home/liliang/workspace/flyWithMe/thirdpart/blacklib/v3_0/BlackPWM" -I"/home/liliang/workspace/flyWithMe/src/middleware" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


