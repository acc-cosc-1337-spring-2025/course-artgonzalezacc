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
