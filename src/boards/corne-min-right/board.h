/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Nick Winans
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _CORNE_MIN_H
#define _CORNE_MIN_H

#define _PINNUM(port, pin) ((port) * 32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/

#define LEDS_NUMBER 1
#define LED_PRIMARY_PIN _PINNUM(1, 11) // Red
#define LED_STATE_ON 0

#define LED_RGB_RED_PIN _PINNUM(1, 11)
#define LED_RGB_GREEN_PIN _PINNUM(1, 10)
#define LED_RGB_BLUE_PIN _PINNUM(0, 3)
#define BOARD_RGB_BRIGHTNESS 0x404040

#define LED_STATE_ON 0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER 2
#define BUTTON_1 _PINNUM(1, 6)
#define BUTTON_2 _PINNUM(1, 0)
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

#define ROW_0_PIN _PINNUM(0, 28)
#define ROW_1_PIN _PINNUM(0, 29)
#define ROW_2_PIN _PINNUM(0, 30)
#define ROW_3_PIN _PINNUM(0, 02)

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "Mechboards"
#define BLEDIS_MODEL "Corne Min Bootloader"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID 0x239A
#define USB_DESC_UF2_PID 0x00B3
#define USB_DESC_CDC_ONLY_PID 0x00B3

#define UF2_PRODUCT_NAME "Corne Min"
#define UF2_VOLUME_LABEL "CORNE-MIN"
#define UF2_BOARD_ID "nRF52840-corne-min"
#define UF2_INDEX_URL "https://mechboards.co.uk/"

#endif // _CORNE_MIN_H
