#include <Arduino.h>
#include "pico/unique_id.h"
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include <Keyboard.h>
#include "keys.h"
// Switching keysequences can be done (for now) by changing which header is included
//#include "key_sequence_test.h"
#include "key_sequence_manhattan.h"
#define INTER_PRESS_RELEASE_DELAY 5
#define INTER_KEY_DELAY 45
#define DEBOUNCE_DELAY 50

// Button pins
const uint BUTTON_PINS[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
// Array to keep track of already pressed keys
uint btnPressed[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Amount of buttons
const uint NUM_BUTTONS = sizeof(BUTTON_PINS) / sizeof(BUTTON_PINS[0]);


uint8_t *KEY_SEQUENCES[] = { KEY_SEQUENCE_0,
                             KEY_SEQUENCE_1,
                             KEY_SEQUENCE_2,
                             KEY_SEQUENCE_3,
                             KEY_SEQUENCE_4,
                             KEY_SEQUENCE_5,
                             KEY_SEQUENCE_6,
                             KEY_SEQUENCE_7,
                             KEY_SEQUENCE_8,
                             KEY_SEQUENCE_9,
                             KEY_SEQUENCE_10,
                             KEY_SEQUENCE_11,
                             KEY_SEQUENCE_12 };

void setup() {

  // Set button pins as inputs
  for (uint i = 0; i < NUM_BUTTONS; ++i) {
    pinMode(BUTTON_PINS[i], INPUT_PULLUP);
  }
  Serial.begin(115200);
  Serial.println("RP2040 Keyboard Emulation\n");

  // Start a new core for keyboard emulation
  multicore_launch_core1(keyboardTask);
}

void loop() {
  // Main program loop to read button status (empty in this example)
}
/** 
  * @brief task that handles the keyboard codes
  */
void keyboardTask() {
  // Delay to allow USB enumeration
  delay(2000);
  while (true) {
    // Read the status of buttons and perform keyboard actions
    for (uint i = 0; i < NUM_BUTTONS; ++i) {
      if (!digitalRead(BUTTON_PINS[i])) {
        if (btnPressed[i] == 0) {
          Serial.print("Key pressed");
          Serial.println(i);
          pressKeys(KEY_SEQUENCES[i], INTER_PRESS_RELEASE_DELAY, INTER_KEY_DELAY);
          // Mark as pressed
          BUTTON_PRESSED[i] = 1;
        }
      } else {
        BUTTON_PRESSED[i] = 0;
      }
    }
    delay(DEBOUNCE_DELAY);  // Debouncing delay TODO make actual debounce
  }
}


/**
  * @brief Function to press a key sequence. Presses sequences untill the item equals 0
  * @param keySequence pointer to the first entry of key sequence to press
  * @param delayPressRelease delay inbetween press and release
  * @param interDelayMs delay in between subsequent keys
*/
void pressKeys(uint8_t *keySequence, uint delayPressRelease, uint interDelayMs) {
  while (*keySequence != 0) {
    Keyboard.write(*keySequence);
    delay(delayPressRelease);
    Keyboard.release(*keySequence);
    keySequence += sizeof(uint8_t);
    delay(interDelayMs);
  }
}