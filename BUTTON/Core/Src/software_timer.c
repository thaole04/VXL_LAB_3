/*
 * software_timer.c
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */

#include "main.h"
#include "software_timer.h"
#include "control_leds_segment.h"

// timer for main system
int timer_counter = 0;
int timer_flag = 0;

// timer for led status
int timer_status = 0;
int timer_status_flag = 0;

// timer for blinking led in mode 2, 3, 4 (change time mode)
int timer_blink_flag = 0;
int timer_blink = 0;

// timer for leds in line X
int timer_normal_modeX = 0;
int timer_normal_mode_flagX = 0;

// timer for leds in line Y
int timer_normal_modeY = 0;
int timer_normal_mode_flagY = 0;

void setTimer(int duration){
	// duration unit is ms
	timer_counter = duration*pre_timer/1000;
	timer_flag = 0;
}

void setTimerStatus(int duration){
	// duration unit is ms
	timer_status = duration*pre_timer/1000;
	timer_status_flag = 0;
}

void setTimerBlink(int duration){
	// duration unit is ms
	timer_blink = duration*pre_timer/1000;
	timer_blink_flag = 0;
}
void setTimerNormalModeX(int duration){
	// duration unit is s
	timer_normal_modeX = duration;
	timer_normal_mode_flagX = 0;
}
void setTimerNormalModeY(int duration){
	// duration unit is s
	timer_normal_modeY = duration;
	timer_normal_mode_flagY = 0;
}
void timerRunTIM2() {
	if (timer_counter > 0){
		timer_counter--;
		if (timer_counter <= 0) {
			timer_flag = 1;
		}
	}
	if (timer_blink > 0){
		timer_blink--;
		if (timer_blink <= 0) {
			timer_blink_flag = 1;
		}
	}
	if (timer_status > 0){
		timer_status--;
			if (timer_status <= 0) {
				timer_status_flag = 1;
			}
		}
}
