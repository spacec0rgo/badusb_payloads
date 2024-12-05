/*
  Mouse Jiggler

  Mouse emulator to prevent the screen from going to sleep and
  locking the desktop due to inactivity.
  Useful in a vastly set of operations, including digital forensic
  investigations.

  created 17 july 2024
  by C.E. alias c0rgo

  WARNING: this script requires Arduino Leonardo or Micro.
  Be sure to have the required board or you will get an error.
*/

#include "HID-Project.h"

// Device initialization
void setup() {
  Mouse.begin();
  // Mandatory delay before launching payload
  delay(3000);
}

void loop() {
  // Move mouse back and forth
  Mouse.move(-3, 0, 0);
  delay(75);
  Mouse.move(6, 0, 0);
  delay(75);
  Mouse.move(-3, 0, 0);

  // Wait 5 seconds then repeat
  delay(5000);
}