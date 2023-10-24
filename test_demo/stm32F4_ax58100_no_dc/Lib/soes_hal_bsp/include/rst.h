#ifndef __HAL_NRST_H__
#define __HAL_NRST_H__

#include <stdint.h>


void rst_setup(void);
void rst_low(void);
void rst_high(void);

void rst_check_start(void);
uint8_t is_esc_reset(void);

#endif /* __HAL_NRST_H__ */
