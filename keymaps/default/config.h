/*
 * Copyright 2025 Cody McKinney
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */

 #pragma once

#define MASTER_RIGHT        // MASTER_LEFT, MASTER_RIGHT, EE_HANDS
// #define FLIP_HALF        // NOT USING LAYOUT.H THIS IS OUTDATED


#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT 74        // total number of all LEDs chained together
#    define DRIVER_LED_TOTAL 74
#    define RGB_DI_PIN D3                  // update if you're using another pin
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    define RGB_MATRIX_DEFAULT_VAL 120     // sets 50% brightness on boot
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_DEFAULT_HUE 0
#    define RGB_MATRIX_DEFAULT_SAT 255
#    define RGB_DISABLE_AFTER_TIMEOUT 0    // stay on always
#    define RGB_MATRIX_KEYPRESSES          // optional: effects react to keypresses
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS // optional: additional animated effects
#endif

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#    define RGBLIGHT_DEFAULT_COLOR 0xFFFFFF
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

// ------------------------
// ========== LEFT ==========
// ------------------------
#if defined(KEYMAP_SUFFIX_left)
#    define ENCODER_A_PINS { F4 }
#    define ENCODER_B_PINS { F5 }
// Mute button on D3 (direct pin) - TAKEN BY RGB?!??!?!
//#    define DIRECT_PINS { { D3 } }
#endif

// ------------------------
// ========== RIGHT ==========
// ------------------------
#if defined(KEYMAP_SUFFIX_right)
// Cirque Trackpad configuration
#    define SPLIT_POINTING_ENABLE  // Enable split support for pointing devices
#    define POINTING_DEVICE_RIGHT  // The Cirque is on the right (master) side
#    define I2C1_SDA_PIN D1        // I2C data pin
#    define I2C1_SCL_PIN D0        // I2C clock pin
#    define CIRQUE_PINNACLE_I2C_ADDRESS 0x2A  // Default I2C address for Cirque Pinnacle
#    define CIRQUE_PINNACLE_DIAMETER_MM 40   // Set to your trackpad's diameter in mm
#    define CIRQUE_PINNACLE_TAP_ENABLE       // Enable tap-to-click support
#    define POINTING_DEVICE_GESTURES_SCROLL_ENABLE  // Enable circular scroll gesture
// #    define POINTING_DEVICE_ROTATION_90      // Rotate input 90° CW to correct mounting orientation
// #    define POINTING_DEVICE_ROTATION_180   // Uncomment if mounted upside-down (180°)
#    define POINTING_DEVICE_ROTATION_270   // Uncomment for 90° CCW
#    define CIRQUE_PINNACLE_DIAGONAL_SENSITIVITY 64  // Increase diagonal responsiveness (0–127)
#    define CIRQUE_PINNACLE_DRAG_LOCK true   // Enable drag-lock (tap-and-hold to drag)
#    define CIRQUE_PINNACLE_Z_IDLE_COUNTS 10 // Lower idle counts for faster tap detection
#    define CIRQUE_PINNACLE_SENSITIVITY 0x0F // Overall sensitivity (0x00–0x7F)
#    define POINTING_DEVICE_TASK_THROTTLE_MS 1  // Increase report rate (lower is faster updates)
// Adjust Cirque trackpad sensitivity: lower values = more sensitive, higher = less
// Recommended to reduce attenuation (e.g., 2X) if using an overlay or thick cover
#    define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
#endif
