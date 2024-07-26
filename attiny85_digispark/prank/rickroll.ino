/*
  Rickroll

  It's just a prank, bro.

  created 18 july 2024
  by C.E. alias c0rgo

  WARNING: this script requires Digispark ATTiny85.
  Be sure to have the required board or you will get an error.

  DISCLAIMER: this code is for educational purposes only.
  Do not attempt to violate the law, any misuse of this script
  can result in criminal charges.
  I will not be responsible for any of your illegal actions.
  You may however try it out on your computer at your own risk.
*/

// #define LAYOUT_HERE
#include "DigiKeyboard.h"

// Device initialization
void setup() {
  DigiKeyboard.update();
  // Mantatory delay before launching payload
  DigiKeyboard.delay(3000);
}

void loop() {
    // Press WIN + R = Execute dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(250);

  // Enter rickroll URL
  // .println also presses ENTER after the string
  DigiKeyboard.println(F("https://youtu.be/dQw4w9WgXcQ"));
  DigiKeyboard.delay(3500);

  // Write message
  DigiKeyboard.sendKeyStroke(KEY_F);
  DigiKeyboard.delay(250);

  // End of payload
  // Prevent loop relaunch
  while (1);
}