# Rubber Ducky guide

The guide and payloads in this directory apply to [USB Rubber Ducky](https://hak5.org/products/usb-rubber-ducky), [Flipper Zero](https://flipperzero.one/) and [T-Embed CC1101](https://lilygo.cc/products/t-embed-cc1101).

## Editing and Creating scripts

To write new payloads or edit existing ones, you can use these free resources:
- [Payload Studio - Community Edition](https://PayloadStudio.Hak5.org)
- [Sublime Text](https://www.sublimetext.com/)
- [Notepad++](https://notepad-plus-plus.org/)

Note that these are TXT files only, so they don't support keyboard layouts.

> You can still select the layout from Flipper Zero's Bad USB menu, the same goes for the T-Embed CC1101.

To apply a specific keyboard layout to the TXT file, you must compile it into an `inject.bin` file. This can be done directly in Payload Studio:

You can easily select the preferred layout from the list of included languages built-in from the Hak5 repositories or import a layout file either via URL or local upload. Layout files are saved with a JSON extension:
```
[layout].json
```
For the record, a paid version of Payload Studio is available, called [Payload Studio PRO](https://shop.hak5.org/products/payload-studio-pro), which offers enhanced ducky script development, such as:
- Intelligent Debugger
- Live Error Checking & Payload Tips
- Compiler Optimizations
- Auto Compile & Payload Stats

![Screenshot of Payload Studio PRO](/assets/images/payload_studio_pro.jpg)

An alternative to Payload Studio might be:
- [Ducky Encoder](https://schlomo.github.io/rubber-ducky-german/) by schlomo

You can find the repository [here](https://schlomo.github.io/rubber-ducky-german/). Although it's called "German Rubber Ducky encoder" it actually supports multiple keyboard layouts by importing the layout file.

You can find a list of compatible layouts in the official USB Rubber Ducky repository:
- https://github.com/hak5/usbrubberducky-payloads/tree/master/languages

## Uploading a script

To upload a script you can simply plug the microSD card into your computer and drop it into the appropriate directory.

> For example, the default path for badUSB scripts on the Flipper Zero is `SD Card/badusb/`.

### Upload via software

Some devices offer the possibility of uploading files through a dedicated a software.

In this case, Flipper Zero offers two applications for two different platforms:
- PC
  - [qFlipper](https://docs.flipper.net/qflipper)
- Mobile
  - [Flipper Mobile App](https://docs.flipper.net/mobile-app)

![File upload on the Flipper Zero via qFlipper](/assets/images/qflipper_file_upload.png)

More info are available [here](https://docs.flipper.net/bad-usb).