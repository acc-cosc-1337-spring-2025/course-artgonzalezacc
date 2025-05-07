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


//Write code for recursive factorial
