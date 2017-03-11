################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include thirdpart/blacklib/v3_0/BlackUART/subdir.mk
-include thirdpart/blacklib/v3_0/BlackTime/subdir.mk
-include thirdpart/blacklib/v3_0/BlackThread/subdir.mk
-include thirdpart/blacklib/v3_0/BlackSPI/subdir.mk
-include thirdpart/blacklib/v3_0/BlackPWM/subdir.mk
-include thirdpart/blacklib/v3_0/BlackMutex/subdir.mk
-include thirdpart/blacklib/v3_0/BlackI2C/subdir.mk
-include thirdpart/blacklib/v3_0/BlackGPIO/subdir.mk
-include thirdpart/blacklib/v3_0/BlackDirectory/subdir.mk
-include thirdpart/blacklib/v3_0/BlackADC/subdir.mk
-include thirdpart/blacklib/v3_0/subdir.mk
-include src/middleware/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: flyWithMe

# Tool invocations
flyWithMe: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	arm-linux-gnueabihf-g++ -L/usr/arm-linux-gnueabihf/lib -L/usr/arm-linux-gnueabihf/libsf -L/home/liliang/Downloads/boost_1_63_0/stage/lib -o "flyWithMe" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS)$(C_DEPS) flyWithMe
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
