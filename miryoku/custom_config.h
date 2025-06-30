// Copyright 2021 Manna Harbour
// Copyright 2025 Jason Fuchs
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_KLUDGE_DOUBLETAPBOOT

#define MIRYOKU_LAYER_GAME \
&kp TAB,   &kp Q, &kp W,   &kp E,   &kp R,          &kp Y,   &kp U,    &kp I,      &kp O,   &kp P, \
&kp LSHFT, &kp A, &kp S,   &kp D,   &kp F,          &kp H,   &kp J,    &kp K,      &kp L,   &kp SQT, \
&kp LCTRL, &kp Z, &kp X,   &kp C,   &kp V,          &kp N,   &kp M,    &kp COMMA,  &kp DOT, &kp SLASH, \
U_NP,      U_NP,  &kp ESC, &kp SPC, &mo U_GAMEPLUS, &kp RET, &kp BSPC, &to U_BASE, U_NP,    U_NP

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

// TODO seperate fun and num layers
#define MIRYOKU_LAYER_GAMEPLUS \
&trans,   &kp NUM_7, &kp NUM_8, &kp NUM_9, &kp T, U_NA,     &kp F7,    &kp F8,    &kp F9, &kp F12, \
&kp LALT, &kp NUM_4, &kp NUM_5, &kp NUM_6, &kp G, U_NA,     &kp F4,    &kp F5,    &kp F6, &kp F11, \
&trans,   &kp NUM_1, &kp NUM_2, &kp NUM_3, &kp B, U_NA,     &kp F1,    &kp F2,    &kp F3, &kp F10, \
U_NP,     U_NP,      U_NA,      U_NA,      U_NA,  &kp RALT, &kp RCTRL, &kp RSHFT, U_NP,   U_NP

#define MIRYOKU_LAYERMAPPING_GAMEPLUS MIRYOKU_MAPPING

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,     "Base") \
MIRYOKU_X(EXTRA,    "Extra") \
MIRYOKU_X(TAP,      "Tap") \
MIRYOKU_X(BUTTON,   "Button") \
MIRYOKU_X(NAV,      "Nav") \
MIRYOKU_X(MOUSE,    "Mouse") \
MIRYOKU_X(MEDIA,    "Media") \
MIRYOKU_X(NUM,      "Num") \
MIRYOKU_X(SYM,      "Sym") \
MIRYOKU_X(FUN,      "Fun") \
MIRYOKU_X(GAME,     "Game") \
MIRYOKU_X(GAMEPLUS, "Game+")

#define U_BASE     0
#define U_EXTRA    U_GAME
#define U_TAP      2
#define U_BUTTON   3
#define U_NAV      4
#define U_MOUSE    5
#define U_MEDIA    6
#define U_NUM      7
#define U_SYM      8
#define U_FUN      9
#define U_GAME     10
#define U_GAMEPLUS 11
