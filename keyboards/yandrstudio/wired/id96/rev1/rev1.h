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

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C,      k1E, k1F, k1G, k1H, k1I, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C,      k2E, k2F, k2G, k2H, k2I, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C,      k3E, k3F, k3G,           \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C,      k4E, k4F, k4G,      k4I, \
    k50, k51, k52,           k55,           k58, k59, k5A, k5B, k5C,      k5E, k5F, k5G            \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, XXX, k1E, k1F, k1G, k1H, k1I }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, XXX, k2E, k2F, k2G, k2H, k2I }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, XXX, k3E, k3F, k3G, XXX, XXX }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, XXX, k4E, k4F, k4G, XXX, k4I }, \
    { k50, k51, k52, XXX, XXX, k55, XXX, XXX, k58, k59, k5A, k5B, k5C, XXX, k5E, k5F, k5G, XXX, XXX } \
}

enum keyboard_keycodes {
#ifdef VIA_ENABLE
    LOCK_GUI = USER00,
    TOG_MACOS_KEYMAP,
    KC_MISSION_CONTROL,
    KC_LAUNCHPAD,
    NEW_SAFE_RANGE = SAFE_RANGE  // Important!
#else
    LOCK_GUI = SAFE_RANGE,
    KC_MISSION_CONTROL,
    KC_LAUNCHPAD,
    NEW_SAFE_RANGE   // Important!
#endif
};

#define KC_LG    LOCK_GUI
#define KC_MACOS TOG_MACOS_KEYMAP
#define KC_MCTL  KC_MISSION_CONTROL
#define KC_LPAD  KC_LAUNCHPAD
