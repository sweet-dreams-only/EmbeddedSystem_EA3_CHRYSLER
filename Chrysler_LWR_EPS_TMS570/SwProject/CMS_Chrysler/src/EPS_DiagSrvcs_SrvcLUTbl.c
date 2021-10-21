/*****************************************************************************
* Copyright 2010 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : EPS_DiagSrvcs_PIDTbl.c file
* Module Description: Common Manufacturing Program Interface for XCP and ISO services
* Product           : Gen II Plus - EA3.0
* Author            : Kevin Smith
*
* Notes:
* This file contains definition of the lookup tables.
*
*****************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          5 %
 * %derived_by:       jzh87w %
 * %date_modified:    Mon Mar  3 16:02:23 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/31/12 	1		KS		Initial Component Release
 * 08/17/12 	2		SAH		Variable updates for AbsHwPos and MtrTrqLmt removal
 * 12/17/12 	3		SAH		Variable update for new MtrVel component
 * 12/20/12 	4		SAH		Variable update for SignCondn(vehspd) component
 * 01/25/13 	5		SAH		Variable update for MtrTqCmd name change
 * 06/18/13 	7		SAH		Updates for new CMS version 2.0 generator
 * 10/15/13 	8		SAH		Updates for XCP PID variable names
 * 02/14/14 	'4		SAH		Updates to remove iso var references
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "EPS_DiagSrvcs_SrvcLUTbl.h"

#include "EPS_DiagSrvcs_ISO.Interface.h"
#include "EPS_DiagSrvcs_ISO.h"
#include "EPS_DiagSrvcs_ISO.Customer.h"
#include "EPS_DiagSrvcs_XCP.Interface.h"
#include "EPS_DiagSrvcs_XCP.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PID Table.
 * Table contains all the PIDs that are available for the XCP and ISO services
 *
 * Table Layout: PID#, Variable Address, Configuration Parameter, R/W Access, Active/Inactive
 * See the requirements and design document for more information on the table
 *
 * For Index 0, (Invalid/Null selection) all entries must be set to 0.
 *
 * ::::: IMPORTANT :::::
 * The search function is a binary search, therefore all entries MUST be in ascending numerical
 * order according to their PID#.
 */
/****************************** BEGIN CMS GENERATION - DO NOT CHANGE/REMOVE THIS COMMENT ******************************/


const struct EPS_DiagSrv_PIDtbl t_DiagSrv_PIDtbl[D_DIAGSRCVS_COMPIDTBLSIZE_CNT_U16 + D_DIAGSRCVS_PROGPIDTBLSIZE_CNT_U16] =
{
	/* System Defaults */
	{0x0000U, NULL_PTR, D_PIDTBL_PIDTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPID0000_CNT_ENUM}, /* Invalid/Null selection */
	
	/* XCP Variables for DAQ lists */
	{0x0001U, CM_ModeMachine_StaMd_SystemState_Mode, D_PIDTBL_VARTYPE, sizeof(CM_ModeMachine_StaMd_SystemState_Mode), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0001_CNT_ENUM}, /* System State */
	{0x0002U, CM_BatteryVoltage_Vecu_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_BatteryVoltage_Vecu_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0002_CNT_ENUM}, /* Battery Voltage */
	{0x0003U, CM_Adc_T1, D_PIDTBL_VARTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0003_CNT_ENUM}, /* T1 - Analog - ADC Counts */
	{0x0004U, CM_Analog_T1_Volts, D_PIDTBL_VARTYPE, sizeof(CM_Analog_T1_Volts), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0004_CNT_ENUM}, /* T1 - Analog - Volts */
	{0x0005U, CM_Adc_T2, D_PIDTBL_VARTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0005_CNT_ENUM}, /* T2 - Analog - ADC Counts */
	{0x0006U, CM_Analog_T2_Volts, D_PIDTBL_VARTYPE, sizeof(CM_Analog_T2_Volts), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0006_CNT_ENUM}, /* T2 - Analog - Volts */
	{0x0007U, CM_HwTrqArb_HwTrq_HwNm_f32, D_PIDTBL_VARTYPE, sizeof(CM_HwTrqArb_HwTrq_HwNm_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0007_CNT_ENUM}, /* Hw Trq */
	{0x0008U, CM_FinalHwPos_FinHwPos_HwDeg_f32, D_PIDTBL_VARTYPE, sizeof(CM_FinalHwPos_FinHwPos_HwDeg_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0008_CNT_ENUM}, /* AbsHw Position (Final HW Pos) */
	{0x0009U, CM_ScaledMtrPos_HwDeg_M_f32, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0009_CNT_ENUM}, /* Scaled Motor Position (formally MtrPos_MfgMtrBasedPos_HwDeg_f32) */
	{0x000AU, CM_KeFBckTyH_VpRadpS_f32, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP000A_CNT_ENUM}, /* KeFBckTyH_VpRadpS_f32 */
	{0x000BU, CM_RFBckTyH_Ohm_f32, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP000B_CNT_ENUM}, /* RFBckTyH_Ohm_f32 */
	{0x000CU, CM_Sin1MaxTyH_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_Sin1MaxTyH_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP000C_CNT_ENUM}, /* Sin 1 Max Type H */
	{0x000DU, CM_Sin1MinTyH_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_Sin1MinTyH_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP000D_CNT_ENUM}, /* Sin 1 Min Type H */
	{0x000EU, CM_Cos1MaxTyH_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_Cos1MaxTyH_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP000E_CNT_ENUM}, /* Cos 1 Max Type H */
	{0x000FU, CM_Cos1MinTyH_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_Cos1MinTyH_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP000F_CNT_ENUM}, /* Cos 1 Min Type H */
	{0x0010U, CM_MtrTrqLmt_MRFMtrTrqCmd_MtrNm_f32, D_PIDTBL_VARTYPE, sizeof(CM_MtrTrqLmt_MRFMtrTrqCmd_MtrNm_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0010_CNT_ENUM}, /* Motor Torque Limit */
	{0x0011U, CM_MtrPos_MRFCumMtrPos_Deg_f32, D_PIDTBL_VARTYPE, sizeof(CM_MtrPos_MRFCumMtrPos_Deg_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0011_CNT_ENUM}, /* Cumulative Motor Position */
	{0x0012U, CM_MtrVel_MRFMtrVel_MtrRadpS_f32, D_PIDTBL_VARTYPE, sizeof(CM_MtrVel_MRFMtrVel_MtrRadpS_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0012_CNT_ENUM}, /* Motor Velocity MRF Cord */
	{0x0013U, CM_VehicleSpeed_VehSpd_Kph_f32, D_PIDTBL_VARTYPE, sizeof(CM_VehicleSpeed_VehSpd_Kph_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0013_CNT_ENUM}, /* Vehicle Speed (KPH) */
	{0x0014U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0014_CNT_ENUM}, /* Digital (PWM) T1 Duty Cycle */
	{0x0015U, NULL_PTR, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0015_CNT_ENUM}, /* Digital (PWM) T1 Volts */
	{0x0016U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0016_CNT_ENUM}, /* Digital (PWM) T2 Duty Cycle */
	{0x0017U, NULL_PTR, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0017_CNT_ENUM}, /* Digital (PWM) T2 Volts */
	{0x0018U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0018_CNT_ENUM}, /* Digital Hw Trq */
	{0x0019U, (void *)CM_k_TbarStiff_NmpDeg_F32, D_PIDTBL_VARTYPE, sizeof(CM_k_TbarStiff_NmpDeg_F32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0019_CNT_ENUM}, /* Tbar Stiffness */
	{0x001AU, (void *)CM_k_HwTrqSclNom_VoltspDeg_f32, D_PIDTBL_VARTYPE, sizeof(CM_k_HwTrqSclNom_VoltspDeg_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP001A_CNT_ENUM}, /* Hw Trq Scale Analog */
	{0x001BU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP001B_CNT_ENUM}, /* Hw Trq Scale Digital */
	{0x001CU, CM_T1_Trim_Volts_Analog, D_PIDTBL_VARTYPE, sizeof(CM_T1_Trim_Volts_Analog), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP001C_CNT_ENUM}, /* T1 Trim Volts Analog */
	{0x001DU, CM_T2_Trim_Volts_Analog, D_PIDTBL_VARTYPE, sizeof(CM_T2_Trim_Volts_Analog), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP001D_CNT_ENUM}, /* T2 Trim Volts Analog */
	{0x001EU, CM_HwTrq_Trim_Volts_Analog, D_PIDTBL_VARTYPE, sizeof(CM_HwTrq_Trim_Volts_Analog), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP001E_CNT_ENUM}, /* HwTrqTrim Volts Analog */
	{0x001FU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP001F_CNT_ENUM}, /* T1 Trim Volts Digital */
	{0x0020U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0020_CNT_ENUM}, /* T2 Trim Volts Digital */
	{0x0021U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0021_CNT_ENUM}, /* HwTrqTrim Volts Digital */
	{0x0022U, CM_CtrlTemp_FiltMeasTemp_DegC_f32, D_PIDTBL_VARTYPE, sizeof(CM_CtrlTemp_FiltMeasTemp_DegC_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0022_CNT_ENUM}, /* Controller Temperature */
	{0x0023U, CM_QaxCurrFiltSV_Amp_M_s11p20, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0023_CNT_ENUM}, /* Motor Current State Variable (QAX, s11p20) */
	{0x0024U, CM_CDDInterface_Sin1Theta_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_CDDInterface_Sin1Theta_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0024_CNT_ENUM}, /* Sin 1 Amplitude */
	{0x0025U, CM_CDDInterface_Cos1Theta_Volts_f32, D_PIDTBL_VARTYPE, sizeof(CM_CDDInterface_Cos1Theta_Volts_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0025_CNT_ENUM}, /* Cos 1 Amplitude */
	{0x0026U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0026_CNT_ENUM}, /* Estimated QAX Current (from Param Comp) */
	{0x0027U, CM_MtrTempEst_MagTempEst_DegC_f32, D_PIDTBL_VARTYPE, sizeof(CM_MtrTempEst_MagTempEst_DegC_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0027_CNT_ENUM}, /* Mag Temp Estimate (DegC) */
	{0x0028U, CM_VltgCtrl_ModIdx_Uls_f32, D_PIDTBL_VARTYPE, sizeof(CM_VltgCtrl_ModIdx_Uls_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0028_CNT_ENUM}, /* Mod Index */
	{0x0029U, CM_TemperatureADC_Volt_f32, D_PIDTBL_VARTYPE, sizeof(CM_TemperatureADC_Volt_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0029_CNT_ENUM}, /* Controller Temperature (ADC Volts) */
	{0x002AU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP002A_CNT_ENUM}, /* P1 (ADC Volts) */
	{0x002BU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP002B_CNT_ENUM}, /* P2 (ADC Volts) */
	{0x002CU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP002C_CNT_ENUM}, /* P1 (ADC Counts) */
	{0x002DU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP002D_CNT_ENUM}, /* P2 (ADC Counts) */
	{0x002EU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP002E_CNT_ENUM}, /* Relative Hw Position */
	{0x002FU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP002F_CNT_ENUM}, /* Motor Current Measurement */
	{0x0030U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0030_CNT_ENUM}, /* Engine Speed (RPM) */
	{0x0031U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0031_CNT_ENUM}, /* Motor Current Gain 1 (Brushed) */
	{0x0032U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0032_CNT_ENUM}, /* Motor Current Gain 2 (Brushed) */
	{0x0033U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0033_CNT_ENUM}, /* Motor Current Offset 1 (Brushed) */
	{0x0034U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0034_CNT_ENUM}, /* Motor Current Offset 2 (Brushed) */
	{0x0035U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0035_CNT_ENUM}, /* Learned R (Brushed) */
	{0x0036U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0036_CNT_ENUM}, /* Learned Ke(Brushed) */
	{0x0037U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0037_CNT_ENUM}, /* RawCurrent1 */
	{0x0038U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0038_CNT_ENUM}, /* RawCurrent2 */
	{0x0039U, CM_MtrCurrQax_Amp_f32, D_PIDTBL_VARTYPE, sizeof(CM_MtrCurrQax_Amp_f32), 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0039_CNT_ENUM}, /* Motor Current QAX */
	{0x003AU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP003A_CNT_ENUM}, /* Motor Current DAX */
	{0x003BU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP003B_CNT_ENUM}, /* Valid Current Sample */
	{0x003CU, NULL_PTR, D_PIDTBL_VARTYPE, 10U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP003C_CNT_ENUM}, /* Turns Counter SPI Data */
	{0x003DU, NULL_PTR, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READWRITE, D_EPSDIAGSRVXCP003D_CNT_ENUM}, /* Sin 1 RT Offset */
	{0x003EU, NULL_PTR, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READWRITE, D_EPSDIAGSRVXCP003E_CNT_ENUM}, /* Cos 1 RT Offset */
	{0x003FU, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READWRITE, D_EPSDIAGSRVXCP003F_CNT_ENUM}, /* EOL Sin 1 Offset */
	{0x0040U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READWRITE, D_EPSDIAGSRVXCP0040_CNT_ENUM}, /* EOL Cos 1 Offset */
	/* Range 0x0041 to 0x00FF available for future use - (191) */
	
	/* XCP Static DAQ List IDs */
	{0x0100U, NULL_PTR, D_PIDTBL_VARTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0100_CNT_ENUM}, /* Static DAQ: Not Defined */
	{0x0101U, NULL_PTR, D_PIDTBL_VARTYPE, 6U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0101_CNT_ENUM}, /* Static DAQ: Motor Learning */
	{0x0102U, NULL_PTR, D_PIDTBL_VARTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0102_CNT_ENUM}, /* Static DAQ: Torque Ratio */
	{0x0103U, NULL_PTR, D_PIDTBL_VARTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0103_CNT_ENUM}, /* Static DAQ: Torque Sweep */
	{0x0104U, NULL_PTR, D_PIDTBL_VARTYPE, 5U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0104_CNT_ENUM}, /* Static DAQ: Static Effort Long Sweept */
	{0x0105U, NULL_PTR, D_PIDTBL_VARTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0105_CNT_ENUM}, /* Static DAQ: Rotor Stiffness */
	{0x0106U, NULL_PTR, D_PIDTBL_VARTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0106_CNT_ENUM}, /* Static DAQ: Noise Test */
	{0x0107U, NULL_PTR, D_PIDTBL_VARTYPE, 5U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0107_CNT_ENUM}, /* Static DAQ: Position */
	{0x0108U, NULL_PTR, D_PIDTBL_VARTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0108_CNT_ENUM}, /* Static DAQ: Turns Counter SPI Data */
	{0x0109U, NULL_PTR, D_PIDTBL_VARTYPE, 5U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP0109_CNT_ENUM}, /* Static DAQ: Motor Current */
	{0x010AU, NULL_PTR, D_PIDTBL_VARTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP010A_CNT_ENUM}, /* Static DAQ: Analog Torque Sensor Info */
	{0x010BU, NULL_PTR, D_PIDTBL_VARTYPE, 3U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVXCP010B_CNT_ENUM}, /* Static DAQ: Static Effort Long Sweep Analog */
	/* Range 0x010C to 0x01FF available for future use - (244) */
	
	/* Reset Services */
	{0x1160U, &EPSInternal_RESET_1160, D_PIDTBL_RESETTYPE, 0U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVRESET1160_CNT_ENUM}, /* Nxtr ECU Reset */
	/* Range 0x1161 to 0x117E available for future use - (30) */
	
	/* Routine I/O Services */
	{0xF000U, &EPSInternal_RID_F000, D_PIDTBL_RIDTYPE, 3U, 0U, 0U, 0x0007U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF000_CNT_ENUM}, /* Manufacturing Variable Reset */
	{0xF001U, &EPSInternal_RID_F001, D_PIDTBL_RIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF001_CNT_ENUM}, /* Clear Diagnostic Trouble Codes (NTC/CTC) */
	{0xF002U, &EPSInternal_RID_F002, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0003U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF002_CNT_ENUM}, /* Torque Sensor End of Line Calibration */
	{0xF003U, &EPSInternal_RID_F003, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0007U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF003_CNT_ENUM}, /* Position Sensor End of Line Calibration */
	{0xF004U, &EPSInternal_RID_F004, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0007U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF004_CNT_ENUM}, /* Torque Sensor End of Line Calibration - Digital */
	{0xF005U, &EPSInternal_RID_F005, D_PIDTBL_RIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF005_CNT_ENUM}, /* DTC Status By Number */
	{0xF006U, &EPSInternal_RID_F006, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF006_CNT_ENUM}, /* Turns Counter Flash Programming */
	{0xF007U, &EPSInternal_RID_F007, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF007_CNT_ENUM}, /* Turns Counter Position EOL Calibration */
	{0xF008U, &EPSInternal_RID_F008, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0003U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF008_CNT_ENUM}, /* Current Mode - Current Gain Calc */
	{0xF009U, &EPSInternal_RID_F009, D_PIDTBL_RIDTYPE, 0U, 0U, 0U, 0x0003U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF009_CNT_ENUM}, /* Current Mode - Current Offset Calc */
	{0xF00AU, &EPSInternal_RID_F00A, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF00A_CNT_ENUM}, /* Write RAM to EEPROM Service */
	{0xF00BU, &EPSInternal_RID_F00B, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF00B_CNT_ENUM}, /* Unused */
	{0xF00CU, &EPSInternal_RID_F00C, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF00C_CNT_ENUM}, /* Clear Turns Counter EOL Calibrations */
	{0xF00DU, &EPSInternal_RID_F00D, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF00D_CNT_ENUM}, /* Voltage Mode - Calculate Current Gain */
	{0xF00EU, &EPSInternal_RID_F00E, D_PIDTBL_RIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF00E_CNT_ENUM}, /* Voltage Mode - Set Current Offset */
	{0xF00FU, &EPSInternal_RID_F00F, D_PIDTBL_RIDTYPE, 5U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF00F_CNT_ENUM}, /* Neteer Goto Position */
	/* Range 0xF010 to 0xF0FE available for future use - (239) */
	{0xF0FFU, &EPSInternal_RID_F0FF, D_PIDTBL_RIDTYPE, 6U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVRIDF0FF_CNT_ENUM}, /* MPU/Program Flow Test */
	/* Range 0xF100 to 0xFCFF available for future use - (3072) */
	
	/* PID and I/O Control Services */
	{0xFD01U, &EPSInternal_PID_FD01, D_PIDTBL_PIDTYPE, 322U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD01_CNT_ENUM}, /* Internal Software Identifier */
	{0xFD02U, &EPSInternal_PID_FD02, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD02_CNT_ENUM}, /* Serial Communication Service Active (Defeats) */
	{0xFD03U, &EPSInternal_PID_FD03, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD03_CNT_ENUM}, /* End of Line Position Sensor */
	{0xFD04U, &EPSInternal_PID_FD04, D_PIDTBL_PIDTYPE, 322U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD04_CNT_ENUM}, /* End of Line Sine/Cosine Motor Parameters */
	{0xFD05U, &EPSInternal_PID_FD05, D_PIDTBL_PIDTYPE, 13U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD05_CNT_ENUM}, /* End of Line Torque Sensor - Analog */
	{0xFD06U, &EPSInternal_PID_FD06, D_PIDTBL_PIDTYPE, 15U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD06_CNT_ENUM}, /* End of Line Digital Motor Parameters */
	{0xFD07U, &EPSInternal_PID_FD07, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD07_CNT_ENUM}, /* End of Line Polarity */
	{0xFD08U, &EPSInternal_PID_FD08, D_PIDTBL_PIDTYPE, 5U, 0U, 0U, 0x0003U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD08_CNT_ENUM}, /* End of Line Torque Sensor Scaling - Analog */
	{0xFD09U, &EPSInternal_PID_FD09, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0007U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD09_CNT_ENUM}, /* Learned Ke */
	{0xFD0AU, &EPSInternal_PID_FD0A, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0007U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD0A_CNT_ENUM}, /* Learned R */
	{0xFD0BU, &EPSInternal_PID_FD0B, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD0B_CNT_ENUM}, /* EOL Wheel Imbalance Select */
	{0xFD0CU, &EPSInternal_PID_FD0C, D_PIDTBL_PIDTYPE, 6U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD0C_CNT_ENUM}, /* End of Line Ke, R and L Motor Parameters */
	{0xFD0DU, &EPSInternal_IOC_FD0D, D_PIDTBL_IOCTYPE, 2U, 0U, 0U, 0x0002U, D_PIDTBL_READONLY, D_EPSDIAGSRVIOCFD0D_CNT_ENUM}, /* I/O Control: Motor Torque Command */
	{0xFD0EU, &EPSInternal_PID_FD0E, D_PIDTBL_PIDTYPE, 8U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD0E_CNT_ENUM}, /* Motor Stiffness Check */
	{0xFD0FU, &EPSInternal_PID_FD0F, D_PIDTBL_PIDTYPE, 59U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD0F_CNT_ENUM}, /* ECU Hardware Description Table */
	{0xFD10U, &EPSInternal_PID_FD10, D_PIDTBL_PIDTYPE, 10U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD10_CNT_ENUM}, /* Nxtr CCP/XCP Transmit and Receive IDs */
	{0xFD11U, &EPSInternal_IOC_FD11, D_PIDTBL_IOCTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVIOCFD11_CNT_ENUM}, /* I/O Control: Control Assist Gain */
	{0xFD12U, &EPSInternal_PID_FD12, D_PIDTBL_PIDTYPE, 28U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD12_CNT_ENUM}, /* Current Mode Offset and Gain */
	{0xFD13U, &EPSInternal_PID_FD13, D_PIDTBL_PIDTYPE, 75U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD13_CNT_ENUM}, /* Read Nxtr DTCs */
	{0xFD14U, &EPSInternal_PID_FD14, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD14_CNT_ENUM}, /* Vehicle System State */
	{0xFD15U, &EPSInternal_PID_FD15, D_PIDTBL_PIDTYPE, 13U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD15_CNT_ENUM}, /* End of Line Torque Sensor - Digital */
	{0xFD16U, &EPSInternal_PID_FD16, D_PIDTBL_PIDTYPE, 5U, 0U, 0U, 0x0003U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD16_CNT_ENUM}, /* End of Line Torque Sensor Scaling - Digital */
	{0xFD17U, &EPSInternal_PID_FD17, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD17_CNT_ENUM}, /* Flash Memory Size */
	{0xFD18U, &EPSInternal_PID_FD18, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD18_CNT_ENUM}, /* EOL Handwheel Position Sensor Select */
	{0xFD19U, &EPSInternal_PID_FD19, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD19_CNT_ENUM}, /* Nxtr MEC */
	{0xFD1AU, &EPSInternal_PID_FD1A, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD1A_CNT_ENUM}, /* System State */
	{0xFD1BU, &EPSInternal_PID_FD1B, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD1B_CNT_ENUM}, /* Manual Vehicle Speed Override */
	{0xFD1CU, &EPSInternal_PID_FD1C, D_PIDTBL_PIDTYPE, 3U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD1C_CNT_ENUM}, /* Manufacturing Services Version */
	{0xFD1DU, &EPSInternal_PID_FD1D, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD1D_CNT_ENUM}, /* EOL Return Range */
	{0xFD1EU, &EPSInternal_PID_FD1E, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD1E_CNT_ENUM}, /* Torque Sensor Diagnostic Defeat */
	{0xFD1FU, &EPSInternal_PID_FD1F, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD1F_CNT_ENUM}, /* Serial Comm Handwheel Position Defeat */
	{0xFD20U, &EPSInternal_PID_FD20, D_PIDTBL_PIDTYPE, 3U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD20_CNT_ENUM}, /* Read Transient Overvoltage Data */
	{0xFD21U, &EPSInternal_PID_FD21, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD21_CNT_ENUM}, /* Vehicle Tuning Select */
	{0xFD22U, &EPSInternal_PID_FD22, D_PIDTBL_PIDTYPE, 20U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD22_CNT_ENUM}, /* Turns Counter Software Identifiers */
	{0xFD23U, &EPSInternal_PID_FD23, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD23_CNT_ENUM}, /* Turns Counter Energy Mode */
	{0xFD24U, &EPSInternal_PID_FD24, D_PIDTBL_PIDTYPE, 6U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD24_CNT_ENUM}, /* Turns Counter EOL Calibrations */
	{0xFD25U, &EPSInternal_PID_FD25, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD25_CNT_ENUM}, /* Motor Torque Scale Factor */
	{0xFD26U, &EPSInternal_PID_FD26, D_PIDTBL_PIDTYPE, 3U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD26_CNT_ENUM}, /* Average Friction Learning Select */
	{0xFD27U, &EPSInternal_PID_FD27, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD27_CNT_ENUM}, /* Friction Offset Output Defeat */
	{0xFD28U, &EPSInternal_PID_FD28, D_PIDTBL_PIDTYPE, 12U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD28_CNT_ENUM}, /* Turns Counter Flash Traceability ID */
	{0xFD29U, &EPSInternal_PID_FD29, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFD29_CNT_ENUM}, /* Set EOL Friction Learned */
	/* Range 0xFD2A to 0xFD2F available for future use - (6) */
	{0xFD30U, &EPSInternal_PID_FD30, D_PIDTBL_PIDTYPE, 5U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD30_CNT_ENUM}, /* End of Line Torque Trim Value - Digital SENT */
	{0xFD31U, &EPSInternal_PID_FD31, D_PIDTBL_PIDTYPE, 12U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD31_CNT_ENUM}, /* Torque Sensor Value - Digital SENT */
	/* Range 0xFD32 to 0xFD40 available for future use - (15) */
	{0xFD41U, &EPSInternal_PID_FD41, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFD41_CNT_ENUM}, /* Torque Sensor 1 and 2 Voltage */
	/* Range 0xFD42 to 0xFD9F available for future use - (94) */
	{0xFDA0U, &EPSInternal_PID_FDA0, D_PIDTBL_PIDTYPE, 1U, 0U, 0U, 0x0000U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDA0_CNT_ENUM}, /* Unused */
	{0xFDA1U, &EPSInternal_PID_FDA1, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDA1_CNT_ENUM}, /* ECU Serial Number */
	{0xFDA2U, &EPSInternal_PID_FDA2, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDA2_CNT_ENUM}, /* EPS Serial Number */
	{0xFDA3U, &EPSInternal_PID_FDA3, D_PIDTBL_PIDTYPE, 12U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDA3_CNT_ENUM}, /* ECU Hardware Part Number */
	{0xFDA4U, &EPSInternal_PID_FDA4, D_PIDTBL_PIDTYPE, 12U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFDA4_CNT_ENUM}, /* OBSOLETE: Ship State Part Number */
	{0xFDA5U, &EPSInternal_PID_FDA5, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDA5_CNT_ENUM}, /* Shunt Current Offset and Gain */
	/* Entry 0xFDA6 available for future use */
	{0xFDA7U, &EPSInternal_PID_FDA7, D_PIDTBL_PIDTYPE, 38U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDA7_CNT_ENUM}, /* Non-Contacting Sensor Calibration Set 1 */
	{0xFDA8U, &EPSInternal_PID_FDA8, D_PIDTBL_PIDTYPE, 20U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFDA8_CNT_ENUM}, /* Non-Contacting Sensor Calibration Set 2 */
	{0xFDA9U, &EPSInternal_PID_FDA9, D_PIDTBL_PIDTYPE, 20U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFDA9_CNT_ENUM}, /* Non-Contacting Sensor Calibration Set 3 */
	/* Range 0xFDAA to 0xFDAB available for future use - (2) */
	{0xFDACU, &EPSInternal_PID_FDAC, D_PIDTBL_PIDTYPE, 64U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDAC_CNT_ENUM}, /* Nxtr Manufacturing Scratchpad */
	{0xFDADU, &EPSInternal_PID_FDAD, D_PIDTBL_PIDTYPE, 7U, 0U, 0U, 0x0001U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFDAD_CNT_ENUM}, /* Active Pull Compensation */
	{0xFDAEU, &EPSInternal_PID_FDAE, D_PIDTBL_PIDTYPE, 2U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDAE_CNT_ENUM}, /* Ignition Counter */
	{0xFDAFU, &EPSInternal_PID_FDAF, D_PIDTBL_PIDTYPE, 176U, 0U, 0U, 0x0000U, D_PIDTBL_READONLY, D_EPSDIAGSRVPIDFDAF_CNT_ENUM}, /* NTC Snapshot Data */
	{0xFDB0U, &EPSInternal_PID_FDB0, D_PIDTBL_PIDTYPE, 256U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB0_CNT_ENUM}, /* IPM Cogging Table (1 of 5) */
	{0xFDB1U, &EPSInternal_PID_FDB1, D_PIDTBL_PIDTYPE, 256U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB1_CNT_ENUM}, /* IPM Cogging Table (2 of 5) */
	{0xFDB2U, &EPSInternal_PID_FDB2, D_PIDTBL_PIDTYPE, 256U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB2_CNT_ENUM}, /* IPM Cogging Table (3 of 5) */
	{0xFDB3U, &EPSInternal_PID_FDB3, D_PIDTBL_PIDTYPE, 256U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB3_CNT_ENUM}, /* IPM Cogging Table (4 of 5) */
	{0xFDB4U, &EPSInternal_PID_FDB4, D_PIDTBL_PIDTYPE, 8U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB4_CNT_ENUM}, /* Current Mode Analog Ke, R, Ld, and Lq */
	{0xFDB5U, &EPSInternal_PID_FDB5, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB5_CNT_ENUM}, /* Active Pull Set Short Term Comp */
	{0xFDB6U, &EPSInternal_PID_FDB6, D_PIDTBL_PIDTYPE, 4U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB6_CNT_ENUM}, /* Active Pull Set Long Term Comp */
	{0xFDB7U, &EPSInternal_PID_FDB7, D_PIDTBL_PIDTYPE, 18U, 0U, 0U, 0x0001U, D_PIDTBL_READWRITE, D_EPSDIAGSRVPIDFDB7_CNT_ENUM} /* IPM Cogging Table (5 of 5) */
};


/******************************* END CMS GENERATION - DO NOT CHANGE/REMOVE THIS COMMENT *******************************/