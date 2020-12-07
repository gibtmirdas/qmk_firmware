#include QMK_KEYBOARD_H

// initial layout from layouts/default/60_ainsi

// Using modtap –– https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/mod_tap

// Fine mode tunning there –– https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold

// FLash –– https://medium.com/@armno/customizing-dz60-keyboard-firmware-e6ad7222288f


#define RGB_STA RGB_M_P //rgb static
#define RGB_BRE RGB_M_B //rgb breathe
#define RGB_RAI RGB_M_R //rgb rainbow
#define RGB_SWI RGB_M_SW //rgb swirl
#define RGB_SNA RGB_M_SN //rgb snake
#define RGB_KNI RGB_M_K //rgb knight
#define RGB_GRA RGB_M_G //rgb gradient

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * |ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctrl│Alt │GUI │                        │ Alt│ GUI│Menu│Ctrl│ 
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    // [0] = LAYOUT_60_ansi(
    LAYOUT(
        KC_ESC,		KC_1,		KC_2,	KC_3,	KC_4,	KC_5,	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_MINS,	KC_EQL,  	XXXXXXX,	KC_BSPC,
        KC_TAB,					KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,		KC_LBRC,	KC_RBRC,	KC_BSLS,
        LT(MO(1), KC_CAPS),	KC_A,		KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,	KC_QUOT,	KC_ENT,
        KC_LSFT,	XXXXXXX,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_COMM,KC_DOT,	KC_SLSH,	MT(MOD_RSFT, KC_UP),	XXXXXXX,
        KC_LCTL,				KC_LALT,KC_LGUI,KC_SPC,			KC_SPC,			KC_SPC,	KC_RALT,LT(MO(1), KC_LEFT),	XXXXXXX,	LT(MO(2), KC_DOWN),		MT(MOD_RCTL, KC_RGHT)
    ),


	/* Keymap : Second Layer (WASD and Media)
   * ,-----------------------------------------------------------.
   * |ESC| F1| F2| F3  |   |   |   |   |   |   |   |   |   | DEL   |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */

    LAYOUT(
        KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, KC_DEL ,
        _______,          _______,  KC_UP,  _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUSE,_______, _______, RESET,
        _______,          KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, KC_INS , KC_HOME, KC_PGUP, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_DEL,  KC_END, KC_PGDN, _______,          _______,
        _______,          _______, _______, _______,          _______,          _______, _______, _______, _______, _______,          _______),

   /* Keymap : Third Layer (RGB / Reset)
   * ,-----------------------------------------------------------.
   * | ` |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |       |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */

    LAYOUT(
        KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, KC_SLEP,
        _______,          RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, RESET  ,
        _______,          RGB_STA, RGB_BRE, RGB_RAI, RGB_SWI, RGB_SNA, RGB_KNI, RGB_GRA, _______, KC_MPRV, KC_MPLY, KC_MNXT,          _______,
        _______, _______, BL_DEC , BL_TOGG, BL_INC , BL_STEP, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE,          _______,
        _______,          _______, _______, _______,          _______,          _______, _______, _______, _______, _______,          _______),



	// [0] = LAYOUT_60_ansi(
	// 	KC_ESC,		KC_1,		KC_2,		KC_3,	KC_4,		KC_5,	KC_6,	KC_7,	KC_8,		KC_9,	KC_0,		KC_MINS,	KC_EQL,		KC_BSPC,
	// 	KC_TAB,		KC_Q,		KC_W,		KC_E,	KC_R,		KC_T,	KC_Y,	KC_U,	KC_I,		KC_O,	KC_P,		KC_LBRC,	KC_RBRC,	KC_BSLS,
	// 	KC_CAPS,	KC_A,		KC_S,		KC_D,	KC_F,		KC_G,	KC_H,	KC_J,	KC_K,		KC_L,	KC_SCLN,	KC_QUOT,	KC_ENT,
	// 	KC_LSFT,	KC_Z,		KC_X,		KC_C,	KC_V,		KC_B,	KC_N,	KC_M,	KC_COMM,	KC_DOT,	KC_SLSH,	KC_RSFT,
	// 	KC_LCTL,	KC_LALT,	KC_LGUI,	KC_SPC,	KC_RALT,	MO(0),	MO(1),	KC_RCTL
	// ),
	// [1] = LAYOUT_60_ansi(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO)
};
