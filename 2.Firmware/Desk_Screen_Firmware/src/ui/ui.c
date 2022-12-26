// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: Desk_Screen

#include "ui.h"
#include "ui_helpers.h"
#include "Application/Service_Device.h"
#include "Application/Service_Interaction.h"

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
void ui_event_btnQR(lv_event_t * e);
lv_obj_t * ui_btnQR;
void ui_event_btnHome(lv_event_t * e);
lv_obj_t * ui_btnHome;
lv_obj_t * ui_TimePage;
void ui_event_TimePage_btnBack(lv_event_t * e);
lv_obj_t * ui_TimePage_btnBack;
lv_obj_t * ui_label_time;
lv_obj_t * ui_label_date;
lv_obj_t * ui_label_day;
lv_obj_t * ui_WeatherPage;
void ui_event_WeatherPage_btnBack(lv_event_t * e);
lv_obj_t * ui_WeatherPage_btnBack;
lv_obj_t * ui_label_weather;
lv_obj_t * ui_label_location;
lv_obj_t * ui_label_temp;
lv_obj_t * ui_label_weather_pic;
lv_obj_t * ui_MusicPage;
void ui_event_MusicPage_btnBack(lv_event_t * e);
lv_obj_t * ui_MusicPage_btnBack;
lv_obj_t * ui_img_music;
lv_obj_t * ui_btn_play_music;
lv_obj_t * ui_btn_forward_music;
lv_obj_t * ui_btn_backward_music;
lv_obj_t * ui_QRPage;
void ui_event_SettingPage_btnBack(lv_event_t * e);
lv_obj_t * ui_SettingPage_btnBack;
lv_obj_t * ui_img_myQR;

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
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_btnTime(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_TimePage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_btnWeather(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_WeatherPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_btnMusic(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MusicPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_btnQR(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_QRPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_btnHome(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HomePage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_TimePage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_WeatherPage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_MusicPage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_SettingPage_btnBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuPage, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    xTaskNotifyGive(Screen_Handle);
}
void ui_event_MusicCmd(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    int8_t* data = lv_event_get_user_data(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        xQueueSend(MusicCmd_Port, data, 0);
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
void ui_MenuPage_screen_init(void)
{
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
    lv_obj_set_align(ui_btnTime, LV_ALIGN_TOP_LEFT);
    lv_obj_add_flag(ui_btnTime, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnTime, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnTime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnTime, &ui_img_time_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btnTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btnTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnWeather = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnWeather, 90);
    lv_obj_set_height(ui_btnWeather, 90);
    lv_obj_set_align(ui_btnWeather, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_btnWeather, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnWeather, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnWeather, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnWeather, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnWeather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnWeather, &ui_img_weather_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btnWeather, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btnWeather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMusic = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnMusic, 90);
    lv_obj_set_height(ui_btnMusic, 90);
    lv_obj_set_align(ui_btnMusic, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_btnMusic, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMusic, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMusic, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMusic, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMusic, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnMusic, &ui_img_musicfill_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btnMusic, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btnMusic, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnQR = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnQR, 90);
    lv_obj_set_height(ui_btnQR, 90);
    lv_obj_set_align(ui_btnQR, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_btnQR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnQR, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnQR, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnQR, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnQR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnQR, &ui_img_qr_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btnQR, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btnQR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnHome = lv_btn_create(ui_MenuPage);
    lv_obj_set_width(ui_btnHome, 50);
    lv_obj_set_height(ui_btnHome, 50);
    lv_obj_set_x(ui_btnHome, 75);
    lv_obj_set_y(ui_btnHome, 75);
    lv_obj_add_flag(ui_btnHome, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnHome, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnHome, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnHome, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnHome, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btnHome, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btnHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_btnHome, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btnHome, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btnHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnTime, ui_event_btnTime, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnWeather, ui_event_btnWeather, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMusic, ui_event_btnMusic, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnQR, ui_event_btnQR, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnHome, ui_event_btnHome, LV_EVENT_ALL, NULL);

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
    lv_obj_set_style_shadow_color(ui_TimePage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_TimePage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_time = lv_label_create(ui_TimePage);
    lv_obj_set_width(ui_label_time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_time, 0);
    lv_obj_set_y(ui_label_time, -15);
    lv_obj_set_align(ui_label_time, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_time, "23:05:14");
    lv_obj_set_style_text_font(ui_label_time, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_date = lv_label_create(ui_TimePage);
    lv_obj_set_width(ui_label_date, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_date, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_date, 0);
    lv_obj_set_y(ui_label_date, 30);
    lv_obj_set_align(ui_label_date, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_date, "2022/12/25");
    lv_obj_set_style_text_font(ui_label_date, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_day = lv_label_create(ui_TimePage);
    lv_obj_set_width(ui_label_day, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_day, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_day, 0);
    lv_obj_set_y(ui_label_day, 60);
    lv_obj_set_align(ui_label_day, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_day, "星期日");
    // lv_obj_set_style_text_font(ui_label_day, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_day, &arial_18, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_obj_set_style_shadow_color(ui_WeatherPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_WeatherPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_weather = lv_label_create(ui_WeatherPage);
    lv_obj_set_width(ui_label_weather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_weather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_weather, 20);
    lv_obj_set_y(ui_label_weather, -40);
    lv_obj_set_align(ui_label_weather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_weather, "多云");
    // lv_obj_set_style_text_font(ui_label_weather, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_weather, &arial_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_location = lv_label_create(ui_WeatherPage);
    lv_obj_set_width(ui_label_location, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_location, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_location, 0);
    lv_obj_set_y(ui_label_location, 60);
    lv_obj_set_align(ui_label_location, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_location, "北京");
    // lv_obj_set_style_text_font(ui_label_location, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_location, &arial_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_label_temp = lv_label_create(ui_WeatherPage);
    lv_obj_set_width(ui_label_temp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temp, 0);
    lv_obj_set_y(ui_label_temp, 10);
    lv_obj_set_align(ui_label_temp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_temp, "32°");
    lv_obj_set_style_text_font(ui_label_temp, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_weather_pic = lv_img_create(ui_WeatherPage);
    lv_img_set_src(ui_label_weather_pic, &ui_img_sunny_png);
    lv_obj_set_width(ui_label_weather_pic, 32);
    lv_obj_set_height(ui_label_weather_pic, 32);
    lv_obj_set_x(ui_label_weather_pic, -35);
    lv_obj_set_y(ui_label_weather_pic, -40);
    lv_obj_set_align(ui_label_weather_pic, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_label_weather_pic, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_label_weather_pic, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

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
    lv_obj_set_style_shadow_color(ui_MusicPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_MusicPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_music = lv_img_create(ui_MusicPage);
    lv_img_set_src(ui_img_music, &ui_img_heart_png);
    lv_obj_set_width(ui_img_music, 100);
    lv_obj_set_height(ui_img_music, 90);
    lv_obj_set_x(ui_img_music, 0);
    lv_obj_set_y(ui_img_music, -10);
    lv_obj_set_align(ui_img_music, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_music, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_music, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_img_music, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_img_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_img_music, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_play_music = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_btn_play_music, 40);
    lv_obj_set_height(ui_btn_play_music, 40);
    lv_obj_set_x(ui_btn_play_music, 0);
    lv_obj_set_y(ui_btn_play_music, 65);
    lv_obj_set_align(ui_btn_play_music, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btn_play_music, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btn_play_music, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btn_play_music, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btn_play_music, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btn_play_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btn_play_music, &ui_img_play_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btn_play_music, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btn_play_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_forward_music = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_btn_forward_music, 32);
    lv_obj_set_height(ui_btn_forward_music, 32);
    lv_obj_set_x(ui_btn_forward_music, 45);
    lv_obj_set_y(ui_btn_forward_music, 65);
    lv_obj_set_align(ui_btn_forward_music, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btn_forward_music, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btn_forward_music, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btn_forward_music, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btn_forward_music, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btn_forward_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btn_forward_music, &ui_img_forward_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btn_forward_music, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btn_forward_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_backward_music = lv_btn_create(ui_MusicPage);
    lv_obj_set_width(ui_btn_backward_music, 32);
    lv_obj_set_height(ui_btn_backward_music, 32);
    lv_obj_set_x(ui_btn_backward_music, -45);
    lv_obj_set_y(ui_btn_backward_music, 65);
    lv_obj_set_align(ui_btn_backward_music, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btn_backward_music, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btn_backward_music, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btn_backward_music, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btn_backward_music, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btn_backward_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btn_backward_music, &ui_img_music_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btn_backward_music, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btn_backward_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_MusicPage_btnBack, ui_event_MusicPage_btnBack, LV_EVENT_ALL, NULL);

    /* Add music event */
    static int8_t cmd[3] = {-1, 0, 1};
    lv_obj_add_event_cb(ui_btn_backward_music, ui_event_MusicCmd, LV_EVENT_ALL, &cmd[0]);
    lv_obj_add_event_cb(ui_btn_play_music, ui_event_MusicCmd, LV_EVENT_ALL, &cmd[1]);
    lv_obj_add_event_cb(ui_btn_forward_music, ui_event_MusicCmd, LV_EVENT_ALL, &cmd[2]);
}
void ui_QRPage_screen_init(void)
{
    ui_QRPage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_QRPage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_QRPage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_QRPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingPage_btnBack = lv_btn_create(ui_QRPage);
    lv_obj_set_width(ui_SettingPage_btnBack, 40);
    lv_obj_set_height(ui_SettingPage_btnBack, 40);
    lv_obj_add_flag(ui_SettingPage_btnBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SettingPage_btnBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SettingPage_btnBack, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SettingPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_SettingPage_btnBack, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_SettingPage_btnBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_SettingPage_btnBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_myQR = lv_img_create(ui_QRPage);
    lv_img_set_src(ui_img_myQR, &ui_img_myqr_png);
    lv_obj_set_width(ui_img_myQR, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_img_myQR, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_x(ui_img_myQR, 0);
    lv_obj_set_y(ui_img_myQR, 10);
    lv_obj_set_align(ui_img_myQR, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_myQR, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_myQR, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

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
    ui_QRPage_screen_init();
    lv_disp_load_scr(ui_HomePage);
}
