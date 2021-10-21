/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2010 by Vctr Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NvM_Cfg.h
 *    Component:  MemService_AsrNvM
 *       Module:  NvM - Submodule Cfg (configuration)
 *    Generator:  -
 *
 *  Description:  Configuration Header File.
 *                Contains Public configuration data, affecting API, and which may be accessed by applications
 *  -------------------------------------------------------------------------------------------------------------------
 *  GENERATION INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *     Project:    EPS.ecuc
 *   Generated:  2016-08-12 05:54 pm
 *    Licensee:   Hardware Dongle (2684781) 
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.2.2.6.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/* Do not modify the following parts. */
/* Modification is only allowed in the described parts */

/**********************************************************************************************************************
 * API CFG DEFINES
 *********************************************************************************************************************/

/* public section - to be used by NvM itself and its users */
#if (!defined NVM_CFG_H_PUBLIC)
#define NVM_CFG_H_PUBLIC

/**********************************************************************************************************************
 * API RELEVANT (PUBLIC) SECTION OF CONFIGURATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define NVM_CFG_MAJOR_VERSION    (3u)
#define NVM_CFG_MINOR_VERSION    (7u)
#define NVM_CFG_PATCH_VERSION    (1u)

/**********************************************************************************************************************
 * API CFG MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * NVM API TYPE INCLUDES
 *********************************************************************************************************************/

#include "Rte_Type.h"
#define NVM_RTE_INCLUDED STD_ON


#include "NvM_Types.h"

/**********************************************************************************************************************
 * API CFG TYPE DEFINITIONS
 *********************************************************************************************************************/

/* Type for an the additional published parameter Compiled Configuration ID
 * (see CompiledConfigurationId in NvM.h)
 */
/* Compiled Config Id Type */
typedef union
{
    uint16 Word_u16;
    uint8  Bytes_au8[2u];
} NvM_CompiledConfigIdType;


/**********************************************************************************************************************
 * CFG COMMON PARAMETER
 *********************************************************************************************************************/

/* --------------------  DEVELOPMENT / PRODUCTION MODE -------------------- */
/* switch between Debug- or Production-Mode */
#define NVM_DEV_ERROR_DETECT /*<NVM_DEV_ERROR_DETECT/>*/ (STD_ON)

/* Preprocessor switch that is used in NvM_ReadAll() */
#define NVM_DYNAMIC_CONFIGURATION        /*<NVM_DYNAMIC_CONFIGURATION/>*/ (STD_ON)

#define NVM_API_CONFIG_CLASS_1  (1u)
#define NVM_API_CONFIG_CLASS_2  (3u)
#define NVM_API_CONFIG_CLASS_3  (7u)

#define NVM_API_CONFIG_CLASS /*<NVM_API_CONFIG_CLASS/>*/ (NVM_API_CONFIG_CLASS_3)

#define NVM_JOB_PRIORISATION /*<NVM_JOB_PRIORISATION/>*/ STD_OFF


/* define compiled Block ID */
#define NVM_COMPILED_CONFIG_ID /*<NVM_COMPILED_CONFIG_ID/>*/ (1u)

/* switch for enablinig fast mode during multi block requests */
#define NVM_DRV_MODE_SWITCH    /*<NVM_DRV_MODE_SWITCH/>*/ (STD_ON)

/* switch for enablinig polling mode and disabling notifications */
#define NVM_POLLING_MODE    /*<NVM_POLLING_MODE/>*/ (STD_ON)

/* switch for enabling the internal buffer for Crc handling */
#define NVM_CRC_INT_BUFFER /*<NVM_CRC_INT_BUFFER/>*/ (STD_ON)

/* switch that is "ON" if dataset blocks are used */
#define NVM_USE_DATASETS    /*<NVM_USE_DATASETS/>*/ (STD_ON)

/* switch that gives the user (EcuM) the possibility to time-out WriteAll cancellation */
#define NVM_KILL_WRITEALL_API   /*<NVM_KILL_WRITEALL_API/>*/ (STD_OFF)

/* NVM does not need this macro. It is intended for underlying modules,
 * relying on its existence
 */
#define NVM_DATASET_SELECTION_BITS (1u)

/* block offset for DCM blocks */
#define NVM_DCM_BLOCK_OFFSET	0x8000u

/* returns corresponding DCM BlockId of an original NVRAM Block */
#define NvM_GetDcmBlockId(MyApplBlockId)	((MyApplBlockId) | NVM_DCM_BLOCK_OFFSET)

/* BlockId's:
 * Note: The numbers of the following list must meet the configured blocks
 *       in the NvM_BlockDescriptorTable_at
 */

/* Alignment of the handles of all blocks */
/* Id 0 is reserved for multiblock calls */
#define /*<NVM_MULTIBLOCK_ID>*/MultiBlockRequest/*</NVM_MULTIBLOCK_ID>*/ (0u)
/* Id 1 is reserved for config ID  */

#define ConfigBlock (1u)

/* user defineable blocks */
/*<NVM_BLOCK_ID_CFG>*/
#define NVM_BLOCK_NXTRWIRSELECT (2)
#define Rte_NvmBlock_MtrPos_MtrPosSnsr_EOLData (3)
#define Rte_NvmBlock_HwTrq_HwTrqScaleData (4)
#define Rte_NvmBlock_Polarity_EOLCtrlPolarity (5)
#define Rte_NvmBlock_HwTrq_HwTrqTrimData (6)
#define NVM_BLOCK_DIAGMGR_NTCSTRG (7)
#define NVM_BLOCK_EPSDEFEATS (8)
#define Rte_NvmBlock_StaMd_TypeHRamBuffer (9)
#define Rte_NvmBlock_TrqCmdScl_TorqueCmdSF_Uls_f32 (10)
#define Rte_NvmBlock_CmMtrCurr_CurrTempOffset (11)
#define Rte_NvmBlock_CmMtrCurr_ShCurrCal (12)
#define Rte_NvmBlock_CurrParamComp_EOLNomMtrParam (13)
#define Rte_NvmBlock_LrnEOT_LearnedEOT (14)
#define Rte_NvmBlock_IPMTrqCanc_CogTrqCal (15)
#define Rte_NvmBlock_HwTrq_EOLTrqStepData (16)
#define NVM_BLOCK_SER_METADATA_APPLICATION (17)
#define NVM_BLOCK_SER_METADATA_CAL1 (18)
#define NVM_BLOCK_SER_METADATA_CAL2 (19)
#define NVM_BLOCK_SER_ACTIVEDIAGINFO_BOOT (20)
#define NVM_BLOCK_SER_HWPARTNUMBER (21)
#define NVM_BLOCK_SER_HWVERSIONINFO (22)
#define NVM_BLOCK_SER_BOOTSWVERSIONINFO (23)
#define NVM_BLOCK_SER_HWSUPPID (24)
#define NVM_BLOCK_SER_RESPONEVENTACTVSTATE (25)
#define NVM_BLOCK_SER_VINODOMETERCOUNTER (26)
#define NVM_BLOCK_SER_DIAGSPECINFO (27)
#define NVM_BLOCK_SER_VEHICLEINFO (28)
#define NVM_BLOCK_SER_ECUSERIALNUMBER (29)
#define NVM_BLOCK_SER_VINCURRENT (30)
#define NVM_BLOCK_SER_VINORIGINAL (31)
#define NVM_BLOCK_SER_ACTIVEDIAGINFO_APPL (32)
#define NVM_BLOCK_CMS_NXTRMEC (33)
#define NVM_BLOCK_CMS_ECUSRLNUM (34)
#define NVM_BLOCK_CMS_EPSSRLNUM (35)
#define NVM_BLOCK_SER_ECUPN (36)
#define NVM_BLOCK_CMS_NXTRMANUFSCRATCHPAD (37)
#define NVM_BLOCK_CMS_IGNCNTR (38)
#define Rte_NvmBlock_StaMd_CloseCheckData (39)
#define NVM_BLOCK_DIAGMGR_BLACKBOX (40)
#define Rte_NvmBlock_Ap_AvgFricLrn_AvgFricLrnData (41)
#define Rte_NvmBlock_BatteryVoltage_OvervoltageData (42)
#define NVM_BLOCK_DIAGMGR_LATCHCNTRS (43)
#define NvM_NVM_BLOCK_DEM (44)
#define Rte_NvmBlock_Ap_TrqCanc_CogTrqRplComp (45)
#define Rte_NvmBlock_Ap_AstLmt_SteerAsstDefeat (46)
#define NVM_BLOCK_CMS_ECUHWPN (47)
#define NVM_BLOCK_SWFINGERPRINT (48)
#define NVM_BLOCK_RESETRESP (49)
#define NVM_BLOCK_PROGREQCNT (50)
#define NVM_BLOCK_SECDLYEN (51)
/*</NVM_BLOCK_ID_CFG>*/


/* number of defined NV blocks */
#define NVM_TOTAL_NUM_OF_NVRAM_BLOCKS   /*<NVM_TOTAL_NUM_OF_NVRAM_BLOCKS/>*/ (52u)

/* version info api switch */
#define NVM_VERSION_INFO_API            /*<NVM_VERSION_INFO_API/>*/ (STD_OFF)

/* switch to enable the ram block status api */
#define NVM_SET_RAM_BLOCK_STATUS_API    /*<NVM_SET_RAM_BLOCK_STATUS_API/>*/ (STD_ON)


/* if in Development mode, define a macro to enable State Machine checking
 * fall through errors, operating on "NO JOB" (NvM should be IDLE)
 */
#if (STD_ON == NVM_DEV_ERROR_DETECT)
    #define NVM_DEV_DETECT_FSM_ERRORS (STD_ON)    /* just for development */
#else
    #define NVM_DEV_DETECT_FSM_ERRORS (STD_OFF)   /* just for development */
#endif

/* CONST_DESCRIPTOR_TABLE contains all block relevant data,
 * including the compiled config ID
 */
#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

    /* Additional published parameter because e.g. in case of validate all RAM
     * Blocks it is nice to know the number of Blocks. But take care: this number
     * of Blocks includes Block 0 and Block 1, which are the MultiBlock and the
     * Configuration Block - user Blocks start wiht index 2!
     */
    extern CONST(uint16, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t;

    /* Additional published parameter because in case of a clear EEPROM, it is
     * necessary, to write the Configuration Block containing this Compiled
     * Configuration ID to EEPROM
     */
    /* Compiled Configuration ID as defined in NvM_Cfg.c */
    extern CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t;
#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"


/* ---- end public configuration section ---------------------------------- */

#endif /* NVM_CFG_H_PUBLIC */
/*---- End of File ---------------------------------------------------------*/
