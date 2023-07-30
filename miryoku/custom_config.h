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