//
#include "my_vector.h"
#include<string>

using std::cout; using std::string;

template<class T>
T add(T a, T b)
{
    return a + b;    
}

int main()
{
    auto result = add(5, 5);
    cout<<result<<"\n";

    auto result1 = add(5.6, 6.8);
    cout<<result1<<"\n";

    string str1 = "c++";
    string str2 = " is modern";
    auto result2 = add(str1, str2);
    
    cout<<result2<<"\n";


    return 0;
}

