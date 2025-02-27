#include "for.h"

using std::cout; using std::setw;

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

void multiplication_table_for(const int rows, const int cols)
{
    for(auto i=0; i < rows; i++)
    {
        for(auto j=0; j < cols; j++)
        {
            cout<<setw(4)<<(i + 1) * (j + 1);
        }

        cout<<"\n";
    }
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

