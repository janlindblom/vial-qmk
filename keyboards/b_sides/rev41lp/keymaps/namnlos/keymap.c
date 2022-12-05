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

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "sendstring_swedish.h"

enum layer_names { _BASE, _LOWER, _RAISE, _ADJUST };

enum custom_keycodes {
    SK_NOT_EQL = SAFE_RANGE,
    SK_LEQ,
    SK_GEQ,
};

// Custom send_string keys
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SK_NOT_EQL:
            if (record->event.pressed) {
                SEND_STRING("!=");
            }
            break;
        case SK_LEQ:
            if (record->event.pressed) {
                SEND_STRING("<=");
            }
            break;
        case SK_GEQ:
            if (record->event.pressed) {
                SEND_STRING(">=");
            }
            break;
    }
    return true;
}

// Some defines for the keys below
#define CK_COMM KC_COMM
#define CK_DOT KC_DOT
#define CK_DASH SE_MINS
#define CK_LSFT KC_LSFT
#define CK_ESC LT(_RAISE, KC_ESC)
#define CK_BSPC LCTL_T(KC_BSPC)
#define CK_DEL LALT_T(KC_DEL)
#define CK_ENT1 LT(_LOWER, KC_ENT)
#define CK_ENT2 LT(_RAISE, KC_ENT)
#define CK_TAB RALT_T(KC_TAB)
#define CK_ADIA RCTL_T(SE_ADIA)
#define CK_QUOT RSFT_T(SE_QUOT)
#define CK_SPC RSFT_T(KC_SPC)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_rev41lp(
    CK_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  SE_ARNG,
    CK_BSPC,  KC_A,     KC_S,     KC_D,     KC_F,      KC_G,               KC_H,     KC_J,     KC_K,     KC_L,  SE_ODIA,  CK_ADIA,
    CK_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,  SE_COMM,   SE_DOT,  SE_MINS,  CK_QUOT,
                                          CK_DEL,   CK_ENT1,  KC_SPC,   CK_ENT2,   CK_TAB
  ),

  [_LOWER] = LAYOUT_rev41lp(
 SK_NOT_EQL,  SE_EXLM,    SE_AT,  SE_HASH,   SE_DLR,   SE_PERC,            SE_CIRC,  SE_AMPR,  SE_ASTR,  SE_LPRN,  SE_RPRN,  SE_DIAE,
     SK_LEQ,  SE_UNDS,  SE_PLUS,  SE_LCBR,  SE_RCBR,   SE_PIPE,            KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,   SE_GRV,  SE_TILD,
     SK_GEQ,   KC_ESC,  KC_LGUI,  KC_LALT,  KC_CAPS,   SE_DQUO,            KC_HOME,   KC_END,  KC_PGUP,  KC_PGDN,  KC_PSCR,   CK_SPC,
                                            _______,   _______,  KC_ENT,   _______,  _______
  ),

  [_RAISE] = LAYOUT_rev41lp(
    _______,     SE_1,     SE_2,     SE_3,     SE_4,      SE_5,               SE_6,   SE_7,   SE_8,    SE_9,    SE_0,  SE_GRV,
    _______,  SE_MINS,   SE_EQL,  SE_LBRC,  SE_RBRC,   SE_BSLS,              KC_F1,  KC_F2,  KC_F3,   KC_F4,   KC_F5,   KC_F6,
    _______,   KC_ESC,  KC_RGUI,  KC_RALT,  KC_CAPS,   SE_ACUT,              KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
                                            SE_LABK,   SE_RABK,  KC_BSPC,  _______,  _______
  ),

  [_ADJUST] = LAYOUT_rev41lp(
    XXXXXXX,   XXXXXXX, XXXXXXX,   BL_OFF,   BL_DEC,   BL_TOGG,            BL_BRTG,   BL_INC,    BL_ON,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,   BL_STEP,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   UC_M_WC, UC_M_MA,  UC_M_LN,  XXXXXXX,   XXXXXXX,            QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                               _______, _______, _______,  _______,  _______
  )
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
