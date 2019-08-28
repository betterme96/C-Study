#ifndef CLOCKDISPLAY_H
#define CLOCKDISPLAY_H
#include "NumberDisplay.h"

class ClockDisplay
{
    public:
        ClockDisplay();
        virtual ~ClockDisplay();
        void start();
    protected:

    private:
        NumberDisplay hours;
        NumberDisplay minutes;

};

#endif // CLOCKDISPLAY_H
