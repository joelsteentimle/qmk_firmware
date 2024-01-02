/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_MEDI,
    LAYER_NAVI,
    LAYER_RSYM,
    LAYER_LSYM,
    LAYER_NUM,
    LAYER_FUN    
};

#define NAV MO(LAYER_NAV)
#define SYM MO(LAYER_SYM)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_split_3x5_3(
  // ╭───────────────────────────────────────-----------------------------------------─----──----───╮  ╭────────────────────---------------------------------------------------─────────────────────────╮
        SE_ARING,           SE_ADIA,            SE_ODIA,            KC_P,               KC_Y,            KC_F,            KC_G,               KC_C,               KC_R,               KC_L,          
  // ├───────────────────────────────────────-----------------------------------------──----─----───┤  ├────────────────────---------------------------------------------------─────────────────────────┤
        MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_O), MT(MOD_LCTL, KC_E), MT(MOD_LSFT, KC_U), KC_I,            KC_D,            MT(MOD_LSFT, KC_H), MT(MOD_LCTL, KC_T), MT(MOD_LALT, KC_N), MT(MOD_LGUI, KC_S),
  // ├────────────────────────────────────────-----------------------------------------──--------───┤  ├───────────────────---------------------------------------------------──────────────────────────┤
          KC_DOT,           MT(MOD_RALT, KC_Q), KC_J,               KC_K,               KC_X,            KC_N,            KC_M,               KC_COMM,            KC_DOT,             KC_SLSH,
  // ╰──────────────────────────────────────────----------------------------------------------─---──┤  ├────────────────────---------------------------------------------------─────────────────────────╯
                                                LT(1,KC_BSPACE),    LT(2,KC_SPACE), LT(3,KC_DELETE),     LT(4,KC_TAB),    LT(5,KC_ENTER),     LT(6,KC_ESCAPE)
  //                                         ╰──------------------------------------------------───╯  ╰──────────────────----------------------------────────╯
  ),

  [LAYER_NAV] = LAYOUT_split_3x5_3(
  // ╭───────────────────────────────────────-----------------------------------------─----──----───╮  ╭────────────────────---------------------------------------------------─────────────────────────╮
        SE_ARING,           SE_ADIA,            SE_ODIA,            KC_P,               KC_Y,            KC_F,            KC_G,               KC_C,               KC_R,               KC_L,          
  // ├───────────────────────────────────────-----------------------------------------──----─----───┤  ├────────────────────---------------------------------------------------─────────────────────────┤
        MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_O), MT(MOD_LCTL, KC_E), MT(MOD_LSFT, KC_U), KC_I,            KC_D,            MT(MOD_LSFT, KC_H), MT(MOD_LCTL, KC_T), MT(MOD_LALT, KC_N), MT(MOD_LGUI, KC_S),
  // ├────────────────────────────────────────-----------------------------------------──--------───┤  ├───────────────────---------------------------------------------------──────────────────────────┤
          KC_DOT,           MT(MOD_RALT, KC_Q), KC_J,               KC_K,               KC_X,            KC_N,            KC_M,               KC_COMM,            KC_DOT,             KC_SLSH,
  // ╰──────────────────────────────────────────----------------------------------------------─---──┤  ├────────────────────---------------------------------------------------─────────────────────────╯
                                                LT(1,KC_BSPACE),    LT(2,KC_SPACE), LT(3,KC_DELETE),     LT(6,KC_ESCAPE), LT(4,KC_TAB),       LT(5,KC_ENTER)
  //                                         ╰──------------------------------------------------───╯  ╰──────────────────---------------------------────────╯
  ),

  [LAYER_SYM] = LAYOUT_split_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
        KC_ESC, KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD,    KC_CIRC, KC_RPRN, KC_RCBR, KC_RBRC,  KC_GRV,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_MINS, KC_ASTR,  KC_EQL, KC_UNDS,  KC_DLR,    KC_HASH, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_PLUS, KC_PIPE,   KC_AT, KC_SLSH, KC_PERC,    _______, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                            KC_A, _______, KC_LSFT,     KC_SPC, _______,    KC_A
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_NUM] = LAYOUT_split_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,   KC_0,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,  KC_F11,     KC_F12, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                            KC_A, _______, KC_LSFT,     KC_SPC, _______,    KC_A
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, LAYER_NAV, LAYER_SYM, LAYER_NUM);
}
