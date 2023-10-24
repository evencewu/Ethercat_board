#include "esc_coe.h"
#include "utypes.h"
#include <stddef.h>


static const char acName1000[] = "Device Type";
static const char acName1001[] = "Error register";
static const char acName1008[] = "Device Name";
static const char acName1009[] = "Hardware Version";
static const char acName100A[] = "Software Version";
static const char acName1018[] = "Identity Object";
static const char acName1018_00[] = "Max SubIndex";
static const char acName1018_01[] = "Vendor ID";
static const char acName1018_02[] = "Product Code";
static const char acName1018_03[] = "Revision Number";
static const char acName1018_04[] = "Serial Number";
static const char acName10F1[] = "Error Settings";
static const char acName10F1_00[] = "Max SubIndex";
static const char acName10F1_01[] = "Local Error Reaction";
static const char acName10F1_02[] = "SyncErrorCounterLimit";
static const char acName1600[] = "LED2";
static const char acName1600_00[] = "Max SubIndex";
static const char acName1600_01[] = "LED2";
static const char acName1A00[] = "LED1";
static const char acName1A00_00[] = "Max SubIndex";
static const char acName1A00_01[] = "LED1";
static const char acName1C00[] = "Sync Manager Communication Type";
static const char acName1C00_00[] = "Max SubIndex";
static const char acName1C00_01[] = "Communications Type SM0";
static const char acName1C00_02[] = "Communications Type SM1";
static const char acName1C00_03[] = "Communications Type SM2";
static const char acName1C00_04[] = "Communications Type SM3";
static const char acName1C12[] = "Sync Manager 2 PDO Assignment";
static const char acName1C12_00[] = "Max SubIndex";
static const char acName1C12_01[] = "PDO Mapping";
static const char acName1C13[] = "Sync Manager 3 PDO Assignment";
static const char acName1C13_00[] = "Max SubIndex";
static const char acName1C13_01[] = "PDO Mapping";
static const char acName1C32[] = "Sync Manager 2 Parameters";
static const char acName1C32_00[] = "Max SubIndex";
static const char acName1C32_01[] = "Sync mode";
static const char acName1C32_02[] = "CycleTime";
static const char acName1C32_03[] = "ShiftTime";
static const char acName1C32_04[] = "Sync modes supported";
static const char acName1C32_05[] = "Minimum Cycle Time";
static const char acName1C33[] = "Sync Manager 3 Parameters";
static const char acName1C33_00[] = "Max SubIndex";
static const char acName1C33_01[] = "Sync mode";
static const char acName1C33_02[] = "CycleTime";
static const char acName1C33_03[] = "ShiftTime";
static const char acName1C33_04[] = "Sync modes supported";
static const char acName1C33_05[] = "Minimum Cycle Time";
static const char acName6000[] = "LED1";
static const char acName6060[] = "Modes of operation";
static const char acName6061[] = "Mode of operation display";
static const char acName6502[] = "Supported drive modes";
static const char acName7000[] = "LED2";

const _objd SDO1000[] =
{
  {0x0, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1000, 5001, NULL},
};
const _objd SDO1001[] =
{
  {0x0, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1001, 0, &Obj.Error_register},
};
const _objd SDO1008[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 376, ATYPE_RO, acName1008, 0, "2-channel Hypergalactic input superimpermanator"},
};
const _objd SDO1009[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 40, ATYPE_RO, acName1009, 0, "0.0.1"},
};
const _objd SDO100A[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 40, ATYPE_RO, acName100A, 0, "0.0.1"},
};
const _objd SDO1018[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1018_00, 4, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1018_01, 0, NULL},
  {0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1018_02, 700707, NULL},
  {0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1018_03, 2, NULL},
  {0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1018_04, 1, &Obj.serial},
};
const _objd SDO10F1[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName10F1_00, 2, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName10F1_01, 0, &Obj.Error_Settings.Local_Error_Reaction},
  {0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName10F1_02, 200, &Obj.Error_Settings.SyncErrorCounterLimit},
};
const _objd SDO1600[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1600_00, 1, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1600_01, 0x70000008, NULL},
};
const _objd SDO1A00[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1A00_00, 1, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1A00_01, 0x60000008, NULL},
};
const _objd SDO1C00[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C00_00, 4, NULL},
  {0x01, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C00_01, 1, NULL},
  {0x02, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C00_02, 2, NULL},
  {0x03, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C00_03, 3, NULL},
  {0x04, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C00_04, 4, NULL},
};
const _objd SDO1C12[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C12_00, 1, NULL},
  {0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO, acName1C12_01, 0x1600, NULL},
};
const _objd SDO1C13[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C13_00, 1, NULL},
  {0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO, acName1C13_01, 0x1A00, NULL},
};
const _objd SDO1C32[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C32_00, 5, NULL},
  {0x01, DTYPE_UNSIGNED16, 16, ATYPE_RWpre, acName1C32_01, 1, &Obj.Sync_Manager_2_Parameters.Sync_mode},
  {0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1C32_02, 0, &Obj.Sync_Manager_2_Parameters.CycleTime},
  {0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1C32_03, 0, &Obj.Sync_Manager_2_Parameters.ShiftTime},
  {0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO, acName1C32_04, 6, &Obj.Sync_Manager_2_Parameters.Sync_modes_supported},
  {0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1C32_05, 125000, &Obj.Sync_Manager_2_Parameters.Minimum_Cycle_Time},
};
const _objd SDO1C33[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acName1C33_00, 5, NULL},
  {0x01, DTYPE_UNSIGNED16, 16, ATYPE_RWpre, acName1C33_01, 1, &Obj.Sync_Manager_3_Parameters.Sync_mode},
  {0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1C33_02, 0, &Obj.Sync_Manager_3_Parameters.CycleTime},
  {0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1C33_03, 0, &Obj.Sync_Manager_3_Parameters.ShiftTime},
  {0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO, acName1C33_04, 6, &Obj.Sync_Manager_3_Parameters.Sync_modes_supported},
  {0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName1C33_05, 125000, &Obj.Sync_Manager_3_Parameters.Minimum_Cycle_Time},
};
const _objd SDO6000[] =
{
  {0x0, DTYPE_UNSIGNED8, 8, ATYPE_RO | ATYPE_TXPDO, acName6000, 0, &Obj.LED1},
};
const _objd SDO6060[] =
{
  {0x0, DTYPE_INTEGER8, 8, ATYPE_RO, acName6060, 0, &Obj.Modes_of_operation},
};
const _objd SDO6061[] =
{
  {0x0, DTYPE_INTEGER8, 8, ATYPE_RO, acName6061, 0, &Obj.Mode_of_operation_display},
};
const _objd SDO6502[] =
{
  {0x0, DTYPE_UNSIGNED32, 32, ATYPE_RO, acName6502, 0, &Obj.Supported_drive_modes},
};
const _objd SDO7000[] =
{
  {0x0, DTYPE_UNSIGNED8, 8, ATYPE_RO | ATYPE_RXPDO, acName7000, 0, &Obj.LED2},
};

const _objectlist SDOobjects[] =
{
  {0x1000, OTYPE_VAR, 0, 0, acName1000, SDO1000},
  {0x1001, OTYPE_VAR, 0, 0, acName1001, SDO1001},
  {0x1008, OTYPE_VAR, 0, 0, acName1008, SDO1008},
  {0x1009, OTYPE_VAR, 0, 0, acName1009, SDO1009},
  {0x100A, OTYPE_VAR, 0, 0, acName100A, SDO100A},
  {0x1018, OTYPE_RECORD, 4, 0, acName1018, SDO1018},
  {0x10F1, OTYPE_RECORD, 2, 0, acName10F1, SDO10F1},
  {0x1600, OTYPE_RECORD, 1, 0, acName1600, SDO1600},
  {0x1A00, OTYPE_RECORD, 1, 0, acName1A00, SDO1A00},
  {0x1C00, OTYPE_ARRAY, 4, 0, acName1C00, SDO1C00},
  {0x1C12, OTYPE_ARRAY, 1, 0, acName1C12, SDO1C12},
  {0x1C13, OTYPE_ARRAY, 1, 0, acName1C13, SDO1C13},
  {0x1C32, OTYPE_RECORD, 5, 0, acName1C32, SDO1C32},
  {0x1C33, OTYPE_RECORD, 5, 0, acName1C33, SDO1C33},
  {0x6000, OTYPE_VAR, 0, 0, acName6000, SDO6000},
  {0x6060, OTYPE_VAR, 0, 0, acName6060, SDO6060},
  {0x6061, OTYPE_VAR, 0, 0, acName6061, SDO6061},
  {0x6502, OTYPE_VAR, 0, 0, acName6502, SDO6502},
  {0x7000, OTYPE_VAR, 0, 0, acName7000, SDO7000},
  {0xffff, 0xff, 0xff, 0xff, NULL, NULL}
};
