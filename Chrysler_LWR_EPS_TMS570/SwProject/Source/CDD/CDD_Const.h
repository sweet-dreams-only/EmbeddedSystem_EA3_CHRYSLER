/*****************************************************************************
* Copyright 2010 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : CDD_Const.h
* Module Description: Header file for common constant data used within Nxtr
*                      Complex Device Drivers (CDD)
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          2 %
 * %derived_by:       jzh87w %
 * %date_modified:    Wed May 29 11:25:34 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 04/13/11  1        LWW       Initial K2xx Synergy Version
 * 04/13/11  2        LWW       Removed and relocated ADC access constants
 * 05/23/13  '2		  SAH		Removed Over sample buffer
 */

#ifndef CDD_COMST_H
#define CDD_CONST_H

#define  D_NUMADC2GRP1CONV_CNT_U16     4U
#define  D_NUMADC2GRP2CONV_CNT_U16     6U
#define  D_NUMADC2TOTCONV_CNT_U16      (D_NUMADC2GRP1CONV_CNT_U16 + D_NUMADC2GRP1CONV_CNT_U16)

#define  D_MTRISRVIMIDX_CNT_u16        2U

#define  D_APPCDDBFRSIZE_CNT_U16       2U

#define  D_MAXDTCSTORAGE_CNT_U16	   15U

#endif
