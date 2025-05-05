//
#include "my_vector.h"

using std::cout;

int main()
{
    MyVector vector(5);
    vector.PushBack(3);
    vector.PushBack(7);
    vector.PushBack(9);
    vector.PushBack(77);
    vector.PushBack(8);

    for(auto i=0; i < vector.Size(); i++)
    {
        cout<<vector[i]<<"\n";
    }

    return 0;
}

