#include<iostream>
#include "constants.h"

using std::cin;
using std::cout;

int main()
{
    cout<<RATE<<"\n";
    //RATE = .99; this generates a compile error .. syntax -> binary -> executable

    auto amount = 0;

    cout<<"Enter amount: ";
    cin>>amount;

    double result = calculat_interest(amount);
    cout<<"Result: "<<result<<"\n";

    return 0;
}