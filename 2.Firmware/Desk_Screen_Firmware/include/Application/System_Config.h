/**
 * @file System_Config.h
 * @author tutu
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _SYSTEM_CONFIG_H
#define _SYSTEM_CONFIG_H

#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "ft6336.hpp"
#include "bluetooth.h"
#include "beep.h"
#include "lv_port_indev.h"
#include "display.h"
#include "network.h"

/* Used for freertos */
#define Tiny_Stack_Size       64
#define Small_Stack_Size      128
#define Normal_Stack_Size     256
#define Large_Stack_Size      512
#define Huge_Stack_Size       1024
#define PriorityVeryLow       1
#define PriorityLow           2
#define PriorityBelowNormal   3
#define PriorityNormal        4
#define PriorityAboveNormal   5
#define PriorityHigh          6
#define PrioritySuperHigh     7
#define PriorityRealtime      8

#ifdef __cplusplus
extern "C" {
#endif
/* RTOS resources */
extern QueueHandle_t  MusicCmd_Port;

#ifdef __cplusplus
} /*extern "C"*/
#endif

/* Devices */
extern Display screen;
extern Bluetooth blt;
extern Beep beep;
extern Network wifi;
extern arduino::ft6336<200, 200, 16, 17> touch;

void System_Tasks_Init(void);                                       
void System_Resource_Init(void);  

#endif