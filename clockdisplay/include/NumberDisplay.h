#ifndef NUMBERDISPLAY_H
#define NUMBERDISPLAY_H


class NumberDisplay
{
    public:
        NumberDisplay();
        virtual ~NumberDisplay();
        bool increase();
    protected:

    private:
        int limit;
        int value;
};

#endif // NUMBERDISPLAY_H
