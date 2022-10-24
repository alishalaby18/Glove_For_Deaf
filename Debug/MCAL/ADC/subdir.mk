################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/ADC/ADC_Prog.c 

OBJS += \
./MCAL/ADC/ADC_Prog.o 

C_DEPS += \
./MCAL/ADC/ADC_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/ADC/%.o: ../MCAL/ADC/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\MCAL\ADC" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\HAL\LCD" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\APP" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\HAL" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\MCAL" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


