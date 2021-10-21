/* -----------------------------------------------------------------------------
  Filename:    Dem_Lcfg.h
  Description: Toolversion: 12.00.00.01.11.00.60.00.00.00
               
               Serial Number: CBD1110060
               Customer Info: Nxtr GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments tbd
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
               Configuration   : C:\Documents and Settings\jzh87w\My Documents\EA3.x\GM_K2xx\My_06P\GM_K2XX_EPS_TMS570\Tools\AsrProject\Config\DEM\gmHS_AFS_HS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "CAN00":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2012-06-08  12:15:30
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

#if !defined(DEM_LCFG_H)
#define DEM_LCFG_H

/* -----------------------------------------------------------------------------
    &&&~ Dem Parameters
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
#define DEM_MAX_NUMBER_EVENT_ENTRY           29
#define DEM_NUMBER_OF_VIEWS                  0
#define DEM_NUMBER_OF_EVENTS                 57
#define DEM_STATUS_AVAILABILITY_MASK         0xFFu
#define DEM_NUMBER_OF_OPERATION_CYCLES       4
#define DEM_NUMBER_OF_INDICATORS             2
#define DEM_MAX_EXTDATA_RECORD_SIZE          0
#define DEM_MAX_SNAPSHOT_RECORD_SIZE         21
#define DEM_BSW_ERROR_BUFFER_SIZE            32
#define DEM_ADD_ERROR_BUFFER_SIZE            1
#define DEM_SNAPSHOTS_PER_DTC                2
#define DEM_FIRST_SNAPSHOT_TO_OVERWRITE      0
#define DEM_PRESTORE_FF_BUFFER_SIZE          1
/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dem_Indicators
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Diag_AsrDemLinktimeCRC */
#define Dem_Warning_Indicator                0
#define Dem_Steering_Reduced_Assist          1
/* END of Checksum exclude for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Defined DTC Groups
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
#define DEM_DTC_GROUP_POWERTRAIN_DTCS        0x000001
#define DEM_DTC_GROUP_CHASSIS_DTCS           0x400000
#define DEM_DTC_GROUP_BODY_DTCS              0x800000
#define DEM_DTC_GROUP_NETWORK_COM_DTCS       0xC00000
/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dem configuration type definitions
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
typedef P2VAR(uint8, TYPEDEF, DEM_APPL_DATA) Dem_ApplBufferPtrType; /* PRQA S 0850 */ /* MD_MSR_19.8 */
typedef VAR(uint8, TYPEDEF) Dem_DtcChronoRefType;
typedef struct Dem_ChronoPriMemTypeTag
{
  Dem_EventIdType dtcInternalNumber;
  Dem_DtcChronoRefType ref;
} Dem_ChronoPriMemType;
typedef struct Dem_NonVolatileDataTypeTag
{
  uint8 consistencyPattern[DEM_NVDATA_PATTERN_SIZE];
  Dem_DtcChronoRefType chronoPriMemUsed;
  uint8 primaryStack[DEM_MAX_NUMBER_EVENT_ENTRY][(DEM_MAX_EXTDATA_RECORD_SIZE)+(DEM_SNAPSHOTS_PER_DTC*DEM_MAX_SNAPSHOT_RECORD_SIZE)+1];
  Dem_ChronoPriMemType chronoPriMem[DEM_MAX_NUMBER_EVENT_ENTRY];
  Dem_DtcStatusByteType dtcStatusByte[DEM_NUMBER_OF_EVENTS+1];
  sint8 dtcFaultDetectionCounter[DEM_NUMBER_OF_EVENTS+1];
  uint8 dtcAgingCounter[DEM_MAX_NUMBER_EVENT_ENTRY];
  Dem_EventIdType firstFailedEvent;
  Dem_EventIdType firstConfirmedEvent;
  Dem_EventIdType mostRecentFailedEvent;
  Dem_EventIdType mostRecentConfirmedEvent;
  uint8 terminatingPattern[DEM_NVDATA_PATTERN_SIZE];
} Dem_NonVolatileDataType;
typedef struct Dem_DemConfigurationTypeTag
{
  uint8 DTCTranslationFormat;
} Dem_DemConfigurationType;
typedef struct Dem_DIDLookupTableTypeTag
{
  uint16 did;
  Dem_GetDataValueByDataIdentifierType pFunc;
} Dem_DIDLookupTableType;
typedef VAR(uint8, TYPEDEF) Dem_DataRecordSizeType; /* PRQA S 0850 */ /* MD_MSR_19.8 */
/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Global Data Prototypes
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ RAM buffers of NVRAM stored data
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern VAR(Dem_NonVolatileDataType, DEM_APPL_DATA) Dem_NvData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, DEM_APPL_DATA) Dem_PreFFBuffer[DEM_PRESTORE_FF_BUFFER_SIZE]; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* -----------------------------------------------------------------------------
    &&&~ RAM buffers for internal data
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_VAR_FAST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern VAR(Dem_DtcInternalStatusType, DEM_VAR_NOINIT_FAST) Dem_DtcInternalStatus[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */

#define DEM_STOP_SEC_VAR_FAST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define DEM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern VAR(Dem_OperationCycleStateType, DEM_VAR_NOINIT) Dem_OperationCycleState[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define DEM_START_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"
extern VAR(Dem_EventIdType, DEM_VAR_NOINIT) Dem_IndicatorCounter[][2]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"

#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern VAR(uint32, DEM_VAR_NOINIT) Dem_EnableConditionState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Dem_AQElementType, DEM_VAR_NOINIT) Dem_ActionQueue[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* -----------------------------------------------------------------------------
    &&&~ Precompile/Linktime specific config data
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_CONST_LCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern CONST(Dem_DemConfigurationType, DEM_CONST) Dem_DemConfiguration; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */

extern CONST(Dem_NvMBlockIdType, DEM_CONST) Dem_NvramBlockIdTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */

extern CONST(Dem_DTCGroupMappingType, DEM_CONST) Dem_DTCGroupTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(uint8, DEM_CONST) Dem_LinkTimeProperty[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(uint8, DEM_CONST) Dem_InitMonitorIndexTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_InitMonitorFPtrType, DEM_CONST) Dem_InitMonitorFPtrTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_TriggerDTCFunctionType, DEM_CONST) Dem_TriggerDTCFunctionTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_TriggerFunctionType, DEM_CONST) Dem_TriggerFunctionTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(uint8, DEM_CONST) Dem_IndicatorCountTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(uint8, DEM_CONST) Dem_IndicatorIndexTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_IndicatorIdType, DEM_CONST) Dem_IndicatorIdTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_IndicatorStatusType, DEM_CONST) Dem_IndicatorStatusTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_DTCGroupKindType, DEM_CONST) Dem_EventGroupTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_DIDLookupTableType, DEM_CONST) Dem_DIDLookupTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */
extern CONST(Dem_GetExtDataRecordFPtrType, DEM_CONST) Dem_GetExtDataRecordListTable[]; /* PRQA S 0850, 3684 */ /* MD_MSR_19.8, MD_DEM_8.12 */


extern CONST(uint8, DEM_CONST) Dem_StatusAvailabilityMask; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_MaxSizeOfSnapshotRecord; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_MaxSizeOfExtdataRecord; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_NumberOfOperationCycles; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_NumberOfIndicators; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint8, DEM_CONST) Dem_NvramBlockIdCount; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(Dem_EventIdType, DEM_CONST) Dem_MaxCountOfEventId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_PriMemElementSize; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(Dem_DtcChronoRefType, DEM_CONST) Dem_MaxPriMemElementCount; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_SizeofPreFFBuffer; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint8, DEM_CONST) Dem_SnapshotsPerDTC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint8, DEM_CONST) Dem_FirstOverwritableSnapshot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint8, DEM_CONST) Dem_ReportErrorBufferSize; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint16, DEM_CONST) Dem_ActionQueueCount; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint8, DEM_CONST) Dem_DTCGroupMappingCount; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(uint8, DEM_CONST) Dem_SizeofEventIdType; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONSTP2VAR(Dem_NonVolatileDataType, DEM_CONST, DEM_APPL_DATA) Dem_NvDataPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_ConsistencyPatternPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_PrimaryStackPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_ChronoPriMemType, DEM_CONST, DEM_APPL_DATA) Dem_ChronoPriMemPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_DtcStatusByteType, DEM_CONST, DEM_APPL_DATA) Dem_DtcStatusBytePtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_DtcChronoRefType, DEM_CONST, DEM_APPL_DATA) Dem_ChronoPriMemUsedPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(sint8, DEM_CONST, DEM_APPL_DATA) Dem_FaultDetectionCounterPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_DtcAgingCounterPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_FirstFailedEventIdPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_FirstConfirmedEventIdPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_MostRecentFailedEventIdPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_MostRecentConfmdEventIdPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_VAR_NOINIT) Dem_OperationCycleStatePtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_TerminatingPatternPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */


#define DEM_STOP_SEC_CONST_LCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Global Function Prototypes
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
#define DEM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Access function to global configuration data
 ----------------------------------------------------------------------------- */

extern FUNC(Dem_EventIdType, DEM_CODE) DemCfg_GetMaxCountOfEventId(void); /* PRQA S S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetDTCTranslationFormat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetMaxCountOfOperationCycle(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfSnapshotsPerDTC(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetFirstOccurredRecordNr(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetMaxSnapshotRecordSize(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_Get1stOverwrtSnapshotIndex(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
/* No longer used, kept for compatibility */
#define DemCfg_GetCountOfGlobalSsDIDs(EventId) 0
#define DemCfg_GetFirstGlobalSsRecord(EventId) 0
extern FUNC(uint16, DEM_CODE) DemCfg_GetMaxExtdataRecordSize(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_DtcChronoRefType, DEM_CODE) DemCfg_GetMaxCountOfPriMemStack(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint32, DEM_CODE) DemCfg_GetEnableConditionInitValue(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */


extern FUNC(Dem_DTCGroupKindType, DEM_CODE) Dem_MapGroupNumberToGroupKind(Dem_DTCType DTCGroupNumber); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_DTCType, DEM_CODE) DemCfg_GetDTCnumber(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/* -----------------------------------------------------------------------------
    &&&~ Access functions to the event specific configurable data
 ----------------------------------------------------------------------------- */

extern FUNC(Dem_InitMonitorFPtrType, DEM_CODE) DemCfg_GetInitMonitorFPtr(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_TriggerOnDTCIndexType, DEM_CODE) DemCfg_GetFirstTriggerOnDTC(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfTriggerOnDTC(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_TriggerOnEventIndexType, DEM_CODE) DemCfg_GetFirstTriggerOnEvent(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfTriggerOnEvent(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_EventPriorityType, DEM_CODE) DemCfg_GetEventPriority(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_DTCSeverityType, DEM_CODE) DemCfg_GetDTCSeverity(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetAgingCycleId(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetOperationCycleId(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetNumberOfAgingCycles(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetEnableConditionMask(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfIndicatorIds(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetIndicatorIndex(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_IndicatorIdType, DEM_CODE) DemCfg_GetIndicatorId(uint16 IndIdIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_IndicatorStatusType, DEM_CODE) DemCfg_GetIndicatorStatusType(uint16 IndIdIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_EventIdPtrType, DEM_CODE) DemCfg_GetIndicatorCounterPtr(Dem_IndicatorIdType IndicatorId, Dem_IndicatorStatusType IndicatorBehavior); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_ViewIdType, DEM_CODE) DemCfg_GetViewId(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetFunctionalUnit(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(boolean, DEM_CODE) DemCfg_GetDtcSupportWarningIndicator(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(boolean, DEM_CODE) DemCfg_GetDtcSuppressFlag(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(boolean, DEM_CODE) DemCfg_GetIsAgingAllowed(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetIsPredebJumpPreFailed(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetIsPredebJumpPrePassed(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetPredebStepsizePreFailed(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetPredebStepsizePrePassed(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_DTCKindType, DEM_CODE) DemCfg_GetDTCKind(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetDTCOrigin(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_DTCGroupKindType, DEM_CODE) DemCfg_GetDTCGroupKind(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetFirstSnapshot(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfSnapshotDIDs(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetSnapshotDID(uint16 SsRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_RecordDIDAddrType, DEM_CODE) DemCfg_GetSnapshotDIDAddr(uint16 SsRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(Dem_DataRecordSizeType, DEM_CODE) DemCfg_GetSnapshotDIDDataSize(uint16 SsRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetFirstSnapshotRecNumber(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfSnapshotRecNumbers(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetSnapshotRecordNumber(uint16 ssRecordIndex); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetSnapshotRecordDIDsSize(uint16 ssRecordIndex); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetSnapshotRecordNumberOfDIDs(uint16 ssRecordIndex); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetSnapshotRecordDIDIndex(uint16 ssRecordIndex); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_PrestoreFFBufStartOffset(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_PrestoreFFBufSize(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_PrestoreFFBufEndOffset(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetFirstExtendedRecord(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetCountOfCurrentExtendedRecord(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint8, DEM_CODE) DemCfg_GetExtendedRecordNumber(uint16 ExtRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetExtendedRecordNumberDataSize(uint16 ExtRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetMirExtendedRecordNumberDataSize(uint16 ExtRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint16, DEM_CODE) DemCfg_GetExtendedRecordFuncRef(uint16 ExtRecIdx); /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern FUNC(uint32, DEM_CODE) DemCfg_GetEventIdentityVariant(Dem_EventIdType EventId); /* PRQA S 0850 */ /* MD_MSR_19.8 */



#define DEM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Justification of MISRA deviations
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Diag_AsrDemLinktimeCRC */
/* MD_DEM_8.12:
    Reason:     Prevent compiler optimization based on known array size.
    Risk:       None. The static code is not allowed to access this array directly.
    Prevention: Code inspection. */
/* END of Checksum exclude for
  - Diag_AsrDemLinktimeCRC */



/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 98743842
      #error "The magic number of the generated file <C:\Documents and Settings\jzh87w\My Documents\EA3.x\GM_K2xx\My_06P\GM_K2XX_EPS_TMS570\SwProject\Source\GenData\Dem_Lcfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 98743842
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* DEM_LCFG_H */
