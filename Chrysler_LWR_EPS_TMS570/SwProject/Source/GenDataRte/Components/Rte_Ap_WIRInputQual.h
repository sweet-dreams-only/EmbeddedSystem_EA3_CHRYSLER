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
 *          File:  Components/Rte_Ap_WIRInputQual.h
 *     Workspace:  C:/Sankar/Chrysler/Synergy/CL/Temp_work/Chrysler_LWR_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Mon Jul 18 14:56:53 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_WIRINPUTQUAL_H
# define _RTE_AP_WIRINPUTQUAL_H

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

#  define Rte_InitValue_QualWhlFreqL_Hz_f32 (0.0F)
#  define Rte_InitValue_QualWhlFreqR_Hz_f32 (0.0F)
#  define Rte_InitValue_SrlComLWhlSpd_Hz_f32 (0.0F)
#  define Rte_InitValue_SrlComLWhlSpdVld_Cnt_lgc (FALSE)
#  define Rte_InitValue_SrlComRWhlSpd_Hz_f32 (0.0F)
#  define Rte_InitValue_SrlComRWhlSpdVld_Cnt_lgc (FALSE)
#  define Rte_InitValue_WhlFreqQualified_Cnt_lgc (TRUE)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_2ms_10, RTE_VAR_NOINIT) Rte_Task_2ms_10;

#  define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
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

#  define Rte_IRead_WIRInputQual_Per1_SrlComLWhlSpdVld_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComLWhlSpdVld_Cnt_lgc.value)

#  define Rte_IRead_WIRInputQual_Per1_SrlComLWhlSpd_Hz_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComLWhlSpd_Hz_f32.value)

#  define Rte_IRead_WIRInputQual_Per1_SrlComRWhlSpdVld_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComRWhlSpdVld_Cnt_lgc.value)

#  define Rte_IRead_WIRInputQual_Per1_SrlComRWhlSpd_Hz_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComRWhlSpd_Hz_f32.value)

#  define Rte_IWrite_WIRInputQual_Per1_QualWhlFreqL_Hz_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_QualWhlFreqL_Hz_f32.value = (data) \
  )

#  define Rte_IWriteRef_WIRInputQual_Per1_QualWhlFreqL_Hz_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_QualWhlFreqL_Hz_f32.value)

#  define Rte_IWrite_WIRInputQual_Per1_QualWhlFreqR_Hz_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_QualWhlFreqR_Hz_f32.value = (data) \
  )

#  define Rte_IWriteRef_WIRInputQual_Per1_QualWhlFreqR_Hz_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_QualWhlFreqR_Hz_f32.value)

#  define Rte_IWrite_WIRInputQual_Per1_WhlFreqQualified_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_WhlFreqQualified_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_WIRInputQual_Per1_WhlFreqQualified_Cnt_lgc() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_WhlFreqQualified_Cnt_lgc.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NXTRLIBS_APPL_CODE) DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_NXTRLIBS_APPL_VAR) ElapsedTime);
#  define RTE_STOP_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(arg1, arg2) (DtrmnElapsedTime_mS_u16(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NXTRLIBS_APPL_CODE) GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_NXTRLIBS_APPL_VAR) CurrentTime);
#  define RTE_STOP_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_GetSystemTime_mS_u32(arg1) (GetSystemTime_mS_u32(arg1), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_WIRINPUTQUAL_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_WIRINPUTQUAL_APPL_CODE) WIRInputQual_Per1(void);

# define RTE_STOP_SEC_AP_WIRINPUTQUAL_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1468867288
#    error "The magic number of the generated file <C:/Sankar/Chrysler/Synergy/CL/Temp_work/Chrysler_LWR_EPS_TMS570/SwProject/Source/GenDataRte/Components/Rte_Ap_WIRInputQual.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1468867288
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_WIRINPUTQUAL_H */
