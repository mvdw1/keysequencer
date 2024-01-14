# keysequencer
SW, electronics, and 3d design for a simple USB key sequencer. Can for example be used to send a sequence of keypresses to a PC or peripheral upon a button press.
# Software
Currently the software is a quite simple Arduino program.
Used settings:
- Raspberry pi pico/RP2040 boards package v 3.6.3 (
https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json)
- Board Waveshare RP2040 zero
- Debug port: Serial
- USB stack: Pico SDK 

# Hardware
The hardware design is a simple PCB, on which the keys can be soldered. Readout of the keys and making the programmed keysequences is done by using an off the shelff (Waveshare) RP2040 zero board.
# Mechanics
The mechanic design is a stack of 3 PCBs with 3d printed spacers in between. Two options (and/or combi of these 2 options) can be done:
- Use the dedicated designs for bottom, top, and middle. You'll need to order 3 different PCBs for this however
- Using only the middle ('functional') PCB for bottom, top, and middle. This saves ordering 3 types of PCB, but leaves you with some holes in the bottom and top PCB.

The spacers for in between the PCB's can be 3d printed. Connecting everything together can be done using standard m3 screws. Thanks to my Dad for designing (and 3d printing) the spacers.
If you donot have a 3d printer, you can also use standard spacers (e.g. 4x3mm spacer or longer for the bottom and 4x 7mm or longer for the top)
# License
This is licensed as open source HW / SW (GPLv3 for SW). Feel free to use it.
# TODO
Some improvements that could be done in the future:
- Rewrite the code to be more efficient
- Add features like keycombo's, programmability through serial port
- Make PCB design with on board components instead of using the RP2040 zero
