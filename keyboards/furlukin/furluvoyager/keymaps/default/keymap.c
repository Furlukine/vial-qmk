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

//Tap Dance Declarations
enum {
  TD_ESC_SUP2 = 0
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_ESC_SUP2]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, FR_SUP2)
// Other declarations would go here, separated by commas, if you have them
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_4x6_2(
        TD(TD_ESC_SUP2),  KC_1,   KC_2,   KC_3,     KC_4,     KC_5,             KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_PSCR,
        KC_TAB,		        FR_A,   FR_Z,	  FR_E,    	FR_R,    	FR_T,             FR_Y,       FR_U,		    FR_I,		    FR_O,   	  FR_P,		    KC_BSP,
        KC_LSFT,	        FR_Q,   FR_S, 	FR_D,    	FR_F,    	FR_G,             FR_H,       FR_J,       FR_K,		    FR_L,   	  FR_M,		    KC_DEL,
        KC_LCTL, 	        FR_W,	  FR_X, 	FR_C,    	FR_V,    	FR_B,             FR_N,  		  FR_COMM,	  FR_SCLN,	  FR_COLN,	  FR_EXLM,	  KC_LALT,
									    		                          KC_ENT,   MO(1), 	          MO(2),      KC_SPC
	),
    [1] = LAYOUT_split_4x6_2(
        KC_F1,    KC_F2,  KC_F3,  KC_F4,    KC_F5,    KC_F6,                    KC_NO,      KC_NO,      KC_PSLS,    KC_PAST,    KC_PMNS,      KC_PSCR,
        KC_F7,		KC_F8,  KC_F9,	KC_F10,   KC_F11,   KC_F12,                   KC_NO,      KC_P7,      KC_P8,	    KC_KP_9,   	KC_KP_PLUS,		KC_NO,
        KC_LSFT,	FR_Q,   FR_S, 	FR_D,    	FR_F,     FR_G,                     KC_NO,      KC_P4,      KC_P5,	    KC_P6,   	  KC_PENT,		  KC_NO,
        KC_LCTL, 	FR_W,	  FR_X, 	FR_C,    	FR_V,    	FR_B,                     KC_NO,  		KC_P1,	    KC_P2,	    KC_P3,	    KC_PDOT,	    KC_NO,
									    		                  KC_ESC,   MO(1), 	                  MO(2),  	  KC_KP_0
	),
    [2] = LAYOUT_split_4x6_2(
        KC_1,     KC_2,   KC_3,   KC_4,     KC_5,     KC_6,                     KC_NO,      KC_NO,      KC_NO,      KC_SCRL,    KC_PAUS,    KC_PSCR,
        KC_TAB,		FR_A,   FR_Z,	  FR_E,    	FR_R,    	FR_T,                     KC_PGUP,    KC_HOME,		KC_UP,		  KC_END,   	KC_NO,		  KC_NO,
        KC_LSFT,	FR_Q,   FR_S, 	FR_D,    	FR_F,    	FR_G,                     KC_PGDN,    KC_LEFT,    KC_DOWN,		KC_RGHT,   	KC_NO,		  KC_NO,
        KC_LCTL, 	FR_W,	  FR_X, 	FR_C,    	FR_V,    	FR_B,                     KC_NO,  		KC_NO,	    KC_NO,	    KC_NO,	    KC_NO,	    KC_NO,
									    		                  KC_SPC,   KMO(1), 	                MO(2),      KC_NO  	  
	),
    [3] = LAYOUT_split_4x6_2(
        TD(TD_ESC_SUP2),  KC_1,   KC_2,   KC_3,     KC_4,             KC_5,              KC_6,       KC_7,        KC_8,       KC_9,       KC_0,       KC_DEL,
        KC_TAB,		        FR_A,   FR_Z,	  FR_E,    	FR_R,    	        FR_T,              FR_Y,       FR_U,		    FR_I,		    FR_O,   	  FR_P,		    KC_BSP,
        KC_LSFT,	        FR_Q,   FR_S, 	FR_D,    	FR_F,    	        FR_G,              FR_H,       FR_J,        FR_K,		    FR_L,   	  FR_M,		    KC_ENT,
        KC_LCTL, 	        FR_W,	  FR_X, 	FR_C,    	FR_V,    	        FR_B,              FR_N,  		 FR_COMM,	    FR_SCLN,	  FR_COLN,	  FR_EXLM,	  KC_LALT,
									    		                          LSFT_T(KC_ENT),   MO(1), 	           MO(2),  	   KC_SPC
	),
};