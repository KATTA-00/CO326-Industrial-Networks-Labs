/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 aliases
#define Red_TRIS                 TRISBbits.TRISB0
#define Red_LAT                  LATBbits.LATB0
#define Red_PORT                 PORTBbits.RB0
#define Red_WPU                  WPUBbits.WPUB0
#define Red_OD                   ODCONBbits.
#define Red_ANS                  ANSELBbits.ANS12
#define Red_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Red_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Red_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Red_GetValue()           PORTBbits.RB0
#define Red_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Red_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Red_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Red_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Red_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define Red_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define Red_SetAnalogMode()      do { ANSELBbits.ANS12 = 1; } while(0)
#define Red_SetDigitalMode()     do { ANSELBbits.ANS12 = 0; } while(0)

// get/set RB1 aliases
#define Yellow_TRIS                 TRISBbits.TRISB1
#define Yellow_LAT                  LATBbits.LATB1
#define Yellow_PORT                 PORTBbits.RB1
#define Yellow_WPU                  WPUBbits.WPUB1
#define Yellow_OD                   ODCONBbits.
#define Yellow_ANS                  ANSELBbits.ANS10
#define Yellow_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Yellow_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Yellow_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Yellow_GetValue()           PORTBbits.RB1
#define Yellow_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Yellow_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Yellow_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Yellow_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Yellow_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define Yellow_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define Yellow_SetAnalogMode()      do { ANSELBbits.ANS10 = 1; } while(0)
#define Yellow_SetDigitalMode()     do { ANSELBbits.ANS10 = 0; } while(0)

// get/set RB2 aliases
#define Green_TRIS                 TRISBbits.TRISB2
#define Green_LAT                  LATBbits.LATB2
#define Green_PORT                 PORTBbits.RB2
#define Green_WPU                  WPUBbits.WPUB2
#define Green_OD                   ODCONBbits.
#define Green_ANS                  ANSELBbits.ANS8
#define Green_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Green_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Green_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Green_GetValue()           PORTBbits.RB2
#define Green_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Green_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Green_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Green_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Green_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define Green_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define Green_SetAnalogMode()      do { ANSELBbits.ANS8 = 1; } while(0)
#define Green_SetDigitalMode()     do { ANSELBbits.ANS8 = 0; } while(0)

// get/set RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.
#define IO_RC6_OD                   ODCONCbits.
#define IO_RC6_ANS                  ANSELCbits.
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.
#define IO_RC7_OD                   ODCONCbits.
#define IO_RC7_ANS                  ANSELCbits.
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits. = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/