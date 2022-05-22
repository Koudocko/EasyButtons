#ifndef BTN_H
#define BTN_H

class Button{
public:

private:
    bool state;
    unsigned long lightLength, timeStart{}, timeElapsed{};
    unsigned long pinNum;
};

#endif