#include "while.h"

using std::cout;

void use_while_loop(int num)
{
    auto counter = 0;

    while(counter < num)
    {
        cout<<"hello\n";
        counter++;
    }
        
}
/*Using a while loop write code for sum_of_squares function that accepts an int and returns  
the sum of all the squares of that number from 1 to the number. 
Example: sum_of_squares(4) 
1*1 + 2 * 2 + 3*3 +  4*4  +5*5 =55
1*1 + 2 * 2 + 3*3 + 4*4 = 30
1*1 + 2 * 2 + 3*3 = 14
*/

int get_sum_of_squares(int num)
{
    auto sum = 0;

    while(num > 0)
    {
        sum += num * num;
        num--;  
    }

    return sum;
}


void nested_while_loop(int num)
{
    auto i = 0;

    while(i < num)
    {
        auto j = 0;
        cout<<"Outer loop...\n";
        
        while(j < num)
        {
            cout<<"\tInner loop...\n";
            j++;
        }

        i++;
    }
}

//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/

