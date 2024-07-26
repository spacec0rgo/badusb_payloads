# Arduino ATmega32U4 guide

## Uploading a sketch

Before continuing, be sure to select the correct board:
- Go to _Tools_ > _Board_ > _Arduino_ AVR Boards_
- Select the _Leonardo_ or _Micro_

![Screenshot of the board selection](/assets/images/arduino_leonardo_board_selection.png)

### Adding the library

The arduino sketches rely on the _HID-Project_ library.

Here is the official repository:
- https://github.com/NicoHood/HID

To install it, simply open the _Library Manager_ in Arduino IDE and search `hid-project`, the click _Install_.

![Screenshot of the HID-Project in Library Manager](/assets/images/hid_project_library_manager.png)

## Keyboard layout support

_HID Projects_ supports a various amount of layouts.

To change the layout, simply define it before including the _HID-Project_ library.
```c++
#define HID_CUSTOM_LAYOUT
#define LAYOUT_US_ENGLISH
#include <HID-Project.h>
```

Supported layouts are:
- LAYOUT_US_ENGLISH
- LAYOUT_CANADIAN_FRENCH
- LAYOUT_CANADIAN_MULTILINGUAL
- LAYOUT_DANISH
- LAYOUT_FRENCH
- LAYOUT_FRENCH_BELGIAN
- LAYOUT_FRENCH_SWISS
- LAYOUT_GERMAN
- LAYOUT_GERMAN_MAC
- LAYOUT_GERMAN_SWISS
- LAYOUT_ICELANDIC
- LAYOUT_IRISH
- LAYOUT_ITALIAN
- LAYOUT_JAPANESE
- LAYOUT_NORWEGIAN
- LAYOUT_PORTUGUESE
- LAYOUT_PORTUGUESE_BRAZILIAN
- LAYOUT_SPANISH
- LAYOUT_SPANISH_LATIN_AMERICA
- LAYOUT_SWEDISH
- LAYOUT_TURKISH
- LAYOUT_UNITED_KINGDOM
- LAYOUT_US_INTERNATIONAL

> If not defined, HID-Project will use LAYOUT_US_INTERNATIONAL.