#include <Arduino.h>
#include "display.h"
#include "lv_port_indev.h"
#include "ft6336.hpp"
#include "imagedata.h"
#include "ui_desk.h"

/**
  * Due to RAM not enough in Arduino UNO, a frame buffer is not allowed.
  * In this case, a smaller image buffer is allocated and you have to 
  * update a partial display several times.
  * 1 byte = 8 pixels, therefore you have to set 8*N pixels at a time.
  */

Display screen;
extern arduino::ft6336<200, 200, 16, 17> touch;

void setup() {
  /* Begin Serial */
  Serial.begin(115200);

  /* Init Screen */
  screen.init();

  /* Init Input device */
  lv_port_indev_init();

  /* draw ui */
  ui_desk();
}


void loop() {
  lv_task_handler();
  touch.update();
  delay(10);
  // Serial.println("hello");
  if(touch.pressed()){
    screen.refresh();
  }
}
