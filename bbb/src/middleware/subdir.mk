################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/middleware/SpeedChange.cpp 

OBJS += \
./src/middleware/SpeedChange.o 

CPP_DEPS += \
./src/middleware/SpeedChange.d 


# Each subdirectory must supply rules for building sources it contributes
src/middleware/%.o: ../src/middleware/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-linux-gnueabihf-g++ -std=c++0x -I/usr/arm-linux-gnueabihf/include/c++/4.8.4 -I"/home/liliang/workspace/flyWithMe/thirdpart/blacklib/v3_0/BlackPWM" -I"/home/liliang/workspace/flyWithMe/src/middleware" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


