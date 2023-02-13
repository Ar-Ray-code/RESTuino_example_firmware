#include "RESTuino/restuino_func.h"

uint8_t len_ssid = 1;
const char *ssid_def[] = {"＊＊＊＊＊＊＊"};
const char *ssid_pass[] = {"＊＊＊＊＊＊＊"};

static RestuinoFunc func;

void setup()
{
  func.restuino_setup();
}
void loop()
{
  func.restuino_loop();
}
