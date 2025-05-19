/*
 * Copyright 2025 Nanomed
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */

#pragma once

// ───────────────────────────────
// 🧠 Core Settings
// ───────────────────────────────
#define MASTER_RIGHT                // USB plugged into right side
#define NO_SUSPEND_POWER_DOWN
#define USE_SERIAL                  // Split connection via TRRS
//#define USE_I2C                   // Uncomment if using I2C instead

// ───────────────────────────────
// 🖥️ OLED Display Settings
// ───────────────────────────────
#define OLED_DISPLAY_128X32
#define OLED_TIMEOUT 0             // Never turn off
#define OLED_BRIGHTNESS 128

#define SPLIT_OLED_ENABLE
//#define SPLIT_LAYER_STATE_ENABLE
//#define SPLIT_MODS_ENABLE
//#define SPLIT_LED_STATE_ENABLE
//#define SPLIT_WPM_ENABLE
#define SPLIT_TRANSPORT_MIRROR

// ───────────────────────────────
// 🎛️ Encoder Support
// ───────────────────────────────
#define ENCODER_A_PINS { F4 }
#define ENCODER_B_PINS { F5 }
#define SPLIT_ENCODERS_ENABLE

// ───────────────────────────────
// 🎨 RGB Matrix Settings (if enabled)
// ───────────────────────────────
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT 74
#    define DRIVER_LED_TOTAL 74
#    define RGB_DI_PIN D3
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    define RGB_MATRIX_DEFAULT_VAL 120
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_DEFAULT_HUE 0
#    define RGB_MATRIX_DEFAULT_SAT 255
#    define RGB_DISABLE_AFTER_TIMEOUT 0
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

// ───────────────────────────────
// 🌈 RGB Light Settings (if enabled)
// ───────────────────────────────
#ifdef RGBLIGHT_ENABLE
//#    define RGBLED_NUM 72              //this was added in the keyboard.json
//#    define RGBLIGHT_LED_COUNT RGBLED_NUM     //this was added in the keyboard.json  
#    define RGBLED_SPLIT { 36, 36 }
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 1
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#    define RGBLIGHT_DEFAULT_COLOR 0xFFFFFF
#endif

// ───────────────────────────────
// 🖱️ Trackpad (Cirque) – Only on RIGHT side
// ───────────────────────────────
#if defined(KEYMAP_SUFFIX_right)
#    define SPLIT_POINTING_ENABLE
#    define POINTING_DEVICE_RIGHT
#    define I2C1_SDA_PIN D1
#    define I2C1_SCL_PIN D0
#    define CIRQUE_PINNACLE_I2C_ADDRESS 0x2A
#    define CIRQUE_PINNACLE_DIAMETER_MM 40
#    define CIRQUE_PINNACLE_TAP_ENABLE
//#    define CIRQUE_PINNACLE_DRAG_LOCK true
//#    define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#    define POINTING_DEVICE_ROTATION_270
#    define CIRQUE_PINNACLE_DIAGONAL_SENSITIVITY 64
#    define CIRQUE_PINNACLE_Z_IDLE_COUNTS 10
#    define CIRQUE_PINNACLE_SENSITIVITY 0x0C
#    define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
#    define POINTING_DEVICE_TASK_THROTTLE_MS 1
#endif
