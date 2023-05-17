/* Copyright 2021 cyril279
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

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};


#define KC_RAISE_ENT LT(2, KC_ENT)
#define KC_RAISE_SPC LT(2, KC_SPC)
#define KC_LOWER_ENT LT(1, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC,   KC_1,     KC_2,      KC_3,      KC_4,      KC_5,                     KC_6,      KC_7,     KC_8,     KC_9,      KC_0,     KC_MINUS,
    KC_TAB,   KC_Q,     KC_W,      KC_E,      KC_R,      KC_T,                     KC_Y,      KC_U,     KC_I,     KC_O,      KC_P,      KC_BSPC,
    KC_LCTRL, KC_A,     KC_S,      KC_D,      KC_F,      KC_G,      KC_SPC,        KC_H,      KC_J,     KC_K,     KC_L,  KC_LCTRL,      KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,      KC_C,      KC_V,      KC_B,                     KC_N,      KC_M,  KC_COMM,   KC_DOT,   KC_SLSH,      KC_RSFT,
                        KC_LGUI,   KC_LALT,      KC_RAISE_ENT,    KC_RAISE_SPC,    KC_LOWER_ENT,     KC_LALT,  KC_LGUI
  ),

  [_LOWER] = LAYOUT(
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,          KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, KC_TILD, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
    _______, _______, KC_LGUI, KC_LALT, KC_CAPS, _______,          KC_PSCR, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
                               _______, _______,  KC_EQL, _______, KC_EQL,  _______, _______
  ),

  [_RAISE] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,              KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
    KC_CAPS, _______, _______, KC_LCBR, KC_RCBR, KC_HOME,           KC_END,  KC_GRV, KC_PIPE, KC_TILD, _______, KC_BSLS,
    _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______, _______,
    _______, _______, _______, KC_LBRC, KC_RBRC, _______,          KC_PLUS,KC_MINUS,  KC_EQL, _______, _______, _______,
                               _______, _______, KC_EQL,  _______,  KC_EQL, _______, _______
  ),
    [_ADJUST] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______, _______, _______, _______, _______
  )
};
