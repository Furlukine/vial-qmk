#include QMK_KEYBOARD_H
#include <keymap_french.h>

#define _______ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_ESC,       KC_1,   KC_2,   KC_3,     KC_4,    KC_5,                                        KC_6,   KC_7,      KC_8,      KC_9,       KC_0,       KC_BSPC,
  KC_TAB,       FR_A,   FR_Z,	  FR_E,    	FR_R,    FR_T,                                        FR_Y,   FR_U,		   FR_I,		  FR_O,   	  FR_P,		    KC_DEL,
  KC_LSFT,      FR_Q,   FR_S, 	FR_D,    	FR_F,    FR_G,                                        FR_H,   FR_J,      FR_K,		  FR_L,   	  FR_M,		    KC_ENT,
  KC_LCTL,      FR_W,	  FR_X, 	FR_C,    	FR_V,    FR_B, KC_LBRC,                     KC_RBRC,  FR_N,   FR_COMM,	 FR_SCLN,	  FR_COLN,	  FR_EXLM,	  KC_LALT,
                            KC_LGUI, KC_LALT, LT(0, KC_LSFT), LSFT_T(KC_ENT),    KC_SPC, LT(1,KC_RSFT), KC_RALT, KC_RGUI
),
[1] = LAYOUT(
  KC_NO, KC_F1,   KC_F2,    KC_F3,  KC_F4,    KC_F5,                          KC_NO,    KC_NO,      KC_PSLS,    KC_PAST,    KC_PMNS,      KC_PSCR,
  KC_F1, KC_F6,		KC_F7,    KC_F8,	KC_F9,    KC_F10,                         KC_NO,    KC_P7,      KC_P8,	    KC_KP_9,   	KC_KP_PLUS,		_______,
  KC_NO, KC_F11,	KC_F12,   KC_NO, 	KC_NO,    KC_NO,                          KC_NO,    KC_P4,      KC_P5,	    KC_P6,   	  KC_KP_PLUS,		KC_NO,
  KC_NO, KC_NO, 	KC_NO,    KC_NO, 	KC_NO,    KC_NO,  _______,      _______,  KC_NO,  	KC_P1,	    KC_P2,	    KC_P3,	    KC_PDOT,	    KC_NO,
                             _______, _______, _______, _______,    _______,  KC_P0, _______, _______
),
[2] = LAYOUT(
  KC_NO,    FR_LPRN,  FR_RPRN,  FR_LCBR,  FR_RCBR,  FR_PIPE,                     KC_NO,      KC_NO,     KC_NO,      KC_SCRL,    KC_PAUS,    KC_PSCR,
  _______,	FR_AT,    FR_CCED,	FR_CIRC,  FR_DIAE,  FR_UGRV,                     KC_NO,      KC_NO,		  KC_NO,		  KC_NO,   	  KC_NO,		  KC_NO,
  _______,	FR_AGRV,  FR_BSLS, 	FR_SLSH,  FR_LBRC,  FR_RBRC,                     KC_PGUP,    KC_HOME,		KC_UP,		  KC_END,    	KC_NO,		  FR_UGRV,
  _______, 	XXXXXXX,	XXXXXXX, 	FR_CCED,  KC_NO,    KC_NO,    _______, _______,  KC_PGDN,    KC_LEFT,   KC_DOWN,		KC_RGHT,    KC_NO,	    KC_NO,
                             KC_LGUI, KC_LALT, _______,  _______, _______,  _______, _______, _______
),
[3] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                           _______, _______, _______, _______, _______,  _______, _______, _______
)
};
