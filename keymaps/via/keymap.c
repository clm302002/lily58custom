#include QMK_KEYBOARD_H
#include "lily58custom.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
     KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_F1,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
     KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_F1,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
     KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_F1,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
     KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_F1, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                           KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC,                    KC_ENT, KC_BSPC, KC_RGUI, MO(_RAISE)
   ),
   
   
    [_LOWER] = LAYOUT(
     KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_F1,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
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