/*
 * processing.h
 *
 *  Created on: Oct 18, 2023
 *      Author: thao2
 */

#ifndef INC_PROCESSING_H_
#define INC_PROCESSING_H_

#include "main.h"

extern int timeRed;
extern int timeAmber;
extern int timeGreen;
extern int timeRedBuffer;
extern int timeAmberBuffer;
extern int timeGreenBuffer;

void INIT_MODE();
void fsm();
void normalMode();
void changeTimeRedMode();
void changeTimeAmberMode();
void changeTimeGreenMode();
void disableAllLeds();


#endif /* INC_PROCESSING_H_ */
