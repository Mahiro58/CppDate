#include <iostream>
#include "Month.hpp"

Month::Month(Type m)
    : value(m)
{
    if(m < 1 || m > 12){
        throw std::invalid_argument("Month out of range.");
    }
    
};

Month::Month(int monthNumber)
{
    value = static_cast<Type>(monthNumber);
}

Month::Month()
{
    
}

int Month::getMaxDays(const Year& year)
{
    switch (value)
    {
    case 1:
        return 31;
        break;
    case 2:
        if(year.year % 4 == 0){
            return 29;
            break;
        }
        else{
            return 28;
            break;
        }        
    case 3:
        return 31;
        break;
    case 4:
        return 30;
        break;
    case 5:
        return 31;
        break;
    case 6:
        return 30;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 31;
        break;
    case 9: 
        return 30;
        break;
    case 10:
        return 31;
        break;
    case 11:
        return 30;
        break;
    case 12:
        return 31;
        break;        
    
    default:
        std::cout<<"Month out of range."<<std::endl;
        return -1;
        break;
    }
}

int Month::getMonthVaue()
{
    return static_cast<int>(value);
}