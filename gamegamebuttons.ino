#include "buttons.h"

Buttons button(1,2,3,4);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
}

uint8_t but;

void loop() {
  // put your main code here, to run repeatedly:

  but = button.readButtons();

  switch(but){
    case Buttons::UP		:	Serial.println("UP");      break;
    case Buttons::DOWN		:	Serial.println("DOWN");    break;
    case Buttons::LEFT		:	Serial.println("LEFT");	   break;
    case Buttons::RIGHT		:	Serial.println("RIGHT");   break;
    case Buttons::A		:	Serial.println("A");       break;
    case Buttons::B		:	Serial.println("B");       break;
    case Buttons::SELECT	:	Serial.println("SELECT");  break;
    case Buttons::START		:	Serial.println("START");   break;
    case (Buttons::UP & Buttons::LEFT) : Serial.println("UP & LEFT"); break;
    default:
      break;
    
  }
}
