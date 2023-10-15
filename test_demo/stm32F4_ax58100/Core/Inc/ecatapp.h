#ifndef __ECATAPP_H__
#define __ECATAPP_H__


// update ESCvar.ALevent by reading anything over PDI
#define ESC_updateALevent()        ESC_read (ESCREG_LOCALTIME, (void *) &ESCvar.Time, sizeof (ESCvar.Time));

static uint8_t sync0_irq_flag = 0;
static uint8_t pdi_irq_flag = 0;

/* application setup */
void ecatapp_init(void);

/* app loop, call periodically */
void ecatapp_loop(void);


#endif // __ECATAPP_H__