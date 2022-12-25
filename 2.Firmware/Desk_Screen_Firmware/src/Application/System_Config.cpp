/**
 * @file System_Config.cpp
 * @author tutu
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Application/System_Config.h"
#include "Application/Service_Device.h"
#include "Application/Service_Interaction.h"
#include "ui/ui.h"
/* Devices */
Display screen;
Bluetooth blt;
Beep beep;
Network wifi;

void System_Resource_Init(void){
    /* Begin Serial */
    Serial.begin(115200);

    /* Init beep */
    beep.init();

    /* Init screen */
    screen.init();

    /* Init blt */
    blt.init();

    /* Init lvgl input device */
    lv_port_indev_init();

    /* connect network */
    String ssid = "TP-LINK_1CC0";           // line-1 for WiFi ssid
    String password = "woaiwojia012668";    // line-2 for WiFi password
    #if 0
        wifi.init(ssid, password);

        // Change to your BiliBili UID
        Serial.println(wifi.getBilibiliFans("472453800"));
    #endif  

    /* Init ui */
    ui_init();

    /* Init system task */
    System_Tasks_Init();
}

void System_Tasks_Init(void)
{ 
    Service_Devices_Init();
    Service_Interaction_Init();
}