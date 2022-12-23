/**
 * @file display.cpp
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "display.h"
#include <stdbool.h>
#include <epd1in54.h>  
#include <epdpaint.h>

/*********************
 *      DEFINES
 *********************/
#ifndef MY_DISP_HOR_RES
    #define MY_DISP_HOR_RES   EPD_WIDTH
#endif

#ifndef MY_DISP_VER_RES
    #define MY_DISP_VER_RES   EPD_HEIGHT
#endif

uint8_t UNCOLORED = 1;
uint8_t COLORED = 0;

/**********************
 *  STATIC VARIABLES
 **********************/
Epd epd;
uint8_t img_buf[MY_DISP_HOR_RES * MY_DISP_VER_RES / 8];
Paint paint(img_buf, MY_DISP_HOR_RES, MY_DISP_VER_RES);

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void disp_flush(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
	uint32_t h = (area->y2 - area->y1 + 1);

    for(int i = area->y1; i <= area->y2; i ++){
        for(int j = area->x1; j <= area->x2; j ++){
            if(color_p[(j-area->x1) + (i-area->y1)*w].full == 0xffff) paint.DrawPixel(j, i, UNCOLORED);
            else paint.DrawPixel(j, i, COLORED);                  
        }
    }
    lv_disp_flush_ready(disp_drv);
}

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void Display::init(void)
{
    /* Init lvgl */
	lv_init();

    /* Init ePaper Screen */
    if (epd.Init(lut_full_update) != 0) {
        Serial.println("e-Paper init failed");
        return;
    }

    /* Init Paint */
    paint.SetRotate(0);
    paint.SetWidth(200);
    paint.SetHeight(200);
    paint.Clear(COLORED);

    /* Set screen to white */
    epd.ClearFrameMemory(0xFF);   // bit set = white, bit reset = black
    epd.DisplayFrame();

    /*-----------------------------
     * Create a buffer for drawing
     *----------------------------*/
    static lv_disp_draw_buf_t draw_buf_dsc_1;
    static lv_color_t buf_1[MY_DISP_HOR_RES * 10];  /*A buffer for 10 rows*/
    lv_disp_draw_buf_init(&draw_buf_dsc_1, buf_1, NULL, MY_DISP_HOR_RES * 10);   /*Initialize the display buffer*/

    /*-----------------------------------
     * Register the display in LVGL
     *----------------------------------*/
    static lv_disp_drv_t disp_drv;                  /*Descriptor of a display driver*/
    lv_disp_drv_init(&disp_drv);                    /*Basic initialization*/

    /*Set up the functions to access to your display*/

    /*Set the resolution of the display*/
    disp_drv.hor_res = MY_DISP_HOR_RES;
    disp_drv.ver_res = MY_DISP_VER_RES;

    /*Used to copy the buffer's content to the display*/
    disp_drv.flush_cb = disp_flush;

    /*Set a display buffer*/
    disp_drv.draw_buf = &draw_buf_dsc_1;

    /*Finally register the driver*/
    lv_disp_drv_register(&disp_drv);
}

void Display::refresh(void)
{
    epd.SetFrameMemory(paint.GetImage());
	epd.DisplayFrame();
}

/**
 * @brief flip the black and white color of epaper
 * 
 */
void Display::flip(void){
    UNCOLORED = !UNCOLORED;
    COLORED = !COLORED;
}