// Copyright 2021 Manna Harbour
// Copyright 2025 Jason Fuchs
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_LAYER_GAME \
&kp TAB,   &kp Q,     &kp W,     &kp E,     &kp R,          &trans,  &trans,   &trans,     &trans, &trans, \
&kp LSHFT, &kp A,     &kp S,     &kp D,     &kp F,          &trans,  &trans,   &trans,     &trans, &trans, \
&kp LCTRL, &kp NUM_1, &kp NUM_2, &kp NUM_3, &kp NUM_4,      &trans,  &trans,   &trans,     &trans, &trans, \
U_NP,      U_NP,      &kp LALT,  &kp SPC,   &mo U_GAMEPLUS, &kp RET, &kp BSPC, &to U_BASE, U_NP,   U_NP

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define MIRYOKU_LAYER_GAMEPLUS \
&kp ESC,   &kp Q,     &kp W,     &kp E,     &kp T,     &trans,  &trans,   &trans,     &trans, &trans, \
&kp LSHFT, &kp A,     &kp S,     &kp D,     &kp G,     &trans,  &trans,   &trans,     &trans, &trans, \
&kp LCTRL, &kp NUM_5, &kp NUM_6, &kp NUM_7, &kp NUM_8, &trans,  &trans,   &trans,     &trans, &trans, \
U_NP,      U_NP,      &kp LALT,  &kp SPC,   &none,     &kp RET, &kp BSPC, &to U_BASE, U_NP,   U_NP

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
