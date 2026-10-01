#ifndef DAY_HPP
#define DAY_HPP

class Day{
    public:
        Day();
        int getValue();

    private:
        int value;
        bool isValid();
};

#endif