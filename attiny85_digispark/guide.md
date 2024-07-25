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

Complete the installation and continue.

### Adding the library

Once installed the drivers, open the Arduino IDE:
- Go to _File_ > _Preferences_.
- There should be a section called _Additional Boards Manager URLs_
- Paste [this link](https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json) there
- Click _OK_

![Screenshot of Arduino IDE Preferences](/assets/images/arduino_preferences.png)

You should then be able to select and install _Digistump AVR Boards_ from your _Boards Manager_.

## Uploading a sketch

Before continuing, be sure to select the correct board:
- Go to _Tools_ > _Board_ > _Digistump AVR Boards_
- Select the one you're using

![Screenshot of the board selection](/assets/images/arduino_digistump_board_selection.png)

Once you click _Upload_, the IDE will compile the sketch:
- After compiling, it will wait for the Digispark to be inserted
- As soon as you plug it into the USB port, it will start uploading

![Screenshot of the Arduino IDE Digispark wait message](/assets/images/digispark_sketch_upload.png)

You will be notified as the upload is done.

![Screenshot of a finished upload message](/assets/images/digispark_upload_done.png)