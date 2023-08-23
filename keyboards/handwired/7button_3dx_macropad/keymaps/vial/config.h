// Copyright 2022 Jan Lindblom (@janlindblom)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_MODE_BREATHING
#    define RGBLIGHT_MODE_STATIC_GRADIENT
#    define RGBLIGHT_MODE_RAINBOW_MOOD
#    ifdef RGBLIGHT_LAYERS
#        undef RGBLIGHT_LAYERS
#    endif
#endif

#define VIAL_KEYBOARD_UID {0x7B, 0xE1, 0xE7, 0x76, 0x5C, 0x0D, 0xA0, 0xB1}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
