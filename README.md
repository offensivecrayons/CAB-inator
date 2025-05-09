# CAB-inator
Are you tired of your change board constantly having to type out “rejected” on any and all requests for change. Look no further as this simple gadget simplifies this process.

Requirements:
 Arduino Leonardo (or any other Ardunio that can process USB signal as not every Ardunio that has a USB port can process USB signals)
10K resistor,
USB C cable (or suitable interface cable for your Leonardo)
A button (preferably momentary but you’re the boss, boss)

1) wire pin 5 to one side of the button
2) wire pin 3 to the other side of the button
3) wire pin 5 (or the pin 5 side of the button) to ground using the 10k resistor (this is a pull down resistor to stop floating values otherwise you will see strange behaviour)
4) plug in the leonardo to the computer and flash with the cabinator.ino

Troubleshooting:

Ensure that your 10K resistor is in place

if you are having issues with h.keyboard, update the arduino IDE and download the latest h.keyboard package as it does not come pre-installed with the latest IDE
