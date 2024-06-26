/**
 * Debouncing algorithm which sends a report immediately when a switch is triggered and holds it for n amount of time.
 * @author SpeedyPotato
 **/

uint16_t minimum_hold() {
    uint16_t translate_buttons = 0;
    for (int i = SW_GPIO_SIZE - 1; i >= 0; i--) {
      if (time_us_64() - sw_timestamp[i] <= SW_DEBOUNCE_TIME_US || !gpio_get(SW_GPIO[i])) {
        translate_buttons = (translate_buttons << 1) | 1;
      } else {
        translate_buttons <<= 1;
      }
    }
    return translate_buttons;
}