#ifndef YEAR_CPP
#define YEAR_CPP

struct Year{
    int year;

    Year(int y) : year(y) {};

    int getYearValue(){
        return year;
    };
};

#endif