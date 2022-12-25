/**
 * @file Service_Device.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _SERVICE_DEVICE_H
#define _SERVICE_DEVICE_H
#include <Arduino.h>
#include "freertos/FreeRTOS.h"

#ifdef __cplusplus
extern "C" {
#endif
extern TaskHandle_t Beep_Handle;
extern TaskHandle_t Screen_Handle;
extern TaskHandle_t Touchpad_Handle;

#ifdef __cplusplus
} /*extern "C"*/
#endif

void Service_Devices_Init(void);

#endif