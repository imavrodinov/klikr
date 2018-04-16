#Klikr

Klikr is an old project I had lying around, finally got round to building a prototype of it. The idea is simple - this device attaches to your wrist, and only does one thing - send a barely noticeable vibration every five minutes. Partially inspired by Pavlovian Conditioning, wearing Klikr for a few weeks should supposedly give you a better sense of time.

Fusion360 | Original Prusa i3 MK2 | Afafruit | Sparkfun

## Build instructions

I designed Klikr with simplicity in mind, so the enclosure and straps just snap fit together - no bolts or nuts necessary.

###Enclosure

You can use any FDM filament to print the enclosure - PLA works just fine.

The strap slits require some bridging, so does the top part of the upper case.

If you want the logo in a different color, add M600 (filament change command for Marlin based firmware) at height 5.4mm in your .gcode file.

###Straps

You need to print both straps using flexible filament - I used FilaFlex, but any TPU based material should work fine.

Strap buckle not included, but any generic one would do. Mine was recycled from an old Pebble watch.

###Electronics

Klikr is designed to be MCU agnostic, so any small chip along with the required components should fit snuggly. I tested my prototype using Adafruit's Pro Trinket with a power regulating LiPo bagpack soldered to it and a small 120 mAh battery. There's barely any processing power involved, so an ATtiny85 might probably be a better choice here.

Just follow the schematic to wire everything together, and make sure the vibration motor is placed at the bottom and secured with double sided tape or some hot glue. V2 of the enclosure will have a dedicated slot of the motor and cutouts for USB charging.
