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

#include "config.h"
#include "rev0.h"
#include "keymap_jp.h"
#include <sendstring_jis.h>
#if __has_include("password.h")
  #include "password.h"
#endif

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  BASE=0,

#if __has_include("password.h")
  _FN,
#endif

};

#define MO_FN MO(_FN)
#define LT_APP LT(_FN, KC_APP)
#define LT_MHEN LT(_FN, JP_MHEN)
#define LT_HENK LT(_FN, JP_HENK)
#define LT_CAPS LT(_FN, KC_CAPS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_ESC,               KC_F1,    KC_F2,     KC_F3,     KC_F4,           KC_F5,      KC_F6,     KC_F7,      KC_F8,                KC_F9,     KC_F10,    KC_F11,     KC_F12,      KC_PSCR,       KC_SCROLLLOCK,   KC_PAUSE,
    JP_ZKHK,    JP_1,     JP_2,     JP_3,      JP_4,      JP_5,            JP_6,       JP_7,      JP_8,       JP_9,      KC_0,      JP_MINS,   JP_CIRC,   JP_YEN,     KC_BSPACE,   KC_INSERT,     KC_HOME,         KC_PGUP,
    KC_TAB,     KC_Q,     KC_W,     KC_E,      KC_R,      KC_T,            KC_Y,       KC_U,      KC_I,       KC_O,      KC_P,      JP_AT,     JP_LBRC,                            KC_DELETE,     KC_END,          KC_PGDOWN,
    LT_CAPS,    KC_A,     KC_S,     KC_D,      KC_F,      KC_G,            KC_H,       KC_J,      KC_K,       KC_L,      JP_SCLN,   JP_COLN,   JP_RBRC,   KC_ENTER,
    KC_LSHIFT,            KC_Z,     KC_X,      KC_C,      KC_V,            KC_B,       KC_N,      KC_M,       JP_COMM,   JP_DOT,    JP_SLSH,   JP_BSLS,   KC_RSHIFT,               KC_WWW_BACK,   KC_UP,           KC_WWW_FORWARD,
    KC_LCTRL,   KC_LWIN,            KC_LALT,   LT_MHEN,   KC_SPACE,        KC_SPACE,   LT_HENK,   KC_RCTRL,              KC_RALT,   KC_RWIN,   LT_APP,    KC_RCTRL,                KC_LEFT,       KC_DOWN,         KC_RIGHT
  ),
#if __has_include("password.h")
  [_FN] = LAYOUT(
    _______,              PASS1,    PASS2,     PASS3,     PASS4,           PASS5,      PASS6,     PASS7,      PASS8,                PASS9,      PASS0,    PASS9,      PASS0,       _______,       _______,         _______,
    _______,    PASS1,    PASS2,    PASS3,     PASS4,     PASS5,           PASS6  ,    PASS7,     PASS8,      PASS9,     PASS0,     _______,    _______,  _______,    KC_MUTE,     _______,       _______,         KC_VOLU,
    _______,    _______,  KC_UP,    _______,   _______,   _______,         _______,    _______,   _______,    _______,   _______,   _______,    _______,                           _______,       _______,         KC_VOLD,
    _______,    KC_LEFT,  KC_DOWN,  KC_RIGHT,  _______,   _______,         KC_LEFT,    KC_DOWN,   KC_UP,      KC_RIGHT,  _______,   _______,    _______,  _______,
    _______,              _______,  _______,   _______,   _______,         _______,    _______,   _______,    _______,   _______,   _______,    _______,  _______,                 KC_MPRV,       KC_MS_UP,        KC_MNXT,
    _______,    _______,            _______,   _______,   KC_MPLY,         KC_MPLY,    _______,   KC_BTN1,    KC_BTN2,   _______,   _______,    _______,                           KC_MS_LEFT,    KC_MS_DOWN,      KC_MS_RIGHT
  ),
#endif

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

#if __has_include("password.h")
    case PASS0:
      if (record->event.pressed) SEND_STRING(PWD0);
      break;

    case PASS1:
      if (record->event.pressed) SEND_STRING(PWD1);
      break;

    case PASS2:
      if (record->event.pressed) SEND_STRING(PWD2);
      break;

    case PASS3:
      if (record->event.pressed) SEND_STRING(PWD3);
      break;

    case PASS4:
      if (record->event.pressed) SEND_STRING(PWD4);
      break;

    case PASS5:
      if (record->event.pressed) SEND_STRING(PWD5);
      break;

    case PASS6:
      if (record->event.pressed) SEND_STRING(PWD6);
      break;

    case PASS7:
      if (record->event.pressed) SEND_STRING(PWD7);
      break;

    case PASS8:
      if (record->event.pressed) SEND_STRING(PWD8);
      break;

    case PASS9:
      if (record->event.pressed) SEND_STRING(PWD9);
      break;


#endif

  }
  return true;
}


void matrix_init_user(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up


}

void matrix_scan_user(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

}

void led_set_user(uint8_t usb_led) {
	// put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

}

void encoder_update_user(uint8_t index, bool clockwise) {
	// put your scroll wheel
}
