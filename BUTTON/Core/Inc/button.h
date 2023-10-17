/*
 * button.h
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define BUTTON_IS_PRESSED GPIO_PIN_RESET
#define BUTTON_IS_RELEASED	GPIO_PIN_SET
#define INITIAL_BUTTON_STATE BUTTON_IS_RELEASED
#define TIME_PRESS 100

void getKeyInput();
void keyProcessing();
void keyHoldProcessing();


#endif /* INC_BUTTON_H_ */