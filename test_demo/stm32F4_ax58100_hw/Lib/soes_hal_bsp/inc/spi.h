#ifndef SRC_APP_SPI_H_
#define SRC_APP_SPI_H_

#include <stdint.h>
#include "stm32f4xx_conf.h"


#define SCS_LOW                           0
#define SCS_HIGH                          1

#if defined (STM32F4)

  #define SPIX_ESC                        SPI2 
  #define ESC_RCC_APB1PERIPH_SPIX         RCC_APB1Periph_SPI2
  #define ESC_GPIOX_AF_SPIx               GPIO_AF_SPI2

  #define ESC_RCC_APB1PERIPH_GPIOX_CTRL   RCC_AHB1Periph_GPIOA
  #define ESC_GPIOX_CTRL                  GPIOA
  
  #define ESC_GPIO_Pin_SCK                GPIO_Pin_10
  #define ESC_GPIOX_SCK                   GPIOB
  #define ESC_GPIO_PinSourceSCK           GPIO_PinSource10

  #define ESC_GPIO_Pin_MISO               GPIO_Pin_2
  #define ESC_GPIOX_MISO                  GPIOC
  #define ESC_GPIO_PinSource_MISO         GPIO_PinSource2

  #define ESC_GPIO_Pin_MOSI               GPIO_Pin_3
  #define ESC_GPIOX_MOSI                  GPIOC
  #define ESC_GPIO_PinSource_MOSI         GPIO_PinSource3

  #define ESC_RCC_APB1PERIPH_GPIOX_CS     RCC_AHB1Periph_GPIOB
  #define ESC_GPIOX_CS                    GPIOB
  #define ESC_GPIO_Pin_CS                 GPIO_Pin_8

#else
  #error "Platform not supported"
#endif

#if defined (LAN9252)
  #define SPIX_ESC_SCS                    SPI_NSS_Soft
  #define SCS_ACTIVE_POLARITY             SCS_LOW
  // Mode 0 per EasyCAT Arduino code
  #define SPIX_ESC_CPOL                   SPI_CPOL_Low
  #define SPIX_ESC_CPHA                   SPI_CPHA_1Edge
#elif defined (AX58100)
  #define SPIX_ESC_SCS                    SPI_NSS_Soft
  #define SCS_ACTIVE_POLARITY             SCS_LOW
  // Mode 0 per SDK settings
  #define SPIX_ESC_CPOL                   SPI_CPOL_High
  #define SPIX_ESC_CPHA                   SPI_CPHA_2Edge
#else
  #error "No supported ESC specified"
#endif


#define DUMMY_BYTE 0xFF
#define tout 5000

void spi_setup(void);
void spi_select (int8_t board);
void spi_unselect (int8_t board);
void spi_write (int8_t board, uint8_t *data, uint8_t size);
void spi_read (int8_t board, uint8_t *result, uint8_t size);
void spi_bidirectionally_transfer (int8_t board, uint8_t *result, uint8_t *data, uint8_t size);


#endif /* SRC_APP_SPI_H_ */
