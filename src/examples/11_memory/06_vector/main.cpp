//
#include "my_vector.h"

using std::cout; using std::string;

int main()
{
    MyVector<int> ints;
    ints.PushBack(5);
    ints.PushBack(10);

    cout<<ints[0]<<"\n";
    cout<<ints[1]<<"\n";
    
    MyVector<double> doubles;
    doubles.PushBack(5.5);
    doubles.PushBack(8.8);
    
    cout<<doubles[0]<<"\n";
    cout<<doubles[1]<<"\n";
    
    MyVector<float> floats;
    floats.PushBack(5.5);
    floats.PushBack(8.8);

    cout<<floats[0]<<"\n";
    cout<<floats[1]<<"\n";


    return 0;
}

