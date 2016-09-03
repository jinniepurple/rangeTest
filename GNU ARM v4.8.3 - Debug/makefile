################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include response-printf/subdir.mk
-include rangetest-base/subdir.mk
-include hal-efr32/subdir.mk
-include command-interpreter/subdir.mk
-include buffer-pool-memory-manager/subdir.mk
-include CMSIS/efr32fg1p/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: rangetest.axf

# Tool invocations
rangetest.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "rangetest.ld" -L"C:/SiliconLabs/SiliconLabsRAIL/1.2.0.0-GA//autogen/librail_release/" -Xlinker --gc-sections -Xlinker -Map="rangetest.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -u _printf_float -o rangetest.axf "./graphics.o" "./menu.o" "./pushButton.o" "./rail-callback-stubs.o" "./rail-callbacks.o" "./rail_config.o" "./rangeTest.o" "./rangetestconfig.o" "./seq.o" "./response-printf/response_print.o" "./rangetest-base/bsp_bcc.o" "./rangetest-base/bsp_stk.o" "./rangetest-base/bsp_stk_leds.o" "./rangetest-base/display.o" "./rangetest-base/displayls013b7dh03.o" "./rangetest-base/displaypalemlib.o" "./rangetest-base/dmactrl.o" "./rangetest-base/dmadrv.o" "./rangetest-base/dmd_display.o" "./rangetest-base/glib.o" "./rangetest-base/glib_bitmap.o" "./rangetest-base/glib_font_narrow_6x8.o" "./rangetest-base/glib_font_normal_8x8.o" "./rangetest-base/glib_line.o" "./rangetest-base/glib_rectangle.o" "./rangetest-base/glib_string.o" "./rangetest-base/uartdrv.o" "./rangetest-base/udelay.o" "./hal-efr32/bsp_trace.o" "./hal-efr32/em_assert.o" "./hal-efr32/em_cmu.o" "./hal-efr32/em_emu.o" "./hal-efr32/em_gpio.o" "./hal-efr32/em_int.o" "./hal-efr32/em_ldma.o" "./hal-efr32/em_leuart.o" "./hal-efr32/em_rmu.o" "./hal-efr32/em_rtc.o" "./hal-efr32/em_rtcc.o" "./hal-efr32/em_system.o" "./hal-efr32/em_timer.o" "./hal-efr32/em_usart.o" "./hal-efr32/gpiointerrupt.o" "./hal-efr32/hal_common.o" "./hal-efr32/hal_efr.o" "./hal-efr32/retargetio.o" "./hal-efr32/retargetserial.o" "./hal-efr32/rtcdriver.o" "./hal-efr32/ustimer.o" "./command-interpreter/command_interpreter.o" "./buffer-pool-memory-manager/buffer_pool_allocator.o" "./buffer-pool-memory-manager/rail_integration.o" "./CMSIS/efr32fg1p/startup_efr32fg1p.o" "./CMSIS/efr32fg1p/system_efr32fg1p.o" -lrail_efr32_gcc_release -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: rangetest.hex'
	arm-none-eabi-objcopy -O ihex "rangetest.axf" "rangetest.hex"
	@echo ' '

	@echo 'Building bin file: rangetest.bin'
	arm-none-eabi-objcopy -O binary "rangetest.axf" "rangetest.bin"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "rangetest.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) rangetest.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
