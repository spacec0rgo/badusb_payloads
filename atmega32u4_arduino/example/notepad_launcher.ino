/*
  Notepad Launcher

  A simple notepad.exe launcher to demonstrate the risks derived from
  USB payloads.
  The script is simple, however it can be used to launch other
  programs (e.g. PowerShell) and perform malicous actions.

  created 17 july 2024
  by C.E. alias c0rgo

  WARNING: this script requires Arduino Leonardo or Micro.
  Be sure to have the required board or you will get an error.

  DISCLAIMER: this code is for educational purposes only.
  Do not attempt to violate the law, any misuse of this script
  can result in criminal charges.
  I will not be responsible for any of your illegal actions.
  You may however try it out on your computer at your own risk.
*/

// #define HID_CUSTOM_LAYOUT
// #define LAYOUT_HERE
#include <HID-Project.h>

// Device initialization
void setup() {
  Keyboard.begin();
  // Mantatory delay before launching payload
  delay(3000);
}

void loop() {
  // Press Windows key
  Keyboard.press(KEY_LEFT_GUI);
  delay(200);
  // Press R key
  Keyboard.press('r');

  // Release the keys together
  // WIN + R = Execute dialog
  Keyboard.releaseAll();
  delay(200);

  // Enter rickroll URL
  // .println also presses ENTER after the string
  Keyboard.println("notepad.exe");
  delay(1500);

  // Write message
  Keyboard.print("do not trust anyone");
  delay(250);

  //End Keyboard Control
  Keyboard.end();

  // End of payload
  // Prevent loop relaunch
  while (1);
}
