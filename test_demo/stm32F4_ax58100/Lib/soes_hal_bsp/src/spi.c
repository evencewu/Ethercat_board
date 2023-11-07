#include "spi.h"
#include "main.h"

extern SPI_HandleTypeDef hspi2;

void spi_gpio_setup(void)
{
    // init in hal
}

void spi_setup(void)
{
    // init in hal
}

void spi_select(int8_t board)
{
    HAL_GPIO_WritePin(SPI2_NSS_GPIO_Port, SPI2_NSS_Pin, GPIO_PIN_RESET);
}

void spi_unselect(int8_t board)
{
    HAL_GPIO_WritePin(SPI2_NSS_GPIO_Port, SPI2_NSS_Pin, GPIO_PIN_SET);
}

void spi_write(int8_t board, uint8_t *data, uint8_t size)
{
    HAL_SPI_Transmit(&hspi2, data, size, 1000);
}

void spi_bidirectionally_transfer(int8_t board, uint8_t *result, uint8_t *data, uint8_t size)
{
    HAL_SPI_TransmitReceive(&hspi2, data, result, size, 1000);
}
