// Copyright 2022 Jan Lindblom (@janlindblom)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#if defined(ADAFRUIT_KB2040) || defined(CONVERT_TO_KB2040)
#    ifndef RGBLIGHT_ENABLE
#        define RGBLIGHT_ENABLE
#    endif
#    define WS2812_DI_PIN 17U
#    define RGBLED_NUM 1
#endif

#ifdef RGBLIGHT_ENABLE
#    ifndef WS2812_DI_PIN
#        define WS2812_DI_PIN D1
#    endif
#    ifndef RGBLED_NUM
#        define RGBLED_NUM 5
#    endif
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 200
#    define RGBLIGHT_USE_TIMER
#    define RGBLIGHT_SLEEP
#endif

#ifdef BACKLIGHT_ENABLE
#    define BACKLIGHT_PIN B5
#    define BACKLIGHT_LEVELS 10
#    define BACKLIGHT_LIMIT_VAL 200
#endif

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define LAYER_STATE_8BIT
