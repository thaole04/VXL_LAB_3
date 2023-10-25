/*
 * button.c
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */


#include "button.h"
#include "processing.h"

int keyReg0[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};
int keyReg1[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};
int keyReg2[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};

int keyRegPast[NUM_OF_BUTTONS] = {INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE, INITIAL_BUTTON_STATE};

int timerForKeyPress[NUM_OF_BUTTONS] = {TIME_PRESS, TIME_PRESS, TIME_PRESS};
int mode = 1;

void keyProcessing(int num){
	switch(num){
	case 0:
		switch(mode){
		case 1:
			mode = 2;
			timeRedBuffer = timeRed;
			timeAmberBuffer = timeAmber;
			timeGreenBuffer = timeGreen;
			disableAllLeds();
			break;
		case 2:
			mode = 3;
			timeRedBuffer = timeRed;
			timeAmberBuffer = timeAmber;
			timeGreenBuffer = timeGreen;
			disableAllLeds();
			break;
		case 3:
			mode = 4;
			timeRedBuffer = timeRed;
			timeAmberBuffer = timeAmber;
			timeGreenBuffer = timeGreen;
			disableAllLeds();
			break;
		case 4:
			mode = 1;
			timeRedBuffer = timeRed;
			timeAmberBuffer = timeAmber;
			timeGreenBuffer = timeGreen;
			disableAllLeds();
			INIT_MODE();
			break;
		default:
			mode = 1;
			break;
		}
		break;
	case 1:
		switch(mode){
		case 1:
			break;
		case 2:
			timeRedBuffer++;
			if (timeRedBuffer > 99){
				timeRedBuffer = 1;
			}
			break;
		case 3:
			timeAmberBuffer++;
			if (timeAmberBuffer > 99){
				timeAmberBuffer = 1;
			}
			break;
		case 4:
			timeGreenBuffer++;
			if (timeGreenBuffer > 99){
				timeGreenBuffer = 1;
			}
			break;
		default:
			break;
		}
		break;
	case 2:
		switch(mode){
		case 1:
			break;
		case 2:
			timeRed = timeRedBuffer;
			break;
		case 3:
			timeAmber = timeAmberBuffer;
			break;
		case 4:
			timeGreen = timeGreenBuffer;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

void keyHoldProcessing(int num){
	keyProcessing(num);
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
