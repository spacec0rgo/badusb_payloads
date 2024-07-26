# BadUSB payloads
This repository is a collection of payloads, mostly for Arduino IDE compatible devices.

Here is a list of compatible devices:
- ATtiny85
  - Digistump Digispark
- ATmega32U4
  - Arduino Leonardo
  - Arduino Micro
  - Arduino Leonardo clones

## How to use

Download the repository files using either _Download ZIp_ or `git clone`.

Arduino requires the sketch to be in a folder with the same name, but don't worry. Even if the files aren't inside their folder, Arduino will ask you to do so the first time you open the sketch.

![Screenshot of the Arduino folder creation dialog](assets/images/arduino_folder_creation_dialog.png)

All `.ino` files contain everything you need to make the sketch work.

> Each device folder has its own README.md with instructions on how to set everything up.

## Tips

I used heat shrink tubing on the boards. This way I can easily manage them without worrying about damaging the electronics.

![Photo of a chinese Arduino Leonardo clone with heat shrink tubing](assets/images/leonardo_heatshrink_tubing.jpg)