/********************************************************
 *文件名:delay.h
 *创建时间:2018-10-09
 *作者: 皇甫仁和
 ********************************************************/

#ifndef USER_INC_DELAY_H_
#define USER_INC_DELAY_H_
#include "DSP280x_Device.h"     // DSP280x Headerfile Include File
#include "DSP280x_Examples.h"   // DSP280x Examples Include File
void delay_us(unsigned long int nus);
void delay_ms(unsigned long int nms);
void delay_s(unsigned long int ns);
void delay(unsigned long int i);
#endif /* USER_INC_DELAY_H_ */
