################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LCD/LCD_prog.c 

OBJS += \
./HAL/LCD/LCD_prog.o 

C_DEPS += \
./HAL/LCD/LCD_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LCD/%.o: ../HAL/LCD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\MCAL\ADC" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\HAL\LCD" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\APP" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\HAL" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\MCAL" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\Glove_For_Deaf\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


