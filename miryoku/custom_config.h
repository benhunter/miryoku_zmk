// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_NAV_VI

// 2023-07-30
// Added for nice!view on corne wireless from BeeKeeb.
&nice_view_spi {
 cs-gpios = <&pro_micro 0 GPIO_ACTIVE_HIGH>;
};

// 2023-09-16
// Override the QWERTY Base Layer
// Mod-Tap: U_MT(MOD, TAP) 
// Layer-Tap: U_LT(LAYER, TAP)
#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P, \
&kp A, U_MT(LGUI, S), U_MT(LALT, D), U_MT(LCTRL, F), U_MT(LSHFT, G), U_MT(LSHFT, H), U_MT(LCTRL, J), U_MT(LALT, K), U_MT(LGUI, L), &kp SQT, \
U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C, &kp V, &kp B, &kp N, &kp M, &kp COMMA, U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH),\
U_NP, U_NP, U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP, U_NP