#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _LAYER4,
  _LAYER5,
  _LAYER6,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define DUAL_FUNC_0 LT(13, KC_R)
#define DUAL_FUNC_1 LT(5, KC_F20)

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(KC_Q,KC_W,KC_F,KC_P,KC_B,KC_TRANSPARENT,KC_TRANSPARENT,KC_J,KC_L,KC_U,KC_Y,KC_QUOTE,MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,KC_TRANSPARENT,KC_TRANSPARENT,KC_M,MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),LT(5, KC_O),KC_Z,MT(MOD_RALT, KC_X),KC_C,KC_D,KC_V,KC_TRANSPARENT,KC_TRANSPARENT,KC_K,KC_H,KC_COMMA,MT(MOD_RALT, KC_DOT),LT(6, KC_SLASH),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT_GUI,KC_SPACE,KC_TRANSPARENT,KC_NO,KC_ENTER,LT(4, KC_ESCAPE),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LOWER] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_COMMA,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_RAISE] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_ADJUST] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER4] = LAYOUT_planck_grid(KC_PLUS,KC_4,KC_5,KC_6,DUAL_FUNC_0,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_DELETE,KC_BSPC,KC_SCLN,KC_1,KC_2,KC_3,KC_EQUAL,KC_TRANSPARENT,KC_TRANSPARENT,KC_CAPS,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TILD,KC_7,KC_8,KC_9,KC_BSLS,KC_TRANSPARENT,KC_TRANSPARENT,KC_INSERT,KC_HOME,KC_PGDN,KC_PAGE_UP,KC_END,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_0,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER5] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TD(DANCE_0),TD(DANCE_1),TD(DANCE_2),TD(DANCE_3),KC_ASTR,KC_MS_WH_UP,KC_MS_LEFT,KC_MS_DOWN,KC_MS_UP,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_COLN,TD(DANCE_4),KC_PERC,KC_CIRC,KC_TRANSPARENT,KC_MS_WH_DOWN,KC_MS_WH_LEFT,KC_MS_BTN1,DUAL_FUNC_1,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TILD,TD(DANCE_5),KC_AT,KC_HASH,KC_PIPE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_ESCAPE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER6] = LAYOUT_planck_grid(KC_F10,KC_F4,KC_F5,KC_F6,KC_PSCR,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_F11,KC_F1,KC_F2,KC_F3,KC_SCRL,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_F12,KC_F7,KC_F8,KC_F9,KC_PAUSE,KC_TRANSPARENT,KC_TRANSPARENT,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,KC_AUDIO_MUTE,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TAB,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};




typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_LBRC); break;
        case DOUBLE_TAP: register_code16(KC_LABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRC); register_code16(KC_LBRC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_LABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRC); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RBRC);
        tap_code16(KC_RBRC);
        tap_code16(KC_RBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_RBRC);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_RBRC); break;
        case DOUBLE_TAP: register_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RBRC); register_code16(KC_RBRC);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_RBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RBRC); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_RPRN);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_RPRN); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RPRN); register_code16(KC_RPRN);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RPRN); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DLR);
        tap_code16(KC_DLR);
        tap_code16(KC_DLR);
    }
    if(state->count > 3) {
        tap_code16(KC_DLR);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_DLR); break;
        case DOUBLE_TAP: register_code16(KC_AMPR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DLR); register_code16(KC_DLR);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_DLR); break;
        case DOUBLE_TAP: unregister_code16(KC_AMPR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DLR); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EXLM);
        tap_code16(KC_EXLM);
        tap_code16(KC_EXLM);
    }
    if(state->count > 3) {
        tap_code16(KC_EXLM);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_EXLM); break;
        case DOUBLE_TAP: register_code16(KC_QUES); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EXLM); register_code16(KC_EXLM);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_EXLM); break;
        case DOUBLE_TAP: unregister_code16(KC_QUES); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EXLM); break;
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
            
                case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN2);
        } else {
          unregister_code16(KC_MS_BTN2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN3);
        } else {
          unregister_code16(KC_MS_BTN3);
        }  
      }  
      return false;
  }
  return true;
}

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint8_t layer_state_set_user(uint8_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

