# arduino-uno-morse-code
This is a library to output morse code on any pin on the arduino uno (or it's clones)

## Usage
text_to_morse("Your sentence here")
    This is used to convert sentences to morse code, as of now special charecters, and **UPPER CASE LETTERS are not *yet* supported**

dot(number of times to transmit) is pretty self explanatory;

same with dash(number of times to transmit);

## Configuration
At the top of the file arduino-uno-morse-code.ino

you can set the time period of a dot
and the time period of a dash as a multiple of the dot's time period (it's a standard)

You can calculate the speed in wpm by:
    UNIT_TIME = 1200 / w

where w is in words per minute and UNIT_TIME in ms

You can also mess with Space Time and stuff
(just make sure you dont create a black hole by tearing the fabric)

oh, and setting the morse pin as well
it's the first line.
