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

MyVector::~MyVector()
{
    cout<<"Destructor ~MyVector() deleting memory at: "<<elements<<"\n";
    delete[] elements;
}

