#include "libraries/inky_frame_7/inky_frame_7.hpp"

using namespace pimoroni;

InkyFrame frame;

int main() {
  frame.init();

  frame.led(InkyFrame::LED::LED_ACTIVITY, 255);

  switch (frame.get_wake_up_event()) {
  case InkyFrame::BUTTON_A_EVENT:
    frame.led(InkyFrame::LED::LED_A, 255);
    break;
  case InkyFrame::BUTTON_B_EVENT:
    frame.led(InkyFrame::LED::LED_B, 255);
    break;
  case InkyFrame::BUTTON_C_EVENT:
    frame.led(InkyFrame::LED::LED_C, 255);
    break;
  case InkyFrame::BUTTON_D_EVENT:
    frame.led(InkyFrame::LED::LED_D, 255);
    break;
  case InkyFrame::BUTTON_E_EVENT:
    frame.led(InkyFrame::LED::LED_E, 255);
    break;
  }

  sleep_ms(1000);

  frame.sleep();
  return 0;
}