
/*****************************************************************************
* Copyright 2010 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : Ap_BVDiag_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 16.09.2013 15:11:43
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          3 %
 * %date_modified:    Mon Sep 16 15:21:56 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 09/20/12   1       ssk       Initial template creation
 * 09/16/13	  2       NRAR      Added Cfg constant to enable NTC B1 as per customer requirement                8712	 	
 */

#ifndef AP_BVDIAG_CFG_H
#define AP_BVDIAG_CFG_H


/*******************************************************************************
**                      Define Section                                       **
*******************************************************************************/

/* BVDiag_Per1_CP1 Checkpoint is enabled */

/* Disable all checkpoints that are not enabled */
#define Rte_Call_BVDiag_Per1_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
   

#define BC_B1_BATTVOLTDIAG STD_ON   /*Configure this constant to ON or OFF based on customer requirements */
	
#endif /* BVDIAG_CFG_H */

/*** End of file **************************************************************/
