#include "HID_Keyboard.h"
#include "keys.h"
// Example key sequences for the Manhattan 4/8 port HDMI switch
// https://manhattanproducts.eu/products/manhattan-en-8-port-hdmi-kvm-switch-152785


uint8_t KEY_SEQUENCE_0[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_1, 0 };           // Switch to port 1
uint8_t KEY_SEQUENCE_1[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_2, 0 };           // Switch to port 2
uint8_t KEY_SEQUENCE_2[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_3, 0 };           // Switch to port 3
uint8_t KEY_SEQUENCE_3[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_4, 0 };           // Switch to port 4
uint8_t KEY_SEQUENCE_4[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_5, 0 };           // Switch to port 5
uint8_t KEY_SEQUENCE_5[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_6, 0 };           // Switch to port 6
uint8_t KEY_SEQUENCE_6[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_7, 0 };           // Switch to port 7
uint8_t KEY_SEQUENCE_7[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_8, 0 };           // Switch to port 8
uint8_t KEY_SEQUENCE_8[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_SPACE, 0 };       // Switch to automatic switching mode
uint8_t KEY_SEQUENCE_9[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_PAGE_UP, 0 };     // Next port
uint8_t KEY_SEQUENCE_10[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_PAGE_DOWN, 0 };  // Previous port
uint8_t KEY_SEQUENCE_11[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_KP_PLUS, 0 };    // Increase auto interval
uint8_t KEY_SEQUENCE_12[] = { KEY_SCROLL_LOCK, KEY_SCROLL_LOCK, KEY_KP_MINUS, 0 };   // Decrease auto interval