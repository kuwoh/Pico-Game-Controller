#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

#define SW_GPIO_SIZE 18              // Number of switches
#define LED_GPIO_SIZE 3             // Number of switch LEDs
#define ENC_GPIO_SIZE 2              // Number of encoders
#define ENC_PPR 600                  // Encoder PPR
#define ENC_DEBOUNCE true            // Encoder Debouncing
#define ENC_PULSE (ENC_PPR * 4)      // 4 pulses per PPR
#define REACTIVE_TIMEOUT_MAX 500000  // Cycles before HID falls back to reactive
#define WS2812B_LED_SIZE 1          // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 1          // Number of WS2812B LED Zones
#define WS2812B_LEDS_PER_ZONE \
  WS2812B_LED_SIZE / WS2812B_LED_ZONES  // Number of LEDs per zone

#ifdef PICO_GAME_CONTROLLER_C

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {HID_KEY_4, HID_KEY_5, HID_KEY_6, HID_KEY_7,
                              HID_KEY_R, HID_KEY_T, HID_KEY_Y, HID_KEY_U,
                              HID_KEY_F, HID_KEY_G, HID_KEY_H, HID_KEY_J,
                              HID_KEY_V, HID_KEY_B, HID_KEY_N, HID_KEY_M,
                              HID_KEY_I, HID_KEY_O};
const uint8_t SW_GPIO[] = {
    4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21
};
const uint8_t LED_GPIO[] = {
    22, 26, 27
};
const uint8_t ENC_GPIO[] = {0, 2};      // L_ENC(0, 1); R_ENC(2, 3)
const bool ENC_REV[] = {false, false};  // Reverse Encoders
const uint8_t WS2812B_GPIO = 28;

#endif

extern bool joy_mode_check;

#endif
