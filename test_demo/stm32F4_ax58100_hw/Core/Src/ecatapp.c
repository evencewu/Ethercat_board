#include "esc.h"
#include "ecat_slv.h"
#include "utypes.h"

#include "esc_irq.h"
#include "pdo_override.h"
#include "ecatapp.h"
#include "stm32f4xx.h"

/* CANopen Object Dictionary */
_Objects Obj;

/* Application hook declaration */
void ecatapp(void);
uint16_t check_dc_handler(void);

/* SOES configuration */
static esc_cfg_t config = {
    .user_arg = "ax58100",
    .use_interrupt = 1,
    .watchdog_cnt = INT32_MAX,
    .set_defaults_hook = NULL,
    .pre_state_change_hook = NULL,
    .post_state_change_hook = NULL,
    .application_hook = ecatapp,
    .safeoutput_override = NULL,
    .pre_object_download_hook = NULL,
    .post_object_download_hook = NULL,
    .rxpdo_override = rxpdo_override,
    .txpdo_override = txpdo_override,
    .esc_hw_interrupt_enable = ESC_interrupt_enable,
    .esc_hw_interrupt_disable = ESC_interrupt_disable,
    .esc_hw_eep_handler = NULL,
    .esc_check_dc_handler = check_dc_handler,
};

/* CiA402 motion control configuration */

// **************************************************************

static uint8_t sync0_irq_flag = 0;

void EXTI0_IRQHandler(void)
{
    if (EXTI_GetITStatus(EXTI_Line0) != RESET)
    {
        EXTI_ClearITPendingBit(EXTI_Line0);
        sync0_irq_flag = 1;
    }
}

static uint8_t pdi_irq_flag = 0;

void EXTI9_5_IRQHandler(void)
{
    if (EXTI_GetITStatus(EXTI_Line5) != RESET)
    {
        EXTI_ClearITPendingBit(EXTI_Line5);
        pdi_irq_flag = 1;
    }
}
// **************************************************************

void ecatapp_init(void)
{
    ecat_slv_init(&config);
    init_override();
}

uint16_t check_dc_handler(void)
{
// minimum watchdog value is 1 ms, in nanoseconds
#define MIN_WATCHDOG_VALUE_NS 1000000

    /* Indicate we run DC */
    ESCvar.dcsync = 1;
    /* Fetch the sync counter limit (SDO10F1) */
    ESCvar.synccounterlimit = Obj.Error_Settings.SyncErrorCounterLimit;

    uint32_t sync0cycleTime = ESC_enable_DC();
    Obj.Sync_Manager_2_Parameters.CycleTime = sync0cycleTime;
    // Obj.Sync_Manager_3_Parameters.CycleTime = sync0cycleTime;
    // calculate watchdog value as 2 x SYNC0 cycle time
    int watchdog_value = 2 * sync0cycleTime;
    if (watchdog_value < MIN_WATCHDOG_VALUE_NS)
    {
        watchdog_value = MIN_WATCHDOG_VALUE_NS;
    }
    APP_setwatchdog(watchdog_value);

    return 0;
}

void ecatapp()
{
}

void cb_get_inputs()
{
    if (Obj.led_rx.led1_rx != 0)
    {
        GPIO_SetBits(GPIOB, GPIO_Pin_15);
    }
    else
    {
        GPIO_ResetBits(GPIOB, GPIO_Pin_15);
    }

    if (Obj.led_rx.led2_rx != 0)
    {
        GPIO_SetBits(GPIOB, GPIO_Pin_14);
    }
    else
    {
        GPIO_ResetBits(GPIOB, GPIO_Pin_14);
    }
}

void cb_set_outputs()
{
    Obj.led_tx.led1_tx = Obj.led_rx.led1_rx;
    Obj.led_tx.led2_tx = Obj.led_rx.led2_rx;
}

void ecatapp_loop(void)
{
    // stack in mixed mode
    if (sync0_irq_flag)
    {
        ESC_updateALevent();
        DIG_process(DIG_PROCESS_APP_HOOK_FLAG | DIG_PROCESS_INPUTS_FLAG);
        sync0_irq_flag = 0;
    }
    if (pdi_irq_flag)
    {
        ESC_updateALevent();
        if (ESCvar.dcsync)
        {
            DIG_process(DIG_PROCESS_OUTPUTS_FLAG);
        }
        else
        {
            DIG_process(DIG_PROCESS_OUTPUTS_FLAG | DIG_PROCESS_APP_HOOK_FLAG | DIG_PROCESS_INPUTS_FLAG);
        }
        pdi_irq_flag = 0;
    }
    else
    {
        // ecat_slv_worker(ESCREG_ALEVENT_CONTROL | ESCREG_ALEVENT_SMCHANGE
        //                 | ESCREG_ALEVENT_SM0 | ESCREG_ALEVENT_SM1);
        ecat_slv_poll();
        DIG_process(DIG_PROCESS_WD_FLAG);
    }
}