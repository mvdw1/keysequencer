# keysequencer
SW, electronics, and 3d design for a simple USB key sequencer
# Software
Currently the software is a quite simple Arduino program
# Hardware
The hardware design is a simple PCB, on which the keys can be soldered. Readout of the keys and making the programmed keysequences is done by using an off the shelff (Waveshare) RP2040 zero board.
# Mechanics
The mechanic design is a stack of 3 PCBs with 3d printed spacers in between. Two options (and/or combi of these 2 options) can be done:
- Use the dedicated designs for bottom, top, and middle. You'll need to order 3 different PCBs for this however
- Using only the middle ('functional') PCB for bottom, top, and middle. This saves ordering 3 types of PCB, but leaves you with some holes in the bottom and top PCB.
# License
This is licensed as open source HW / SW (GPLv3 for SW). Feel free to use it.
# TODO
Some improvements that could be done in the future:
- Rewrite the code to be more efficient
- Add features like keycombo's, programmability through serial port
- Make PCB design with on board components instead of using the RP2040 zero