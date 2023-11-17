/*
 **************************************************************************
 * @file 		LED.h
 * @brief 		Blinking LEDs
 **************************************************************************
 *
 */

#ifndef INC_LED_H_
#define INC_LED_H_

/*************************************************************************
Include Files
 **************************************************************************/

#include "main.h"

/*************************************************************************
Function Declarations
 **************************************************************************/

void LED_OFF(uint16_t Pin);
void LED_ON(uint16_t Pin);
void LED_Toggle(uint16_t Pin);
void delay(uint32_t Delay);


#endif /* INC_LED_H_ */
