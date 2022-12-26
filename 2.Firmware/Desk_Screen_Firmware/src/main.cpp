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
    // delay(20000);
    // Serial.println("start update info");
    // wifi.getCityinfo(country, province, city, weather, temp);
    // loc = country + "/" + province + "/" + city;
    // temp = temp + "°";
    // lv_label_set_text(ui_label_weather, weather.c_str());
    // lv_label_set_text(ui_label_location, loc.c_str());
    // lv_label_set_text(ui_label_temp, temp.c_str());
    // Serial.println("update info");
    // /* Reflesh screen */
    // if (lv_scr_act() == ui_WeatherPage) {
    //     xTaskNotifyGive(Screen_Handle);
    // }
  lv_task_handler();
  delay(20);
}