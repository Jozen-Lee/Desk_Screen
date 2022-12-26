#include "Application/System_Config.h"
#include "Application/Service_Device.h"
#include "ui/ui.h"

void setup() {
  System_Resource_Init();
}

TickType_t _xTicksToWait = pdMS_TO_TICKS(10000);
String country, province, city, weather, temp;
String loc;
void loop() {
  lv_task_handler();
  delay(20);
}