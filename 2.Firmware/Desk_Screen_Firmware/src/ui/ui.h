// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: Desk_Screen

#ifndef _DESK_SCREEN_UI_H
#define _DESK_SCREEN_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

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
void ui_event_btnQR(lv_event_t * e);
extern lv_obj_t * ui_btnQR;
void ui_event_btnHome(lv_event_t * e);
extern lv_obj_t * ui_btnHome;
extern lv_obj_t * ui_TimePage;
void ui_event_TimePage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_TimePage_btnBack;
extern lv_obj_t * ui_label_time;
extern lv_obj_t * ui_label_date;
extern lv_obj_t * ui_label_day;
extern lv_obj_t * ui_WeatherPage;
void ui_event_WeatherPage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_WeatherPage_btnBack;
extern lv_obj_t * ui_label_weather;
extern lv_obj_t * ui_label_location;
extern lv_obj_t * ui_label_temp;
extern lv_obj_t * ui_label_weather_pic;
extern lv_obj_t * ui_MusicPage;
void ui_event_MusicPage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_MusicPage_btnBack;
extern lv_obj_t * ui_img_music;
extern lv_obj_t * ui_btn_play_music;
extern lv_obj_t * ui_btn_forward_music;
extern lv_obj_t * ui_btn_backward_music;
extern lv_obj_t * ui_QRPage;
void ui_event_QRPage_btnBack(lv_event_t * e);
extern lv_obj_t * ui_QRPage_btnBack;
extern lv_obj_t * ui_img_myQR;


LV_IMG_DECLARE(ui_img_tutu_png);    // assets\tutu.png
LV_IMG_DECLARE(ui_img_time_png);    // assets\time.png
LV_IMG_DECLARE(ui_img_weather_png);    // assets\weather.png
LV_IMG_DECLARE(ui_img_musicfill_png);    // assets\musicfill.png
LV_IMG_DECLARE(ui_img_qr_png);    // assets\QR.png
LV_IMG_DECLARE(ui_img_home_png);    // assets\home.png
LV_IMG_DECLARE(ui_img_back_png);    // assets\back.png
LV_IMG_DECLARE(ui_img_cloud_png);    // assets\cloud.png
LV_IMG_DECLARE(ui_img_heart_png);    // assets\heart.png
LV_IMG_DECLARE(ui_img_play_png);    // assets\play.png
LV_IMG_DECLARE(ui_img_forward_png);    // assets\forward.png
LV_IMG_DECLARE(ui_img_music_back_png);    // assets\music_back.png
LV_IMG_DECLARE(ui_img_myqr_png);    // assets\myQR.png
LV_IMG_DECLARE(ui_img_click_png);    // assets\click.png
LV_IMG_DECLARE(ui_img_setting_png);    // assets\setting.png
LV_IMG_DECLARE(ui_img_sunny_png);    // assets\sunny.png
LV_IMG_DECLARE(ui_img_tiger_png);    // assets\tiger.png
LV_IMG_DECLARE(ui_img_rain_png);    // assets\rain.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
