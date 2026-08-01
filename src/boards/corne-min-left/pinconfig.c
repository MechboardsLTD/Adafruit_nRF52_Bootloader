#include "board.h"
#include "boards.h"
#include "uf2/configkeys.h"

__attribute__((used, section(".bootloaderConfig")))
const uint32_t bootloaderConfig[] = {
    /* CF2 START */
    CFG_MAGIC0,
    CFG_MAGIC1, // magic
    5,
    100, // used entries, total entries

    204,
    0x100000, // FLASH_BYTES = 0x100000
    205,
    0x40000, // RAM_BYTES = 0x40000
    208,
    (USB_DESC_VID << 16) |
        USB_DESC_UF2_PID, // BOOTLOADER_BOARD_ID = USB VID+PID, used for
                          // verification when updating bootloader via uf2
    209,
    0xada52840, // UF2_FAMILY = 0xada52840
    210,
    0x20, // PINS_PORT_SIZE = PA_32

    0, 0, 0, 0, 0, 0, 0, 0
    /* CF2 END */
};


void board_init2(void)
{
  // Rows as outputs
  nrf_gpio_cfg_output(FIRST_ROW);
  nrf_gpio_cfg_output(SECOND_ROW);

  nrf_gpio_pin_set(FIRST_ROW);
  nrf_gpio_pin_set(SECOND_ROW);

  // Columns as inputs with pullups
  nrf_gpio_cfg_input(FIRST_COL, NRF_GPIO_PIN_PULLUP);
  nrf_gpio_cfg_input(SECOND_COL, NRF_GPIO_PIN_PULLUP);
}
