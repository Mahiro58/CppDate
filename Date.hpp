#ifndef DATE_CPP
#define DATE_CPP

#include "Year.hpp"
#include "Month.hpp"
#include "Day.hpp"


class Date{

    public:
        Date();
        Date(Year year, Month month, Day day);
        Date(const Year& y, Month m = 1, Day d = 1);

    private:
        const Year& year;

};

#endif