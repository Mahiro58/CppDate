#include "Day.hpp"
#include <iostream>

Day::Day(const Year& year, Month monthMaxDays, int value) 
    : maxDays(monthMaxDays), value(value)
{
    if(maxDays.getMaxDays(year) < value){
        throw std::invalid_argument("Days out range.");
    }
    if(value < 1){
        throw std::invalid_argument("At least ode day is needed.");
    }
};
Day::Day(int dayNumber)
{
    value = 1;
}

int Day::getValue()
{
    return value;
}