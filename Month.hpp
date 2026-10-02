#ifndef MONTH_HPP
#define MONTH_HPP

#include "Year.hpp"
#include <stdexcept>

// this class store months in enums and checking for max days in a month.

class Month{

    public:
        enum Type {
            january = 1, february, march, april, may, june, july, august, september, november, october, december

        };
        Month(Type m);
        Month(int monthNumber);
        Month();
        int getMaxDays(const Year& year);
        int getMonthVaue();
        
    private:
        Type value;

};

#endif