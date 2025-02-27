#include<iostream>

using std::cout;

int main()
{
    auto num = 10, num1 = 20;

    cout<<"Num value: "<<num<<"\n";
    cout<<"Num variable is at address: "<<&num<<"\n";//memory operator &

    cout<<"Num1 value: "<<num1<<"\n";
    cout<<"Num1 variable is at address: "<<&num1<<"\n";

    return 0;
}