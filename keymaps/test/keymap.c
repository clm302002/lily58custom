#include QMK_KEYBOARD_H

// #include "print.h"  // debugging
// #include "action.h" // dubugging

// ------------------------
// ========== CIRQUE TRACKPAD ==========
// ------------------------
#ifdef POINTING_DEVICE_ENABLE
#include "pointing_device.h"
#endif

// ------------------------
// ========== OLED ==========
// ------------------------
#ifdef OLED_ENABLE
#include "OLED.h"
#endif


// ------------------------
// ========== DIRECT PIN ========== RGB IS DEFINED TO D3!!!!!
// ------------------------
// #ifdef DIRECT_PINS_ENABLE
// const pin_t direct_pins[][1] = {
//     { D3 }  // SW1 on D0 (TX)
// };
// #endif

// Mute button mapping
// const uint16_t PROGMEM direct_keymap[][1][1] = {
//   [0] = { { KC_MUTE } }
// };

// #ifdef DIRECT_PINS_ENABLE
// // A single "direct key" wired to D3
// const uint16_t PROGMEM direct_keymap[][1][1] = {
//     [0] = { { KC_MUTE } }
// };
// #endif

// ------------------------
// ========== KEYMAPING ==========
// ------------------------
// Layer enum
enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};


// Keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_F1,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_F1,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_F1,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_F1, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC,                    KC_ENT, KC_BSPC, KC_RGUI, MO(_RAISE)
),


 [_LOWER] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_F1,                     KC_6,    KC_A,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_F1,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_F1,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_F1, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC,                    KC_ENT, KC_BSPC, KC_RGUI, MO(_RAISE)
),

 [_RAISE] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_F1,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_F1,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_F1,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_F1, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC,                    KC_ENT, KC_BSPC, KC_RGUI, MO(_RAISE)
),

 [_ADJUST] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_F1,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_F1,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_F1,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_F1, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC,                    KC_ENT, KC_BSPC, KC_RGUI, MO(_RAISE)
),
};


// Tri-layer logic
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// ------------------------
// ========== ENCODER ==========
// ------------------------
// Encoder logic - required after KEYMAPING
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_LOWER]  = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [_RAISE]  = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [_ADJUST] = { ENCODER_CCW_CW(RGB_SAD, RGB_SAI) },
};
#endif


// ------------------------
// ========== DEBUG ==========
// ------------------------
// Cirque debug
// report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
//   dprintf("x: %d, y: %d\n", mouse_report.x, mouse_report.y);
//   return mouse_report;
// }

// Init debug output
// void keyboard_post_init_user(void) {
//   debug_enable = true;
//   debug_matrix = true;
//   print("Keyboard init complete\n");
// }

// Optional pointing device init debug
// __attribute__((weak))
// void pointing_device_init_user(void) {
//     print("Cirque init ran\n");
// }

// void matrix_scan_user(void) {
//   static bool key_pressed[MATRIX_ROWS][MATRIX_COLS] = {false};

//   for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
//       for (uint8_t col = 0; col < MATRIX_COLS; col++) {
//           bool currently_on = matrix_is_on(row, col);

//           if (currently_on && !key_pressed[row][col]) {
//               uint16_t keycode = keymap_key_to_keycode(layer_state, (keypos_t){row, col});
//               uprintf("Pressed R%d C%d - keycode: 0x%X\n", row, col, keycode);
//               key_pressed[row][col] = true;
//           } else if (!currently_on && key_pressed[row][col]) {
//               key_pressed[row][col] = false;
//           }
//       }
//   }
// }