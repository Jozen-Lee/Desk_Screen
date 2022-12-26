/**
 * @file Service_Interaction.cpp
 * @author tutu
 * @brief
 * @version 0.1
 * @date 2022-12-25
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Application/Service_Interaction.h"
#include "Application/System_Config.h"
#include "Application/Service_Device.h"
#include "ui/ui.h"
#include "string.h"

/* Private define ------------------------------------------------------------*/
TaskHandle_t updateInfo_Handle;
TaskHandle_t updateTime_Handle;

/* Private variables ---------------------------------------------------------*/

/* Private function declarations ---------------------------------------------*/
void Interact_updateInfo(void* arg);
void Interact_updateTime(void* arg);

/**
 * @brief Initialization of interaction relative task
 *
 */
void Service_Interaction_Init(void) {
    xTaskCreatePinnedToCore(Interact_updateInfo, "Interact.updateInfo", 10000, NULL, 3, &updateInfo_Handle, 1);
    xTaskCreatePinnedToCore(Interact_updateTime, "Interact.updateTime", 2000, NULL, 1, &updateTime_Handle, 1);
}

/**
 * @brief Update location information periodically
 *
 * @param arg
 */
void Interact_updateInfo(void* arg) {
    /* Infinite loop */
    TickType_t _xTicksToWait = pdMS_TO_TICKS(60000);
    String country, province, city, weather, temp;
    String loc;
    for (;;) {
        if (wifi.getCityinfo(country, province, city, weather, temp)) {
            loc = country + "/" + province + "/" + city;
            temp = temp + "°";

            lv_label_set_text(ui_label_weather, weather.c_str());
            lv_label_set_text(ui_label_location, loc.c_str());
            lv_label_set_text(ui_label_temp, temp.c_str());
            /* Reflesh screen */
            if (lv_scr_act() == ui_WeatherPage) {
                xTaskNotifyGive(Screen_Handle);
            }
            Serial.println(loc + " " + weather + " " + temp);

            /* change weather picture */
            if(weather == "晴") lv_img_set_src(ui_label_weather_pic, &ui_img_sunny_png);
            else if(weather == "多云") lv_img_set_src(ui_label_weather_pic, &ui_img_cloud_png);
            else if(weather == "小雨") lv_img_set_src(ui_label_weather_pic, &ui_img_rain_png);
            else lv_img_set_src(ui_label_weather_pic, &ui_img_sunny_png);
            
        }
        vTaskDelay(_xTicksToWait);
    }
}

/**
 * @brief Update time periodically
 *
 * @param arg
 */
void Interact_updateTime(void* arg) {
    /* Infinite loop */
    TickType_t _xTicksToWait = pdMS_TO_TICKS(5000);
    char time_format[64];
    struct tm timeinfo;
    for (;;) {
        vTaskDelay(_xTicksToWait);
        /* get time */
        getLocalTime(&timeinfo);
        strftime(time_format, 64, "%Y/%m/%d,%H:%M:%S,%A", &timeinfo);
        String time(time_format);
        String time_split[3];
        Network::stringSplit(time_split, time, ',');
        Serial.println(time);
        Serial.println(time_split[0]);
        Serial.println(time_split[1]);
        Serial.println(time_split[2]);
        lv_label_set_text(ui_label_time, time_split[1].c_str());
        lv_label_set_text(ui_label_date, time_split[0].c_str());
        lv_label_set_text(ui_label_day, time_split[2].c_str());

        /* Chinese display */
        if(time_split[2] == "Monday") lv_label_set_text(ui_label_day, "星期一");
        else if(time_split[2] == "Tuesday") lv_label_set_text(ui_label_day, "星期二");
        else if(time_split[2] == "Wednesday") lv_label_set_text(ui_label_day, "星期三");
        else if(time_split[2] == "Thursday") lv_label_set_text(ui_label_day, "星期四");
        else if(time_split[2] == "Friday") lv_label_set_text(ui_label_day, "星期五");
        else if(time_split[2] == "Saturday") lv_label_set_text(ui_label_day, "星期六");
        else if(time_split[2] == "Sunday") lv_label_set_text(ui_label_day, "星期日");

        /* Reflesh screen */
        if (lv_scr_act() == ui_TimePage) {
            xTaskNotifyGive(Screen_Handle);
        }
    }
}

