#include "btn.h"

bool Button::get(){
    timeCurr = millis();

    if (timeCurr-timeLast >= pushDelay && digitalRead(pinNum)){
        timeLast = millis();
        return true;
    }

    return false;
}

void Button::run(){
    timeCurr = millis();

    if (timeCurr-timeLast >= pushDelay && digitalRead(pinNum)){
        timeLast = millis();
        callback();
    }
}