/*
 * processing.c
 *
 *  Created on: Oct 18, 2023
 *      Author: thao2
 */


#include "processing.h"
#include "button.h"
#include "control_leds_segment.h"
#include "software_timer.h"

void disableAllLeds(){
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, SET);
	HAL_GPIO_WritePin(LED_AMBER_X_GPIO_Port, LED_AMBER_X_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_AMBER_Y_GPIO_Port, LED_AMBER_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, SET);
}


int timeRed = 5;
int timeAmber = 2;
int timeGreen = 3;
int timeRedBuffer = 5;
int timeAmberBuffer = 2;
int timeGreenBuffer = 3;
enum {
	LEDREDX_LEDGREENY,
	LEDREDX_LEDAMBERY,
	LEDREDY_LEDGREENX,
	LEDREDY_LEDAMBERX
} statusNormalMode = LEDREDX_LEDGREENY;
void INIT_MODE(){
	statusNormalMode = LEDREDX_LEDGREENY;
	setTimerNormalModeX(timeRed);
	setTimerNormalModeY(timeGreen);
}
void normalMode(){
	switch (statusNormalMode) {
		case LEDREDX_LEDGREENY:
			if (timer_normal_mode_flagX==1){
				statusNormalMode = LEDREDY_LEDGREENX;
				disableAllLeds();
				setTimerNormalModeX(timeAmber);
				setTimerNormalModeY(timeRed);
				break;
			}
			if (timer_normal_mode_flagY == 1){
				statusNormalMode = LEDREDX_LEDAMBERY;
				disableAllLeds();
				setTimerNormalModeY(timeAmber);
				break;
			}
			HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, RESET);
			break;
		case LEDREDX_LEDAMBERY:
			if (timer_normal_mode_flagX == 1){
				statusNormalMode = LEDREDY_LEDGREENX;
				disableAllLeds();
				setTimerNormalModeX(timeGreen);
				setTimerNormalModeY(timeRed);
				break;
			}
			if (timer_normal_mode_flagY == 1){
				statusNormalMode = LEDREDY_LEDGREENX;
				disableAllLeds();
				setTimerNormalModeX(timeGreen);
				setTimerNormalModeY(timeRed);
				break;
			}
			HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_AMBER_Y_GPIO_Port, LED_AMBER_Y_Pin, RESET);
			break;
		case LEDREDY_LEDGREENX:
			if (timer_normal_mode_flagY == 1){
				statusNormalMode = LEDREDX_LEDGREENY;
				disableAllLeds();
				setTimerNormalModeX(timeRed);
				setTimerNormalModeY(timeGreen);
				break;
			}
			if (timer_normal_mode_flagX == 1){
				statusNormalMode = LEDREDY_LEDAMBERX;
				disableAllLeds();
				setTimerNormalModeX(timeAmber);
				break;
			}
			HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);
			break;
		case LEDREDY_LEDAMBERX:
			if (timer_normal_mode_flagY == 1){
				statusNormalMode = LEDREDX_LEDGREENY;
				disableAllLeds();
				setTimerNormalModeX(timeRed);
				setTimerNormalModeY(timeGreen);
				break;
			}
			if (timer_normal_mode_flagX == 1){
				statusNormalMode = LEDREDX_LEDGREENY;
				disableAllLeds();
				setTimerNormalModeX(timeRed);
				setTimerNormalModeY(timeGreen);
				break;
			}
			HAL_GPIO_WritePin(LED_AMBER_X_GPIO_Port, LED_AMBER_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);
			break;
		default:
			break;
	}
}
void changeTimeRedMode(){
	if (timer_blink_flag == 1) {
		HAL_GPIO_TogglePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin);
		HAL_GPIO_TogglePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin);
		setTimerBlink(50);
	}
	displayNumSEGX(2);
	displayNumSEGY(timeRedBuffer);
}
void changeTimeAmberMode(){
	if (timer_blink_flag == 1) {
		HAL_GPIO_TogglePin(LED_AMBER_X_GPIO_Port, LED_AMBER_X_Pin);
		HAL_GPIO_TogglePin(LED_AMBER_Y_GPIO_Port, LED_AMBER_Y_Pin);
		setTimerBlink(50);
	}
	displayNumSEGX(3);
	displayNumSEGY(timeAmberBuffer);
}
void changeTimeGreenMode(){
	if (timer_blink_flag == 1) {
		HAL_GPIO_TogglePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin);
		HAL_GPIO_TogglePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin);
		setTimerBlink(50);
	}
	displayNumSEGX(4);
	displayNumSEGY(timeGreenBuffer);
}
void fsm(){
	switch(mode){
	case 1:
		normalMode();
		break;
	case 2:
		changeTimeRedMode();
		break;
	case 3:
		changeTimeAmberMode();
		break;
	case 4:
		changeTimeGreenMode();
		break;
	default:
		mode = 1;
		break;
	}
}
