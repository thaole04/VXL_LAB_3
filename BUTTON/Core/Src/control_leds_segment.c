/*
 * control_leds_segment.c
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */


#include "control_leds_segment.h"

void setValueSEG0(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, SET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, SET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, SET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, SET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, SET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, SET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, SET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, SET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, SET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_A_GPIO_Port, SEG0_A_Pin, SET);
		HAL_GPIO_WritePin(SEG0_B_GPIO_Port, SEG0_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_C_GPIO_Port, SEG0_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_D_GPIO_Port, SEG0_D_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	}
}


void setValueSEG1(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, SET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, SET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, SET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, SET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, SET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, SET);
		HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	}
}


void setValueSEG2(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, SET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, SET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, SET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, SET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, SET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, SET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, SET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, SET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, SET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, SET);
		HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	}
}


void setValueSEG3(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, SET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, SET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, SET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, SET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, SET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, SET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, SET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, SET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, SET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, SET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(SEG3_A_GPIO_Port, SEG3_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_B_GPIO_Port, SEG3_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_C_GPIO_Port, SEG3_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_D_GPIO_Port, SEG3_D_Pin, RESET);
		break;
	}
}

void displayNumSEGX(int num){
	setValueSEG0(num/10);
	setValueSEG1(num%10);
}
void displayNumSEGY(int num){
	setValueSEG2(num/10);
	setValueSEG3(num%10);
}
