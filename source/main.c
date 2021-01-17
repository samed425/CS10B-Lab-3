/*	Author: bbaid001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    	DDRB = 0xFE; PORTB = 0x01;
	DDRD = 0x00; PORTD = 0xFF;
	unsigned short wgt = 0x0000;
	unsigned char tmp;
	while (1) {
		wgt = (PIND << 1) | (PINB & 0x01);
		if (wgt >= 0x0046) {
			tmp = 0x02;
		}

		else if ((wgt < 70) && (wgt > 5)){
			tmp = 0x04;
		}

		else if ((wgt <= 5) && (wgt >= 0)) {
			tmp = 0x00;
		}
		PORTB = tmp;
   	}

   	return 1;
}
