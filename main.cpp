#include <iostream>
#include "Day.hpp"
#include "Month.hpp"
#include "Date.hpp"
#include "Year.hpp"

int main()
{
    Year y = 2010;
    Month m = 1;
    Day d = 1;

    std::cout<<"Year: "<<y.getYearValue()<<std::endl;
    std::cout<<"Month: "<<m.getMonthVaue()<<std::endl;
    std::cout<<"Day: "<<d.getValue()<<std::endl;

    return 0;
}