#include QMK_KEYBOARD_H
#include <keymap_french.h>

enum layer_number {
  _AZERTY = 0,
  _NUMBER,
  _RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* AZERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |BackSP|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   Z  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   Q  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   M  |Enter |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LCTRL |   W  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   ,  |   .  |   /  |   !  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI | LALT |LOWER | /Enter  /       \Space \  |RAISE | RALT | RGUI |
 *                   |      |      |LShft |/       /         \      \ |RShft |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_AZERTY] = LAYOUT_split_4x6_5(
  KC_ESC,       KC_1,   KC_2,   KC_3,     KC_4,    KC_5,                                        KC_6,   KC_7,      KC_8,      KC_9,       KC_0,       KC_BSPC,
  KC_TAB,       FR_A,   FR_Z,	  FR_E,    	FR_R,    FR_T,                                        FR_Y,   FR_U,		   FR_I,		  FR_O,   	  FR_P,		    KC_DEL,
  KC_LSFT,      FR_Q,   FR_S, 	FR_D,    	FR_F,    FR_G,                                        FR_H,   FR_J,      FR_K,		  FR_L,   	  FR_M,		    KC_ENT,
  KC_LCTL,      FR_W,	  FR_X, 	FR_C,    	FR_V,    FR_B, KC_LBRC,                     KC_RBRC,  FR_N,   FR_COMM,	 FR_SCLN,	  FR_COLN,	  FR_EXLM,	  KC_LALT,
                            KC_LGUI, KC_LALT, LT(_NUMBER, KC_LSFT), LSFT_T(KC_ENT),    KC_SPC, LT(_RAISE,KC_RSFT), KC_RALT, KC_RGUI
),
/* NUMBER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |      |      |   /  |   *  |   -  |PrtScr|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F6  |  F7  |  F8  |  F9  |  F10 |                    |      |   7  |   8  |   9  |   +  |BackSP|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F11 |  F12 |      |      |      |-------.    ,-------|      |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   1  |   2  |   3  |Enter |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |  0   |      |  .   |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_NUMBER] = LAYOUT_split_4x6_5(
  KC_NO, KC_F1,   KC_F2,    KC_F3,  KC_F4,    KC_F5,                          KC_NO,    KC_NO,      KC_PSLS,    KC_PAST,    KC_PMNS,      KC_PSCR,
  KC_F1, KC_F6,		KC_F7,    KC_F8,	KC_F9,    KC_F10,                         KC_NO,    KC_P7,      KC_P8,	    KC_KP_9,   	KC_KP_PLUS,		_______,
  KC_NO, KC_F11,	KC_F12,   KC_NO, 	KC_NO,    KC_NO,                          KC_NO,    KC_P4,      KC_P5,	    KC_P6,   	  KC_KP_PLUS,		KC_NO,
  KC_NO, KC_NO, 	KC_NO,    KC_NO, 	KC_NO,    KC_NO,  _______,      _______,  KC_NO,  	KC_P1,	    KC_P2,	    KC_P3,	    KC_PDOT,	    KC_NO,
                             _______, _______, _______, _______,    _______,  KC_P0, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   (  |   )  |   [  |  ]   |  |   |                    |      |      |      |Scroll|Pause |PrtScr|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   @  |   ç  |   ^  |   ¨  |   ù  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   à  |  \   |  /   |  {   |  }   |-------.    ,-------| PgUp | Home |  Up  |  End |      |  ù   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |  ç   |      |      |-------|    |-------| PgDwn| Left | Down | Down |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT_split_4x6_5(
  KC_NO,    FR_LPRN,  FR_RPRN,  FR_LCBR,  FR_RCBR,  FR_PIPE,                     KC_NO,      KC_NO,     KC_NO,      KC_SCRL,    KC_PAUS,    KC_PSCR,
  _______,	FR_AT,    FR_CCED,	FR_CIRC,  FR_DIAE,  FR_UGRV,                     KC_NO,      KC_NO,		  KC_NO,		  KC_NO,   	  KC_NO,		  KC_NO,
  _______,	FR_AGRV,  FR_BSLS, 	FR_SLSH,  FR_LBRC,  FR_RBRC,                     KC_PGUP,    KC_HOME,		KC_UP,		  KC_END,    	KC_NO,		  FR_UGRV,
  _______, 	XXXXXXX,	XXXXXXX, 	FR_CCED,  KC_NO,    KC_NO,    _______, _______,  KC_PGDN,    KC_LEFT,   KC_DOWN,		KC_RGHT,    KC_NO,	    KC_NO,
                             KC_LGUI, KC_LALT, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  â   |  ç   |      |  ô   |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  à   |  é   |  è   |  ê   |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT_split_4x6_5(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NUMBER, _RAISE, _ADJUST);
}