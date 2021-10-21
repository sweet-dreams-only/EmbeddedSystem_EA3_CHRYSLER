/* STARTSINGLE_OF_MULTIPLE */


/*****************************************************************************
 * Project Name: SysService_AsrSchM
 *    File Name: SchM_Adc.h
 *
 *  Description: Header of BSW Scheduler for ADC Driver
 *
 ******************************************************************************
 *               C O P Y R I G H T
 ******************************************************************************
 * Copyright (c) 2008 by Vctr Informatik GmbH.      All rights reserved.
 *
 *       Please note, that this file contains example configuration used by the
 *       MICROSAR BSW modules. This code may influence the behaviour of the
 *       MICROSAR BSW modules in principle. Therefore, great care must be taken
 *       to verify the correctness of the implementation.
 *       
 *       The contents of the originally delivered files are only examples resp. 
 *       implementation proposals. With regard to the fact that these functions 
 *       are meant for demonstration purposes only, Vctr Informatik's 
 *       liability shall be expressly excluded in cases of ordinary negligence, 
 *       to the extent admissible by law or statute.                            
 *
 ******************************************************************************
 *               A U T H O R   I D E N T I T Y
 ******************************************************************************
 * Initials     Name                      Company
 * ********     *********************     *************************************
 * Om           Oliver Meili              Vctr Informatik GmbH
 * Jk           Joachim Kalmbach          Vctr Informatik GmbH
 ******************************************************************************
 *               R E V I S I O N   H I S T O R Y
 ******************************************************************************
 * Date        Version  Author  Description
 * **********  *******  ******  ***********************************************
 * 2006-11-14  0.01.00  Om      Creation
 * 2007-01-19  0.02.00  Jk      Code for critical sections added
 * 2007-02-06  0.02.01  Jk      Remove parameter instance in exclusive area functions
 * 2007-05-10  0.02.02  Jk      modify Parameter Type in SchM_ExitAdc
 * 2007-07-09  0.02.03  Jk      Include structure changed
 * 2008-08-06  0.02.04  Jk      Return value for activate and deactivate main function added
 *****************************************************************************/

#ifndef SCHM_ADC_H
#define SCHM_ADC_H

#include "SchM.h"
#include "SchM_Types.h"
#include "SchM_Cfg.h"

extern const uint8 ADC_EXCLUSIVE_AREA_0;

#if defined( __SCHM__ )

const uint8 ADC_EXCLUSIVE_AREA_0 = SCHM_EA_SUSPENDALLINTERRUPTS;

Std_ReturnType SchM_ActMainFunction_Adc(uint8 activation)
{
   return SCHM_E_OK;
}
Std_ReturnType SchM_CancelMainFunction_Adc(uint8 activation)
{
   return SCHM_E_OK;
}
void SchM_Enter_Adc(uint8 ExclusiveArea)
{
   SCHM_ENTER_EXCLUSIVE(ExclusiveArea);
}

void SchM_Exit_Adc(uint8 ExclusiveArea)
{
   SCHM_EXIT_EXCLUSIVE(ExclusiveArea);
}
#else /* __SCHM__ */


Std_ReturnType SchM_ActMainFunction_Adc(uint8 activation);
Std_ReturnType SchM_CancelMainFunction_Adc(uint8 activation);
void SchM_Enter_Adc(uint8 ExclusiveArea);
void SchM_Exit_Adc(uint8 ExclusiveArea);
#endif /* __SCHM__ */

#endif /* SCHM_ADC_H */

/* STOPSINGLE_OF_MULTIPLE */
/************   Organi, Version 3.9.0 Vector-Informatik GmbH  ************/
