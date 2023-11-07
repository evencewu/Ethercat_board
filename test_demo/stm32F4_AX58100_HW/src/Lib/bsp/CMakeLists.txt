set(MAIN_BSP_SRC
    Src/delay.c
    Src/stm32f4_discovery.c
    Src/system_stm32f4xx.c
    Src/usart.c
)

add_library(main_bsp ${MAIN_BSP_SRC})
target_link_libraries(main_bsp PUBLIC stm32f4xx_hw)
target_include_directories(main_bsp PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Inc>
  PRIVATE src)