#ifndef __UTYPES_H__
#define __UTYPES_H__

#include "cc.h"

/* Object dictionary storage */

typedef struct
{
   /* Identity */

   uint32_t serial;

   /* Inputs */

   struct
   {
      uint8_t led1_tx;
      uint8_t led2_tx;
   } led_tx;

   /* Outputs */

   struct
   {
      uint8_t led2_rx;
      uint8_t led1_rx;
   } led_rx;

   /* Parameters */

   uint8_t Error_register;
   struct
   {
      uint32_t Local_Error_Reaction;
      uint32_t SyncErrorCounterLimit;
   } Error_Settings;
   struct
   {
      uint16_t Sync_mode;
      uint32_t CycleTime;
      uint32_t ShiftTime;
      uint16_t Sync_modes_supported;
      uint32_t Minimum_Cycle_Time;
   } Sync_Manager_2_Parameters;
   struct
   {
      uint16_t Sync_mode;
      uint32_t CycleTime;
      uint32_t ShiftTime;
      uint16_t Sync_modes_supported;
      uint32_t Minimum_Cycle_Time;
   } Sync_Manager_3_Parameters;
   int8_t Modes_of_operation;
   int8_t Mode_of_operation_display;
   uint32_t Supported_drive_modes;
} _Objects;

extern _Objects Obj;

#endif /* __UTYPES_H__ */
