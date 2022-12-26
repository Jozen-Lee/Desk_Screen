/**
 * @file beep.cpp
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
            Beep beep;
            beep.init();

        -# play music
            beep.setBasicBeat(100);
            beep.music_set(two_tiger_tune, two_tiger_beat, true);
    @warning do not forget to include `music.h`

  ******************************************************************************
  ******************************************************************************
  */
#include "beep.h"

/* Static data */
static int16_t* _tune;
static int16_t* _beat;
static int16_t* _tune_record;
static int16_t* _beat_record;
static int16_t BASIC_BEAT_TIME = 100;
bool music_playing = false;
bool loop_flag = false;
static esp_timer_handle_t music_timer;

void music_timer_cb(void* arg) {
    if (*_tune && music_playing) {
        if(*_tune != -1) ledcWriteTone(BEEP_PWM_CHANNEL, *_tune);
        _tune++;
        esp_timer_start_once(music_timer, BASIC_BEAT_TIME * 1000 * (*_beat));
        _beat++;

    } else if (!*_tune && loop_flag) {
        _tune = _tune_record;
        _beat = _beat_record;
        music_playing = true;
        esp_timer_start_once(music_timer, 10);
        // Serial.println("music loop!");
    } else {
        music_playing = false;
        ledcWrite(BEEP_PWM_CHANNEL, 0);
        // Serial.println("music pause!");
    }
}

void Beep::init(void) {
    /* Set freq and resolution to default value */
    ledcSetup(BEEP_PWM_CHANNEL, 4000, 8);
    ledcAttachPin(BEEP_PIN, BEEP_PWM_CHANNEL);
    stop();

    /* register music timer */
    esp_timer_create_args_t music_timer_args = { .callback = &music_timer_cb, .arg = NULL, .name = "music_timer" };
    esp_err_t err = esp_timer_create(&music_timer_args, &music_timer);
}

/**
 * @brief
 *
 * @param tune music tune array, must to be static or global
 * @param beat music tune beat, must to be static or global
 * @param loop_en enable loop mode
 */
void Beep::music_set(int16_t* tune, int16_t* beat, bool loop_en) {
    _tune = tune;
    _tune_record = tune;
    _beat = beat;
    _beat_record = beat;
    loop_flag = loop_en;

    /* Start music */
    // start();
}

void Beep::start(void) {
    music_playing = true;
    esp_timer_start_once(music_timer, 0);
}

void Beep::stop(void) {
    music_playing = false;
    ledcWrite(BEEP_PWM_CHANNEL, 0);
}

/**
 * @brief Set basic beat time(ms)
 *
 * @param time
 */
void Beep::setBasicBeat(uint16_t time) { BASIC_BEAT_TIME = time; }
bool Beep::isPlaying(void) { return music_playing; }