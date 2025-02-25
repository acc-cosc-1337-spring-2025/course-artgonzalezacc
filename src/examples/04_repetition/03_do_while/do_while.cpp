#include "do_while.h"

using std::cin;
using std::cout;

void use_do_while(int num)
{
    do
    {
        cout<<"Hello\n";
        num--;

    } while (num > 0);
    
}

int get_sum_of_squares_do(int num)
{
    auto sum = 0;
        
    do
    {
        sum += num * num;
        num--;
    } while (num > 0);


    return sum;
}

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'y';

    do
    {
        cout<<"Enter y to continue: ";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');
    
}


