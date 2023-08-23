// Copyright 2022 Jan Lindblom (@janlindblom)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers { _FIRST, _SECOND, _THIRD, _ADJST };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    /*
     * ┌───┬───┬───┐
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┼───┐
     * │ 4 │ 5 │ 6 │ L │
     * └───┴───┴───┴───┘
     */
    [_FIRST] = LAYOUT(
        KC_VOLD, KC_VOLU, KC_MUTE,
        KC_MPLY, KC_MPRV, KC_MNXT, DF(1)
    ),
    [_SECOND] = LAYOUT(
        KC_A,    KC_E,    KC_T,
        KC_X,    KC_R,    KC_M,    DF(2)
    ),
    [_THIRD] = LAYOUT(
        KC_L,    KC_C,    KC_M,
        KC_R,    KC_P,    KC_E,    DF(3)
    ),
    [_ADJST] = LAYOUT(
        RGB_VAI, BL_TOGG, KC_NO,
        RGB_VAD, RGB_TOG, QK_BOOT, DF(0)
    ),
    // clang-format on
};
