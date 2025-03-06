#include "void.h"

void use_local_variable()
{
    //global = 20;  generates an error
    auto num = 5;//local variable
}

void use_global_variable()
{
    std::cout<<global<<"\n";
}

int show_area(double length, double width)
{
    return length * width;
}

double get_weekly_gross_pay(int hours, double rate)
{
    return hours * rate;
}

double get_weekly_gross_pay(double yearly_salary)
{
    return yearly_salary / 52;
}