// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: Desk_Screen

#ifndef _DESK_SCREEN_UI_H
#define _DESK_SCREEN_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

extern lv_obj_t * ui_HomePage;
void ui_event_imgLogo(lv_event_t * e);
extern lv_obj_t * ui_imgLogo;
extern lv_obj_t * ui_MenuPage;
void ui_event_btnTime(lv_event_t * e);
extern lv_obj_t * ui_btnTime;
void ui_event_btnWeather(lv_event_t * e);
extern lv_obj_t * ui_btnWeather;
void ui_event_btnMusic(lv_event_t * e);
extern lv_obj_t * ui_btnMusic;
void ui_event_btnSetting(lv_event_t * e);
extern lv_obj_t * ui_btnSetting;
void ui_event_btnTime1(lv_event_t * e);
extern lv_obj_t * ui_btnTime1;
extern lv_obj_t * ui_TimePage;
void ui_event_TimePage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_TimePage_btnBack;
extern lv_obj_t * ui_WeatherPage_Label4;
extern lv_obj_t * ui_WeatherPage_Label6;
extern lv_obj_t * ui_WeatherPage_Label5;
extern lv_obj_t * ui_WeatherPage;
void ui_event_WeatherPage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_WeatherPage_btnBack;
extern lv_obj_t * ui_WeatherPage_Label2;
extern lv_obj_t * ui_WeatherPage_Label1;
extern lv_obj_t * ui_WeatherPage_Label3;
extern lv_obj_t * ui_WeatherPage_Image3;
extern lv_obj_t * ui_MusicPage;
void ui_event_MusicPage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_MusicPage_btnBack;
extern lv_obj_t * ui_MusicPage_Image4;
extern lv_obj_t * ui_MusicPage_Button7;
extern lv_obj_t * ui_MusicPage_Button2;
extern lv_obj_t * ui_MusicPage_Button1;
extern lv_obj_t * ui_SettingPage;
void ui_event_SettingPage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_SettingPage_btnBack;
extern lv_obj_t * ui_SettingPage_Image6;


LV_IMG_DECLARE(ui_img_tutu_png);    // assets\tutu.png
LV_IMG_DECLARE(ui_img_time_png);    // assets\time.png
LV_IMG_DECLARE(ui_img_weather_png);    // assets\weather.png
LV_IMG_DECLARE(ui_img_musicfill_png);    // assets\musicfill.png
LV_IMG_DECLARE(ui_img_qr_png);    // assets\QR.png
LV_IMG_DECLARE(ui_img_home_png);    // assets\home.png
LV_IMG_DECLARE(ui_img_back_png);    // assets\back.png
LV_IMG_DECLARE(ui_img_sunny_png);    // assets\sunny.png
LV_IMG_DECLARE(ui_img_heart_png);    // assets\heart.png
LV_IMG_DECLARE(ui_img_play_png);    // assets\play.png
LV_IMG_DECLARE(ui_img_forward_png);    // assets\forward.png
LV_IMG_DECLARE(ui_img_music_back_png);    // assets\music_back.png
LV_IMG_DECLARE(ui_img_myqr_png);    // assets\myQR.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
