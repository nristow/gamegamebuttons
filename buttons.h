//#include <cstdint>
#include "Arduino.h"

class Buttons
{
	public:
		static const uint8_t UP      =	0x01;
		static const uint8_t DOWN    =	0x02;
		static const uint8_t LEFT    =	0x04;
		static const uint8_t RIGHT   =	0x08;
		static const uint8_t A       =	0x0F;
		static const uint8_t B       =	0x20;
		static const uint8_t SELECT  =  0x40;
		static const uint8_t START   =  0x80;
		uint8_t	      output  = 0;
		Buttons(int shift, int clk, int stcp, int serial); 
		uint8_t readButtons(void);

	private:
		int shift=0, clk=0, stcp=0, serial=0;

};
