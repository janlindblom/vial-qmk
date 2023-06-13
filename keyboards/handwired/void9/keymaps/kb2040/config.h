// Copyright 2022 Victor Lucachi (@Victor Lucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x48, 0x91, 0xE2, 0x16, 0xEA, 0x16, 0x46, 0x27 }

#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 2 }

#if defined(ADAFRUIT_KB2040) || defined(CONVERT_TO_KB2040)
#    define RGB_DI_PIN 17U
#    define RGBLED_NUM 1

#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#    undef RGBLIGHT_EFFECT_CHRISTMAS
#    undef RGBLIGHT_EFFECT_KNIGHT
#    undef RGBLIGHT_EFFECT_RGB_TEST
#    undef RGBLIGHT_EFFECT_SNAKE
#    undef RGBLIGHT_EFFECT_TWINKLE
#endif
