/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Components/Rte_Sa_HwTrq2.h
 *     Workspace:  C:/Sankar/Chrysler/Synergy/CL/Temp_work/Chrysler_LWR_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Mon Jul 18 14:56:54 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SA_HWTRQ2_H
# define _RTE_SA_HWTRQ2_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AnaDiffHwTrq_Volt_f32 (0.0F)
#  define Rte_InitValue_AnaHwTorque_HwNm_f32 (0.0F)
#  define Rte_InitValue_HwTrqScaleVal_VoltsPerDeg_f32 (0.0F)
#  define Rte_InitValue_SysCHwTorqueSqd_HwNmSq_f32 (0.0F)
#  define Rte_InitValue_SysCT1ADC_Volt_f32 (0.0F)
#  define Rte_InitValue_SysCT2ADC_Volt_f32 (0.0F)
#  define Rte_InitValue_T1TrimVal_Volt_f32 (0.0F)
#  define Rte_InitValue_T2TrimVal_Volt_f32 (0.0F)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_2ms_8, RTE_VAR_NOINIT) Rte_Task_2ms_8;

extern VAR(Rte_tsTask_4ms_8, RTE_VAR_NOINIT) Rte_Task_4ms_8;

extern VAR(Rte_tsTask_100ms_8, RTE_VAR_NOINIT) Rte_Task_100ms_8;

#  define RTE_STOP_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/

# define RTE_STOP_SEC_CODE
# include "MemMap.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

#  define Rte_IRead_HwTrq2_Per1_HwTrqScaleVal_VoltsPerDeg_f32() \
  (Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_HwTrqScaleVal_VoltsPerDeg_f32.value)

#  define Rte_IRead_HwTrq2_Per1_SysCT1ADC_Volt_f32() \
  (Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCT1ADC_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per1_SysCT2ADC_Volt_f32() \
  (Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCT2ADC_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per1_T1TrimVal_Volt_f32() \
  (Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_T1TrimVal_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per1_T2TrimVal_Volt_f32() \
  (Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_T2TrimVal_Volt_f32.value)

#  define Rte_IWrite_HwTrq2_Per1_SysCHwTorqueSqd_HwNmSq_f32(data) \
  ( \
    Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCHwTorqueSqd_HwNmSq_f32.value = (data) \
  )

#  define Rte_IWriteRef_HwTrq2_Per1_SysCHwTorqueSqd_HwNmSq_f32() \
  (&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCHwTorqueSqd_HwNmSq_f32.value)

#  define Rte_IRead_HwTrq2_Per2_AnaHwTorque_HwNm_f32() \
  (Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_AnaHwTorque_HwNm_f32.value)

#  define Rte_IRead_HwTrq2_Per2_SysCT1ADC_Volt_f32() \
  (Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_SysCT1ADC_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per2_SysCT2ADC_Volt_f32() \
  (Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_SysCT2ADC_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per2_T1TrimVal_Volt_f32() \
  (Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_T1TrimVal_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per2_T2TrimVal_Volt_f32() \
  (Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_T2TrimVal_Volt_f32.value)

#  define Rte_IRead_HwTrq2_Per3_AnaDiffHwTrq_Volt_f32() \
  (Rte_Task_100ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per3.Rte_AnaDiffHwTrq_Volt_f32.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_WDGM_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_WDGM_APPL_CODE) WdgM_CheckpointReached(WdgM_SupervisedEntityIdType parg0, WdgM_CheckpointIdType parg1);
#  define RTE_STOP_SEC_WDGM_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_HwTrq2_Per3_CP0_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)2, (WdgM_CheckpointIdType)0))
#  define RTE_START_SEC_AP_DIAGMGR8_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR8_APPL_CODE) NxtrDiagMgr8_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR8_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr8_SetNTCStatus


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_SA_HWTRQ2_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_SA_HWTRQ2_APPL_CODE) HwTrq2_Init1(void);

FUNC(void, RTE_SA_HWTRQ2_APPL_CODE) HwTrq2_Per1(void);

FUNC(void, RTE_SA_HWTRQ2_APPL_CODE) HwTrq2_Per2(void);

FUNC(void, RTE_SA_HWTRQ2_APPL_CODE) HwTrq2_Per3(void);

# define RTE_STOP_SEC_SA_HWTRQ2_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

#  define RTE_E_WdgM_CheckpointReached_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1468867288
#    error "The magic number of the generated file <C:/Sankar/Chrysler/Synergy/CL/Temp_work/Chrysler_LWR_EPS_TMS570/SwProject/Source/GenDataRte/Components/Rte_Sa_HwTrq2.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1468867288
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SA_HWTRQ2_H */
