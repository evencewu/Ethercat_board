#include "stm32f4xx.h"
#include "delay.h"

#include "esc.h"
#include "ecat_slv.h"
#include "ecatapp.h"


// uint32_t ecatapp_benchmark_us(void);


int main(void)
{
  	SysTick_Config(SystemCoreClock / 1000);
	delay_init(); 
    ecatapp_init();
    

	while (1)
	{
        // ecatapp_benchmark_us();
        ecatapp_loop();
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
