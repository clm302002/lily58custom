/* Copyright 2023 Elliot Powell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"
#pragma once
#include QMK_KEYBOARD_H

// --- Layer Labels ---
enum custom_layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST
};

#ifdef OLED_ENABLE
// --- OLED Rotation ---
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return is_keyboard_master() ? OLED_ROTATION_270 : OLED_ROTATION_0;
}

// --- Layer State Renderer ---
void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("QWERTY"), false);
            break;
        case _LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case _RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case _ADJUST:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}

// --- Key Logging ---
const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '
};

char key_name = ' ';
uint16_t last_keycode;
uint8_t last_row;
uint8_t last_col;

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    key_name = ' ';
    last_keycode = keycode;
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        last_keycode = keycode & 0xFF;
    }
    if (keycode < 60) {
        key_name = code_to_name[keycode];
    }
    last_row = record->event.key.row;
    last_col = record->event.key.col;
}

void oled_render_keylog(void) {
    oled_write_P(PSTR("Row:"), false);
    oled_write(get_u8_str(last_row, ' '), false);
    oled_write_P(PSTR(" Col:"), false);
    oled_write(get_u8_str(last_col, ' '), false);
    oled_write_P(PSTR("\nKey:"), false);
    oled_write(get_u16_str(last_keycode, ' '), false);
    oled_write_P(PSTR(" ("), false);
    oled_write_char(key_name, false);
    oled_write_P(PSTR(")\n"), false);
}

// --- Logo Renderer ---
void oled_render_logo(void) {
    static const char PROGMEM logo[] = {
        0x00, 0x3C, 0x42, 0x81, 0x81, 0x42, 0x3C, 0x00  // simple circle-style logo
    };
    oled_write_raw_P(logo, sizeof(logo));
}

// --- OLED Task Handler ---
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

// --- Process Record Hook ---
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        set_keylog(keycode, record);
    }
    return true;
}

#endif // OLED_ENABLE
