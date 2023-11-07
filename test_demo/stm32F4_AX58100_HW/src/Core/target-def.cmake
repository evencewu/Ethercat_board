# Target-specific flags
set(MCU_ARCH ARMCM3)
set(MCU_FAMILY STM32F103xB)
set(MCU_NAME STM32F103C8)

# You can find the following values from ./cubemx/Makefile
set(CPU "-mcpu=cortex-m3")
set(FPU "")
set(FLOAT_ABI "")

set(LINKER_SCRIPT ${CMAKE_CURRENT_LIST_DIR}/STM32F405RGTx_FLASH.ld)

option(USE_SYSTEM_VIEW "Enable Segger SystemView library" OFF)