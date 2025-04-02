#include QMK_KEYBOARD_H

enum layers {
  _QWERTY = 0,
  _NAV,
  _SYM,
  _ADJ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_elora_hlc(
KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5,                                 KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_PGUP,
KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                                 KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_PGDN,
KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                                 KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_ESC,
KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_A, KC_PGUP,   KC_PLUS, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_END,
                 KC_ESC, KC_1, KC_2, KC_SPC, KC_PGDN,   KC_MINS, KC_SPC, KC_3, KC_4, KC_5,
KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                               KC_F6, KC_F7, KC_F8, KC_F9, KC_F10
)

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [_QWERTY] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(_______, _______) }
  /* [1] = { ENCODER_CCW_CW(KC_E   , KC_F   ), ENCODER_CCW_CW(KC_G   , KC_H   ), ENCODER_CCW_CW(KC_I   , KC_J   ), ENCODER_CCW_CW(KC_K   , KC_L   ) },  */
  /* [2] = { ENCODER_CCW_CW(KC_E   , KC_F   ), ENCODER_CCW_CW(KC_G   , KC_H   ), ENCODER_CCW_CW(KC_I   , KC_J   ), ENCODER_CCW_CW(KC_K   , KC_L   ) },  */
  /* [3] = { ENCODER_CCW_CW(KC_E   , KC_F   ), ENCODER_CCW_CW(KC_G   , KC_H   ), ENCODER_CCW_CW(KC_I   , KC_J   ), ENCODER_CCW_CW(KC_K   , KC_L   ) },  */
  /* [4] = { ENCODER_CCW_CW(KC_E   , KC_F   ), ENCODER_CCW_CW(KC_G   , KC_H   ), ENCODER_CCW_CW(KC_I   , KC_J   ), ENCODER_CCW_CW(KC_K   , KC_L   ) },  */
  /* [5] = { ENCODER_CCW_CW(KC_E   , KC_F   ), ENCODER_CCW_CW(KC_G   , KC_H   ), ENCODER_CCW_CW(KC_I   , KC_J   ), ENCODER_CCW_CW(KC_K   , KC_L   ) },  */
  /* [6] = { ENCODER_CCW_CW(KC_E   , KC_F   ), ENCODER_CCW_CW(KC_G   , KC_H   ), ENCODER_CCW_CW(KC_I   , KC_J   ), ENCODER_CCW_CW(KC_K   , KC_L   ) },  */
};
#endif //   ENCODER_MAP_ENABLE
