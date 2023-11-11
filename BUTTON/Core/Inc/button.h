/*
 * button.h
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NUM_OF_BUTTONS 3
#define BUTTON_IS_PRESSED GPIO_PIN_RESET
#define BUTTON_IS_RELEASED	GPIO_PIN_SET
#define INITIAL_BUTTON_STATE BUTTON_IS_RELEASED
// 1s --> long key press
#define TIME_PRESS 100

// mode:
// ----- 1: Normal Mode
// ----- 2: Change time led red mode
// ----- 3: Change time led amber mode
// ----- 4: Change time led green mode
extern int mode;


void getKeyInput();
void keyProcessing(int num);
void keyHoldProcessing(int num);


#endif /* INC_BUTTON_H_ */
