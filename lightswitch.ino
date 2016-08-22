#include "HID-Project.h"

const int pinButton = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinButton, INPUT_PULLUP);
  Gamepad.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pinButton) == HIGH) {
    Gamepad.press(1);
  }
  else {
    Gamepad.releaseAll();
  }
  Gamepad.write();
}
