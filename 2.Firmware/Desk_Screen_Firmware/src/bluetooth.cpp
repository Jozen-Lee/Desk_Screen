/**
 * @file bluetooth.cpp
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
            Bluetooth blt;
            blt.init();

        -# rx&tx
            char data[100];
            uint16_t len;
            if(blt.isUpdated()){
                blt.getData(data, len);
                blt.sendData((uint8_t*)data, len);
            }

  ******************************************************************************
  ******************************************************************************
  */

#include "bluetooth.h"

#define BLT_MASTER_MODE 0        // master mode
#define BLUETOOTH_MAX_LEN 100    // the max len of rx data

/* Static data */
static char rx_buff[BLUETOOTH_MAX_LEN];
static uint16_t rx_len;
static bool update_flag = false;
BluetoothSerial SerialBT;

/* the mac address of slave device, only used in master mode */
uint8_t address[6] = { 0x30, 0x83, 0x98, 0xC3, 0x50, 0xDA };

void Bluetooth_Event(esp_spp_cb_event_t event, esp_spp_cb_param_t* param) {
    /* the first event is from master, the second event is from slave */
    if (event == ESP_SPP_OPEN_EVT || event == ESP_SPP_SRV_OPEN_EVT) {
        Serial.write("bluetooth connection successful!\r\n");
    } else if (event == ESP_SPP_CLOSE_EVT) {
        Serial.write("bluetooth disconnect successful!\r\n");
    } else if (event == ESP_SPP_DATA_IND_EVT) {
        uint16_t len = 0;
        memset(rx_buff, '\0', BLUETOOTH_MAX_LEN);
        while (SerialBT.available()) {
            if (len < BLUETOOTH_MAX_LEN) {
                rx_buff[len] = char(SerialBT.read());
                len++;
            }
        }
        update_flag = true;
        rx_len = len;
        Serial.println(rx_buff);
    } else if (event == ESP_SPP_WRITE_EVT) {
    }
}

void Bluetooth::init(void) {
    /* Register callback function */
    SerialBT.register_callback(Bluetooth_Event);

    /* Start bluetooth */
    stop();
    
}

void Bluetooth::sendData(const uint8_t* buf, uint16_t len) { SerialBT.write(buf, len); }

void Bluetooth::getData(char* rx, uint16_t& len) {
    update_flag = false;
    len = rx_len;
    memcpy(rx, rx_buff, len);
}

bool Bluetooth::isUpdated(void) { return update_flag; }

bool Bluetooth::connected(void) { return SerialBT.connected(); }

void Bluetooth::start(void) {
    if (BLT_MASTER_MODE) {
        SerialBT.begin("ESP32_MASTER", true);
        SerialBT.connect(address);
    } else {
        SerialBT.begin("ESP32_SLAVE");
    }
}

void Bluetooth::stop(void) { SerialBT.end(); }
