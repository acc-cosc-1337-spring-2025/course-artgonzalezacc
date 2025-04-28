#include "my_vector.h"

using std::cout;

MyVector::MyVector(int c) : capacity(c), elements{new int[c]}
{
    cout<<"Constructor MyVector(c) created memory at: "<<elements<<"\n";
}

MyVector::MyVector(const MyVector& v1) : size(v1.size),  capacity(v1.capacity), elements{new int[v1.capacity]}
{
    cout<<"Constructor MyVector(const MyVector& v) created memory at: "<<elements<<"\n";
    for(auto i=0; i < size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

/*
1-Create temporary memory for v2
2-Copy values from v1 into v2 temporary memory
3-Delete v1 elements memory
4-Point v2 elements to temporary memory
5-Set v2.size to v1.size
6-Return a reference to itself
*/
MyVector& MyVector::operator=(const MyVector& v1)
{
    int* temp = new int[v1.size];

    for(auto i=0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;
    elements = temp;
    cout<<"copy assignment new memory created at "<<elements<<"\n";

    size = v1.size;
    
    return *this;
}

MyVector::~MyVector()
{
    cout<<"Destructor ~MyVector() deleting memory at: "<<elements<<"\n";
    delete[] elements;
}

