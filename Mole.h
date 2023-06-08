#ifndef MOLE_H
#define MOLE_H

#include "DigitalOut.h"
#include "mbed.h"

class Mole {
public:
    Mole(PinName ledPin);
    void show();
    void hide();

private:
    DigitalOut led;
};

#endif
