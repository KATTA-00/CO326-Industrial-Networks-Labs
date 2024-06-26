/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - v3.00
        Device            :  PIC18F26K20
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

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

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Red aliases
#define Red_TRIS               TRISB0
#define Red_LAT                LATB0
#define Red_PORT               RB0
#define Red_WPU                WPUB0
#define Red_ANS                ANS12
#define Red_SetHigh()    do { LATB0 = 1; } while(0)
#define Red_SetLow()   do { LATB0 = 0; } while(0)
#define Red_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define Red_GetValue()         RB0
#define Red_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define Red_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define Red_SetPullup()    do { WPUB0 = 1; } while(0)
#define Red_ResetPullup()   do { WPUB0 = 0; } while(0)
#define Red_SetAnalogMode()   do { ANS12 = 1; } while(0)
#define Red_SetDigitalMode()   do { ANS12 = 0; } while(0)


// get/set Yellow aliases
#define Yellow_TRIS               TRISB1
#define Yellow_LAT                LATB1
#define Yellow_PORT               RB1
#define Yellow_WPU                WPUB1
#define Yellow_ANS                ANS10
#define Yellow_SetHigh()    do { LATB1 = 1; } while(0)
#define Yellow_SetLow()   do { LATB1 = 0; } while(0)
#define Yellow_Toggle()   do { LATB1 = ~LATB1; } while(0)
#define Yellow_GetValue()         RB1
#define Yellow_SetDigitalInput()    do { TRISB1 = 1; } while(0)
#define Yellow_SetDigitalOutput()   do { TRISB1 = 0; } while(0)

#define Yellow_SetPullup()    do { WPUB1 = 1; } while(0)
#define Yellow_ResetPullup()   do { WPUB1 = 0; } while(0)
#define Yellow_SetAnalogMode()   do { ANS10 = 1; } while(0)
#define Yellow_SetDigitalMode()   do { ANS10 = 0; } while(0)


// get/set Green aliases
#define Green_TRIS               TRISB2
#define Green_LAT                LATB2
#define Green_PORT               RB2
#define Green_WPU                WPUB2
#define Green_ANS                ANS8
#define Green_SetHigh()    do { LATB2 = 1; } while(0)
#define Green_SetLow()   do { LATB2 = 0; } while(0)
#define Green_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define Green_GetValue()         RB2
#define Green_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define Green_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define Green_SetPullup()    do { WPUB2 = 1; } while(0)
#define Green_ResetPullup()   do { WPUB2 = 0; } while(0)
#define Green_SetAnalogMode()   do { ANS8 = 1; } while(0)
#define Green_SetDigitalMode()   do { ANS8 = 0; } while(0)


// get/set Green aliases
#define Green_TRIS               TRISB2
#define Green_LAT                LATB2
#define Green_PORT               RB2
#define Green_WPU                WPUB2
#define Green_ANS                ANS8
#define Green_SetHigh()    do { LATB2 = 1; } while(0)
#define Green_SetLow()   do { LATB2 = 0; } while(0)
#define Green_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define Green_GetValue()         RB2
#define Green_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define Green_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define Green_SetPullup()    do { WPUB2 = 1; } while(0)
#define Green_ResetPullup()   do { WPUB2 = 0; } while(0)
#define Green_SetAnalogMode()   do { ANS8 = 1; } while(0)
#define Green_SetDigitalMode()   do { ANS8 = 0; } while(0)


// get/set Green aliases
#define Green_TRIS               TRISB2
#define Green_LAT                LATB2
#define Green_PORT               RB2
#define Green_WPU                WPUB2
#define Green_ANS                ANS8
#define Green_SetHigh()    do { LATB2 = 1; } while(0)
#define Green_SetLow()   do { LATB2 = 0; } while(0)
#define Green_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define Green_GetValue()         RB2
#define Green_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define Green_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define Green_SetPullup()    do { WPUB2 = 1; } while(0)
#define Green_ResetPullup()   do { WPUB2 = 0; } while(0)
#define Green_SetAnalogMode()   do { ANS8 = 1; } while(0)
#define Green_SetDigitalMode()   do { ANS8 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/