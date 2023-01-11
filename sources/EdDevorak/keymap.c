/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

// Tap Dance declarations
enum
{
    TD_LSFT_CAPS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TAB, KC_DOT, KC_COMM, KC_SCLN, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_H, KC_L, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        LCTL_T(KC_ESC), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_R, KC_T, KC_N, KC_S, KC_LBRC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        TD(TD_LSFT_CAPS), KC_NUBS, KC_SLSH, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, LSFT_T(KC_Z),
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, MO(1), KC_SPC, KC_ENT, MO(2), KC_RALT
        //`--------------------------'  `--------------------------'

        ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TAB, KC_NUM, KC_NO, KC_HOME, KC_END, KC_NO, KC_P1, KC_P2, KC_P3, KC_RBRC, KC_RPRN, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_INS, XXXXXXX, KC_UP, XXXXXXX, KC_DEL, KC_P4, KC_P5, KC_P6, KC_P0, KC_PSLS, KC_RCTL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_LOPT, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, KC_P7, KC_P8, KC_P9, KC_SLSH, LOPT_T(KC_PAST), KC_RSFT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, MO(4), KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_GRAVE, KC_MINS, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_F1, KC_F2, KC_F3, KC_F4, TG(3), KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TAB, KC_EQL, KC_UNDS, KC_EXLM, KC_ASTR, KC_LPRN, KC_F5, KC_F6, KC_F7, KC_F8, XXXXXXX, KC_RCTL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_LOPT, KC_CIRC, KC_AMPR, KC_QUOT, KC_BSLS, KC_F9, KC_F10, KC_F11, KC_F12, KC_LOPT, KC_RSFT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, MO(4), KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_LBRC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_B, KC_N, KC_M, XXXXXXX, XXXXXXX, TG(3),
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [4] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAIL, KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, KC_VOLU, KC_MPRV, KC_MNXT, XXXXXXX, KC_BRIU, KC_SLEP,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        )};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation)
{
    if (!is_keyboard_master())
    {
        return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    }
    return rotation;
}

#define DVORAK 0
#define NUMPAD 2
#define SIMBOLS 4
#define GAME 8
#define RGB 16

void oled_render_layer_state(void)
{
    oled_write_P(PSTR("CAPA: "), false);
    switch (layer_state)
    {
    case DVORAK:
        oled_write_ln_P(PSTR("DVORAK"), false);
        break;
    case NUMPAD:
        oled_write_ln_P(PSTR("NUMPAD"), false);
        break;
    case SIMBOLS:
        oled_write_ln_P(PSTR("SIMBOLS"), false);
        break;
    case GAME:
        oled_write_ln_P(PSTR("GAME"), false);
        break;
    case RGB:
    case RGB | NUMPAD:
    case RGB | SIMBOLS:
    case RGB | NUMPAD | SIMBOLS:
        oled_write_ln_P(PSTR("RGB"), false);
        break;
    }
}

// DECLARACIÓN PARA RGB MO1 MO2 Y BLOCK MAYÚS
void rgb_matrix_indicators_user(void)
{
#ifdef RGB_MATRIX_ENABLE
    switch (biton32(layer_state))
    {
    /*case NUMPAD:
        for (int i = 0; i < DRIVER_LED_TOTAL; i++)
        {
            rgb_matrix_set_color(i, 255, 0, 0);

        }
        break;

    case SIMBOLS:
        for (int i = 0; i< DRIVER_LED_TOTAL; i++)
        {
            rgb_matrix_set_color(i, 0, 0, 255);
        }
        break;*/
    default:
        if (host_keyboard_leds() & (1 << USB_LED_CAPS_LOCK))
        {
            {
                rgb_matrix_set_color(26, 255, 128, 0);
            }
        }
        break;
    }
#endif
}
// PRUEBA LED DEL CAPS LOCK
#define LED_CAPS_LOCK_PIN A5
#define LED_PIN_ON_STATE 1

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

// HASTA AQUÍ LO DE TAP DANCE
char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record)
{
    char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX))
    {
        keycode = keycode & 0xFF;
    }
    if (keycode < 60)
    {
        name = code_to_name[keycode];
    }

    // update keylog
    snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
             record->event.key.row, record->event.key.col,
             keycode, name);
}

void oled_render_keylog(void)
{
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status)
{
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status)
    {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    }
    else
    {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void)
{
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void)
{
    if (is_keyboard_master())
    {
        oled_render_layer_state();
        oled_render_keylog();
    }
    else
    {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    if (record->event.pressed)
    {
        set_keylog(keycode, record);
    }
    return true;
}
#endif // OLED_ENABLE
