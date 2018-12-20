################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractEmployee.cpp \
../src/AbstractEmployeeFactory.cpp \
../src/AbstractPersonAPI.cpp \
../src/AbstractSchool.cpp \
../src/Employee.cpp \
../src/EmployeeFactory.cpp \
../src/FinalExam.cpp \
../src/NEU.cpp \
../src/Person.cpp \
../src/School.cpp \
../src/SolutionsFinalExam.cpp \
../src/main.cpp 

OBJS += \
./src/AbstractEmployee.o \
./src/AbstractEmployeeFactory.o \
./src/AbstractPersonAPI.o \
./src/AbstractSchool.o \
./src/Employee.o \
./src/EmployeeFactory.o \
./src/FinalExam.o \
./src/NEU.o \
./src/Person.o \
./src/School.o \
./src/SolutionsFinalExam.o \
./src/main.o 

CPP_DEPS += \
./src/AbstractEmployee.d \
./src/AbstractEmployeeFactory.d \
./src/AbstractPersonAPI.d \
./src/AbstractSchool.d \
./src/Employee.d \
./src/EmployeeFactory.d \
./src/FinalExam.d \
./src/NEU.d \
./src/Person.d \
./src/School.d \
./src/SolutionsFinalExam.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


