#ifndef __BSP_CAN_H__
#define __BSP_CAN_H__

#include "stm32f4xx_conf.h"

/*CAN硬件相关的定义*/

#define CANx CAN1

#define CAN_CLK RCC_APB1Periph_CAN1

/*接收中断号*/

#define CAN_RX_IRQ CAN1_RX0_IRQn

/*接收中断服务函数*/

#define CAN_RX_IRQHandler CAN1_RX0_IRQHandler

#define CAN_RX_PIN GPIO_Pin_11
#define CAN_TX_PIN GPIO_Pin_12
#define CAN_TX_GPIO_PORT GPIOA
#define CAN_RX_GPIO_PORT GPIOA
#define CAN_TX_GPIO_CLK RCC_AHB1Periph_GPIOA
#define CAN_RX_GPIO_CLK RCC_AHB1Periph_GPIOA
#define CAN_AF_PORT GPIO_AF_CAN1
#define CAN_RX_SOURCE GPIO_PinSource11
#define CAN_TX_SOURCE GPIO_PinSource12

void CAN_Config(void);
void CAN_SetMsg(CanTxMsg *TxMessage);

#endif