/*****************************************************************************
* Copyright 2012 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : Adc_Cfg.h
* Module Description: Adc Driver configuration
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Sat Jul 28 18:03:04 2012
* %version:          6 %
* %derived_by:       jzh87w %
* %date_modified:    Thu Jun 27 12:54:30 2013 %
*---------------------------------------------------------------------------*/


#ifndef ADC_CFG_H
#define ADC_CFG_H


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#include "Adc.h"
#include "SchM_Adc.h"
/*** For 33E ADc (Current mode) define the following macro ***/
#define D_ADC1CURRENTMODE_ULS_LGC

/* Map user defined group conversion names to appropriate group indexer */
#define AdcFwdPath     		D_GROUP1_CNT_U8
#define AdcFdbkPath     	D_GROUP2_CNT_U8
#define adcGROUP0			D_GROUPEV_CNT_U8


#define D_ADC1NUMEVTCH_CNT_U08	0U				/* Number of channels sampled (e.g. number of bits set in D_ADC1EVTCH_CNT_U32) */
#define D_ADC1EVTCH_CNT_U32		0x0000U
#define D_ADC1EVTBUFSZ_CNT_U08	54U				/* Number of results allocated in ADC RAM, must be even */

#define D_ADC1NUMG1CH_CNT_U08	2U				/* Number of channels sampled (e.g. number of bits set in D_ADC1G1CH_CNT_U32) */
#define D_ADC1G1CH_CNT_U32		0xC000U
#define D_ADC1G1BUFSZ_CNT_U08	2U				/* Number of results allocated in ADC RAM, must be even */

#define D_ADC1NUMG2CH_CNT_U08	8U				/* Number of channels sampled (e.g. number of bits set in D_ADC1G2CH_CNT_U32) */
#define D_ADC1G2CH_CNT_U32		0x3F21U
#define D_ADC1G2BUFSZ_CNT_U08	8U				/* Number of results allocated in ADC RAM, must be even */

#define ADC1_REPORTERRORSTATUS(event, param, status)		NxtrDiagMgr10_ReportNTCStatus(event, param, status)
#define ADC_EVENT_PASSED				NTC_STATUS_PASSED
#define ADC_EVENT_FAILED				NTC_STATUS_FAILED
//#define  D_TRUE_CNT_LGC                 TRUE
//#define  D_FALSE_CNT_LGC                FALSE

typedef uint8	Adc_ConfigType;

#endif
