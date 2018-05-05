#include "5plit.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

enum custom_keycodes {
    MACRO1  = SAFE_RANGE, 
    MACRO2,
    MACRO3,
    MACRO4,
    MACRO5,
    MACRO6,
    MACRO7
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case MACRO1:
                SEND_STRING("larrbo@gmail.com");
                return false; break;
            case MACRO2:
                SEND_STRING("lawrence.hur@gmail.com");
                return false; break;
           case MACRO3:
                SEND_STRING("lhur001");
                return false; break;           
           case MACRO4:
                SEND_STRING("2020714");
                return false; break;
           case MACRO5:
                SEND_STRING("haiL1lob");
                return false; break;
           case MACRO6:
                SEND_STRING("xzq33XZQ##");
                return false; break;
           case MACRO7:
                SEND_STRING("hurl"SS_TAP(X_TAB)"XZQ##xzq33XZQ##");
                return false; break;
        }
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, 
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, MO(1),
		OSM(MOD_LCTL), LT(2,KC_APP), KC_BSPC, KC_SPC, LT(3,KC_DEL), OSM(MOD_LALT)),

	KEYMAP(
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, 
		KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL, KC_BSLS, KC_QUOT, KC_SCLN, 
		OSM(MOD_LSFT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_LBRC, KC_RBRC, KC_SLSH, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_PSLS, KC_PAST, KC_7, KC_8, KC_9,
		KC_TAB, KC_F5, KC_F6, KC_F7, KC_F8, KC_PMNS, KC_PPLS, KC_4, KC_5, KC_6,
		OSM(MOD_LSFT), KC_F9, KC_F10, KC_F11, KC_F12, KC_DOT, KC_0, KC_1, KC_2, KC_3,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  MO(4), KC_TRNS),

//swap lgui for alt+f1, ctrl+shift+esc for ctrl+alt+del, ctrl+alt+del is n/a for ubuntu
	KEYMAP(
		KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_HOME,  KC_UP, KC_END, KC_PGUP, 
		KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CALC, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, 
		OSM(MOD_LSFT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LSFT(KC_ESC)), LALT(LCTL(KC_DEL)),
		KC_TRNS,  MO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, MACRO3, MACRO2, MACRO1, MACRO4, MACRO5, MACRO6, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MACRO7, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),

};