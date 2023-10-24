#include "rst.h"
#include "main.h"

void rst_setup(void)
{
    HAL_GPIO_WritePin(nRST_GPIO_Port, nRST_Pin, GPIO_PIN_SET);
}

void rst_low(void)
{ /* Set RSTN line low */
    HAL_GPIO_WritePin(nRST_GPIO_Port, nRST_Pin, GPIO_PIN_RESET);
}

void rst_high(void)
{
    /* Set RSTN line high */
    HAL_GPIO_WritePin(nRST_GPIO_Port, nRST_Pin, GPIO_PIN_SET);
}

void rst_check_start(void)
{
    HAL_GPIO_WritePin(nRST_GPIO_Port, nRST_Pin, GPIO_PIN_SET);
}

uint8_t is_esc_reset(void)
{
    /* Check if ESC pulled RSTN line up */
    return HAL_GPIO_ReadPin(nRST_GPIO_Port, nRST_Pin);
}