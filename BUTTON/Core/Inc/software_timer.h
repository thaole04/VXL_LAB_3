/*
 * software_timer.h
 *
 *  Created on: Oct 17, 2023
 *      Author: thao2
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

// variable
extern int timer_counter;
extern int timer_flag;
extern int timer_blink;
extern int timer_blink_flag;
extern int timer_normal_modeX;
extern int timer_normal_mode_flagX;
extern int timer_normal_modeY;
extern int timer_normal_mode_flagY;
extern int timer_status;
extern int timer_status_flag;

// function
void setTimer(int duration);
void setTimerBlink(int duration);
void setTimerStatus(int duration);
void setTimerNormalModeX(int duration);
void setTimerNormalModeY(int duration);
void timerRunTIM2();


#endif /* INC_SOFTWARE_TIMER_H_ */
