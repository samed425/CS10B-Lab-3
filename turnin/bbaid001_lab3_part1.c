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
    	DDRA = 0x00; PORTA = 0xFF;
    	DDRB = 0x00; PORTB = 0xFF;
   	DDRC = 0xFF; PORTC = 0x00;
    	unsigned char tmpA;
    	unsigned char tmpB;
   	unsigned char totA;
    	unsigned char totB;
	unsigned char num;
	unsigned char i;
	while (1) {
		tmpA = PINA;
		tmpB = PINB;
		totA = 0;
		totB = 0;
		for (i = 0; i < 8; i = i + 1) {
			num = (tmpA >> i) & 0x01;
			if (num == 0x01) {
				totA = totA + 1;
			}
			num = (tmpB >> i) & 0x01;
			if (num == 0x01) {
				totB = totB + 1;
			}
		}
	PORTC = totA + totB;
    	}
   	return 1;
}
