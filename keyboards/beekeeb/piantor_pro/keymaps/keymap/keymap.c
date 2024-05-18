// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define CMDSPC CMD_T(KC_SPC)
#define CMDENT CMD_T(KC_ENT)
#define EMDASH UC(0x2014)

enum {
    Q_1,
    W_2,
    F_3,
    P_4,
    B_5,
    J_6,
    L_7,
    U_8,
    Y_9,
    QUOT_0,
};

tap_dance_action_t tap_dance_actions[] = {
    [Q_1] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_1),
    [W_2] = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_2),
    [F_3] = ACTION_TAP_DANCE_DOUBLE(KC_F, KC_3),
    [P_4] = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_4),
    [B_5] = ACTION_TAP_DANCE_DOUBLE(KC_B, KC_5),
    [J_6] = ACTION_TAP_DANCE_DOUBLE(KC_J, KC_6),
    [L_7] = ACTION_TAP_DANCE_DOUBLE(KC_L, KC_7),
    [U_8] = ACTION_TAP_DANCE_DOUBLE(KC_U, KC_8),
    [Y_9] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_9),
    [QUOT_0] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_0),
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, TD(Q_1), TD(W_2), TD(F_3), TD(P_4), TD(B_5),                      TD(J_6), TD(L_7), TD(U_8), TD(Y_9),TD(QUOT_0), KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_ROPT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             MO(3), KC_LSFT, CMDSPC,     CMDENT, KC_RSFT,   TG(2)
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_ROPT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(3), KC_LSFT,  CMDSPC,     CMDENT, KC_RSFT,   TG(2)
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_HOME, XXXXXXX,   KC_UP, XXXXXXX, KC_PGUP,                      KC_WH_U, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,  KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                      KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        TG(2), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ROPT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, KC_LSFT,  CMDSPC,    KC_BTN3, KC_BTN1, KC_BTN2
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  EMDASH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,  KC_EQL, KC_SCLN, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_UNDS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, KC_LSFT,  CMDSPC,     CMDENT, KC_RSFT,   MO(4)
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  CMDSPC,     CMDENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
