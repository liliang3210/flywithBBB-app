################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../thirdpart/blacklib/v3_0/BlackUART/BlackUART.cpp 

OBJS += \
./thirdpart/blacklib/v3_0/BlackUART/BlackUART.o 

CPP_DEPS += \
./thirdpart/blacklib/v3_0/BlackUART/BlackUART.d 


# Each subdirectory must supply rules for building sources it contributes
thirdpart/blacklib/v3_0/BlackUART/%.o: ../thirdpart/blacklib/v3_0/BlackUART/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-linux-gnueabihf-g++ -std=c++0x -I"/home/liliang/workspace/flyWithMe/thirdpart/blacklib/v3_0/BlackPWM" -I"/home/liliang/workspace/flyWithMe/src/middleware" -I/usr/arm-linux-gnueabihf/include/c++/4.6.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


