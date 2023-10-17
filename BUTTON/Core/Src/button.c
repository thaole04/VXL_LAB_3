/*
 * button.c
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */


#include "button.h"

int keyReg0[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};
int keyReg1[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};
int keyReg2[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};

int keyRegPast[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};

int timerForKeyPress[NUM_OF_BUTTONS] = {TIME_PRESS, TIME_PRESS, TIME_PRESS};

void keyProcessing(int num){
	switch(num){
	case 0:
		HAL_GPIO_TogglePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin);
		break;
	case 1:
		HAL_GPIO_TogglePin(LED_AMBER_X_GPIO_Port, LED_AMBER_X_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin);
		break;
	default:
		break;
	}
}

void keyHoldProcessing(int num){
	switch(num){
	case 0:
		HAL_GPIO_TogglePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin);
		break;
	case 1:
		HAL_GPIO_TogglePin(LED_AMBER_X_GPIO_Port, LED_AMBER_X_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin);
		break;
	default:
		break;
	}
}

void getKeyInput(){
	for (int i = 0; i < NUM_OF_BUTTONS; i++){
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		if (i == 0) {
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON0_GPIO_Port, BUTTON0_Pin);
		}
		if (i == 1){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
		}
		if (i == 2){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
		}
		if ((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i])) { // stable input
			if (keyRegPast[i] != keyReg2[i]){ // press and release
				keyRegPast[i] = keyReg2[i];
				if (keyReg2[i] == BUTTON_IS_PRESSED) {
					timerForKeyPress[i] = TIME_PRESS;
					// TODO
					keyProcessing(i);
				}
			}else { // press and hold
				timerForKeyPress[i]--;
				if (timerForKeyPress[i] <= 0){
					timerForKeyPress[i] = TIME_PRESS;
					// TODO
					if (keyReg2[i] == BUTTON_IS_PRESSED){
						keyHoldProcessing(i);
					}
				}
			}
		}
	}

}
