#include "buttons.h"

Buttons::Buttons(int shift, int clk, int stcp, int serial)
{
	this->shift=shift;
	this->clk=clk;
	this->stcp=stcp;
	this->serial=serial;
	

	pinMode(shift, OUTPUT);
	pinMode(clk, OUTPUT);
	pinMode(stcp, OUTPUT);
	pinMode(serial, INPUT);

	digitalWrite(stcp, LOW);
	digitalWrite(clk, LOW);
	digitalWrite(shift, HIGH);
	
}

uint8_t Buttons::readButtons(void)
{
	uint8_t input = 0, temp = 0;

	digitalWrite(stcp, HIGH);
	delayMicroseconds(1);
	digitalWrite(stcp, LOW);
	delayMicroseconds(1);
	digitalWrite(shift, LOW);
	delayMicroseconds(1);
	digitalWrite(shift, HIGH);
	delayMicroseconds(1);

 
	for (int i = 0; i < 8; i++)
	{
		digitalWrite(clk, HIGH);
		delayMicroseconds(1);
		temp = digitalRead(serial);
    input = temp << i;
		digitalWrite(clk, LOW);
		delayMicroseconds(1);
	}



	return input;
}
