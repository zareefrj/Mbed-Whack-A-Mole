#include "Mole.h"

Mole::Mole(PinName ledPin) : led(ledPin) {
    // Constructor: Initialize the mole with the specified LED pin
    hide();  // Initially hide the mole
}

void Mole::show() {
    // Turn on the LED to show the mole
    led = 1;
}

void Mole::hide() {
    // Turn off the LED to hide the mole
    led = 0;
}
