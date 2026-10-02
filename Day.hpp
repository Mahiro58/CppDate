#ifndef DAY_HPP
#define DAY_HPP

#include "Month.hpp"
#include "Year.hpp"
#include <stdexcept>

//Day class is checking if the number of days is correct.

class Day{
    public:
        Day(const Year& year, Month maxDays, int value);
        int getValue();

    private:
        int value;
        bool isValid();
        Month maxDays;
};

#endif