/* STARTSINGLE_OF_MULTIPLE */


/*****************************************************************************
 * Project Name: SysService_AsrSchM
 *    File Name: SchM_Spi.h
 *
 *  Description: Header of BSW Scheduler for the SPI Driver
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
 * 2007-07-09  0.02.01  Jk      Include structure changed
 *****************************************************************************/

#ifndef SCHM_SPI_H
#define SCHM_SPI_H

#include "SchM.h"
#include "SchM_Types.h"
#include "SchM_Cfg.h"

#define SPI_ACTIVATION_POINT_0   ACT_TIMEOUT_EVENT_10MS

extern const uint8 SPI_EXCLUSIVE_AREA_0;

#if defined( __SCHM__ )

SCHM_DEFINE_TIMER(SPIH);
SCHM_DEFINE_TIMER(SPID);

const uint8 SPI_EXCLUSIVE_AREA_0 = SCHM_EA_SUSPENDALLINTERRUPTS;

#  define SCHM_TIMER_INIT_SPIH      SCHM_TIMER_INIT(SPIH, SPI_ACTIVATION_POINT_0)
#  define SCHM_TIMER_INIT_SPID      SCHM_TIMER_INIT(SPID, SPI_ACTIVATION_POINT_0)
  
#  define SCHM_MAINFUNCTION_SPIH    SCHM_MAINFUNCTION(Spi_MainFunction_Handling(), SPIH, SPI_ACTIVATION_POINT_0)
#  define SCHM_MAINFUNCTION_SPID    SCHM_MAINFUNCTION(Spi_MainFunction_Driving(), SPID, SPI_ACTIVATION_POINT_0)

Std_ReturnType SchM_ActMainFunction_Spi_Handling(uint8 activation)
{
   return SCHM_MAINFUNCTION_ACTIVATE(SPIH, activation);
}
Std_ReturnType SchM_ActMainFunction_Spi_Driving(uint8 activation)
{
   return SCHM_MAINFUNCTION_ACTIVATE(SPID, activation);
}
Std_ReturnType SchM_CancelMainFunction_Spi_Handling(uint8 activation)
{
   return SCHM_MAINFUNCTION_CANCEL(SPIH);
}
Std_ReturnType SchM_CancelMainFunction_Spi_Driving(uint8 activation)
{
   return SCHM_MAINFUNCTION_CANCEL(SPID);
}

void SchM_Enter_Spi(uint8 ExclusiveArea)
{
   SCHM_ENTER_EXCLUSIVE(ExclusiveArea);
}

void SchM_Exit_Spi(uint8 ExclusiveArea)
{
   SCHM_EXIT_EXCLUSIVE(ExclusiveArea);
}
#else /* __SCHM__ */

SCHM_EXTERN_TIMER(SPIH);
SCHM_EXTERN_TIMER(SPID);

Std_ReturnType SchM_ActMainFunction_Spi_Handling(uint8 activation);
Std_ReturnType SchM_ActMainFunction_Spi_Driving(uint8 activation);
Std_ReturnType SchM_CancelMainFunction_Spi_Handling(uint8 activation);
Std_ReturnType SchM_CancelMainFunction_Spi_Driving(uint8 activation);

void SchM_Enter_Spi(uint8 ExclusiveArea);
void SchM_Exit_Spi(uint8 ExclusiveArea);
#endif /* __SCHM__ */

#endif /* SCHM_SPI_H */

/* STOPSINGLE_OF_MULTIPLE */
/************   Organi, Version 3.9.0 Vector-Informatik GmbH  ************/
