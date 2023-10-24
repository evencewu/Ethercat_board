#include "esc.h"
#include "ecat_slv.h"
#include "utypes.h"

#include "esc_irq.h"
#include "ecatapp.h"

#include "main.h"

/* CANopen Object Dictionary */
_Objects Obj;

/* Application hook declaration */
void ecatapp(void);

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
    .rxpdo_override = NULL,
    .txpdo_override = NULL,
    .esc_hw_interrupt_enable = NULL,
    .esc_hw_interrupt_disable = NULL,
    .esc_hw_eep_handler = NULL,
    .esc_check_dc_handler = NULL,
};

void ecatapp()
{

}

void ecatapp_init(void)
{
    ecat_slv_init(&config);
}

void cb_get_inputs()
{
    /* SOES reqires this function but nothing to do here in CiA402 app */
}

void cb_set_outputs()
{
    /* SOES reqires this function but nothing to do here in CiA402 app */
}


