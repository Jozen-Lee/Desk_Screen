/**
 * @file beep.h
 * @author tutu 
 * @brief 
 * @version 0.1
 * @date 2022-12-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _BEEP_H
#define _BEEP_H

#include <Arduino.h>
#include "driver/ledc.h"
#include "driver/timer.h"

#define BEEP_PIN 2
#define BEEP_PWM_CHANNEL 0

class Beep
{
private:
    uint8_t basic_beat = 10;
public:
    Beep(){}
    ~Beep(){}
	void init(void);
    void music_set(int16_t* tune, int16_t* beat, bool loop);
    void start(void);
    void stop(void);
    void forward(void);
    void backward(void);
    void setBasicBeat(uint16_t beat_time);
    bool isPlaying(void);

};

#endif