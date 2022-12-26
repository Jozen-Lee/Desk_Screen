// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: Desk_Screen

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_HomePage;
void ui_event_imgLogo(lv_event_t * e);
lv_obj_t * ui_imgLogo;
lv_obj_t * ui_MenuPage;
void ui_event_btnTime(lv_event_t * e);
lv_obj_t * ui_btnTime;
void ui_event_btnWeather(lv_event_t * e);
lv_obj_t * ui_btnWeather;
void ui_event_btnMusic(lv_event_t * e);
lv_obj_t * ui_btnMusic;
void ui_event_btnSetting(lv_event_t * e);
lv_obj_t * ui_btnSetting;
void ui_event_btnTime1(lv_event_t * e);
lv_obj_t * ui_btnTime1;
lv_obj_t * ui_TimePage;
void ui_event_TimePage_btnBack(lv_event_t * e);
lv_obj_t * ui_TimePage_btnBack;
lv_obj_t * ui_WeatherPage_Label4;
lv_obj_t * ui_WeatherPage_Label6;
lv_obj_t * ui_WeatherPage_Label5;
lv_obj_t * ui_WeatherPage;
void ui_event_WeatherPage_btnBack(lv_event_t * e);
lv_obj_t * ui_WeatherPage_btnBack;
lv_obj_t * ui_WeatherPage_Label2;
lv_obj_t * ui_WeatherPage_Label1;
lv_obj_t * ui_WeatherPage_Label3;
lv_obj_t * ui_WeatherPage_Image3;
lv_obj_t * ui_MusicPage;
void ui_event_MusicPage_btnBack(lv_event_t * e);
lv_obj_t * ui_MusicPage_btnBack;
lv_obj_t * ui_MusicPage_Image4;
lv_obj_t * ui_MusicPage_Button7;
lv_obj_t * ui_MusicPage_Button2;
lv_obj_t * ui_MusicPage_Button1;
lv_obj_t * ui_SettingPage;
void ui_event_SettingPage_btnBack(lv_event_t * e);
lv_obj_t * ui_SettingPage_btnBack;
lv_obj_t * ui_SettingPage_Image6;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_imgLogo(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_btnTime(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SettingPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_btnWeather(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_WeatherPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_btnMusic(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MusicPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_btnSetting(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SettingPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_btnTime1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HomePage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_TimePage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_WeatherPage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_MusicPage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_SettingPage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_HomePage_screen_init(void)
{
    ui_HomePage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_HomePage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_imgLogo = lv_img_create(ui_HomePage);
    lv_img_set_src(ui_imgLogo, &ui_img_tutu_png);
    lv_obj_set_width(ui_imgLogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_imgLogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_imgLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_imgLogo, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_imgLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_imgLogo, ui_event_imgLogo, LV_EVENT_ALL, NULL);

}
void ui_MenuPage_screen_init(void) {

    ui_MenuPage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MenuPage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MenuPage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MenuPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* Add lines */
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, 2);
    lv_style_set_line_color(&style_line, lv_color_hex(0x0000));
    static lv_point_t line_points[] = {{-200, 0}, {200, 0}};
    lv_obj_t* line = lv_line_create(ui_MenuPage);
    lv_line_set_points(line, line_points, 2);
    lv_obj_add_style(line, &style_line, LV_STATE_DEFAULT);
    lv_obj_align(line, LV_ALIGN_CENTER, 0, 0);

    static lv_point_t line_points2[] = {{0, -200}, {0, 200}};
    lv_obj_t* line2 = lv_line_create(ui_MenuPage);
    lv_line_set_points(line2, line_points2, 2);
    lv_obj_add_style(line2, &style_line, LV_STATE_DEFAULT);
    lv_obj_align(line2, LV_ALIGN_CENTER, 0, 0);

    ui_btnTime = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnTime, 90);
    lv_obj_set_height(ui_btnTime, 90);
    lv_obj_add_flag(ui_btnTime, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnTime, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnTime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnTime, &ui_img_time_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnWeather = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnWeather, 90);
    lv_obj_set_height(ui_btnWeather, 90);
    lv_obj_set_x(ui_btnWeather, 110);
    lv_obj_set_y(ui_btnWeather, 0);
    lv_obj_add_flag(ui_btnWeather, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnWeather, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnWeather, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnWeather, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnWeather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnWeather, &ui_img_weather_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMusic = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnMusic, 90);
    lv_obj_set_height(ui_btnMusic, 90);
    lv_obj_set_x(ui_btnMusic, 110);
    lv_obj_set_y(ui_btnMusic, 110);
    lv_obj_add_flag(ui_btnMusic, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMusic, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMusic, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMusic, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMusic, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnMusic, &ui_img_musicfill_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnSetting = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnSetting, 90);
    lv_obj_set_height(ui_btnSetting, 90);
    lv_obj_set_x(ui_btnSetting, 0);
    lv_obj_set_y(ui_btnSetting, 110);
    lv_obj_add_flag(ui_btnSetting, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSetting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnSetting, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnSetting, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnSetting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnSetting, &ui_img_qr_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnTime1 = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnTime1, 50);
    lv_obj_set_height(ui_btnTime1, 50);
    lv_obj_set_x(ui_btnTime1, 75);
    lv_obj_set_y(ui_btnTime1, 75);
    lv_obj_add_flag(ui_btnTime1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnTime1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnTime1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnTime1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnTime1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnTime1, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btnTime1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btnTime1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_btnTime1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnTime, ui_event_btnTime, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnWeather, ui_event_btnWeather, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMusic, ui_event_btnMusic, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnSetting, ui_event_btnSetting, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnTime1, ui_event_btnTime1, LV_EVENT_ALL, NULL);

}
void ui_TimePage_screen_init(void)
{
    ui_TimePage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_TimePage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_TimePage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TimePage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimePage_btnBack = lv_btn_create(ui_TimePage);
    lv_obj_set_width(ui_TimePage_btnBack, 40);
    lv_obj_set_height(ui_TimePage_btnBack, 40);
    lv_obj_add_flag(ui_TimePage_btnBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_TimePage_btnBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TimePage_btnBack, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TimePage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TimePage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_TimePage_btnBack, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Label4 = lv_label_create(ui_TimePage);
    lv_obj_set_width(ui_WeatherPage_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WeatherPage_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WeatherPage_Label4, 0);
    lv_obj_set_y(ui_WeatherPage_Label4, -25);
    lv_obj_set_align(ui_WeatherPage_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WeatherPage_Label4, "22:10:16");
    lv_obj_set_style_text_font(ui_WeatherPage_Label4, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Label6 = lv_label_create(ui_TimePage);
    lv_obj_set_width(ui_WeatherPage_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WeatherPage_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WeatherPage_Label6, 0);
    lv_obj_set_y(ui_WeatherPage_Label6, 20);
    lv_obj_set_align(ui_WeatherPage_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WeatherPage_Label6, "2022/12/25");
    lv_obj_set_style_text_font(ui_WeatherPage_Label6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Label5 = lv_label_create(ui_TimePage);
    lv_obj_set_width(ui_WeatherPage_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WeatherPage_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WeatherPage_Label5, 0);
    lv_obj_set_y(ui_WeatherPage_Label5, 56);
    lv_obj_set_align(ui_WeatherPage_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WeatherPage_Label5, "Sunday");
    lv_obj_set_style_text_font(ui_WeatherPage_Label5, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_TimePage_btnBack, ui_event_TimePage_btnBack, LV_EVENT_ALL, NULL);

}
void ui_WeatherPage_screen_init(void)
{
    ui_WeatherPage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WeatherPage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WeatherPage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WeatherPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_btnBack = lv_btn_create(ui_WeatherPage);
    lv_obj_set_width(ui_WeatherPage_btnBack, 40);
    lv_obj_set_height(ui_WeatherPage_btnBack, 40);
    lv_obj_add_flag(ui_WeatherPage_btnBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WeatherPage_btnBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WeatherPage_btnBack, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WeatherPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WeatherPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_WeatherPage_btnBack, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Label2 = lv_label_create(ui_WeatherPage);
    lv_obj_set_width(ui_WeatherPage_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WeatherPage_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WeatherPage_Label2, 20);
    lv_obj_set_y(ui_WeatherPage_Label2, -40);
    lv_obj_set_align(ui_WeatherPage_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WeatherPage_Label2, "sunny");
    lv_obj_set_style_text_font(ui_WeatherPage_Label2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Label1 = lv_label_create(ui_WeatherPage);
    lv_obj_set_width(ui_WeatherPage_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WeatherPage_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WeatherPage_Label1, 0);
    lv_obj_set_y(ui_WeatherPage_Label1, 60);
    lv_obj_set_align(ui_WeatherPage_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WeatherPage_Label1, "Beijing");
    lv_obj_set_style_text_font(ui_WeatherPage_Label1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Label3 = lv_label_create(ui_WeatherPage);
    lv_obj_set_width(ui_WeatherPage_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WeatherPage_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WeatherPage_Label3, 0);
    lv_obj_set_y(ui_WeatherPage_Label3, 10);
    lv_obj_set_align(ui_WeatherPage_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WeatherPage_Label3, "32°");
    lv_obj_set_style_text_font(ui_WeatherPage_Label3, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPage_Image3 = lv_img_create(ui_WeatherPage);
    lv_img_set_src(ui_WeatherPage_Image3, &ui_img_sunny_png);
    lv_obj_set_width(ui_WeatherPage_Image3, 32);
    lv_obj_set_height(ui_WeatherPage_Image3, 32);
    lv_obj_set_x(ui_WeatherPage_Image3, -35);
    lv_obj_set_y(ui_WeatherPage_Image3, -40);
    lv_obj_set_align(ui_WeatherPage_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WeatherPage_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WeatherPage_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_WeatherPage_btnBack, ui_event_WeatherPage_btnBack, LV_EVENT_ALL, NULL);

}
void ui_MusicPage_screen_init(void)
{
    ui_MusicPage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MusicPage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MusicPage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MusicPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MusicPage_btnBack = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_MusicPage_btnBack, 40);
    lv_obj_set_height(ui_MusicPage_btnBack, 40);
    lv_obj_add_flag(ui_MusicPage_btnBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MusicPage_btnBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MusicPage_btnBack, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MusicPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MusicPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_MusicPage_btnBack, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MusicPage_Image4 = lv_img_create(ui_MusicPage);
    lv_img_set_src(ui_MusicPage_Image4, &ui_img_heart_png);
    lv_obj_set_width(ui_MusicPage_Image4, 90);
    lv_obj_set_height(ui_MusicPage_Image4, 70);
    lv_obj_set_x(ui_MusicPage_Image4, 4);
    lv_obj_set_y(ui_MusicPage_Image4, -11);
    lv_obj_set_align(ui_MusicPage_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MusicPage_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MusicPage_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MusicPage_Button7 = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_MusicPage_Button7, 40);
    lv_obj_set_height(ui_MusicPage_Button7, 40);
    lv_obj_set_x(ui_MusicPage_Button7, 0);
    lv_obj_set_y(ui_MusicPage_Button7, 60);
    lv_obj_set_align(ui_MusicPage_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MusicPage_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MusicPage_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MusicPage_Button7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MusicPage_Button7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MusicPage_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_MusicPage_Button7, &ui_img_play_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MusicPage_Button2 = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_MusicPage_Button2, 32);
    lv_obj_set_height(ui_MusicPage_Button2, 32);
    lv_obj_set_x(ui_MusicPage_Button2, 50);
    lv_obj_set_y(ui_MusicPage_Button2, 60);
    lv_obj_set_align(ui_MusicPage_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MusicPage_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MusicPage_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MusicPage_Button2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MusicPage_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MusicPage_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_MusicPage_Button2, &ui_img_forward_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MusicPage_Button1 = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_MusicPage_Button1, 32);
    lv_obj_set_height(ui_MusicPage_Button1, 32);
    lv_obj_set_x(ui_MusicPage_Button1, -50);
    lv_obj_set_y(ui_MusicPage_Button1, 60);
    lv_obj_set_align(ui_MusicPage_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MusicPage_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MusicPage_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MusicPage_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MusicPage_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MusicPage_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_MusicPage_Button1, &ui_img_music_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_MusicPage_btnBack, ui_event_MusicPage_btnBack, LV_EVENT_ALL, NULL);

}
void ui_SettingPage_screen_init(void)
{
    ui_SettingPage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SettingPage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SettingPage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingPage_btnBack = lv_btn_create(ui_SettingPage);
    lv_obj_set_width(ui_SettingPage_btnBack, 40);
    lv_obj_set_height(ui_SettingPage_btnBack, 40);
    lv_obj_add_flag(ui_SettingPage_btnBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SettingPage_btnBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SettingPage_btnBack, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SettingPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_SettingPage_btnBack, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingPage_Image6 = lv_img_create(ui_SettingPage);
    lv_img_set_src(ui_SettingPage_Image6, &ui_img_myqr_png);
    lv_obj_set_width(ui_SettingPage_Image6, 130);
    lv_obj_set_height(ui_SettingPage_Image6, 130);
    lv_obj_set_x(ui_SettingPage_Image6, 0);
    lv_obj_set_y(ui_SettingPage_Image6, 15);
    lv_obj_set_align(ui_SettingPage_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SettingPage_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SettingPage_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_SettingPage_btnBack, ui_event_SettingPage_btnBack, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_HomePage_screen_init();
    ui_MenuPage_screen_init();
    ui_TimePage_screen_init();
    ui_WeatherPage_screen_init();
    ui_MusicPage_screen_init();
    ui_SettingPage_screen_init();
    lv_disp_load_scr(ui_HomePage);
}
