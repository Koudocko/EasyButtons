#ifndef BTN_H
#define BTN_H

class Button{
public:
    Button(unsigned long pin, unsigned long delay, void (*func)()) : pinNum{pin}, pushDelay{delay}, callback{func}{}
    bool get();
    void run();

private:
    void (*callback)();
    unsigned long pushDelay, timeLast{}, timeCurr{};
    unsigned long pinNum;
};

#endif