/* Copyright 2019 takashiski
 * Copyright 2020 kirin123kirin
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
#include "keymap_jp.h"
#include <sendstring_jis.h>
/*
enum layers{
    BASE=0,
    CURSOR
};
*/

enum layers{
    BASE=0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_ESC,               KC_F1,    KC_F2,     KC_F3,     KC_F4,           KC_F5,      KC_F6,     KC_F7,      KC_F8,                KC_F9,     KC_F10,    KC_F11,     KC_F12,      KC_SYSREQ,     KC_SCROLLLOCK,   KC_PAUSE,
    KC_GRV,     JP_1,     JP_2,     JP_3,      JP_4,      JP_5,            JP_6,       JP_7,      JP_8,       JP_9,      KC_0,      JP_EQL,    JP_TILD,   JP_YEN,     KC_BSPACE,   KC_INSERT,     KC_HOME,         KC_PGUP,
    KC_TAB,     KC_Q,     KC_W,     KC_E,      KC_R,      KC_T,            KC_Y,       KC_U,      KC_I,       KC_O,      KC_P,      JP_GRV,    JP_LCBR,                            KC_DELETE,     KC_END,          KC_PGDOWN,
    KC_CLCK,    KC_A,     KC_S,     KC_D,      KC_F,      KC_G,            KC_H,       KC_J,      KC_K,       KC_L,      JP_PLUS,   KC_GRV,    JP_RCBR,   KC_ENTER,
    KC_LSHIFT,            KC_Z,     KC_X,      KC_C,      KC_V,            KC_B,       KC_N,      KC_M,       JP_LABK,   JP_RABK,   JP_QUES,   JP_UNDS,   KC_RSHIFT,               KC_WWW_BACK,   KC_UP,           KC_WWW_FORWARD,
    KC_LCTRL,   KC_LWIN,            KC_LALT,   KC_LANG2,   KC_SPACE,        KC_SPACE,   KC_LANG1,   KC_RCTRL,              KC_RALT,   KC_RWIN,   KC_MENU,   KC_RCTRL,                KC_LEFT,       KC_DOWN,         KC_RIGHT
  )
};

//    KC_LCTRL,   KC_LWIN,            KC_LALT,   JP_MHEN,   KC_SPACE,        KC_SPACE,   JP_HENK,   KC_RCTRL,              KC_RALT,   KC_RWIN,   KC_MENU,   KC_RCTRL,                KC_LEFT,       KC_DOWN,         KC_RIGHT


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
