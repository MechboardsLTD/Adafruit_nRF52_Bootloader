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

#ifndef _LILY_W2G_H
#define _LILY_W2G_H

#define _PINNUM(port, pin) ((port) * 32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/

#define LEDS_NUMBER 1
#define LED_PRIMARY_PIN _PINNUM(1, 12) // Red
#define LED_STATE_ON 0

#define LED_RGB_RED_PIN _PINNUM(1, 12)
#define LED_RGB_GREEN_PIN _PINNUM(1, 5)
#define LED_RGB_BLUE_PIN _PINNUM(1, 7)
#define BOARD_RGB_BRIGHTNESS 0x404040

#define LED_STATE_ON 0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTON_DFU _PINNUM(0, 7)
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "Mechboards"
#define BLEDIS_MODEL "Lily W2G Bootloader"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID 0x239A
#define USB_DESC_UF2_PID 0x00B3
#define USB_DESC_CDC_ONLY_PID 0x00B3

#define UF2_PRODUCT_NAME "Lily W2G"
#define UF2_VOLUME_LABEL "LILY-W2G-R"
#define UF2_BOARD_ID "nRF52840-lily-w2g"
#define UF2_INDEX_URL "https://mechboards.co.uk/"

#endif // _LILY_W2G_H
