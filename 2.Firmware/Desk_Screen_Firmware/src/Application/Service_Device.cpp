/**
 * @file Service_Device.cpp
 * @author tutu
 * @brief
 * @version 0.1
 * @date 2022-12-25
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Application/Service_Device.h"
#include "Application/System_Config.h"
#include "music.h"
#include "ui_desk.h"

/* Private define ------------------------------------------------------------*/
TaskHandle_t Beep_Handle;
TaskHandle_t Screen_Handle;
TaskHandle_t Touchpad_Handle;
/* Private variables ---------------------------------------------------------*/

/* Private function declarations ---------------------------------------------*/
void Device_Beep(void* arg);
void Device_Screen(void* arg);
void Device_Touchpad(void* arg);

/**
 * @brief Initialization of device management service
 *
 */
void Service_Devices_Init(void) {
    xTaskCreatePinnedToCore(Device_Beep,        "Dev.Beep",         2000,   NULL, 1, &Beep_Handle,      0);
    xTaskCreatePinnedToCore(Device_Screen,      "Dev.Screen",       10000,  NULL, 1, &Screen_Handle,    0);
    xTaskCreatePinnedToCore(Device_Touchpad,    "Dev.Touchpad",     10000,  NULL, 1, &Touchpad_Handle,  0);
}

/**
 * @brief update touchpad data
 *
 */
void Device_Touchpad(void* arg) {
    /* Infinite loop */
    TickType_t _xTicksToWait = pdMS_TO_TICKS(10);
    uint16_t x, y;
    int8_t cmd;

    for (;;) {
        touch.update();
        // if (touch.pressed()) {
        //     touch.xy(&x, &y);
        //     Serial.printf("x: %d, y: %d\n", x, y);
        //     if(x < 50) cmd = -1;
        //     else if(x > 50 && x < 150) cmd = 0;
        //     else cmd = 1;
        //     xQueueSend(MusicCmd_Port, &cmd, 0);
        // }
      
        vTaskDelay(_xTicksToWait);
    }
}

/**
 * @brief reflesh screen 
 * 
 */
void Device_Screen(void* arg) {
    TickType_t _xTicksToWait = pdMS_TO_TICKS(150);
    for (;;) {
        screen.refresh();
        /* Refresh screen when the screen was touched */
        ulTaskNotifyTake(pdTRUE,portMAX_DELAY);

        /* Wait for the lvgl handle */
        vTaskDelay(_xTicksToWait);
    }
}
void Device_Beep(void* arg) {
    int8_t cmd;
    uint8_t index = 0;
    /* Init dedault music */
    beep.music_set(music[0][0], music[0][1], false);
    for (;;) {
        if (xQueueReceive(MusicCmd_Port, &cmd, portMAX_DELAY) == pdPASS) {
            Serial.printf("%d\n",cmd);
            switch (cmd) {
                /* backward */
                case -1:
                    index = index == 0 ? MUSIC_NUM - 1 : (index - 1) % MUSIC_NUM;
                    beep.music_set(music[index][0], music[index][1], true);
                    break;
                
                /* play */
                case 0:
                    if (beep.isPlaying())
                        beep.stop();
                    else
                        beep.start();
                    break;

                /* forward */
                case 1:
                    index = (index + 1) % MUSIC_NUM;
                    beep.music_set(music[index][0], music[index][1], true);
                    break;
            }
        }
    }

}