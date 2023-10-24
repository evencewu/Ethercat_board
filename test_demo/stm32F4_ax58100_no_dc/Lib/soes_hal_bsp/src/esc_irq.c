#include "esc_irq.h"
#include <stdint.h>
#include "main.h"
void EXTILine1_Config(void)
{
    HAL_NVIC_EnableIRQ(EXTI0_IRQn);
}

void EXTILine1_Disable(void)
{
    HAL_NVIC_DisableIRQ(EXTI0_IRQn);
}

void EXTILine3_Config(void)
{
    HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);
}

void EXTILine3_Disable(void)
{
    HAL_NVIC_DisableIRQ(EXTI9_5_IRQn);
}
