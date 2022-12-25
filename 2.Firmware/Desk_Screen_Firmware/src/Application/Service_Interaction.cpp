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

/* Private define ------------------------------------------------------------*/
TaskHandle_t lvgl_Handle;

/* Private variables ---------------------------------------------------------*/

/* Private function declarations ---------------------------------------------*/
void Interact_lvgl(void* arg);

/**
 * @brief Initialization of interaction relative task
 *
 */
void Service_Interaction_Init(void){
    // xTaskCreate(Interact_lvgl, "Interact.lvgl", 20000, NULL, 1, &lvgl_Handle);
    xTaskCreatePinnedToCore(Interact_lvgl, "Interact.lvgl", 20000, NULL, 1, &lvgl_Handle, 1);
}

void Interact_lvgl(void* arg){
    /* Infinite loop */
    TickType_t _xTicksToWait = pdMS_TO_TICKS(10);
    for (;;) {
        lv_task_handler();
        vTaskDelay(_xTicksToWait);
        // Serial.println("lv_task_handle!");
    }
}
