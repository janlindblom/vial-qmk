/* Copyright 2022 Jan Lindblom (@janlindblom)
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
#pragma once

#undef BACKLIGHT_LEVELS
#define BACKLIGHT_LEVELS 11
#undef BACKLIGHT_LIMIT_VAL
#define BACKLIGHT_LIMIT_VAL 200
#define BACKLIGHT_DEFAULT_LEVEL 3
#undef BACKLIGHT_ON_STATE
#define BACKLIGHT_ON_STATE 0

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT

#define LAYER_STATE_8BIT
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define VIAL_KEY_OVERRIDE_ENTRIES 3
#define VIAL_COMBO_ENTRIES 3
#define VIAL_TAP_DANCE_ENTRIES 3
#define VIAL_KEYBOARD_UID {0xDE, 0x6E, 0x0C, 0xA6, 0x14, 0xC7, 0x7E, 0x9A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
