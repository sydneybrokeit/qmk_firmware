/* Copyright 2022 JasonRen(biu)
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
#include "sp60.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    {
        {51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64},
        {50,  49,  48,  47,  46,  45,  44,  43,  42,  41,  40,  39,  38,  37},
        {24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,   NO_LED,  36},
        {23,  22,  21,  20,  19,  18,  17,  16,  15,  14,  13,   NO_LED,  12,  11},
        {0,  1,  2,  3,  4,  5,  6,  7,   NO_LED,   NO_LED,  8,   NO_LED,  9,  10}
    },
    {
        {0,64},{17,64},{34,64},{52,64},{69,64},{86,64},{103,64},{121,64},              {172,64},       {207,64},{224,64},
        {224,48},{207,48},       {172,48},{155,48},{138,48},{121,48},{103,48},{86,48},{69,48},{52,48},{34,48},{17,48},{0,48},
        {0,32},{17,32},{34,32},{52,32},{69,32},{86,32},{103,32},{121,32},{138,32},{155,32},{172,32},{190,32},       {224,32},
        {224,16},{207,16},{190,16},{172,16},{155,16},{138,16},{121,16},{103,16},{86,16},{69,16},{52,16},{34,16},{17,16},{0,16},
        {0,0},{17,0},{34,0},{52,0},{69,0},{86,0},{103,0},{121,0},{138,0},{155,0},{172,0},{190,0},{207,0},{224,0}
    },
    {
      // LED Index to Flag
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4
    }
};

void keyboard_post_init_kb(void) {
    rgb_matrix_reload_from_eeprom();
}

#endif



bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) {
        return false;
    }
    switch (keycode) {
        case KC_LG:
            if (record->event.pressed) {
                process_magic(GUI_TOG, record);
            }
            return false;
        case KC_MACOS:
            if (record->event.pressed) {
                process_magic(CG_TOGG, record);
            }
            return false;
        case KC_MCTL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false;
        case KC_LPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false;
        default:
            return true;
    }
    return true;
}
