/*
 * bitmaps.h
 *
 * This header file contains the declarations of bitmap images used in the REBIKE project.
 * The bitmaps are stored in PROGMEM to save on RAM usage and are used for displaying
 * various icons and symbols on the OLED display.
 */

#ifndef BITMAPS_H
#define BITMAPS_H

// 'REBIKE Logo', 128x64px
const unsigned char epd_bitmap_REBIKE_Logo [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xbe, 0xf8, 0x87, 0xbc, 0x7b, 0xde, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x20, 0x80, 0x84, 0xa4, 0x0a, 0x42, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x20, 0x80, 0xa4, 0xa4, 0x0a, 0x42, 0xa0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x20, 0xf0, 0xf7, 0xbc, 0x7a, 0x5e, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x20, 0x80, 0x20, 0x84, 0x42, 0x50, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xbe, 0xf8, 0x27, 0xbc, 0x7b, 0xde, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xf8, 0x07, 0xff, 0x8f, 0xe0, 0x3f, 0x87, 0xff, 0xf8, 
	0x01, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xfc, 0x07, 0xff, 0x8f, 0xe0, 0x3f, 0x87, 0xff, 0xf8, 
	0x03, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xfe, 0x07, 0xff, 0x8f, 0xe0, 0x7f, 0x87, 0xff, 0xf8, 
	0x07, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0x07, 0xff, 0x8f, 0xe0, 0x7f, 0x07, 0xff, 0xf8, 
	0x0f, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0x87, 0xff, 0x8f, 0xe0, 0x7f, 0x07, 0xff, 0xf8, 
	0x0f, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0x87, 0xff, 0x8f, 0xe0, 0xfe, 0x07, 0xff, 0xf8, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xfc, 0x3f, 0x81, 0xfe, 0x0f, 0xe0, 0xfe, 0x07, 0xf8, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x3f, 0x80, 0xfe, 0x0f, 0xe1, 0xfc, 0x07, 0xf0, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x3f, 0x80, 0xfe, 0x0f, 0xe1, 0xfc, 0x07, 0xf0, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x3f, 0x80, 0xfe, 0x0f, 0xe3, 0xfc, 0x07, 0xf0, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x3f, 0x80, 0xfe, 0x0f, 0xe3, 0xf8, 0x07, 0xf0, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x3f, 0x80, 0xfe, 0x0f, 0xe3, 0xf8, 0x07, 0xf0, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x3f, 0x80, 0xfe, 0x0f, 0xe7, 0xf0, 0x07, 0xf0, 0x00, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xff, 0xe3, 0xfc, 0x3f, 0x80, 0xfe, 0x0f, 0xe7, 0xf0, 0x07, 0xff, 0xf8, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0x80, 0xfe, 0x0f, 0xef, 0xe0, 0x07, 0xff, 0xf8, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xfe, 0x00, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xff, 0xf8, 
	0x0f, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xfc, 0x00, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xff, 0xf8, 
	0x0f, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xfe, 0x00, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xff, 0xf8, 
	0x0f, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0x80, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xff, 0xf8, 
	0x0f, 0xff, 0xfe, 0x1f, 0xc0, 0x03, 0xff, 0xff, 0xc0, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xf8, 0x00, 
	0x0f, 0xff, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xf0, 0x00, 
	0x0f, 0xff, 0xfe, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xff, 0xff, 0xc7, 0xf0, 0x00, 
	0x0f, 0xe7, 0xf0, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xe0, 0x1f, 0xc7, 0xf0, 0x00, 
	0x0f, 0xe7, 0xf0, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xe0, 0x1f, 0xc7, 0xf0, 0x00, 
	0x0f, 0xe3, 0xf0, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xe0, 0x1f, 0xc7, 0xf0, 0x00, 
	0x0f, 0xe3, 0xf8, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xe0, 0x1f, 0xc7, 0xf0, 0x00, 
	0x0f, 0xe3, 0xf8, 0x1f, 0xc0, 0x03, 0xf8, 0x1f, 0xc0, 0xfe, 0x0f, 0xe0, 0x1f, 0xc7, 0xf0, 0x00, 
	0x0f, 0xe1, 0xfc, 0x1f, 0xc0, 0x03, 0xfc, 0x1f, 0xc1, 0xfe, 0x0f, 0xe0, 0x1f, 0xc7, 0xf8, 0x00, 
	0x0f, 0xe1, 0xfc, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xc7, 0xff, 0x8f, 0xe0, 0x1f, 0xc7, 0xff, 0xfc, 
	0x0f, 0xe1, 0xfc, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xc7, 0xff, 0x8f, 0xe0, 0x1f, 0xc7, 0xff, 0xfc, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xff, 0xe1, 0xff, 0xff, 0xc7, 0xff, 0x8f, 0xe0, 0x1f, 0xc7, 0xff, 0xfc, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xff, 0xe0, 0xff, 0xff, 0xc7, 0xff, 0x8f, 0xe0, 0x1f, 0xc7, 0xff, 0xfc, 
	0x0f, 0xe0, 0xfe, 0x1f, 0xff, 0xe0, 0x7f, 0xff, 0xc7, 0xff, 0x8f, 0xe0, 0x1f, 0xc7, 0xff, 0xfc, 
	0x0f, 0xe0, 0x7f, 0x1f, 0xff, 0xe0, 0x3f, 0xff, 0xc7, 0xff, 0x8f, 0xe0, 0x1f, 0xc7, 0xff, 0xfc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'BATTERY Label', 48x7px
const unsigned char epd_bitmap_BATTERY_Label [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xef, 0xbe, 0xfb, 0xef, 0xa2, 0x02, 0x28, 0x88, 0x22, 
	0x08, 0xa2, 0x02, 0x28, 0x88, 0x22, 0x08, 0xa2, 0x03, 0xc8, 0x88, 0x23, 0xcf, 0x3e, 0x02, 0x2f, 
	0x88, 0x22, 0x08, 0x88, 0x03, 0xe8, 0x88, 0x23, 0xe8, 0x88
};
// 'ACTIVE REGEN Label', 72x6px
const unsigned char epd_bitmap_ACTIVE_REGEN_Label [] PROGMEM = {
	0x07, 0xdf, 0x7d, 0xf4, 0x5f, 0x1f, 0x7d, 0xf7, 0xdf, 0x04, 0x50, 0x10, 0x44, 0x50, 0x11, 0x41, 
	0x04, 0x11, 0x04, 0x50, 0x10, 0x44, 0x50, 0x11, 0x41, 0x04, 0x11, 0x04, 0x50, 0x10, 0x44, 0x5e, 
	0x1e, 0x79, 0x77, 0x91, 0x07, 0xd0, 0x10, 0x44, 0x50, 0x11, 0x41, 0x14, 0x11, 0x04, 0x5f, 0x11, 
	0xf3, 0x9f, 0x11, 0x7d, 0xf7, 0xd1
};
// 'Battery Level Sym', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 
	0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0, 
	0x00, 0x0f, 0x3c, 0xf0, 0x00, 0x0f, 0x3c, 0xf0, 0x00, 0x0f, 0x3c, 0xf0, 0x00, 0x0f, 0x3c, 0xf0, 
	0x03, 0xcf, 0x3c, 0xf0, 0x03, 0xcf, 0x3c, 0xf0, 0x03, 0xcf, 0x3c, 0xf0, 0x03, 0xcf, 0x3c, 0xf0, 
	0xf3, 0xcf, 0x3c, 0xf0, 0xf3, 0xcf, 0x3c, 0xf0, 0xf3, 0xcf, 0x3c, 0xf0, 0xf3, 0xcf, 0x3c, 0xf0
};
// 'Battery Percentage Sym', 16x6px
const unsigned char epd_bitmap_Battery_Percentage_Sym [] PROGMEM = {
	0xe1, 0x00, 0xa2, 0x00, 0xe4, 0x00, 0x09, 0xc0, 0x11, 0x40, 0x21, 0xc0
};
// 'KM HR Sym', 24x25px
const unsigned char epd_bitmap_KM_HR_Sym [] PROGMEM = {
	0xc3, 0x0f, 0xfc, 0xc3, 0x0f, 0xfc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xf0, 0x0c, 0xcc, 0xf0, 
	0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xc3, 0x0c, 0xcc, 0xc3, 0x0c, 0xcc, 0xc0, 0xcc, 
	0xcc, 0xc0, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0xc0, 0xcf, 0xfc, 0xc0, 0xcf, 0xfc, 0xc0, 0xcc, 0x0c, 
	0xc0, 0xcc, 0x0c, 0xc0, 0xcc, 0x0c, 0xc0, 0xcc, 0x0c, 0xff, 0xcf, 0xf0, 0xff, 0xcf, 0xf0, 0xc0, 
	0xcc, 0x0c, 0xc0, 0xcc, 0x0c, 0xc0, 0xcc, 0x0c, 0xc0, 0xcc, 0x0c
};
// 'Celsius Sym', 16x6px
const unsigned char epd_bitmap_Celsius_Sym [] PROGMEM = {
	0xef, 0x80, 0xa8, 0x00, 0xe8, 0x00, 0x08, 0x00, 0x08, 0x00, 0x0f, 0x80
};
// 'Lower Horiz Line', 88x1px
const unsigned char epd_bitmap_Lower_Horiz_Line [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8
};
// 'MOTOR Label', 32x8px
const unsigned char epd_bitmap_MOTOR_Label [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0xfb, 0xef, 0xbe, 0xf8, 0xaa, 0x22, 0x22, 0x88, 0xaa, 0x22, 0x22, 0x88, 
	0xaa, 0x22, 0x22, 0xf0, 0xaa, 0x22, 0x22, 0x88, 0xab, 0xe2, 0x3e, 0x88, 0x00, 0x00, 0x00, 0x00
};
// // 'THRTL label', 32x6px
const unsigned char epd_bitmap_THRTL_label [] PROGMEM = {
	0x7d, 0x17, 0xdf, 0x40, 0x11, 0x14, 0x44, 0x40, 0x11, 0x14, 0x44, 0x40, 0x11, 0xf7, 0x84, 0x40, 
	0x11, 0x14, 0x44, 0x40, 0x11, 0x14, 0x44, 0x7c
};
// 'negative throttle symbol', 8x2px
const unsigned char epd_bitmap_negative_throttle_symbol [] PROGMEM = {
	0x3e, 0x3e
};
// 'Throttle Percentage Sym', 16x12px
const unsigned char epd_bitmap_Throttle_Percentage_Sym [] PROGMEM = {
	0xf0, 0x30, 0x90, 0x70, 0x90, 0xe0, 0xf1, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 
	0x38, 0xf0, 0x70, 0x90, 0xe0, 0x90, 0xc0, 0xf0
};
// 'Upper Horiz Line', 48x1px
const unsigned char epd_bitmap_Upper_Horiz_Line [] PROGMEM = {
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'Vert Line', 8x64px
const unsigned char epd_bitmap_Vert_Line [] PROGMEM = {
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02
};
// 'Watts Sym', 16x7px
const unsigned char epd_bitmap_Watts_Sym [] PROGMEM = {
	0x00, 0x00, 0x80, 0x80, 0x88, 0x80, 0x88, 0x80, 0x88, 0x80, 0x88, 0x80, 0x7f, 0x00
};
// 'negative power symbol', 8x1px
const unsigned char epd_bitmap_negative_power_symbol [] PROGMEM = {
	0x0f
};
// 'speed digit 0', 24x36px
const unsigned char epd_bitmap_speed_digit_0 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 
	0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 
	0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 
	0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 
	0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'speed digit 1', 24x36px
const unsigned char epd_bitmap_speed_digit_1 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x07, 0xff, 0xe0, 0x07, 0xff, 0xe0, 0x07, 0xff, 0xe0, 0x07, 
	0xff, 0xe0, 0x07, 0xff, 0xe0, 0x07, 0xff, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 
	0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 
	0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 
	0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 
	0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 
	0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0
};
// 'speed digit 2', 24x36px
const unsigned char epd_bitmap_speed_digit_2 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 
	0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 
	0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 
	0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'speed digit 5', 24x36px
const unsigned char epd_bitmap_speed_digit_5 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 
	0x00, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 
	0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 
	0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'speed digit 4', 24x36px
const unsigned char epd_bitmap_speed_digit_4 [] PROGMEM = {
	0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 
	0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 
	0x00, 0xfc, 0x00, 0x00, 0xfc, 0x0f, 0xc0, 0xfc, 0x0f, 0xc0, 0xfc, 0x0f, 0xc0, 0xfc, 0x0f, 0xc0, 
	0xfc, 0x0f, 0xc0, 0xfc, 0x0f, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 
	0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 
	0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0
};
// 'speed digit 3', 24x36px
const unsigned char epd_bitmap_speed_digit_3 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 
	0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 
	0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x03, 0xff, 0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 0xff, 0x03, 
	0xff, 0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 
	0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'speed digit 6', 24x36px
const unsigned char epd_bitmap_speed_digit_6 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 
	0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 
	0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'speed digit 7', 24x36px
const unsigned char epd_bitmap_speed_digit_7 [] PROGMEM = {
	0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0xff, 
	0xff, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 
	0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 
	0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x1f, 0xff, 0xff, 0x1f, 0xff, 0xff, 0x1f, 0xff, 0xff, 0x1f, 
	0xff, 0xff, 0x1f, 0xff, 0xff, 0x1f, 0xff, 0xff, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 
	0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 
	0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8
};
// 'speed digit 8', 24x36px
const unsigned char epd_bitmap_speed_digit_8 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 
	0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 
	0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 
	0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'speed digit 9', 24x36px
const unsigned char epd_bitmap_speed_digit_9 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 
	0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 
	0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 
	0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// Array of all speed digit bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1280)
const unsigned char* epd_bitmap_speedDigitsArray[10] = {
	epd_bitmap_speed_digit_0,
	epd_bitmap_speed_digit_1,
	epd_bitmap_speed_digit_2,
	epd_bitmap_speed_digit_3,
	epd_bitmap_speed_digit_4,
	epd_bitmap_speed_digit_5,
	epd_bitmap_speed_digit_6,
	epd_bitmap_speed_digit_7,
	epd_bitmap_speed_digit_8,
	epd_bitmap_speed_digit_9
};

// 'throttle digit 0', 8x12px
const unsigned char epd_bitmap_throttle_digit_0 [] PROGMEM = {
	0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff
};
// 'throttle digit 3', 8x12px
const unsigned char epd_bitmap_throttle_digit_3 [] PROGMEM = {
	0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x3f, 0x3f, 0x03, 0x03, 0xff, 0xff
};
// 'throttle digit 1', 8x12px
const unsigned char epd_bitmap_throttle_digit_1 [] PROGMEM = {
	0x1f, 0x1f, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03
};
// 'throttle digit 4', 8x12px
const unsigned char epd_bitmap_throttle_digit_4 [] PROGMEM = {
	0xc0, 0xc0, 0xc0, 0xc0, 0xcc, 0xcc, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c
};
// 'throttle digit 2', 8x12px
const unsigned char epd_bitmap_throttle_digit_2 [] PROGMEM = {
	0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff
};
// 'throttle digit 5', 8x12px
const unsigned char epd_bitmap_throttle_digit_5 [] PROGMEM = {
	0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff
};
// 'throttle digit 6', 8x12px
const unsigned char epd_bitmap_throttle_digit_6 [] PROGMEM = {
	0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xc3, 0xc3, 0xff, 0xff
};
// 'throttle digit 7', 8x12px
const unsigned char epd_bitmap_throttle_digit_7 [] PROGMEM = {
	0xfe, 0xfe, 0x06, 0x06, 0x06, 0x06, 0x7f, 0x7f, 0x06, 0x06, 0x06, 0x06
};
// 'throttle digit 8', 8x12px
const unsigned char epd_bitmap_throttle_digit_8 [] PROGMEM = {
	0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3, 0xff, 0xff
};
// 'throttle digit 9', 8x12px
const unsigned char epd_bitmap_throttle_digit_9 [] PROGMEM = {
	0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0x03, 0x03, 0xff, 0xff
};
// Array of all throttle digit bitmaps for convenience. (Total bytes used to store images in PROGMEM = 320)
const unsigned char* epd_bitmap_throttleDigitsArray[10] = {
	epd_bitmap_throttle_digit_0,
	epd_bitmap_throttle_digit_1,
	epd_bitmap_throttle_digit_2,
	epd_bitmap_throttle_digit_3,
	epd_bitmap_throttle_digit_4,
	epd_bitmap_throttle_digit_5,
	epd_bitmap_throttle_digit_6,
	epd_bitmap_throttle_digit_7,
	epd_bitmap_throttle_digit_8,
	epd_bitmap_throttle_digit_9
};

// 'motor digit 0', 8x6px
const unsigned char epd_bitmap_motor_digit_0 [] PROGMEM = {
	0x3c, 0x24, 0x24, 0x24, 0x24, 0x3c
};
// 'motor digit 1', 8x6px
const unsigned char epd_bitmap_motor_digit_1 [] PROGMEM = {
	0x18, 0x08, 0x08, 0x08, 0x08, 0x08
};
// 'motor digit 2', 8x6px
const unsigned char epd_bitmap_motor_digit_2 [] PROGMEM = {
	0x3c, 0x04, 0x04, 0x3c, 0x20, 0x3c
};
// 'motor digit 3', 8x6px
const unsigned char epd_bitmap_motor_digit_3 [] PROGMEM = {
	0x3c, 0x04, 0x04, 0x1c, 0x04, 0x3c
};
// 'motor digit 4', 8x6px
const unsigned char epd_bitmap_motor_digit_4 [] PROGMEM = {
	0x20, 0x20, 0x28, 0x3c, 0x08, 0x08
};
// 'motor digit 6', 8x6px
const unsigned char epd_bitmap_motor_digit_6 [] PROGMEM = {
	0x3c, 0x20, 0x20, 0x3c, 0x24, 0x3c
};
// 'motor digit 7', 8x6px
const unsigned char epd_bitmap_motor_digit_7 [] PROGMEM = {
	0x3c, 0x04, 0x04, 0x1e, 0x04, 0x04
};
// 'motor digit 5', 8x6px
const unsigned char epd_bitmap_motor_digit_5 [] PROGMEM = {
	0x3c, 0x20, 0x3c, 0x04, 0x04, 0x3c
};
// 'motor digit 8', 8x6px
const unsigned char epd_bitmap_motor_digit_8 [] PROGMEM = {
	0x3c, 0x24, 0x24, 0x3c, 0x24, 0x3c
};
// 'motor digit 9', 8x6px
const unsigned char epd_bitmap_motor_digit_9 [] PROGMEM = {
	0x3c, 0x24, 0x24, 0x3c, 0x04, 0x3c
};
// Array of all motor digit bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1280)
const unsigned char* epd_bitmap_motorDigitsArray[10] = {
	epd_bitmap_motor_digit_0,
	epd_bitmap_motor_digit_1,
	epd_bitmap_motor_digit_2,
	epd_bitmap_motor_digit_3,
	epd_bitmap_motor_digit_4,
	epd_bitmap_motor_digit_5,
	epd_bitmap_motor_digit_6,
	epd_bitmap_motor_digit_7,
	epd_bitmap_motor_digit_8,
	epd_bitmap_motor_digit_9
};

// 'Battery Level Sym 0%', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym_0_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 
	0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 
	0x00, 0x0f, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 
	0x03, 0xc9, 0x24, 0x90, 0x02, 0x49, 0x24, 0x90, 0x02, 0x49, 0x24, 0x90, 0x02, 0x49, 0x24, 0x90, 
	0xf2, 0x49, 0x24, 0x90, 0x92, 0x49, 0x24, 0x90, 0x92, 0x49, 0x24, 0x90, 0xf3, 0xcf, 0x3c, 0xf0
};
// 'Battery Level Sym 20%', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym_20_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 
	0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 
	0x00, 0x0f, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 
	0x03, 0xc9, 0x24, 0x90, 0x02, 0x49, 0x24, 0x90, 0x02, 0x49, 0x24, 0x90, 0x02, 0x49, 0x24, 0x90, 
	0xf2, 0x49, 0x24, 0x90, 0xf2, 0x49, 0x24, 0x90, 0xf2, 0x49, 0x24, 0x90, 0xf3, 0xcf, 0x3c, 0xf0
};
// 'Battery Level Sym 40%', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym_40_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 
	0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 
	0x00, 0x0f, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 0x00, 0x09, 0x24, 0x90, 
	0x03, 0xc9, 0x24, 0x90, 0x03, 0xc9, 0x24, 0x90, 0x03, 0xc9, 0x24, 0x90, 0x03, 0xc9, 0x24, 0x90, 
	0xf3, 0xc9, 0x24, 0x90, 0xf3, 0xc9, 0x24, 0x90, 0xf3, 0xc9, 0x24, 0x90, 0xf3, 0xcf, 0x3c, 0xf0
};
// 'Battery Level Sym 60%', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym_60_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 
	0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 0x00, 0x00, 0x24, 0x90, 
	0x00, 0x0f, 0x24, 0x90, 0x00, 0x0f, 0x24, 0x90, 0x00, 0x0f, 0x24, 0x90, 0x00, 0x0f, 0x24, 0x90, 
	0x03, 0xcf, 0x24, 0x90, 0x03, 0xcf, 0x24, 0x90, 0x03, 0xcf, 0x24, 0x90, 0x03, 0xcf, 0x24, 0x90, 
	0xf3, 0xcf, 0x24, 0x90, 0xf3, 0xcf, 0x24, 0x90, 0xf3, 0xcf, 0x24, 0x90, 0xf3, 0xcf, 0x3c, 0xf0
};
// 'Battery Level Sym 80%', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym_80_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x90, 
	0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x3c, 0x90, 0x00, 0x00, 0x3c, 0x90, 
	0x00, 0x0f, 0x3c, 0x90, 0x00, 0x0f, 0x3c, 0x90, 0x00, 0x0f, 0x3c, 0x90, 0x00, 0x0f, 0x3c, 0x90, 
	0x03, 0xcf, 0x3c, 0x90, 0x03, 0xcf, 0x3c, 0x90, 0x03, 0xcf, 0x3c, 0x90, 0x03, 0xcf, 0x3c, 0x90, 
	0xf3, 0xcf, 0x3c, 0x90, 0xf3, 0xcf, 0x3c, 0x90, 0xf3, 0xcf, 0x3c, 0x90, 0xf3, 0xcf, 0x3c, 0xf0
};
// 'Battery Level Sym 100%', 32x20px
const unsigned char epd_bitmap_Battery_Level_Sym_100_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 
	0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0, 
	0x00, 0x0f, 0x3c, 0xf0, 0x00, 0x0f, 0x3c, 0xf0, 0x00, 0x0f, 0x3c, 0xf0, 0x00, 0x0f, 0x3c, 0xf0, 
	0x03, 0xcf, 0x3c, 0xf0, 0x03, 0xcf, 0x3c, 0xf0, 0x03, 0xcf, 0x3c, 0xf0, 0x03, 0xcf, 0x3c, 0xf0, 
	0xf3, 0xcf, 0x3c, 0xf0, 0xf3, 0xcf, 0x3c, 0xf0, 0xf3, 0xcf, 0x3c, 0xf0, 0xf3, 0xcf, 0x3c, 0xf0
};

#endif // BITMAPS_H