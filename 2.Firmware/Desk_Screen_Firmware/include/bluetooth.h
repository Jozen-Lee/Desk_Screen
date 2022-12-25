/**
 * @file bluetooth.h
 * @author tutu 
 * @brief 
 * @version 0.1
 * @date 2022-12-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _BLUETOOTH_H
#define _BLUETOOTH_H

#include <Arduino.h>
#include "BluetoothSerial.h"



class Bluetooth
{
private:
    
public:
    Bluetooth(){}
    ~Bluetooth(){}
	void init(void);
	void sendData(const uint8_t* buf, uint16_t len);
    void getData(char* rx, uint16_t& len);
    bool isUpdated(void);
    bool connected(void);
    void start(void);
    void stop(void);
};

#endif