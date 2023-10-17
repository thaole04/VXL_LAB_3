/*
 * button.c
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */


#include "button.h"

int keyReg0 = INITIAL_BUTTON_STATE;
int keyReg1 = INITIAL_BUTTON_STATE;
int keyReg2 = INITIAL_BUTTON_STATE;

int keyRegPast = INITIAL_BUTTON_STATE;

int timerForKeyPress = TIME_PRESS;

void keyProcessing(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void keyHoldProcessing(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void getKeyInput(){
	keyReg0 = keyReg1;
	keyReg1 = keyReg2;
	keyReg2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
	if ((keyReg0 == keyReg1) && (keyReg1 == keyReg2)) { // stable input
		if (keyRegPast != keyReg2){ // press and release
			keyRegPast = keyReg2;
			if (keyReg2 == BUTTON_IS_PRESSED) {
				timerForKeyPress = TIME_PRESS;
				// TODO
				keyProcessing();
			}
		}else { // press and hold
			timerForKeyPress--;
			if (timerForKeyPress <= 0){
				timerForKeyPress = TIME_PRESS;
				// TODO
				if (keyReg2 == BUTTON_IS_PRESSED){
					keyHoldProcessing();
				}
			}
		}
	}
}
