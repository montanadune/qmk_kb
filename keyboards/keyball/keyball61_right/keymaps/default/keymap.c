#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_right(
    KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  ,
    KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_INT3  ,
    KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , S(KC_7)  ,
    KC_NUHS  , KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
    KC_BSPC  , LT(2,KC_ENT),LT(1,KC_LNG2),KC_RGUI, _______ , KC_RALT  , KC_PSCR
  ),

  [1] = LAYOUT_right(
    KC_EQL   , S(KC_6)  , S(KC_QUOT), S(KC_8)  , S(KC_9)  , S(KC_INT1),
    S(KC_Y)  , S(KC_U)  , S(KC_I)  , S(KC_O)  , S(KC_P)  , S(KC_INT3),
    S(KC_H)  , S(KC_J)  , S(KC_K)  , S(KC_L)  , KC_QUOT  , S(KC_2)  ,
    S(KC_NUHS), S(KC_N)  , S(KC_M)  , S(KC_COMM), S(KC_DOT), S(KC_SLSH), S(KC_RSFT),
    _______  , _______  , _______  , S(KC_RGUI), _______  , S(KC_RALT), _______
  ),

  [2] = LAYOUT_right(
    KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , KC_LEFT  , KC_UP    , KC_RGHT  , _______  , KC_F12   ,
    KC_PGUP  , KC_BTN1  , KC_DOWN  , KC_BTN2  , KC_BTN3  , _______  ,
    S(KC_9)  , KC_PGDN  , _______  , _______  , _______  , _______  , _______  ,
    KC_DEL   , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_right(
    RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    EE_CLR   , KC_HOME  , KC_PGDN  , KC_PGUP  , KC_END   , _______  , _______  ,
    _______  , KC_BSPC  , _______  , _______  , _______  , _______  , QK_BOOT
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // トラックボールスクロール機能がキーボード側で定義されている場合は有効
    // keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}
