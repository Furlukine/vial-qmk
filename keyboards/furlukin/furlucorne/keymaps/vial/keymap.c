/*
Copyright 2023 Furlukin

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <keymap_french.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(         
        KC_ESC,		FR_A,  FR_Z,	FR_E,       FR_R,             FR_T,                   FR_Y,   FR_U,		  FR_I,		  FR_O,   	  FR_P,		  KC_DEL,
        KC_TAB,	    FR_Q,   FR_S, 	FR_D,       FR_F,             FR_G,                   FR_H,   FR_J,       FR_K,		  FR_L,   	  FR_M,		  KC_BSPC,
        KC_LCTL, 	FR_W,	FR_X, 	FR_C,       FR_V,             FR_B,                   FR_N,   FR_COMM,	  FR_SCLN,	  FR_COLN,	  FR_EXLM,	  KC_ENT,
									KC_LALT,    LSFT_T(KC_ENT),   MO(1),                  MO(2),  KC_SPC,     MO(3)
	),
    [1] = LAYOUT_split_3x6_3(
        KC_F1,      KC_F2,  KC_F3,  KC_F4,    KC_F5,    KC_F6,                    KC_PSLS,      KC_P7,      KC_P8,	    KC_KP_9,   	KC_NO,		  KC_PSCR,
        KC_F7,		KC_F8,  KC_F9,	KC_F10,   KC_F11,   KC_F12,                   KC_PAST,      KC_P4,      KC_P5,	    KC_P6,   	KC_PENT,	  KC_TRNS,
        KC_TRNS, 	KC_NO,	KC_NO, 	KC_NO,    KC_NO,    KC_NO,                    KC_PMNS,  	KC_P1,	    KC_P2,	    KC_P3,	    KC_PDOT,	  KC_TRNS,
									KC_LALT,  KC_ESC,   KC_NO, 	                  KC_KP_PLUS,	KC_KP_0,    KC_NO
	),
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS,	FR_LPRN,   FR_RPRN,     FR_LCBR,  FR_RCBR,  FR_PIPE,              KC_NO,      KC_NO,	  KC_NO,		KC_SCRL,    KC_PAUS,    KC_PSCR,
        KC_TRNS,	FR_AT,     FR_CCED,	    FR_CIRC,  FR_DIAE,  FR_UGRV,              KC_PGUP,    KC_HOME,	  KC_UP,		KC_END,    	KC_NO,		KC_NO,
        KC_TRNS, 	KC_NO,     FR_BSLS,     FR_SLSH,  FR_LBRC,  FR_RBRC,              KC_PGDN,    KC_LEFT,    KC_DOWN,		KC_RGHT,    KC_NO,	    KC_NO,
									    	KC_LGUI,  KC_SPC,   KC_NO, 	              KC_NO,      KC_NO,  	  KC_NO
	),
    [3] = LAYOUT_split_3x6_3(         
        KC_ESC,     KC_NO,  KC_NO,	KC_NO,    KC_NO,    KC_NO,                KC_NO,  KC_NO,	  KC_NO,        KC_NO,      KC_NO,      KC_PSCR,
        KC_LSFT,	KC_P1,  KC_P2, 	KC_P3,    KC_P4,    KC_P5,                KC_P6,  KC_P7,      KC_P8,	    KC_P9,   	KC_P0,		KC_BSPC,
        KC_LCTL, 	KC_NO,  KC_NO,	KC_NO,    KC_NO,    KC_NO,                KC_NO,  KC_NO,	  KC_NO,        KC_NO,      KC_NO, 	    KC_ENT,
									KC_LALT,  KC_SPC,   KC_NO, 	              KC_NO,  KC_NO,      KC_NO
	),
};