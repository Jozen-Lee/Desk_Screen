/**
 * @file network.h
 * @author tutu 
 * @brief 
 * @version 0.1
 * @date 2022-12-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _NETWORK_H
#define _NETWORK_H

#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

class Network
{
private:
	String composeZXaddress(String city);
public:
	void init(String ssid, String password);
	uint16_t getBilibiliFans(String url);
    void configWorldTime();
    String getWeather(String city);
    bool getCityinfo(String& country, String& province,String& city, String& weather, String& temp);
    void stop(void);
    static void stringSplit(String* dst, String src, char flag);
};



#endif