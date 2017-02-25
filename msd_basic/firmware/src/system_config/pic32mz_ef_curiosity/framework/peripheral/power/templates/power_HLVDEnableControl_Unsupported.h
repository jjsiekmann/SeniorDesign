/*******************************************************************************
  POWER Peripheral Library Template Implementation

  File Name:
    power_HLVDEnableControl_Unsupported.h

  Summary:
    POWER PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : HLVDEnableControl
    and its Variant : Unsupported
    For following APIs :
        PLIB_POWER_ExistsHLVDEnableControl
        PLIB_POWER_HLVDEnable
        PLIB_POWER_HLVDDisable
        PLIB_POWER_HLVDIsEnabled

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _POWER_HLVDENABLECONTROL_UNSUPPORTED_H
#define _POWER_HLVDENABLECONTROL_UNSUPPORTED_H


//******************************************************************************
/* Function :  POWER_ExistsHLVDEnableControl_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_POWER_ExistsHLVDEnableControl

  Description:
    This template implements the Unsupported variant of the PLIB_POWER_ExistsHLVDEnableControl function.
*/

PLIB_TEMPLATE bool POWER_ExistsHLVDEnableControl_Unsupported( POWER_MODULE_ID index )
{
    return false;
}


//******************************************************************************
/* Function :  POWER_HLVDEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_POWER_HLVDEnable 

  Description:
    This template implements the Unsupported variant of the PLIB_POWER_HLVDEnable function.
*/

PLIB_TEMPLATE void POWER_HLVDEnable_Unsupported( POWER_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_POWER_HLVDEnable");
}


//******************************************************************************
/* Function :  POWER_HLVDDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_POWER_HLVDDisable 

  Description:
    This template implements the Unsupported variant of the PLIB_POWER_HLVDDisable function.
*/

PLIB_TEMPLATE void POWER_HLVDDisable_Unsupported( POWER_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_POWER_HLVDDisable");
}


//******************************************************************************
/* Function :  POWER_HLVDIsEnabled_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_POWER_HLVDIsEnabled 

  Description:
    This template implements the Unsupported variant of the PLIB_POWER_HLVDIsEnabled function.
*/

PLIB_TEMPLATE bool POWER_HLVDIsEnabled_Unsupported( POWER_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_POWER_HLVDIsEnabled");

    return false;
}


#endif /*_POWER_HLVDENABLECONTROL_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

