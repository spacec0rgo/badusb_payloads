# Digispark ATtiny85 guide

## Prerequisites

Before uploading the sketch, you need to:
- Install the drivers
- Configure the IDE to add the libraries

### Installing the drivers on Windows

Download the drivers from [here](https://github.com/digistump/DigistumpArduino/releases/). Pick the latest release and download the archive _Digistump.Drivers.zip_.

Once you downloaded the zip file:
- For 32bis OS
  - Execute _Install Drivers.exe_
- For 64bit OS
  - Execute _DPInst64.exe_

### Adding the library

Once installed the drivers, open the Arduino IDE:
- Go to _File_ > _Preferences_.
- There should be a section called _Additional Boards Manager URLs_
- Paste [this link](https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json) there
- Click _OK_

![Screenshot of Arduino IDE Preferences](/assets/images/arduino_preferences.png)

You should then be able to select and install _Digistump AVR Boards_ from your _Boards Manager_.

## Uploading a sketch