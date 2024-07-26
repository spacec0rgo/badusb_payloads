/*
  Mouse Jiggler

  Mouse emulator to prevent the screen from going to sleep and
  locking the desktop due to inactivity.
  Useful in a vastly set of operations, including digital forensic
  investigations.

  created 18 july 2024
  by C.E. alias c0rgo

  WARNING: this script requires Digispark ATTiny85.
  Be sure to have the required board or you will get an error.
*/

// #define LAYOUT_HERE
#include "DigiMouse.h"

// Device initialization
void setup() {
  DigiMouse.begin();
  // Mantatory delay before launching payload
  DigiMouse.delay(3000);
}

void loop() {
  // Move mouse back and forth
  DigiMouse.move(-3, 0, 0);
  DigiMouse.delay(75);
  DigiMouse.move(6, 0, 0);
  DigiMouse.delay(75);
  DigiMouse.move(-3, 0, 0);

  // Wait 5 seconds then repeat
  DigiMouse.delay(5000);
}