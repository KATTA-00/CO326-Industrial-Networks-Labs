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
#define RED_TRIS                 TRISBbits.TRISB0
#define RED_LAT                  LATBbits.LATB0
#define RED_PORT                 PORTBbits.RB0
#define RED_WPU                  WPUBbits.WPUB0
#define RED_OD                   ODCONBbits.
#define RED_ANS                  ANSELBbits.ANS12
#define RED_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RED_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RED_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RED_GetValue()           PORTBbits.RB0
#define RED_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RED_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RED_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define RED_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define RED_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define RED_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define RED_SetAnalogMode()      do { ANSELBbits.ANS12 = 1; } while(0)
#define RED_SetDigitalMode()     do { ANSELBbits.ANS12 = 0; } while(0)

// get/set RB1 aliases
#define GREEN_TRIS                 TRISBbits.TRISB1
#define GREEN_LAT                  LATBbits.LATB1
#define GREEN_PORT                 PORTBbits.RB1
#define GREEN_WPU                  WPUBbits.WPUB1
#define GREEN_OD                   ODCONBbits.
#define GREEN_ANS                  ANSELBbits.ANS10
#define GREEN_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define GREEN_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define GREEN_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define GREEN_GetValue()           PORTBbits.RB1
#define GREEN_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define GREEN_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define GREEN_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define GREEN_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define GREEN_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define GREEN_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define GREEN_SetAnalogMode()      do { ANSELBbits.ANS10 = 1; } while(0)
#define GREEN_SetDigitalMode()     do { ANSELBbits.ANS10 = 0; } while(0)

// get/set RB2 aliases
#define BLUE_TRIS                 TRISBbits.TRISB2
#define BLUE_LAT                  LATBbits.LATB2
#define BLUE_PORT                 PORTBbits.RB2
#define BLUE_WPU                  WPUBbits.WPUB2
#define BLUE_OD                   ODCONBbits.
#define BLUE_ANS                  ANSELBbits.ANS8
#define BLUE_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define BLUE_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define BLUE_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define BLUE_GetValue()           PORTBbits.RB2
#define BLUE_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define BLUE_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define BLUE_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define BLUE_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define BLUE_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define BLUE_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define BLUE_SetAnalogMode()      do { ANSELBbits.ANS8 = 1; } while(0)
#define BLUE_SetDigitalMode()     do { ANSELBbits.ANS8 = 0; } while(0)

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