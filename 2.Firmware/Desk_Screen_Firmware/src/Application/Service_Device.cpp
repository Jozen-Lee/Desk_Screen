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
    // xTaskCreate(Device_Beep, "Dev.Beep", Small_Stack_Size, NULL, PriorityHigh, &Beep_Handle);
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
    for (;;) {
        touch.update();
        // if (touch.pressed()) {
        //     touch.xy(&x, &y);
        //     Serial.printf("x: %d, y: %d\n", x, y);
        //     // xTaskNotifyGive(Screen_Handle);
        // }
      
        vTaskDelay(_xTicksToWait);
    }
}

/**
 * @brief reflesh screen 
 * 
 */
void Device_Screen(void* arg) {
    /* Draw default page */
    ui_desk();
    for (;;) {
        screen.refresh();
        /* Refresh screen when the screen was touched */
        ulTaskNotifyTake(pdTRUE,portMAX_DELAY);
        vTaskDelay(pdMS_TO_TICKS(150));
    }
}