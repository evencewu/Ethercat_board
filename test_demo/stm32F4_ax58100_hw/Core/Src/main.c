#include "stm32f4xx.h"
#include "delay.h"

#include "esc.h"
#include "ecat_slv.h"
#include "ecatapp.h"

#include "bsp_can.h"
#include "bsp_led.h"

__IO uint32_t flag;

CanTxMsg TxMessage; // 发送缓冲区
CanRxMsg RxMessage; // 接收缓冲区

// uint32_t ecatapp_benchmark_us(void);

int main(void)
{
	SysTick_Config(SystemCoreClock / 1000);
	delay_init();

	led_setup();
	CAN_Config();

	ecatapp_init();

 	//RxReset();
	CAN_FIFORelease(CAN1,CAN_FIFO0);

	CAN_SetMsg(&TxMessage);

	while (1)
	{
		// GPIO_SetBits(GPIOB, GPIO_Pin_15);
		// GPIO_SetBits(GPIOB, GPIO_Pin_14);
		// GPIO_SetBits(GPIOB, GPIO_Pin_13);

		// ecatapp_benchmark_us();
		CAN_Transmit(CANx, &TxMessage);
		ecat_slv();
		// ecatapp_loop();
	}
}

// uint32_t ecatapp_benchmark_us()
// {
//     // benchmark start
//     stopwatch_t st;
//     stopwatch_start(&st);

//     ecatapp_loop();

//     // benchmark stop
//     volatile uint32_t elapsed_us = stopwatch_now_us(&st);
//     static volatile uint32_t hiscore = 0;

//     if (elapsed_us > hiscore)
//     {
//         hiscore = elapsed_us;
//     }

//     if (STM_EVAL_IsPressed())
//     {
//         printf("PDI irq = %s \r\n", HEX4B(pdi_irq_flag));
//     }

//     return elapsed_us;
// }
