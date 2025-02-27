#include<iostream>

using std::cout;

int main()
{
    auto num = 10;
    //reference variable
    auto &num_ref = num; //num_ref will hold the address of num

    cout<<"Num value: "<<num<<"\n";//display the value of num
    cout<<"Num variable is at address: "<<&num<<"\n";//memory operator & reference

    cout<<"Value of num via num_ref: "<<num_ref<<"\n";//display the value of the memory address you store
    cout<<"Address that num_ref stores: "<<&num_ref<<"\n";//display the address of num

    num_ref = 20;
    cout<<"Num value: "<<num<<"\n";
    cout<<"Value of num via num_ref: "<<num_ref<<"\n";

    return 0;
}