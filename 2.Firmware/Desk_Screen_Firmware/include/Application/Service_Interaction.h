/**
 * @file Service_Interaction.h
 * @author tutu 
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _SERVICE_INTERACTION_H
#define _SERVICE_INTERACTION_H
#include <Arduino.h>
#include "freertos/FreeRTOS.h"

#ifdef __cplusplus
extern "C" {
#endif
extern TaskHandle_t lvgl_Handle;

#ifdef __cplusplus
} /*extern "C"*/
#endif

void Service_Interaction_Init(void);



#endif