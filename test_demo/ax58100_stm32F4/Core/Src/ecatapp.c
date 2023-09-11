#include "esc.h"
#include "ecat_slv.h"
#include "utypes.h"

#include "pdo_override.h"
#include "ecatapp.h"


/* CANopen Object Dictionary */

/* Application hook declaration */
void ecatapp(void);

/* SOES configuration */
/*
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
    .esc_check_dc_handler = NULL,
};
*/
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
    .esc_hw_interrupt_enable = ESC_interrupt_enable,
    .esc_hw_interrupt_disable = ESC_interrupt_disable,
    .esc_hw_eep_handler = NULL,
    .esc_check_dc_handler = NULL,
};

/*这个结构体是用来配置EtherCAT（以太网通信）的用户参数的。它包含了以下字段：

- `user_arg`：用户自定义参数，可以在回调函数中使用。
- `use_interrupt`：是否使用中断来处理EtherCAT通信。
- `watchdog_cnt`：看门狗计数器，用于监控EtherCAT通信的超时情况。
- `skip_default_initialization`：是否跳过默认初始化。
- `set_defaults_hook`：设置默认值的回调函数。
- `pre_state_change_hook`：状态改变前的回调函数。
- `post_state_change_hook`：状态改变后的回调函数。
- `application_hook`：应用程序的回调函数。
- `safeoutput_override`：安全输出的回调函数。
- `pre_object_download_hook`：对象下载前的回调函数。
- `post_object_download_hook`：对象下载后的回调函数。
- `pre_object_upload_hook`：对象上传前的回调函数。
- `post_object_upload_hook`：对象上传后的回调函数。
- `rxpdo_override`：接收PDO（Process Data Object）的回调函数。
- `txpdo_override`：发送PDO的回调函数。
- `esc_hw_interrupt_enable`：使能硬件中断的回调函数。
- `esc_hw_interrupt_disable`：禁用硬件中断的回调函数。
- `esc_hw_eep_handler`：EEP（EtherCAT EEPROM）处理的回调函数。
- `esc_check_dc_handler`：检查直流（DC）的回调函数。

用户可以根据自己的需求配置这些回调函数，以实现对EtherCAT通信的控制和管理。*/

void ecatapp_init(void) {
    ecat_slv_init(&config);
	//init_override();
}

void ecatapp()
{

}

void cb_get_inputs()
{
    /* SOES reqires this function but nothing to do here in CiA402 app */
}


void cb_set_outputs()
{
    /* SOES reqires this function but nothing to do here in CiA402 app */
}

