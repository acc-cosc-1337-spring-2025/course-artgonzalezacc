#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "C++";

    cout<<lang<<"\n";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"capacity: "<<lang.capacity()<<"\n\n";

    lang.append("123456789012");

    cout<<lang<<"\n";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"capacity: "<<lang.capacity()<<"\n\n";

    lang.append("1");

    cout<<lang<<"\n";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"capacity: "<<lang.capacity()<<"\n";

    return 0;
}