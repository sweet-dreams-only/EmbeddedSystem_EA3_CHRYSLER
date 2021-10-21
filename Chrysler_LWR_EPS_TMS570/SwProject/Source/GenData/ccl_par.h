/* -----------------------------------------------------------------------------
  Filename:    ccl_par.h
  Description: Toolversion: 01.00.35.01.21.00.21.01.00.00
               
               Serial Number: CBD1210021
               Customer Info: Nxtr
                              Package: CBD_Chrysler_SLP1_UDS_Sgl
                              Micro: TexasInstruments TMS570 - TMX570LS0805APGEQQ1
                              Compiler: Texas Instruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Ccl__core
               
               Configuration   : C:\ccm_wa\EPS\570\LWR\Chrysler_LWR_EPS_TMS570\Tools\AsrProject\GENy\Chrsyler_SLP1_EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "Channel0":
                       Databasefile: C:\cmsynergy\My_ePWM_LWR\Chrysler_LWR_EPS_TMS570\Tools\AsrProject\GENy\CAN C v1313 15LXMod.dbc
                       Bussystem:    CAN
                       Manufacturer: DaimlerChrysler
                       Node:         EPS

  Generated by , 2013-07-30  15:05:12
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__CCL_PAR_H__)
#define __CCL_PAR_H__

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "ccl_inc.h"

/******************************************************************************/
/* Defines                                                                    */
/******************************************************************************/
#ifndef NM_OK
  #define NM_OK 0
#endif


#define CCL_USE_REQUEST_SETEXTCOM_FCT /* SetExtComRequest routines are enabled in the CCL module */ 

#define CCL_USE_REQUEST_SETINTCOM_FCT /* SetIntComRequest routines are enabled in the CCL module */ 

#define CCL_USE_REQUEST_CLEARCOM_FCT /* ClearComRequest routines are enabled in the CCL module */ 

#define CCL_DISABLE_WAKEUP_EV

#define CCL_DISABLE_SLEEP_COND

#define CCL_DISABLE_STOP_TIMEOUT


V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 cclNmWakeUpAble;
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 cclStartIndex[1];
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 cclStopIndex[1];
/*** prototypes ***/
extern void CclInitPowerOnFct(void);
extern void CclInitFct(void);
extern void CclSystemShutdownFct(void);
extern void CclNmSleepReqFct(vuint8 network);
extern vuint8 CclNmActiveReqFct(vuint8 network);
extern void CclNmPrepareSleepReqFct(void);
extern vuint8 CclNmStateCheckFct(void);
extern void CclInitTrcvFct(void);
extern void CclWakeUpTrcvFct(void);
extern void CclSleepTrcvFct(void);
extern void CclExtEmcComReqFct(void);
extern void CclExtCanComReqFct(void);
extern void CclIntComReqFct(void);
extern void CclComRelFct(void);

extern void ApplCclSetIntComReq(void);
extern void ApplCclSetExtEmcComReq(void);
extern void ApplCclSetExtCanComReq(void);
extern void ApplCclClearComReq(void);
extern void DRV_API_CALLBACK_TYPE CanTask(void);


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 103168731
      #error "The magic number of the generated file <C:\Synergy\Chrysler_LWR_EPS_TMS570-zz4r1x\Chrysler_LWR_EPS_TMS570\SwProject\Source\_GenData\ccl_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 114739317
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __CCL_PAR_H__ */
