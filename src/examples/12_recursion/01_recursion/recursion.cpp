#include "recursion.h"

using std::cout;

void runaway_recursion()
{
    cout<<"runaway...\n";
    runaway_recursion();
}
void infinite_loop()
{
    while(true)
    {
        cout<<"infinite...\n";
    }
}

//Write code for recursive display function
void display(int num)
{
    if(num == 0)
    {
        cout<<"base case\n";
        return;
    }

    cout<<"load to stack"<<num<<"\n";
    display(num-1);
    
    cout<<"unload from stack\n";
}

//Write code for recursive factorial
int recursive_factorial(int num)
{
    int f;//track num * r
    int r; //track the return value of the function
    
    if( num == 0)
    {
        cout<<"base case\n";
        return 1;
    }

    cout<<"load to stack"<<num-1<<"\n";
    r = recursive_factorial(num-1);
    f = num * r;
    cout<<"unload from stack num:"<<num<<" r:"<<r<<" f:"<<f<<"\n";

    return f;   
}
