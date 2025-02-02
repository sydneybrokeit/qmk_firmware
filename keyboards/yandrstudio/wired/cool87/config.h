/* Copyright 2021 JasonRen(biu)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xAA96
#define PRODUCT_ID 0xAA01
#define DEVICE_VER 0x0001
#define MANUFACTURER    YandR studio
#define PRODUCT         Y&R-Cool87


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

/* key matrix pins */
#define MATRIX_ROW_PINS { B1, B2, B3, B0, D3, D0 }
#define MATRIX_COL_PINS { E6, F0, F1, F4, F5, F6, F7, C7, C6, B6, B5, B4, D7, D6, B7, D2, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW



/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE



#define RGB_DI_PIN D5
#ifdef RGB_DI_PIN
#   define RGBLIGHT_ANIMATIONS
#   define RGBLED_NUM 1
#   define RGBLIGHT_HUE_STEP 8
#   define RGBLIGHT_SAT_STEP 8
#   define RGBLIGHT_VAL_STEP 8
#endif
