/*********************
 *      INCLUDES
 *********************/
#include "ui_desk.h"
#include "images.h"

lv_obj_t* scr;
void ui_desk(void)
{
  lv_obj_t* img = lv_img_create(lv_scr_act());
  lv_img_set_src(img, &logo);
  lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0xFFFFFF), LV_PART_MAIN);
  // lv_obj_t* btn = lv_btn_create(lv_scr_act());
  // lv_obj_set_style_bg_color(btn, lv_color_hex(0x000000), LV_PART_MAIN);
  // lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);

  // lv_obj_t* one = lv_obj_create(lv_scr_act());  // 在默认屏上创建obj对象
  // lv_obj_t* label = lv_label_create(one);       // 创建label
  // lv_obj_set_size(one, LV_HOR_RES, LV_VER_RES);  // 设置到屏幕大小
  // lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);    // label居屏幕中心对齐
  // lv_obj_set_style_bg_color(one, lv_color_hex(0x0000FF), LV_PART_MAIN);
  // lv_label_set_text(label, "ONE");  // label显示ONE

  // lv_obj_t* two = lv_obj_create(NULL);  // 在默认屏上创建obj对象
  // label = lv_label_create(two);         // 创建label
  // lv_obj_set_size(one, LV_HOR_RES, LV_VER_RES);  // 设置到屏幕大小
  // lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);    // label居屏幕中心对齐
  // lv_obj_set_style_bg_color(two, lv_color_hex(0x00FF000), LV_PART_MAIN);
  // lv_label_set_text(label, "TWO");  // label显示ONE

  // lv_scr_load_anim(two, LV_SCR_LOAD_ANIM_FADE_ON, 500, 1000, true);
}