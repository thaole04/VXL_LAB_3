/*
 * software_timer.c
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */


#include "software_timer.h"
#include "control_leds_segment.h"

int timer0_counter = 0;
int timer0_flag = 0;


int timer_blink_flag = 0;
int timer_blink = 0;

int timer_normal_modeX = 0;
int timer_normal_mode_flagX = 0;


int timer_normal_modeY = 0;
int timer_normal_mode_flagY = 0;

void setTimer0(int duration){
	timer0_counter = duration;
	timer0_flag = 0;
}
void setTimerBlink(int duration){
	timer_blink = duration;
	timer_blink_flag = 0;
}
void setTimerNormalModeX(int duration){
	timer_normal_modeX = duration;
	timer_normal_mode_flagX = 0;
}
void setTimerNormalModeY(int duration){
	timer_normal_modeY = duration;
	timer_normal_mode_flagY = 0;
}

void timerRun() {
	if (timer0_counter > 0){
		timer0_counter--;
		if (timer0_counter <= 0) {
			timer0_flag = 1;
		}
	}
	if (timer_blink > 0){
		timer_blink--;
		if (timer_blink <= 0) {
			timer_blink_flag = 1;
		}
	}
}
