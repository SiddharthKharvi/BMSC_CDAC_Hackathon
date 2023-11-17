#ifndef _dac_H_
#define _dac_H_

/*
 **************************************************************************
 * @file 		UART.c
 * @brief 		DAC and its operations
 **************************************************************************
 *
 */
/**************************************************************************
 * @brief Required Includes
 **************************************************************************/
#include "main.h"

/**************************************************************************
 * @brief Required Handlers
 **************************************************************************/
extern DAC_HandleTypeDef hdac1;

/**************************************************************************
 * @brief Wrapper Function
 **************************************************************************/
void start_channel();
void DAC_Output_CH_1();
void DAC_Output_CH_2();
#endif