/* -----------------------------------------------------------------------------
  Filename:    can_par.h
  Description: Toolversion: 01.00.35.01.21.00.21.01.00.00
               
               Serial Number: CBD1210021
               Customer Info: Nxtr
                              Package: CBD_Chrysler_SLP1_UDS_Sgl
                              Micro: TexasInstruments TMS570 - TMX570LS0805APGEQQ1
                              Compiler: Texas Instruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: DrvCan__base
               
               Configuration   : C:\Synergy\Chrysler_LWR_EPS_TMS570-zz4r1x\Chrysler_LWR_EPS_TMS570\Tools\AsrProject\GENy\Chrsyler_SLP1_EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "Channel0":
                       Databasefile: C:\Synergy\Chrysler_LWR_EPS_TMS570-zz4r1x\Chrysler_LWR_EPS_TMS570\Tools\AsrProject\GENy\CAN C v1232 EPS.dbc
                       Bussystem:    CAN
                       Manufacturer: DaimlerChrysler
                       Node:         EPS

  Generated by , 2013-04-25  11:29:38
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

#if !defined(__CAN_PAR_H__)
#define __CAN_PAR_H__

#include "can_cfg.h"
#include "v_inc.h"
#include "drv_par.h"

/* -----------------------------------------------------------------------------
    &&&~ Extern declarations of callback functions
 ----------------------------------------------------------------------------- */

#if defined(C_MULTIPLE_RECEIVE_CHANNEL) || defined(C_SINGLE_RECEIVE_CHANNEL)
#endif

/* CODE CATEGORY 1 START */
extern vuint8 dbkPrecopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 TpPrecopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 XcpPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 TpFuncPrecopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */


/* -----------------------------------------------------------------------------
    &&&~ Extern declarations of confirmation functions
 ----------------------------------------------------------------------------- */

/* CODE CATEGORY 1 START */
extern void dbkConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void XcpConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void TpDrvConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void NmConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */





/* -----------------------------------------------------------------------------
    &&&~ Handles of send objects
 ----------------------------------------------------------------------------- */

#define CanTxSD_RS_EPS                       0
#define CanTxECU_APPL_EPS                    1
#define CanTxD_RS_EPS                        2
#define CanTxNM_EPS                          3
#define CanTxEPS_1                           4
#define CanTxEPS_A1                          5


/* -----------------------------------------------------------------------------
    &&&~ Access to confirmation flags
 ----------------------------------------------------------------------------- */

#define ECU_APPL_EPS_conf_b                  (CanConfirmationFlags.w[0].b0)
#define CanWriteSyncECU_APPL_EPS_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  ECU_APPL_EPS_conf_b = (x); \
  CanEndFlagWriteSync(); \
}


/* -----------------------------------------------------------------------------
    &&&~ Handles of receive objects
 ----------------------------------------------------------------------------- */

#define CanRxVehCfg5                         0
#define CanRxEcuCfg6                         1
#define CanRxVehCfg4                         2
#define CanRxVehCfg3                         3
#define CanRxVehCfg2                         4
#define CanRxVehCfg1                         5
#define CanRxNET_CFG_PT                      6
#define CanRxENG_CFG                         7
#define CanRxVIN                             8
#define CanRxVehCfg7                         9
#define CanRxCBC_PT1                         10
#define CanRxGW_LIN_I_C2                     11
#define CanRxCFG_RQ_C                        12
#define CanRxCFG_RQ                          13
#define CanRxIC_A1                           14
#define CanRxEPB_1                           15
#define CanRxECM_A3                          16
#define CanRxECM_INDICATORS                  17
#define CanRxPTS_StrCtrl                     18
#define CanRxDST_TOC                         19
#define CanRxHALF_MTO_SteerControl           20
#define CanRxWHEEL_SPEED_2                   21
#define CanRxCBC_PT3                         22
#define CanRxTRNS_STAT                       23
#define CanRxESP_A6                          24
#define CanRxESP_A4                          25
#define CanRxTRNS_SPD                        26
#define CanRxORC_YRS_DATA                    27
#define CanRxESP_A5                          28
#define CanRxESP_A8                          29
#define CanRxCBC_PT2                         30
#define CanRxECM_A1                          31
#define CanRxSCCM_STW_ANGL_STAT              32
#define CanRxD_RQ_EPS                        33
#define CanRxAPPL_ECU_EPS                    34
#define CanRxDG_RQ_GLOBAL_UDS                35


/* -----------------------------------------------------------------------------
    &&&~ Access to indication flags
 ----------------------------------------------------------------------------- */

#define APPL_ECU_EPS_ind_b                   (CanIndicationFlags.w[0].b0)
#define CanWriteSyncAPPL_ECU_EPS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  APPL_ECU_EPS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}


/* -----------------------------------------------------------------------------
    &&&~ Access to signals
 ----------------------------------------------------------------------------- */

#define b_ECU_APPL_EPS_0_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_0)
#define b_ECU_APPL_EPS_1_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_1)
#define b_ECU_APPL_EPS_2_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_2)
#define b_ECU_APPL_EPS_3_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_3)
#define b_ECU_APPL_EPS_4_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_4)
#define b_ECU_APPL_EPS_5_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_5)
#define b_ECU_APPL_EPS_6_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_6)
#define b_ECU_APPL_EPS_7_b                   (ECU_APPL_EPS.ECU_APPL_EPS.ECU_APPL_EPS_7)
#define b_APPL_ECU_EPS_0_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_0)
#define b_APPL_ECU_EPS_1_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_1)
#define b_APPL_ECU_EPS_2_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_2)
#define b_APPL_ECU_EPS_3_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_3)
#define b_APPL_ECU_EPS_4_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_4)
#define b_APPL_ECU_EPS_5_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_5)
#define b_APPL_ECU_EPS_6_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_6)
#define b_APPL_ECU_EPS_7_b                   (APPL_ECU_EPS.APPL_ECU_EPS.APPL_ECU_EPS_7)


/* -----------------------------------------------------------------------------
    &&&~ Access to data bytes of Rx messages
 ----------------------------------------------------------------------------- */

/* ID: 0x000006da, Handle: 34, APPL_ECU_EPS [FC] */
#define c1_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[0])
#define c2_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[1])
#define c3_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[2])
#define c4_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[3])
#define c5_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[4])
#define c6_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[5])
#define c7_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[6])
#define c8_APPL_ECU_EPS_c                    (APPL_ECU_EPS._c[7])



/* -----------------------------------------------------------------------------
    &&&~ Access to data bytes of Tx messages
 ----------------------------------------------------------------------------- */

/* ID: 0x0000059a, Handle: 1, ECU_APPL_EPS [FC] */
#define c1_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[0])
#define c2_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[1])
#define c3_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[2])
#define c4_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[3])
#define c5_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[4])
#define c6_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[5])
#define c7_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[6])
#define c8_ECU_APPL_EPS_c                    (ECU_APPL_EPS._c[7])

/* ID: 0x000004da, Handle: 2, D_RS_EPS [FC] */
#define c1_D_RS_EPS_c                        (D_RS_EPS._c[0])
#define c2_D_RS_EPS_c                        (D_RS_EPS._c[1])
#define c3_D_RS_EPS_c                        (D_RS_EPS._c[2])
#define c4_D_RS_EPS_c                        (D_RS_EPS._c[3])
#define c5_D_RS_EPS_c                        (D_RS_EPS._c[4])
#define c6_D_RS_EPS_c                        (D_RS_EPS._c[5])
#define c7_D_RS_EPS_c                        (D_RS_EPS._c[6])
#define c8_D_RS_EPS_c                        (D_RS_EPS._c[7])



/* -----------------------------------------------------------------------------
    &&&~ RDS Access
 ----------------------------------------------------------------------------- */

typedef struct _c_EPS_A1_RDS_msgTypeTag
{
  vbittype PS_SysType : 1;
  vbittype EPS_Warn_Disp_Rq : 3;
  vbittype EPS_AsstStat : 3;
  vbittype unused0 : 1;
  vbittype EPS_MODE_STAT : 3;
  vbittype EPS_MODE_CFG_STAT : 3;
  vbittype unused1 : 2;
  vbittype EPS_Curr : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
} _c_EPS_A1_RDS_msgType;

typedef struct _c_EPS_1_RDS_msgTypeTag
{
  vbittype StrClmTrqVD : 1;
  vbittype TOI_Act_Sts : 4;
  vbittype StrClmTrq_1 : 3;
  vbittype StrClmTrq_0 : 8;
  vbittype HALFTorqueOverlayIntActivated : 1;
  vbittype HALFTorqueOverlayFault : 1;
  vbittype DSTTorqueOverlayFault : 1;
  vbittype PTSDriveStyleSts : 1;
  vbittype AssistanceTorque_1 : 4;
  vbittype AssistanceTorque_0 : 8;
  vbittype EPSMotorTorqueValidData : 1;
  vbittype EPSTemporaryDeactivationLDW : 1;
  vbittype DSTTorqueOverlayIntActivated : 1;
  vbittype unused0 : 2;
  vbittype EPSMotorTorque_1 : 3;
  vbittype EPSMotorTorque_0 : 8;
  vbittype MC_EPS_1 : 4;
  vbittype PTSTorqueOverlayIntActivated : 1;
  vbittype PTSTorqueOverlayFault : 1;
  vbittype EPSTemporaryDeactivationPPPA : 1;
  vbittype EPSHandsOnRecognition : 1;
  vbittype CRC_EPS_1 : 8;
} _c_EPS_1_RDS_msgType;

typedef struct _c_NM_EPS_RDS_msgTypeTag
{
  vbittype NM_Mode : 8;
  vbittype NM_Successor : 8;
  vbittype NM_Sleep_Ind : 1;
  vbittype NM_Sleep_Ack : 1;
  vbittype NM_Ud_Launch : 6;
  vbittype NM_Ud_Srv : 8;
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype Nw_Id : 8;
} _c_NM_EPS_RDS_msgType;

typedef struct _c_D_RS_EPS_RDS_msgTypeTag
{
  vbittype D_RS_EPS_7 : 8;
  vbittype D_RS_EPS_6 : 8;
  vbittype D_RS_EPS_5 : 8;
  vbittype D_RS_EPS_4 : 8;
  vbittype D_RS_EPS_3 : 8;
  vbittype D_RS_EPS_2 : 8;
  vbittype D_RS_EPS_1 : 8;
  vbittype D_RS_EPS_0 : 8;
} _c_D_RS_EPS_RDS_msgType;

#define b_CAN_ECU_APPL_EPS_0_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_0)
#define b_CAN_ECU_APPL_EPS_1_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_1)
#define b_CAN_ECU_APPL_EPS_2_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_2)
#define b_CAN_ECU_APPL_EPS_3_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_3)
#define b_CAN_ECU_APPL_EPS_4_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_4)
#define b_CAN_ECU_APPL_EPS_5_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_5)
#define b_CAN_ECU_APPL_EPS_6_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_6)
#define b_CAN_ECU_APPL_EPS_7_b               (RDS4.ECU_APPL_EPS.ECU_APPL_EPS_7)

typedef struct _c_ECU_APPL_EPS_RDS_msgTypeTag
{
  vbittype ECU_APPL_EPS_7 : 8;
  vbittype ECU_APPL_EPS_6 : 8;
  vbittype ECU_APPL_EPS_5 : 8;
  vbittype ECU_APPL_EPS_4 : 8;
  vbittype ECU_APPL_EPS_3 : 8;
  vbittype ECU_APPL_EPS_2 : 8;
  vbittype ECU_APPL_EPS_1 : 8;
  vbittype ECU_APPL_EPS_0 : 8;
} _c_ECU_APPL_EPS_RDS_msgType;

typedef struct _c_SD_RS_EPS_RDS_msgTypeTag
{
  vbittype SD_RS_EPS_7 : 8;
  vbittype SD_RS_EPS_6 : 8;
  vbittype SD_RS_EPS_5 : 8;
  vbittype SD_RS_EPS_4 : 8;
  vbittype SD_RS_EPS_3 : 8;
  vbittype SD_RS_EPS_2 : 8;
  vbittype SD_RS_EPS_1 : 8;
  vbittype SD_RS_EPS_0 : 8;
} _c_SD_RS_EPS_RDS_msgType;

typedef struct _c_D_RQ_EPS_RDS_msgTypeTag
{
  vbittype D_RQ_EPS_7 : 8;
  vbittype D_RQ_EPS_6 : 8;
  vbittype D_RQ_EPS_5 : 8;
  vbittype D_RQ_EPS_4 : 8;
  vbittype D_RQ_EPS_3 : 8;
  vbittype D_RQ_EPS_2 : 8;
  vbittype D_RQ_EPS_1 : 8;
  vbittype D_RQ_EPS_0 : 8;
} _c_D_RQ_EPS_RDS_msgType;

#define b_CAN_APPL_ECU_EPS_0_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_0)
#define b_CAN_APPL_ECU_EPS_1_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_1)
#define b_CAN_APPL_ECU_EPS_2_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_2)
#define b_CAN_APPL_ECU_EPS_3_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_3)
#define b_CAN_APPL_ECU_EPS_4_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_4)
#define b_CAN_APPL_ECU_EPS_5_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_5)
#define b_CAN_APPL_ECU_EPS_6_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_6)
#define b_CAN_APPL_ECU_EPS_7_b               (RDS27.APPL_ECU_EPS.APPL_ECU_EPS_7)

typedef struct _c_APPL_ECU_EPS_RDS_msgTypeTag
{
  vbittype APPL_ECU_EPS_7 : 8;
  vbittype APPL_ECU_EPS_6 : 8;
  vbittype APPL_ECU_EPS_5 : 8;
  vbittype APPL_ECU_EPS_4 : 8;
  vbittype APPL_ECU_EPS_3 : 8;
  vbittype APPL_ECU_EPS_2 : 8;
  vbittype APPL_ECU_EPS_1 : 8;
  vbittype APPL_ECU_EPS_0 : 8;
} _c_APPL_ECU_EPS_RDS_msgType;

typedef struct _c_VehCfg5_RDS_msgTypeTag
{
  vbittype unused0 : 6;
  vbittype VC_VehCfg5_Stat : 2;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 1;
  vbittype VC_PPPA_Prsnt : 1;
  vbittype unused8 : 6;
} _c_VehCfg5_RDS_msgType;

typedef struct _c_DG_RQ_GLOBAL_UDS_RDS_msgTypeTag
{
  vbittype DG_RQ_GLOBAL_UDS_7 : 8;
  vbittype DG_RQ_GLOBAL_UDS_6 : 8;
  vbittype DG_RQ_GLOBAL_UDS_5 : 8;
  vbittype DG_RQ_GLOBAL_UDS_4 : 8;
  vbittype DG_RQ_GLOBAL_UDS_3 : 8;
  vbittype DG_RQ_GLOBAL_UDS_2 : 8;
  vbittype DG_RQ_GLOBAL_UDS_1 : 8;
  vbittype DG_RQ_GLOBAL_UDS_0 : 8;
} _c_DG_RQ_GLOBAL_UDS_RDS_msgType;

typedef struct _c_EcuCfg6_RDS_msgTypeTag
{
  vbittype unused0 : 6;
  vbittype EC_ECUCfg6_Stat : 2;
  vbittype unused1 : 8;
  vbittype EC_Steering_1 : 8;
  vbittype EC_Steering_0 : 8;
} _c_EcuCfg6_RDS_msgType;

typedef struct _c_VehCfg4_RDS_msgTypeTag
{
  vbittype VC_VehCfg4_Stat : 2;
  vbittype unused0 : 6;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype VC_TIRE_CIRCUMF_1 : 8;
  vbittype VC_TIRE_CIRCUMF_0 : 8;
} _c_VehCfg4_RDS_msgType;

typedef struct _c_VehCfg3_RDS_msgTypeTag
{
  vbittype unused0 : 6;
  vbittype VC_VehCfg3_Stat : 2;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 1;
  vbittype VC_ChassisType : 7;
} _c_VehCfg3_RDS_msgType;

typedef struct _c_VehCfg2_RDS_msgTypeTag
{
  vbittype unused0 : 6;
  vbittype VC_VehCfg2_Stat : 2;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 5;
  vbittype VC_MemoryDRVMD_Prsnt : 1;
  vbittype VC_DRVMD_Prsnt : 1;
  vbittype unused4 : 1;
} _c_VehCfg2_RDS_msgType;

typedef struct _c_VehCfg1_RDS_msgTypeTag
{
  vbittype VC_MODEL_YEAR : 6;
  vbittype VC_VehCfg1_Stat : 2;
  vbittype VC_VEH_LINE : 8;
  vbittype unused0 : 3;
  vbittype VC_COUNTRY : 5;
  vbittype VC_BODY_STYLE : 4;
  vbittype unused1 : 2;
  vbittype VC_XWD : 2;
} _c_VehCfg1_RDS_msgType;

typedef struct _c_NET_CFG_PT_RDS_msgTypeTag
{
  vbittype NetCfg_CBC_PT : 1;
  vbittype unused0 : 5;
  vbittype NET_CFG_STAT_PT : 2;
  vbittype NetCfg_IC : 1;
  vbittype unused1 : 2;
  vbittype NetCfg_ESC : 1;
  vbittype unused2 : 2;
  vbittype NetCfg_ECM : 1;
  vbittype unused3 : 1;
  vbittype NetCfg_SCCM : 1;
  vbittype unused4 : 2;
  vbittype NetCfg_PTS : 1;
  vbittype unused5 : 4;
  vbittype NetCfg_HaLF : 1;
  vbittype unused6 : 5;
  vbittype NetCfg_TCM : 1;
  vbittype unused7 : 1;
} _c_NET_CFG_PT_RDS_msgType;

typedef struct _c_ENG_CFG_RDS_msgTypeTag
{
  vbittype DISPLACEMENT : 8;
  vbittype unused0 : 3;
  vbittype SpStPrsnt : 1;
  vbittype unused1 : 4;
  vbittype unused2 : 8;
  vbittype unused3 : 3;
  vbittype TRANS_TYPE : 1;
  vbittype unused4 : 4;
} _c_ENG_CFG_RDS_msgType;

typedef struct _c_VIN_RDS_msgTypeTag
{
  vbittype unused0 : 6;
  vbittype VIN_MSG : 2;
  vbittype VIN_DATA_6 : 8;
  vbittype VIN_DATA_5 : 8;
  vbittype VIN_DATA_4 : 8;
  vbittype VIN_DATA_3 : 8;
  vbittype VIN_DATA_2 : 8;
  vbittype VIN_DATA_1 : 8;
  vbittype VIN_DATA_0 : 8;
} _c_VIN_RDS_msgType;

typedef struct _c_VehCfg7_RDS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype VC_DST_Present : 1;
  vbittype unused1 : 2;
  vbittype VC_LDW : 1;
  vbittype unused2 : 2;
} _c_VehCfg7_RDS_msgType;

typedef struct _c_CBC_PT1_RDS_msgTypeTag
{
  vbittype unused0 : 3;
  vbittype REV_GEAR : 1;
  vbittype unused1 : 4;
} _c_CBC_PT1_RDS_msgType;

typedef struct _c_GW_LIN_I_C2_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 5;
  vbittype EPS_MODE_REQ : 3;
} _c_GW_LIN_I_C2_RDS_msgType;

typedef struct _c_CFG_RQ_C_RDS_msgTypeTag
{
  vbittype CFG_FEATURE_C : 8;
  vbittype unused0 : 6;
  vbittype CFG_STAT_RQ_C : 2;
  vbittype CFG_SET_C : 8;
} _c_CFG_RQ_C_RDS_msgType;

typedef struct _c_CFG_RQ_RDS_msgTypeTag
{
  vbittype CFG_FEATURE : 8;
  vbittype unused0 : 6;
  vbittype CFG_STAT_RQ : 2;
  vbittype CFG_SET : 8;
} _c_CFG_RQ_RDS_msgType;

typedef struct _c_IC_A1_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype ODO_2 : 8;
  vbittype ODO_1 : 8;
  vbittype ODO_0 : 8;
} _c_IC_A1_RDS_msgType;

typedef struct _c_EPB_1_RDS_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype ClampForce_1 : 1;
  vbittype ClampForce_0 : 8;
  vbittype EPBSwitchPosition : 2;
  vbittype unused1 : 2;
  vbittype FaultStoreInfo : 1;
  vbittype unused2 : 1;
  vbittype StopLampActive : 2;
  vbittype unused3 : 1;
  vbittype ServiceModeSts : 1;
  vbittype EPBChimeReq : 3;
  vbittype AutoParkSts : 2;
  vbittype EPBSts : 1;
  vbittype EnableDecelerationReq : 2;
  vbittype ValidEPBSWPos : 1;
  vbittype TextDisplay : 5;
  vbittype EPBWarningLampReq : 2;
  vbittype FunctionLamp : 2;
  vbittype unused4 : 4;
  vbittype MC_EPB_1 : 4;
  vbittype unused5 : 4;
  vbittype CRC_EPB_1 : 8;
} _c_EPB_1_RDS_msgType;

typedef struct _c_ECM_A3_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 4;
  vbittype ESS_ENG_ST : 4;
} _c_ECM_A3_RDS_msgType;

typedef struct _c_ECM_INDICATORS_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype EngOilTemp : 8;
} _c_ECM_INDICATORS_RDS_msgType;

typedef struct _c_PTS_StrCtrl_RDS_msgTypeTag
{
  vbittype unused0 : 1;
  vbittype TorqueOverlayIntActivation : 1;
  vbittype PTSSystemFault : 1;
  vbittype PTSDriveStyleReqSts : 1;
  vbittype ManeuverPhase : 1;
  vbittype TorqueOverlaySteeringReq_1 : 3;
  vbittype TorqueOverlaySteeringReq_0 : 8;
  vbittype PTS_ManoeuvreMode : 3;
  vbittype unused1 : 5;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype MC_29Fh : 4;
  vbittype unused5 : 4;
  vbittype CRC_29Fh : 8;
} _c_PTS_StrCtrl_RDS_msgType;

typedef struct _c_DST_TOC_RDS_msgTypeTag
{
  vbittype TOC_Act_Req : 2;
  vbittype TOC_Fault : 2;
  vbittype unused0 : 1;
  vbittype TO_Req_1 : 3;
  vbittype TO_Req_0 : 8;
  vbittype unused1 : 6;
  vbittype BrkPrss_One_1 : 2;
  vbittype BrkPrss_One_0 : 8;
  vbittype SyncPos : 3;
  vbittype unused2 : 3;
  vbittype BrkPrss_Two_1 : 2;
  vbittype BrkPrss_Two_0 : 8;
  vbittype MC_294h : 4;
  vbittype TOC_Sts : 4;
  vbittype CRC_294h : 8;
} _c_DST_TOC_RDS_msgType;

typedef struct _c_HALF_MTO_SteerControl_RDS_msgTypeTag
{
  vbittype MTO_HALFDriveStyleSts : 3;
  vbittype MotorTorqueOverlayIntActivation : 1;
  vbittype MTO_HALFSystemSts : 1;
  vbittype MotorTorqueOverlaySteeringReq_1 : 3;
  vbittype MotorTorqueOverlaySteeringReq_0 : 8;
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype MC_292h : 4;
  vbittype unused2 : 4;
  vbittype CRC_292h : 8;
} _c_HALF_MTO_SteerControl_RDS_msgType;

typedef struct _c_WHEEL_SPEED_2_RDS_msgTypeTag
{
  vbittype WheelRPM_FL_1 : 8;
  vbittype WheelRPM_FL_0 : 8;
  vbittype WheelRPM_FR_1 : 8;
  vbittype WheelRPM_FR_0 : 8;
} _c_WHEEL_SPEED_2_RDS_msgType;

typedef struct _c_CBC_PT3_RDS_msgTypeTag
{
  vbittype AirTemp_Outsd : 8;
  vbittype AMB_TEMP_AVG_1 : 8;
  vbittype AMB_TEMP_AVG_0 : 8;
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype BATT_VOLT : 8;
} _c_CBC_PT3_RDS_msgType;

typedef struct _c_TRNS_STAT_RDS_msgTypeTag
{
  vbittype unused0 : 3;
  vbittype PRND_STAT : 3;
  vbittype unused1 : 2;
} _c_TRNS_STAT_RDS_msgType;

typedef struct _c_ESP_A6_RDS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype WhlRPM_FL_1 : 6;
  vbittype WhlRPM_FL_0 : 8;
  vbittype unused1 : 2;
  vbittype WhlRPM_FR_1 : 6;
  vbittype WhlRPM_FR_0 : 8;
  vbittype WhlDir_RL_Stat : 2;
  vbittype WhlRPM_RL_1 : 6;
  vbittype WhlRPM_RL_0 : 8;
  vbittype WhlDir_RR_Stat : 2;
  vbittype WhlRPM_RR_1 : 6;
  vbittype WhlRPM_RR_0 : 8;
} _c_ESP_A6_RDS_msgType;

typedef struct _c_ESP_A4_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype VehAccel_X : 8;
  vbittype VehAccel_Y : 8;
} _c_ESP_A4_RDS_msgType;

typedef struct _c_TRNS_SPD_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 4;
  vbittype Gr : 4;
} _c_TRNS_SPD_RDS_msgType;

typedef struct _c_ORC_YRS_DATA_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 4;
  vbittype LongAcceleration_1 : 4;
  vbittype LongAcceleration_0 : 8;
} _c_ORC_YRS_DATA_RDS_msgType;

typedef struct _c_ESP_A5_RDS_msgTypeTag
{
  vbittype WhlPlsCnt_FL : 8;
  vbittype WhlPlsCnt_FR : 8;
  vbittype WhlPlsCnt_RL : 8;
  vbittype WhlPlsCnt_RR : 8;
} _c_ESP_A5_RDS_msgType;

typedef struct _c_ESP_A8_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype VEH_SPEED_1 : 8;
  vbittype VEH_SPEED_0 : 8;
  vbittype MC_VEH_SPEED : 4;
  vbittype unused4 : 4;
  vbittype CRC_VEH_SPEED : 8;
} _c_ESP_A8_RDS_msgType;

typedef struct _c_CBC_PT2_RDS_msgTypeTag
{
  vbittype unused0 : 5;
  vbittype CmdIgnStat : 3;
} _c_CBC_PT2_RDS_msgType;

typedef struct _c_ECM_A1_RDS_msgTypeTag
{
  vbittype EngRPM_1 : 8;
  vbittype EngRPM_0 : 8;
} _c_ECM_A1_RDS_msgType;

typedef struct _c_SCCM_STW_ANGL_STAT_RDS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype LRW_1 : 6;
  vbittype LRW_0 : 8;
  vbittype unused1 : 2;
  vbittype VLRW_1 : 6;
  vbittype VLRW_0 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 4;
  vbittype LRW_RHP : 4;
} _c_SCCM_STW_ANGL_STAT_RDS_msgType;

typedef union _c_RDS0_bufTag
{
  vuint8 _c[8];
  _c_EPS_A1_RDS_msgType EPS_A1;
} _c_RDS0_buf;
typedef union _c_RDS1_bufTag
{
  vuint8 _c[8];
  _c_EPS_1_RDS_msgType EPS_1;
} _c_RDS1_buf;
typedef union _c_RDS2_bufTag
{
  vuint8 _c[8];
  _c_NM_EPS_RDS_msgType NM_EPS;
} _c_RDS2_buf;
typedef union _c_RDS3_bufTag
{
  vuint8 _c[8];
  _c_D_RS_EPS_RDS_msgType D_RS_EPS;
} _c_RDS3_buf;
typedef union _c_RDS4_bufTag
{
  vuint8 _c[8];
  _c_ECU_APPL_EPS_RDS_msgType ECU_APPL_EPS;
} _c_RDS4_buf;
typedef union _c_RDS5_bufTag
{
  vuint8 _c[8];
  _c_SD_RS_EPS_RDS_msgType SD_RS_EPS;
} _c_RDS5_buf;
typedef union _c_RDS26_bufTag
{
  vuint8 _c[8];
  _c_D_RQ_EPS_RDS_msgType D_RQ_EPS;
} _c_RDS26_buf;
typedef union _c_RDS27_bufTag
{
  vuint8 _c[8];
  _c_APPL_ECU_EPS_RDS_msgType APPL_ECU_EPS;
} _c_RDS27_buf;
typedef union _c_RDS28_bufTag
{
  vuint8 _c[8];
  _c_VehCfg5_RDS_msgType VehCfg5;
} _c_RDS28_buf;
typedef union _c_RDS29_bufTag
{
  vuint8 _c[8];
  _c_DG_RQ_GLOBAL_UDS_RDS_msgType DG_RQ_GLOBAL_UDS;
} _c_RDS29_buf;
typedef union _c_RDS30_bufTag
{
  vuint8 _c[8];
  _c_EcuCfg6_RDS_msgType EcuCfg6;
} _c_RDS30_buf;
typedef union _c_RDS31_bufTag
{
  vuint8 _c[8];
  _c_VehCfg4_RDS_msgType VehCfg4;
} _c_RDS31_buf;
typedef union _c_RDS32_bufTag
{
  vuint8 _c[8];
  _c_VehCfg3_RDS_msgType VehCfg3;
} _c_RDS32_buf;
typedef union _c_RDS33_bufTag
{
  vuint8 _c[8];
  _c_VehCfg2_RDS_msgType VehCfg2;
} _c_RDS33_buf;
typedef union _c_RDS34_bufTag
{
  vuint8 _c[8];
  _c_VehCfg1_RDS_msgType VehCfg1;
} _c_RDS34_buf;
typedef union _c_RDS35_bufTag
{
  vuint8 _c[8];
  _c_NET_CFG_PT_RDS_msgType NET_CFG_PT;
} _c_RDS35_buf;
typedef union _c_RDS36_bufTag
{
  vuint8 _c[8];
  _c_ENG_CFG_RDS_msgType ENG_CFG;
} _c_RDS36_buf;
typedef union _c_RDS37_bufTag
{
  vuint8 _c[8];
  _c_VIN_RDS_msgType VIN;
} _c_RDS37_buf;
typedef union _c_RDS38_bufTag
{
  vuint8 _c[8];
  _c_VehCfg7_RDS_msgType VehCfg7;
} _c_RDS38_buf;
typedef union _c_RDS39_bufTag
{
  vuint8 _c[8];
  _c_CBC_PT1_RDS_msgType CBC_PT1;
} _c_RDS39_buf;
typedef union _c_RDS40_bufTag
{
  vuint8 _c[8];
  _c_GW_LIN_I_C2_RDS_msgType GW_LIN_I_C2;
} _c_RDS40_buf;
typedef union _c_RDS41_bufTag
{
  vuint8 _c[8];
  _c_CFG_RQ_C_RDS_msgType CFG_RQ_C;
} _c_RDS41_buf;
typedef union _c_RDS42_bufTag
{
  vuint8 _c[8];
  _c_CFG_RQ_RDS_msgType CFG_RQ;
} _c_RDS42_buf;
typedef union _c_RDS43_bufTag
{
  vuint8 _c[8];
  _c_IC_A1_RDS_msgType IC_A1;
} _c_RDS43_buf;
typedef union _c_RDS44_bufTag
{
  vuint8 _c[8];
  _c_EPB_1_RDS_msgType EPB_1;
} _c_RDS44_buf;
typedef union _c_RDS45_bufTag
{
  vuint8 _c[8];
  _c_ECM_A3_RDS_msgType ECM_A3;
} _c_RDS45_buf;
typedef union _c_RDS46_bufTag
{
  vuint8 _c[8];
  _c_ECM_INDICATORS_RDS_msgType ECM_INDICATORS;
} _c_RDS46_buf;
typedef union _c_RDS47_bufTag
{
  vuint8 _c[8];
  _c_PTS_StrCtrl_RDS_msgType PTS_StrCtrl;
} _c_RDS47_buf;
typedef union _c_RDS48_bufTag
{
  vuint8 _c[8];
  _c_DST_TOC_RDS_msgType DST_TOC;
} _c_RDS48_buf;
typedef union _c_RDS49_bufTag
{
  vuint8 _c[8];
  _c_HALF_MTO_SteerControl_RDS_msgType HALF_MTO_SteerControl;
} _c_RDS49_buf;
typedef union _c_RDS50_bufTag
{
  vuint8 _c[8];
  _c_WHEEL_SPEED_2_RDS_msgType WHEEL_SPEED_2;
} _c_RDS50_buf;
typedef union _c_RDS51_bufTag
{
  vuint8 _c[8];
  _c_CBC_PT3_RDS_msgType CBC_PT3;
} _c_RDS51_buf;
typedef union _c_RDS52_bufTag
{
  vuint8 _c[8];
  _c_TRNS_STAT_RDS_msgType TRNS_STAT;
} _c_RDS52_buf;
typedef union _c_RDS53_bufTag
{
  vuint8 _c[8];
  _c_ESP_A6_RDS_msgType ESP_A6;
} _c_RDS53_buf;
typedef union _c_RDS54_bufTag
{
  vuint8 _c[8];
  _c_ESP_A4_RDS_msgType ESP_A4;
} _c_RDS54_buf;
typedef union _c_RDS55_bufTag
{
  vuint8 _c[8];
  _c_TRNS_SPD_RDS_msgType TRNS_SPD;
} _c_RDS55_buf;
typedef union _c_RDS56_bufTag
{
  vuint8 _c[8];
  _c_ORC_YRS_DATA_RDS_msgType ORC_YRS_DATA;
} _c_RDS56_buf;
typedef union _c_RDS57_bufTag
{
  vuint8 _c[8];
  _c_ESP_A5_RDS_msgType ESP_A5;
} _c_RDS57_buf;
typedef union _c_RDS58_bufTag
{
  vuint8 _c[8];
  _c_ESP_A8_RDS_msgType ESP_A8;
} _c_RDS58_buf;
typedef union _c_RDS59_bufTag
{
  vuint8 _c[8];
  _c_CBC_PT2_RDS_msgType CBC_PT2;
} _c_RDS59_buf;
typedef union _c_RDS60_bufTag
{
  vuint8 _c[8];
  _c_ECM_A1_RDS_msgType ECM_A1;
} _c_RDS60_buf;
typedef union _c_RDS61_bufTag
{
  vuint8 _c[8];
  _c_SCCM_STW_ANGL_STAT_RDS_msgType SCCM_STW_ANGL_STAT;
} _c_RDS61_buf;


#define RDS0                                 ((* ((_c_RDS0_buf MEMORY_NORMAL *)(canRDSTxPtr[0]))))
#define RDS1                                 ((* ((_c_RDS1_buf MEMORY_NORMAL *)(canRDSTxPtr[1]))))
#define RDS2                                 ((* ((_c_RDS2_buf MEMORY_NORMAL *)(canRDSTxPtr[2]))))
#define RDS3                                 ((* ((_c_RDS3_buf MEMORY_NORMAL *)(canRDSTxPtr[3]))))
#define RDS4                                 ((* ((_c_RDS4_buf MEMORY_NORMAL *)(canRDSTxPtr[4]))))
#define RDS5                                 ((* ((_c_RDS5_buf MEMORY_NORMAL *)(canRDSTxPtr[5]))))
#define RDS26                                ((* ((_c_RDS26_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS27                                ((* ((_c_RDS27_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS28                                ((* ((_c_RDS28_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS29                                ((* ((_c_RDS29_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS30                                ((* ((_c_RDS30_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS31                                ((* ((_c_RDS31_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS32                                ((* ((_c_RDS32_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS33                                ((* ((_c_RDS33_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS34                                ((* ((_c_RDS34_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS35                                ((* ((_c_RDS35_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS36                                ((* ((_c_RDS36_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS37                                ((* ((_c_RDS37_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS38                                ((* ((_c_RDS38_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS39                                ((* ((_c_RDS39_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS40                                ((* ((_c_RDS40_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS41                                ((* ((_c_RDS41_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS42                                ((* ((_c_RDS42_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS43                                ((* ((_c_RDS43_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS44                                ((* ((_c_RDS44_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS45                                ((* ((_c_RDS45_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS46                                ((* ((_c_RDS46_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS47                                ((* ((_c_RDS47_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS48                                ((* ((_c_RDS48_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS49                                ((* ((_c_RDS49_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS50                                ((* ((_c_RDS50_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS51                                ((* ((_c_RDS51_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS52                                ((* ((_c_RDS52_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS53                                ((* ((_c_RDS53_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS54                                ((* ((_c_RDS54_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS55                                ((* ((_c_RDS55_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS56                                ((* ((_c_RDS56_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS57                                ((* ((_c_RDS57_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS58                                ((* ((_c_RDS58_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS59                                ((* ((_c_RDS59_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS60                                ((* ((_c_RDS60_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS61                                ((* ((_c_RDS61_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))



/* -----------------------------------------------------------------------------
    &&&~ Message Hardware Objects
 ----------------------------------------------------------------------------- */

#define CanTxEPS_A1_HW_OBJ                   0
#define CanTxEPS_A1_HW_CHANNEL               0
#define CanTxEPS_1_HW_OBJ                    1
#define CanTxEPS_1_HW_CHANNEL                0
#define CanTxNM_EPS_HW_OBJ                   2
#define CanTxNM_EPS_HW_CHANNEL               0
#define CanTxD_RS_EPS_HW_OBJ                 3
#define CanTxD_RS_EPS_HW_CHANNEL             0
#define CanTxECU_APPL_EPS_HW_OBJ             4
#define CanTxECU_APPL_EPS_HW_CHANNEL         0
#define CanTxSD_RS_EPS_HW_OBJ                5
#define CanTxSD_RS_EPS_HW_CHANNEL            0
#define C_TX_NORMAL_HW_OBJ                   6
#define C_TX_NORMAL_HW_CHANNEL               0
#define CanRxD_RQ_EPS_HW_OBJ                 26
#define CanRxD_RQ_EPS_HW_CHANNEL             0
#define CanRxAPPL_ECU_EPS_HW_OBJ             27
#define CanRxAPPL_ECU_EPS_HW_CHANNEL         0
#define CanRxVehCfg5_HW_OBJ                  28
#define CanRxVehCfg5_HW_CHANNEL              0
#define CanRxDG_RQ_GLOBAL_UDS_HW_OBJ         29
#define CanRxDG_RQ_GLOBAL_UDS_HW_CHANNEL     0
#define CanRxEcuCfg6_HW_OBJ                  30
#define CanRxEcuCfg6_HW_CHANNEL              0
#define CanRxVehCfg4_HW_OBJ                  31
#define CanRxVehCfg4_HW_CHANNEL              0
#define CanRxVehCfg3_HW_OBJ                  32
#define CanRxVehCfg3_HW_CHANNEL              0
#define CanRxVehCfg2_HW_OBJ                  33
#define CanRxVehCfg2_HW_CHANNEL              0
#define CanRxVehCfg1_HW_OBJ                  34
#define CanRxVehCfg1_HW_CHANNEL              0
#define CanRxNET_CFG_PT_HW_OBJ               35
#define CanRxNET_CFG_PT_HW_CHANNEL           0
#define CanRxENG_CFG_HW_OBJ                  36
#define CanRxENG_CFG_HW_CHANNEL              0
#define CanRxVIN_HW_OBJ                      37
#define CanRxVIN_HW_CHANNEL                  0
#define CanRxVehCfg7_HW_OBJ                  38
#define CanRxVehCfg7_HW_CHANNEL              0
#define CanRxCBC_PT1_HW_OBJ                  39
#define CanRxCBC_PT1_HW_CHANNEL              0
#define CanRxGW_LIN_I_C2_HW_OBJ              40
#define CanRxGW_LIN_I_C2_HW_CHANNEL          0
#define CanRxCFG_RQ_C_HW_OBJ                 41
#define CanRxCFG_RQ_C_HW_CHANNEL             0
#define CanRxCFG_RQ_HW_OBJ                   42
#define CanRxCFG_RQ_HW_CHANNEL               0
#define CanRxIC_A1_HW_OBJ                    43
#define CanRxIC_A1_HW_CHANNEL                0
#define CanRxEPB_1_HW_OBJ                    44
#define CanRxEPB_1_HW_CHANNEL                0
#define CanRxECM_A3_HW_OBJ                   45
#define CanRxECM_A3_HW_CHANNEL               0
#define CanRxECM_INDICATORS_HW_OBJ           46
#define CanRxECM_INDICATORS_HW_CHANNEL       0
#define CanRxPTS_StrCtrl_HW_OBJ              47
#define CanRxPTS_StrCtrl_HW_CHANNEL          0
#define CanRxDST_TOC_HW_OBJ                  48
#define CanRxDST_TOC_HW_CHANNEL              0
#define CanRxHALF_MTO_SteerControl_HW_OBJ    49
#define CanRxHALF_MTO_SteerControl_HW_CHANNEL 0
#define CanRxWHEEL_SPEED_2_HW_OBJ            50
#define CanRxWHEEL_SPEED_2_HW_CHANNEL        0
#define CanRxCBC_PT3_HW_OBJ                  51
#define CanRxCBC_PT3_HW_CHANNEL              0
#define CanRxTRNS_STAT_HW_OBJ                52
#define CanRxTRNS_STAT_HW_CHANNEL            0
#define CanRxESP_A6_HW_OBJ                   53
#define CanRxESP_A6_HW_CHANNEL               0
#define CanRxESP_A4_HW_OBJ                   54
#define CanRxESP_A4_HW_CHANNEL               0
#define CanRxTRNS_SPD_HW_OBJ                 55
#define CanRxTRNS_SPD_HW_CHANNEL             0
#define CanRxORC_YRS_DATA_HW_OBJ             56
#define CanRxORC_YRS_DATA_HW_CHANNEL         0
#define CanRxESP_A5_HW_OBJ                   57
#define CanRxESP_A5_HW_CHANNEL               0
#define CanRxESP_A8_HW_OBJ                   58
#define CanRxESP_A8_HW_CHANNEL               0
#define CanRxCBC_PT2_HW_OBJ                  59
#define CanRxCBC_PT2_HW_CHANNEL              0
#define CanRxECM_A1_HW_OBJ                   60
#define CanRxECM_A1_HW_CHANNEL               0
#define CanRxSCCM_STW_ANGL_STAT_HW_OBJ       61
#define CanRxSCCM_STW_ANGL_STAT_HW_CHANNEL   0
#define C_BASIC0_HW_OBJ                      62
#define C_BASIC0_HW_CHANNEL                  0





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 103168731
      #error "The magic number of the generated file <C:\Synergy_WorkArea\ESG_Dev_65\Chrysler_LWR_EPS_TMS570-tzj9qy\Chrysler_LWR_EPS_TMS570\SwProject\Source\_GenData\can_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 103168731
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __CAN_PAR_H__ */
