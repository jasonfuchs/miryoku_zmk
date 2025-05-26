// Copyright 2021 Manna Harbour
// Copyright 2025 Jason Fuchs
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define U_GAME     10
#define U_GAMEPLUS 11

#define MIRYOKU_LAYER_GAME \
&kp TAB,   &kp Q,     &kp W,     &kp E,     &kp R,          &trans,  &trans,   &trans,     &trans, &trans, \
&kp LSHFT, &kp A,     &kp S,     &kp D,     &kp F,          &trans,  &trans,   &trans,     &trans, &trans, \
&kp LCTRL, &kp NUM_1, &kp NUM_2, &kp NUM_3, &kp NUM_4,      &trans,  &trans,   &trans,     &trans, &trans, \
U_NP,      U_NP,      &kp LALT,  &kp SPC,   &mo U_GAMEPLUS, &kp RET, &kp BSPC, &to U_BASE, U_NP,   U_NP

#define MIRYOKU_LAYER_GAMEPLUS \
&kp ESC,   &kp G,     &kp W,     &kp X,     &kp T,     &trans,  &trans,   &trans,     &trans, &trans, \
&kp LSHFT, &kp A,     &kp S,     &kp D,     &kp B,     &trans,  &trans,   &trans,     &trans, &trans, \
&kp LCTRL, &kp NUM_5, &kp NUM_6, &kp NUM_7, &kp NUM_8, &trans,  &trans,   &trans,     &trans, &trans, \
U_NP,      U_NP,      &kp LALT,  &kp SPC,   &none,     &kp RET, &kp BSPC, &to U_BASE, U_NP,   U_NP

#define MIRYOKU_LAYER_EXTRA MIRYOKU_LAYER_GAME 
