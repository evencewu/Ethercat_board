## Setup cross-compile toolchain 
set(CROSS_COMPILE_PREFIX arm-none-eabi-)
include(${STM32_CMAKE_DIR}/cmake/gcc-arm-none-eabi.cmake)

## auto-set variables from user input
set(MCU_FLAGS "${CPU} -mthumb ${FPU} ${FLOAT_ABI}")
set(LINK_FLAGS "${MCU_FLAGS} -Wl,--gc-sections")
set(EXTRA_LINK_FLAGS "-Wl,-Map=${PROJECT_NAME}.map,--cref,--no-warn-mismatch -specs=nano.specs -specs=nosys.specs")
include(${STM32_CMAKE_DIR}/cmake/stm32-gcc-flags.cmake)

# print summary of configurations
message(STATUS "MCU_FAMILY: ${MCU_FAMILY}")
message(STATUS "MCU_NAME: ${MCU_NAME}")
message(STATUS "Specified C compiler: ${CMAKE_C_COMPILER}")
message(STATUS "Linker script: ${LINKER_SCRIPT}")
message(STATUS "Use Segger SystemView library: ${USE_SYSTEM_VIEW}")

## version information
set(VERSION_MAJOR 0 CACHE STRING "Project major version number.")
set(VERSION_MINOR 1 CACHE STRING "Project minor version number.")
set(VERSION_PATCH 0 CACHE STRING "Project patch version number.")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/${STM32_PROJ_FOLDER}/include)
if(USE_SYSTEM_VIEW)
add_definitions("-DENABLE_SYSTEMVIEW")
endif()

add_definitions("-DUSE_STDPERIPH_DRIVER")
add_definitions("-DSTM32F40_41xxx")



## add project components
set(ELF_TARGET ${PROJECT_NAME}.elf)
set(PROJ_DRIVER_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Driver)
set(PROJ_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Lib)

# project-specific modules
# add_subdirectory(driver)

# common libraries
add_subdirectory(${PROJ_DRIVER_PATH}/CMSIS ${CMAKE_BINARY_DIR}/libraries/CMSIS)
add_subdirectory(${PROJ_DRIVER_PATH}/STM32F4xx_StdPeriph_Driver ${CMAKE_BINARY_DIR}/libraries/STM32F4xx_StdPeriph_Driver)
add_subdirectory(${PROJ_LIB_PATH}/bsp ${CMAKE_BINARY_DIR}/libraries/bsp)

# STM32CubeMX generated source files
 set(MAIN_SRC
     ${STM32_PROJ_FOLDER}/src/ecatapp.c
     ${STM32_PROJ_FOLDER}/src/ecatapp.c
     ${STM32_PROJ_FOLDER}/src/main.c
     ${STM32_PROJ_FOLDER}/src/pdo_override.c
     ${STM32_PROJ_FOLDER}/startup_stm32f405xx.s
 )

add_executable(${ELF_TARGET} ${MAIN_SRC})
target_compile_definitions(${ELF_TARGET} PUBLIC -D${MCU_FAMILY})
target_link_libraries(${ELF_TARGET} PUBLIC cmsis main_bsp stm32f4xx_hw -lc -lm -lnosys)
target_link_libraries(${ELF_TARGET} PRIVATE -T${LINKER_SCRIPT} ${EXTRA_LINK_FLAGS})
target_include_directories(${ELF_TARGET} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Core/include>)

## add post-build targets
include(${STM32_CMAKE_DIR}/cmake/stm32-gcc-postbuild.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/${STM32_PROJ_FOLDER}/stm32-gcc-jlink.cmake)