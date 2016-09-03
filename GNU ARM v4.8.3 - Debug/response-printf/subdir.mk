################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA/utils/response_print/response_print.c 

OBJS += \
./response-printf/response_print.o 

C_DEPS += \
./response-printf/response_print.d 


# Each subdirectory must supply rules for building sources it contributes
response-printf/response_print.o: C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA/utils/response_print/response_print.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb '-DEFR32FG1P133F256GM48=1' '-DBOARD_BRD4250A=1' '-DCONFIGURATION_HEADER="rail-configuration.h"' '-DRETARGET_VCOM=1' -IC:/Users/oldcat/SimplicityStudio/v3_workspace/rangetest -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//utils/memory_manager" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//utils/command_interpreter" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/rtcdrv/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/ustimer/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/gpiointerrupt/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/common/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emlib/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/kits/common/bsp" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/kits/common/drivers" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//hal/efr32" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/rail_lib/common" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//apps/rangetest/config" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//apps/rangetest" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/spidrv/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/dmadrv/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/emdrv/uartdrv/inc" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/reptile/glib" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/reptile/glib/glib" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/reptile/glib/dmd" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//utils/response_print" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/rail_lib/chip/efr32/rf/common/cortex" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/rail_lib/chip/efr32" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/kits/EFR32FG1_BRD4250A/config" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/CMSIS/Include" -I"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//submodules/Device/SiliconLabs/EFR32FG1P/Include" -Os -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -std=gnu99 -MMD -MP -MF"response-printf/response_print.d" -MT"response-printf/response_print.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


