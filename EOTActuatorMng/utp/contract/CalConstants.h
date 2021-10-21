/*****************************************************************************
* Copyright 2010 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Fri May  9 16:48:22 2003
* %version:          4 %
* %derived_by:       xz0btk %
* %date_modified:    Fri Apr 26 16:07:11 2013 %
*---------------------------------------------------------------------------*/

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H



/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 4/26/2013 4:20:44 PM *******************/
/**************** End-of-Travel Actuator Management - Rev 13 *****************/



extern CONST(Boolean, CAL_CONST) k_SoftStopEOTEnable_Cnt_lgc;
extern CONST(uint16, CAL_CONST) k_EOTDefltPosition_HwDeg_u12p4;
extern CONST(uint16, CAL_CONST) k_MinRackTrvl_HwDeg_u12p4;
extern CONST(uint16, CAL_CONST) k_MaxRackTrvl_HwDeg_u12p4;
extern CONST(uint16, CAL_CONST) t_SpdIptTblXTbl_HwDeg_u12p4[2];
extern CONST(uint16, CAL_CONST) t_SpdIptTblYTbl_MtrRadpS_u12p4[2];
extern CONST(uint16, CAL_CONST) k_SpdIptScale_MtrNmpRadpS_u4p12;
extern CONST(uint16, CAL_CONST) k_PosRampStep_HwDeg_u12p4;
extern CONST(uint16, CAL_CONST) t2_EOTEnterGainX_HwDeg_u12p4[4][4];
extern CONST(uint16, CAL_CONST) t2_EOTEnterGainY_Uls_u1p15[4][4];
extern CONST(uint16, CAL_CONST) t_EOTEnterGainVspd_Kph_u9p7[4];
extern CONST(uint16, CAL_CONST) k_EOTStateHwTrqLPFKn_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_EOTDeltaTrqThrsh_HwNm_u9p7;
extern CONST(uint16, CAL_CONST) t_TrqTableX_HwNm_u8p8[2];
extern CONST(uint16, CAL_CONST) k_EOTEnterLPFKn_Cnt_u16;
extern CONST(uint16, CAL_CONST) k_EOTExitLPFKn_Cnt_u16;
extern CONST(uint16, CAL_CONST) t2_EOTPosDepDmpTblX_HwDeg_u12p4[4][2];
extern CONST(uint16, CAL_CONST) t2_EOTPosDepDmpTblY_MtrNmpRadpS_u0p16[4][2];
extern CONST(uint16, CAL_CONST) t2_EOTExPosDepDmpTblY_MtrNmpRadps_u0p16[4][2];
extern CONST(uint16, CAL_CONST) t_EOTDmpVspd_Kph_u9p7[4];
extern CONST(uint16, CAL_CONST) k_EOTImpSpdEn_Kph_u9p7;
extern CONST(uint16, CAL_CONST) k_EOTDynConf_Uls_u8p8;
#endif


