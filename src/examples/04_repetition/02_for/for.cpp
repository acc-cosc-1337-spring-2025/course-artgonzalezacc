#include "for.h"

using std::cout;

void use_for_loop(int num)
{
    for(auto i=0; i < num; i++)
    {
        cout<<"hello\n";
    }
}

int get_sum_of_squares_for(int num)
{
    auto sum = 0;

    for(auto i = 0; i < num; i++)
    {
        sum += (i + 1) * (i + 1);
    }

    return sum;
}


//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/

