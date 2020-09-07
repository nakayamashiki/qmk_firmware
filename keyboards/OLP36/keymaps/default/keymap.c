/* Copyright 2020 Yusuke NAKAYAMA
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

enum layers {
  KL_MAIN = 0,
  KL_FUN,
  KL_NUM,
  KL_SYS,
};

#define MO_FUN  MO(KL_FUN)
#define MO_NUM  MO(KL_NUM)
#define MO_SYS  MO(KL_SYS)
#define JP_CLN  KC_QUOT
#define JP_AT   KC_LBRC
#define JP_CIRC KC_EQL  // ^
#define JP_CAPS LSFT(KC_CAPS)
#define MOD_ALT LALT_T(KC_MHEN)
#define MOD_GUI LGUI_T(KC_HENK)
#define MOD_SFT LSFT_T(KC_SPC)
#define MOD_CTL LCTL_T(KC_BSPC)

#define JP_LMKK KC_ASTR
#define JP_RMKK KC_LPRN
#define KC_CAD LCTL(LALT(KC_DEL)) // Ctrl + Alt + Del
#define JP_AND  LSFT(KC_6)  // &
#define JP_PERC LSFT(KC_5)  // %
#define JP_SQUO LSFT(KC_7)  // '
#define JP_DQUO LSFT(KC_2)  // "
#define JP_DOLL LSFT(KC_4)  // $
#define JP_SHAP LSFT(KC_3)  // #
#define JP_VBAR LSFT(KC_INT3)  // |
#define JP_TILD KC_PLUS  // Å`
#define JP_LKKO KC_RBRC  // Åu
#define JP_RKKO KC_NUHS  // Åv
#define JP_UNDR LSFT(KC_INT1)
#define JP_BSLS KC_INT1
#define JP_EQL  LSFT(KC_MINS)
#define JP_PLUS LSFT(KC_SCLN)
#define JP_ASTR LSFT(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN */
[KL_MAIN] = LAYOUT( \
  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   \
  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT, \
  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,\
                  MOD_ALT,MO_NUM, MOD_CTL,MOD_SFT,MO_FUN, MOD_GUI                 \
),

/* FUNCTION */
[KL_FUN] = LAYOUT( \
  KC_ESC, JP_SQUO,KC_UP,  JP_DQUO,JP_DOLL,KC_SCLN,JP_CLN, JP_LMKK,JP_RMKK,JP_AT,  \
  KC_TAB, KC_LEFT,KC_DOWN,KC_RGHT,JP_SHAP,KC_JYEN,JP_CIRC,JP_AND, JP_PERC,KC_MINS,\
  JP_VBAR,KC_VOLD,KC_MUTE,KC_VOLU,JP_BSLS,JP_TILD,JP_UNDR,JP_LKKO,JP_RKKO,KC_EXLM,\
                  XXXXXXX,MO_SYS, KC_DEL, KC_RSFT,XXXXXXX,XXXXXXX                 \
),

/* NUMBER */
[KL_NUM] = LAYOUT( \
  XXXXXXX,KC_F10, KC_F7,  KC_F8,  KC_F9,  KC_7,   KC_8,   KC_9,   KC_0,   JP_EQL, \
  XXXXXXX,XXXXXXX,KC_F4,  KC_F5,  KC_F6,  KC_4,   KC_5,   KC_6,   JP_PLUS,KC_MINS,\
  XXXXXXX,XXXXXXX,KC_F1,  KC_F2,  KC_F3,  KC_1,   KC_2,   KC_3,   JP_ASTR,KC_SLSH,\
                  KC_LSFT,XXXXXXX,KC_SPC, KC_COMM,KC_0,   KC_DOT                  \
),

/* SYSTEM */
[KL_SYS] = LAYOUT( \
  KC_PWR, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,RESET,  \
  KC_CAD, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,\
  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,\
                  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX                 \
)
};
