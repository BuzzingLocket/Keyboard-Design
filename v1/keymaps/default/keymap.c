// Copyright 2024 BuzzingLocket (@BuzzingLocket)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// RGB stuff
void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv(128, 255, 51);
}

led_config_t g_led_config = {
    {
        // matrix to LED index mapping - row by row
        { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, NO_LED },
        { 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 },
        { 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 },
        { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, NO_LED, 53 },
        { 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, NO_LED, 65, NO_LED },
        { 66, 67, 68, NO_LED, NO_LED, 69, NO_LED, NO_LED, NO_LED, 70, 71, NO_LED, NO_LED, NO_LED }
    },
    {
        // LED physical positions (x, y) scaled 0-224, 0-64
        {0,0},{16,0},{32,0},{48,0},{64,0},{80,0},{96,0},{112,0},{128,0},{144,0},{160,0},{176,0},{192,0},
        {0,11},{16,11},{32,11},{48,11},{64,11},{80,11},{96,11},{112,11},{128,11},{144,11},{160,11},{176,11},{192,11},{208,11},
        {0,21},{16,21},{32,21},{48,21},{64,21},{80,21},{96,21},{112,21},{128,21},{144,21},{160,21},{176,21},{192,21},{208,21},
        {0,32},{16,32},{32,32},{48,32},{64,32},{80,32},{96,32},{112,32},{128,32},{144,32},{160,32},{176,32},{208,32},
        {0,43},{16,43},{32,43},{48,43},{64,43},{80,43},{96,43},{112,43},{128,43},{144,43},{160,43},{192,43},
        {0,54},{16,54},{32,54},{80,54},{144,54},{160,54}
    },
    {
        // flags - 4 = per key
        4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4
    }
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Row 0
        KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_MPLY,
        // Row 1
        KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        // Row 2
        KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        // Row 3
        KC_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
        // Row 4
        KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT,
        // Row 5
        KC_LCTL, KC_LGUI,KC_LALT,KC_SPC, KC_RALT, MO(1)
    ),

    // Fn key layer
    [1] = LAYOUT(
        // Row 0
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 1
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 2
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 3
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 4
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 5
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};