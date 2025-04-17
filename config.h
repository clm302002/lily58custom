#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define DIODE_DIRECTION COL2ROW
#define TAPPING_TERM 100
#define QUICK_TAP_TERM 0
#define MASTER_LEFT

#ifdef VIA_ENABLE
#    define VIA_KEYBOARD_UID {0xB4, 0x19, 0x77, 0x63, 0xAC, 0xE2, 0x01, 0x4D}
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT 29
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    define RGB_MATRIX_HUE_STEP 10
#    define RGB_MATRIX_SAT_STEP 17
#    define RGB_MATRIX_VAL_STEP 17
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
// Cirque Trackpad
#    define SPLIT_POINTING_ENABLE
#    define POINTING_DEVICE_RIGHT
#    define I2C1_SDA_PIN D1
#    define I2C1_SCL_PIN D0
#    define CIRQUE_PINNACLE_I2C_ADDRESS 0x2A
#endif
