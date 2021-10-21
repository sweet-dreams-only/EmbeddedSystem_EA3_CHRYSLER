/* -----------------------------------------------------------------------------
  Filename:    fbl_cfg.h
  Description: Toolversion: 02.03.03.01.01.01.21.00.00.00
               
               Serial Number: CBD1010121
               Customer Info: Nxtr
                              GM GMLAN_FBL_v2.x_wFlash / TI TMS570LS20216 / TI 4.6.4
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyFblCanBase
               
               Configuration   : C:\_cms\wa\ES_EPS_EA3_FBL_K2xx\GENy_files\GENyConfiguration_k2xx_570.gny
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "Channel0":
                       Databasefile: C:\_cms\wa\ES_EPS_EA3_FBL_K2xx\GENy_files\EPSMod_GlobalA - HS.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_HS

  Generated by , 2011-03-21  10:07:40
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2010 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__FBL_CFG_H__)
#define __FBL_CFG_H__

/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#define FBL_ENABLE_SYSTEM_CHECK
#define FBL_ENABLE_FLASHBLOCK_CHECK
#define FBL_ENABLE_DEBUG_STATUS
#define FBL_WATCHDOG_OFF
#define FBL_WATCHDOG_TIME                    (1 / FBL_REPEAT_CALL_CYCLE)
#define FBL_HEADER_ADDRESS                   0x40
#define FBL_DISABLE_APPL_TASK
#define FBL_ENABLE_MULTIPLE_MODULES
#define FBL_DIAG_BUFFER_LENGTH               4088
#define FBL_DISABLE_SLEEPMODE
#define kFillChar                            0xFF
#define FBL_DISABLE_MULTIPLE_MEM_DEVICES
/*  */
/* Tms570DcanCrx specific ***************************************************************** */
/*  */
#define FBL_TIMER_PRESCALER_VALUE            0x01
#define FBL_TIMER_RELOAD_VALUE               0x7EF3
#define DELAY                                65
/*  */
/*  */
#define CAN_BITTIMING                        0x5509
#define CAN_BRP_REG                          0x00
#define CAN_CTRL_ADDR                        0xFFF7DC00
#define CAN_NUMBER_OF_HW_OBJECTS             64
#define CAN_TP_RXID                          0x242
#define CAN_TP_TXID                          0x642
#define CAN_TP_FUNC_RXID                     0x0101

/*  */
#define FLASH_SIZE                           0x1400
#define FBL_WD_TRIGGER_SIZE                  1024
#define FBL_WDTRIGGER_EXTRA_WORDS            20
/*  */
/*  */
/* Manufacturer specific part ******************************************************************************** */
#define FBL_ENABLE_BUFFER_PADDING
#define FBL_DISABLE_BLANK_CHECK
#define FBL_DISABLE_CAN_CONFIGURATION
#define FBL_DISABLE_CORESIDENT_MODULES
#define FBL_DISABLE_DOWNLOAD_AND_EXECUTE
#define FBL_DISABLE_ENCRYPTION_MODE
#define FBL_ENABLE_FBL_START
#define FBL_DISABLE_GAP_FILL
#define FBL_MAX_FILL_ADDR_REGIONS            16
#define FBL_ENABLE_GBF_HEADER_CHECK
#define FBL_DISABLE_INITIATE_DIAG_OP
#define FBL_DISABLE_MULTIPLE_NODES
#define DIAG_NODE_ADDRESS                    0x31
#define FBL_ENABLE_RAM_INTEGRITY_CHECK
#define FBL_ENABLE_ROM_INTEGRITY_CHECK
#define FBL_DISABLE_READ_MEMORY_BY_ADDRESS
#define FBL_ENABLE_SECURITY_ACCESS
#define FBL_ENABLE_SEGMENT_ALIGN
#define FBL_DISABLE_SEGMENT_BUFFER
#define FBL_DISABLE_HIGHSPEED_MODE
#define FBL_DISABLE_WRITE_DATA_BY_IDENTIFIER
#define FBL_GMHEADER_CSUM                    { 0x11, 0xaa }
#define FBL_GMHEADER_MODID_FBL               { 0x0, 0x47 }
#define FBL_GMHEADER_SWMI_FBL                { 0x11, 0x22, 0x33, 0x44 }
#define FBL_GMHEADER_DLS_FBL                 { 0x0, 0x0 }
#define FBL_GMHEADER_DCID_FBL                { 0x80, 0x0 }
#define FBL_GMHEADER_NOAR_FBL                1
#define FBL_GMHEADER_ADDR_REG                { 0x0, 0x0, 0x0, 0x40,0x0, 0x0, 0x0, 0x2 }
#define SWM_DATA_MAX_NOAR                    2
#define kDiagRqlReadMemoryByAddressAddressParameter 4
#define kDiagRqlRequestDownloadMemorySizeParameter 4
#define kDiagRqlTransferDataStartingAddressParameter 4
#define kFblBufferAlign                      4
#define FBL_MTAB_NO_OF_BLOCKS                0


/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#if defined( FBL_DISABLE_STAY_IN_BOOT)
# undef FBL_DISABLE_STAY_IN_BOOT
#endif
#define FBL_ENABLE_STAY_IN_BOOT
#define FBL_START_DELAY (20/FBL_REPEAT_CALL_CYCLE)



/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 60288172
      #error "The magic number of the generated file <C:\_cms\wa\ES_EPS_EA3_FBL_K2xx\GENy_files\fbl_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 60288172
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __FBL_CFG_H__ */
