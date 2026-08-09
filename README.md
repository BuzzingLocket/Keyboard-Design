# May 8th 2026 Initial Release 🚀
- 80% keyboard ansi
- Missing a ctrl key on the righthand side
- Uses a Raspberry Pi Pico as the MCU, I was too lazy to implement my own rp2040 MCU design
- Firmware will be updated at a later date
- Everything is designed to be hand soldered
- Printed using a lpkf protomat s103 with traces at 0.4mm, and vias at 0.6mm

# May 14th 2026 Hotfix 🛠️
- lpkf protomat s103 requires vias at 0.8mm diameter with a hole of 0.4mm
- Not the same as 0.6mm diameter with a hole of 0.3mm
- Decided to print with JLCPCB instead of school PCB printer due to costs

# June 2nd 2026 Firmware Release 🚀
- Added QMK firmware
- Full matrix finished
- RGB added
- Could be errors, requires more testing
- QMK uses HSV (hue, saturation, value) not RGB (Red, Green, Blue)

# June 14th 2026 Firmware Update ⚡
- Finalized the QMK firmware
- Edited the rotary encoder resolution from 2 --> 4
- Switched GP21 and GP20 due to preference
- Finished testing keyboard
- Uploaded as .c file

# June 20th 2026 Case Design Release 🚀
- Learned how to use Fusion360
- Created bottom case housing
- Pillars for M2 screws and for support
- 4mm base depth
- 5mm wide walls
- 6mm pillars for pcb to lie on-top
- Designed for M2x4mm (3.5mm width) heat inserts
- Designed for M2x5mm screws
- Uploaded as .STEP and .STL

# June 20th 2026 Firmware Quality of Life ✨
- Uploaded .uf2 file for firmware
- Renamed folders for recognition
- Removed USB C datasheet as it was not used

# August 7th 2026 Keyboard Case Update⚡
- Had to go do some tasks for work so I could not update this for a while
- Went on vacation so long break was taken
- Old keyboard design was not accurate Ie. sides were 5.231mm not 5mm
- Added 1mm tolerance to each edge
- Added holes into the walls
  - Allows for a top portion of the case
      - Higher case level
      - Covers the exposed microcontroller
   
# August 9th 2026 Keyboard Case Update⚡
- Uploaded top case files .stl and .step
- Started the top case design
- Added pillars to insert into sockets from the bottom case
- Added a cover for the Pi Pico
