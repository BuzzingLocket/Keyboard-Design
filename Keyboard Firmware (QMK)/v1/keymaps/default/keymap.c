// Copyright 2024 BuzzingLocket (@BuzzingLocket)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// RGB stuff
void keyboard_post_init_user(void) {
    eeconfig_init();
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
    rgb_matrix_sethsv(128, 255, 40);
    // HSV
    // 128 is Cyan
    // 255 is Saturation, currently pure colour
    // 26 is Value, 10% of the brightness (10% of 255)
}

// My PCB design is set for right to left, bottom up design

led_config_t g_led_config = {
    {
        // Row 1 (matrix row 0)
        { 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, NO_LED },
        // Row 2 (matrix row 1)
        { 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45 },
        // Row 3 (matrix row 2)
        { 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31 },
        // Row 4 (matrix row 3)
        { 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, NO_LED, 18 },
        // Row 5 (matrix row 4)
        { 17, 16, 15, 14, 13, 12, 11, 10, 9,  8,  7,  NO_LED, 6, NO_LED },
        // Row 6 (matrix row 5)
        { 5,  4,  3,  NO_LED, NO_LED, 2,  NO_LED, NO_LED, NO_LED, 1,  0,  NO_LED, NO_LED, NO_LED }
    },
    {
        // Row 6 positions (LEDs 0-5, right to left)
        {160,54},{144,54},{80,54},{32,54},{16,54},{0,54},
        // Row 5 positions (LEDs 6-17, right to left)
        {192,43},{160,43},{144,43},{128,43},{112,43},{96,43},{80,43},{64,43},{48,43},{32,43},{16,43},{0,43},
        // Row 4 positions (LEDs 18-30, right to left)
        {208,32},{176,32},{160,32},{144,32},{128,32},{112,32},{96,32},{80,32},{64,32},{48,32},{32,32},{16,32},{0,32},
        // Row 3 positions (LEDs 31-44, right to left)
        {208,21},{192,21},{176,21},{160,21},{144,21},{128,21},{112,21},{96,21},{80,21},{64,21},{48,21},{32,21},{16,21},{0,21},
        // Row 2 positions (LEDs 45-58, right to left)
        {208,11},{192,11},{176,11},{160,11},{144,11},{128,11},{112,11},{96,11},{80,11},{64,11},{48,11},{32,11},{16,11},{0,11},
        // Row 1 positions (LEDs 59-71, right to left)
        {192,0},{176,0},{160,0},{144,0},{128,0},{112,0},{96,0},{80,0},{64,0},{48,0},{32,0},{16,0},{0,0}
    },
    {
        // flags
        4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,4
    }
};
// led_config_t g_led_config = {
//     {
//         { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
//         { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
//         // Row 3 (matrix row 2)
//         {44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31},
//         // Row 4 (matrix row 3)
//         {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, NO_LED, 18 },
//         // Row 5 (matrix row 4)
//         {17, 16, 15, 14, 13, 12, 11, 10, 9,  8,  7,  NO_LED, 6, NO_LED },
//         // Row 6 (matrix row 5)
//         {5, 4, 3, NO_LED, NO_LED, 2, NO_LED, NO_LED, NO_LED, 1, 0, NO_LED, NO_LED, NO_LED }
//     },
//     {
//         // Row 6 positions (LEDs 0-5, right to left)
//         {160,54},{144,54},{80,54},{32,54},{16,54},{0,54},
//         // Row 5 positions (LEDs 6-17, right to left)
//         {192,43},{160,43},{144,43},{128,43},{112,43},{96,43},{80,43},{64,43},{48,43},{32,43},{16,43},{0,43},
//         // Row 4 positions (LEDs 18-30, right to left)
//         {208,32},{176,32},{160,32},{144,32},{128,32},{112,32},{96,32},{80,32},{64,32},{48,32},{32,32},{16,32},{0,32},
//         // Row 3 positions (LEDs 31-44, right to left)
//         {208,21},{192,21},{176,21},{160,21},{144,21},{128,21},{112,21},{96,21},{80,21},{64,21},{48,21},{32,21},{16,21},{0,21},
//     },
//     {
//         4,4,4,4,4,4,
//         4,4,4,4,4,4,4,4,4,4,4,4,
//         4,4,4,4,4,4,4,4,4,4,4,4,4,
//         4,4,4,4,4,4,4,4,4,4,4,4,4,4,
//     }
// };
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