/**
 * @file network.cpp
 * @author tutu
 * @brief
 * @version 0.1
 * @date 2022-12-24
 *
 * @copyright Copyright (c) 2022
 *
  ==============================================================================
                              How to use this driver
  ==============================================================================
    @note
        -# init
            Network wifi;
            String ssid = "wifi_ssid";         
            String password = "wifi_password";   
            wifi.init(ssid, password);

        -# get_fans_num
            Serial.println(wifi.getBilibiliFans("your bilibili uid"));

        -# get weather 
            Serial.println(wifi.getWeather("北京"));
            

  ******************************************************************************
  ******************************************************************************
  */

#include "network.h"

/* This is used to get weather information, you can get more details in
    https://seniverse.yuque.com/hyper_data/api_v3/nyiu3t?
*/
#define XINZHI_KEY "SS83u1ASzT0vFcccR" // change this value to your private key 

void Network::init(String ssid, String password) {
    /* enable wifi scan */
    #if 0
    Serial.println("scan start");
    int n = WiFi.scanNetworks();
    Serial.println("scan done");
    if (n == 0) {
        Serial.println("no networks found");
    } else {
        Serial.print(n);
        Serial.println(" networks found");
        for (int i = 0; i < n; ++i) {
            Serial.print(i + 1);
            Serial.print(": ");
            Serial.print(WiFi.SSID(i));
            Serial.print(" (");
            Serial.print(WiFi.RSSI(i));
            Serial.print(")");
            Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? " " : "*");
            delay(10);
        }
    }
    Serial.println("");
    #endif

    Serial.print("Connecting: ");
    Serial.print(ssid.c_str());
    Serial.print(" @");
    Serial.println(password.c_str());
    WiFi.begin(ssid.c_str(), password.c_str());
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected!");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    /* config world time */
    configWorldTime();
}

uint16_t Network::getBilibiliFans(String uid) {
    String fansCount = "";
    HTTPClient http;
    http.begin("http://api.bilibili.com/x/relation/stat?vmid=" + uid);

    // start connection and send HTTP headerFFF
    int httpCode = http.GET();

    // httpCode will be negative on error
    if (httpCode > 0) {
        // file found at server
        if (httpCode == HTTP_CODE_OK) {
            String payload = http.getString();
            int pos = (payload.indexOf("follower"));
            fansCount = payload.substring(pos + 10, payload.length() - 2);
        }
    } else {
        Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();

    return atol(fansCount.c_str());
}

#define NTP1 "ntp1.aliyun.com"
#define NTP2 "ntp2.aliyun.com"
#define NTP3 "ntp3.aliyun.com"
/**
 * @brief This function only used to print time
 *
 */
void Network::configWorldTime() {
    struct tm timeinfo;
    if (!getLocalTime(&timeinfo)) {
        configTime(8 * 3600, 0, NTP1, NTP2, NTP3);
        return;
    }
    /* format output: 2021-10-24 23:00:44 Sunday */
    Serial.println(&timeinfo, "%F %T %A");
}

String Network::getWeather(String city) {
    String weather;
    HTTPClient http;
    DynamicJsonDocument doc(1024);

    /* Compose url */
    String url_xinzhi = "https://api.seniverse.com/v3/weather/now.json?key=";
    url_xinzhi += XINZHI_KEY;
    url_xinzhi += "&location=";
    url_xinzhi += city;
    url_xinzhi += "&language=zh-Hans&unit=c";

    http.begin(url_xinzhi);
    int httpGet = http.GET();
    if (httpGet > 0) {
        if (httpGet == HTTP_CODE_OK) {
            String json = http.getString();
            deserializeJson(doc, json);
            weather = doc["results"][0]["now"]["text"].as<String>();
        } else {
            Serial.printf("ERROR!");
        }
    } else {
        Serial.printf("ERROR!");
    }
    http.end();
    return weather;
}

void Network::stop(void){
    WiFi.disconnect(true);
}