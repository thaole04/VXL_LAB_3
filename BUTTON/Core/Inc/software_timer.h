/*
 * software_timer.h
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

// variable
extern int timer0_flag;
extern int timer_blink_flag;
extern int timer_normal_modeX;
extern int timer_normal_mode_flagX;
extern int timer_normal_modeY;
extern int timer_normal_mode_flagY;

// function
void setTimer0(int duration);
void setTimerBlink(int duration);
void setTimerNormalModeX(int duration);
void setTimerNormalModeY(int duration);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
