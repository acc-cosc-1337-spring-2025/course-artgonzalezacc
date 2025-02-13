#include<iostream>
#include<limits.h> //access to INT_MAX

using std::cout;

int main()
{
    int max_int = INT_MAX;
    cout<<"Max int: "<<max_int<<"\n";

    max_int += 1;
    cout<<"Max int: "<<max_int<<"\n";

    //size of int
    cout<<sizeof(max_int)<<"\n";

    char letter = 'a';
    cout<<sizeof(letter)<<"\n";

    double num = 10.5;
    cout<<sizeof(num)<<"\n";

    float floatVar = 3.0E-47; //C++ can't represent a number that's too close to 0
    cout<<"Value of floatVar: "<<floatVar<<"\n";


    return 0;
}