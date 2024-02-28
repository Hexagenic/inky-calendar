# inky-calendar
This project is based around the [Inky Frame 7.3"][inky-frame] 7-color e-ink display.

The main goal is to create a low power calendar, which is both able to indicate national holidays,
as well as read a custom list of birthdays and other important dates from an sd-card.

The wireless functionality will mainly be used to set the real time clock, in order to track the current date,
and to automatically redraw the screen at the start of every day. This means that the wireless connection will only be used as needed, to minimize the battery drain.

# Installing
You can find the `inky_calendar.uf2` binary in the [Releases page][releases]. Boot your inkyframe in usb mode by holding `bootsel` while plugging in, then copy the binary onto the mounted drive.

# Building

The build requiremnts for this project are
* CMake
* gcc-arm-none-eabi
* [Pico SDK][pico-sdk]
* [Pimoroni Pico libraries][pimoroni-pico]

The environment variable `PICO_SDK_PATH` is used to indicate where you have downloaded the Pico SDK to.
IF the Pimoroni Pico library shares the same parent folder as the Pico SDK, it will automatically be found, otherwise add the following define to cmake `-DPIMORONI_PICO_PATH=$PIMORONI_PICO_PATH`

[inky-frame]: https://shop.pimoroni.com/products/inky-frame-7-3
[pico-sdk]: https://github.com/raspberrypi/pico-sdk
[pimoroni-pico]: https://github.com/pimoroni/pimoroni-pico
[releases]: https://github.com/Hexagenic/inky-calendar/releases
