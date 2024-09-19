#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_nordic.h"
#include "keymap_swedish.h"
#include "keymap_uk.h"
#include "keymap_us_international.h"

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    HSV_0_255_255,
    HSV_74_255_255,
    HSV_169_255_255,
    NO_LSPO,
    NO_RSPC,
    SE_LSPO,
    SE_RSPC,
};

enum tap_dance_codes {
    DANCE_LSFT,
    DANCE_ENTER,
    DANCE_LTHUMB,
    DANCE_PINKY,
    DANCE_AT,
    DANCE_DLR,
    DANCE_LT,
    DANCE_PLUS,
    NUM_DANCES,
};

enum layers {
    LAYER_0,
    LAYER_SE,
    LAYER_SHIFT,
    LAYER_SSHIFT,
    LAYER_CTL,
    LAYER_OS,
    LAYER_ALT,
    LAYER_FN,
    LAYER_SYS,
    NUM_LAYERS,
};

// NOLINTBEGIN
// /* *INDENT-OFF* */
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           SE_MINS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           SE_EQL,
    TD(DANCE_LSFT), KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           SE_SCLN,        SE_QUOT,
    TD(DANCE_PINKY),LT(LAYER_FN,KC_Z), KC_X,        KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         SE_SLSH,        SE_TILD,
                                                    TD(DANCE_ENTER),TD(DANCE_LTHUMB),                               KC_BACKSPACE,   LT(LAYER_SYS,KC_SPACE)
  ),
  [LAYER_SE] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_ARNG,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_ODIA,        SE_ADIA,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_SHIFT] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_EXLM,        TD(DANCE_AT),   KC_HASH,        TD(DANCE_DLR),  KC_PERC,                                        SE_CIRC,        SE_AMPR,        SE_ASTR,        SE_LPRN,        SE_RPRN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_PLUS),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_COLN,        SE_DQUO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_LT),   SE_RABK,        SE_QUES,        SE_GRV,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_SSHIFT] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_ARNG,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_ODIA,        SE_ADIA,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_DQUO,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_CTL] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSFT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, SE_LBRC,        SE_RBRC,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(SE_LBRC),  LSFT(SE_RBRC),
                                                    KC_ENTER, KC_TRANSPARENT,                                       KC_DELETE,      KC_TRANSPARENT
  ),
  [LAYER_OS] = LAYOUT_voyager(
    LGUI(KC_ESCAPE),LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),                                     LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     SE_LPRN,        SE_RPRN,        SE_EQL,
    LGUI(KC_TAB),   LCTL(KC_Q),     LGUI(KC_W),     LGUI(KC_E),     LGUI(KC_R),     LGUI(KC_T),                                     LGUI(KC_Y),     LGUI(KC_U),     LGUI(KC_I),     LGUI(KC_O),     SE_LBRC,        SE_RBRC,
    KC_LSFT,        LCTL(KC_A),     LCTL(KC_S),     LGUI(KC_D),     LGUI(KC_F),     LGUI(KC_G),                                     LGUI(KC_H),     LGUI(KC_J),     LGUI(KC_K),     LGUI(KC_L),     SE_LCBR ,       SE_RCBR,
    KC_NO,          LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_B),                                     LCTL(KC_N),     LCTL(KC_M),     KC_TRANSPARENT, SE_COLN,        SE_PIPE ,       SE_BSLS,
                                                                    LGUI(KC_ENTER), KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_ALT] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LALT(KC_DELETE)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSFT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_ENTER,                                       KC_TRANSPARENT, KC_ENTER
  ),
  [LAYER_FN] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    SE_GRV,         KC_EXLM,        SE_AT,          SE_EURO,        SE_EURO,        KC_PERC,                                        KC_7,           KC_8,           KC_9,           SE_MINS,        SE_SLSH,        KC_F12,
    KC_TRANSPARENT, KC_CIRC,        SE_AMPR,        SE_ASTR,        SE_LPRN,        SE_RPRN,                                        KC_4,           KC_5,           KC_6,           SE_PLUS,        SE_ASTR,        KC_BACKSPACE,
    KC_TRANSPARENT, SE_TILD,        SE_LBRC,        SE_RBRC,        SE_LCBR,        SE_RCBR,                                        KC_1,           KC_2,           KC_3,           KC_DOT,         SE_BSLS,        SE_GRV,
                                                                    KC_LALT,        KC_LCTL,                        KC_DELETE,      KC_0
  ),
  [LAYER_SYS] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,         RGB_MOD,            RGB_SLD,            RGB_VAD,            RGB_VAI,                            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,
    KC_TRANSPARENT, KC_TRANSPARENT,             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F20,         KC_AUDIO_VOL_DOWN,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,        KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,      KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_PGUP,        KC_BRIGHTNESS_UP,
    KC_LCTL,        KC_TRANSPARENT,             KC_TRANSPARENT,     HSV_0_255_255,      HSV_74_255_255,     HSV_169_255_255,                    KC_HOME,        KC_END,         LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),KC_PGDN,        KC_BRIGHTNESS_DOWN,
                                                                                        KC_TRANSPARENT,     KC_LCTL,                            KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
// clang-format on
/* *INDENT-ON* */
// NOLINTEND

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    // NOLINTBEGIN
    /* *INDENT-OFF* */
    // clang-format off
    [LAYER_ALT] = {
        {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255},
        {169,255,255}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0},
        {169,255,255}, {74,255,255}, {0,0,0}, {169,255,255}, {41,255,255}, {0,245,245},
        {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {131,255,255}, {131,255,255},
        {0,0,0}, {255,0,0},

        {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {169,255,255} },

    [LAYER_SYS] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {41,255,255}, {41,255,255}, {0,245,245}, {74,255,255}, {0,0,0},
        {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {169,255,84},

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {74,255,255},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {131,255,255},
        {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {218,218,204}, {0,0,255},
        {74,255,255}, {41,255,255}, {131,255,255}, {131,255,255}, {218,218,204}, {169,255,84},
        {0,0,0}, {0,0,0} },
    // clang-format on
    /* *INDENT-OFF* */
    // NOLINTEND
};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return true;
    }
    switch (biton32(layer_state)) {
        case LAYER_ALT:
        case LAYER_SYS:
            set_layer_color(biton32(layer_state));
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_0_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(0, 255, 255);
            }
            return false;
        case HSV_74_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(74, 255, 255);
            }
            return false;
        case HSV_169_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(169, 255, 255);
            }
            return false;
    }
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[NUM_DANCES];

uint8_t mod_dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->pressed)
            return SINGLE_HOLD;
        else
            return SINGLE_TAP;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

// Left shift
void dance_lsft_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_LSFT].step = mod_dance_step(state);
    switch (dance_state[DANCE_LSFT].step) {
        case SINGLE_HOLD:
            register_code16(KC_LSFT);
            layer_on(LAYER_SHIFT);
            if (IS_LAYER_ON(LAYER_SE)) layer_on(LAYER_SSHIFT);
            break;
        case DOUBLE_TAP:
            layer_invert(LAYER_SE);
            break;
    }
}

void dance_lsft_reset(tap_dance_state_t *state, void *user_data) {
    switch (dance_state[DANCE_LSFT].step) {
        case SINGLE_HOLD:
            layer_off(LAYER_SHIFT);
            layer_off(LAYER_SSHIFT);
            unregister_code16(KC_LSFT);
            break;
    }
    dance_state[DANCE_LSFT].step = 0;
}

// Enter
void dance_enter(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    } else if (state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_enter_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_ENTER].step = mod_dance_step(state);
    switch (dance_state[DANCE_ENTER].step) {
        case SINGLE_TAP:
            register_code16(KC_ENTER);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LALT);
            layer_on(LAYER_ALT);
            break;
        case DOUBLE_HOLD:
            register_code16(KC_ENTER);
            break;
        case DOUBLE_TAP:
            tap_code16(KC_ENTER);
            register_code16(KC_ENTER);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ENTER);
            register_code16(KC_ENTER);
            break;
    }
}

void dance_enter_reset(tap_dance_state_t *state, void *user_data) {
    switch (dance_state[DANCE_ENTER].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ENTER);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LALT);
            layer_off(LAYER_ALT);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ENTER);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ENTER);
            break;
    }
    dance_state[DANCE_ENTER].step = 0;
}

// Left thumb right button
void dance_lthumb(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    } else if (state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_lthumb_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_LTHUMB].step = mod_dance_step(state);
    switch (dance_state[DANCE_LTHUMB].step) {
        case SINGLE_TAP:
            register_code16(KC_TAB);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LCTL);
            layer_on(LAYER_CTL);
            break;
        case DOUBLE_TAP:
            tap_code16(KC_TAB);
            register_code16(KC_TAB);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_TAB);
            register_code16(KC_TAB);
            break;
    }
}

void dance_lthumb_reset(tap_dance_state_t *state, void *user_data) {
    switch (dance_state[DANCE_LTHUMB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_TAB);
            break;
        case SINGLE_HOLD:
            layer_off(LAYER_CTL);
            unregister_code16(KC_LCTL);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_TAB);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_TAB);
            break;
    }
    dance_state[DANCE_LTHUMB].step = 0;
}

// Left pinky button
void dance_pinky(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
    } else if (state->count > 3) {
        tap_code16(KC_LGUI);
    }
}

void dance_pinky_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_PINKY].step = mod_dance_step(state);
    switch (dance_state[DANCE_PINKY].step) {
        case SINGLE_TAP:
            register_code16(KC_LGUI);
            break;
        case SINGLE_HOLD:
            layer_on(LAYER_OS);
            break;
        case DOUBLE_TAP:
            tap_code16(KC_LGUI);
            register_code16(KC_LGUI);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_LGUI);
            register_code16(KC_LGUI);
            break;
    }
}

void dance_pinky_reset(tap_dance_state_t *state, void *user_data) {
    switch (dance_state[DANCE_PINKY].step) {
        case SINGLE_TAP:
            unregister_code16(KC_LGUI);
            break;
        case SINGLE_HOLD:
            layer_off(LAYER_OS);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_LGUI);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_LGUI);
            break;
    }
    dance_state[DANCE_PINKY].step = 0;
}

void dance_at(tap_dance_state_t *state, void *user_data) {
    unregister_code16(KC_LSFT);
    tap_code16(SE_AT);
    register_code16(KC_LSFT);
}
void dance_dlr(tap_dance_state_t *state, void *user_data) {
    unregister_code16(KC_LSFT);
    tap_code16(SE_DLR);
    register_code16(KC_LSFT);
}
void dance_lt(tap_dance_state_t *state, void *user_data) {
    unregister_code16(KC_LSFT);
    tap_code16(SE_LABK);
    register_code16(KC_LSFT);
}
void dance_plus(tap_dance_state_t *state, void *user_data) {
    unregister_code16(KC_LSFT);
    tap_code16(SE_PLUS);
    register_code16(KC_LSFT);
}

tap_dance_action_t tap_dance_actions[] = {[DANCE_LSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_lsft_finished, dance_lsft_reset), [DANCE_ENTER] = ACTION_TAP_DANCE_FN_ADVANCED(dance_enter, dance_enter_finished, dance_enter_reset), [DANCE_LTHUMB] = ACTION_TAP_DANCE_FN_ADVANCED(dance_lthumb, dance_lthumb_finished, dance_lthumb_reset), [DANCE_PINKY] = ACTION_TAP_DANCE_FN_ADVANCED(dance_pinky, dance_pinky_finished, dance_pinky_reset), [DANCE_AT] = ACTION_TAP_DANCE_FN_ADVANCED(dance_at, NULL, NULL), [DANCE_DLR] = ACTION_TAP_DANCE_FN_ADVANCED(dance_dlr, NULL, NULL), [DANCE_LT] = ACTION_TAP_DANCE_FN_ADVANCED(dance_lt, NULL, NULL), [DANCE_PLUS] = ACTION_TAP_DANCE_FN_ADVANCED(dance_plus, NULL, NULL)};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return TAPPING_TERM;
    }
}
