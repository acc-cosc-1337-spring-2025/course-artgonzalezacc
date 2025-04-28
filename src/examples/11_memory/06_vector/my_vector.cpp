#include "my_vector.h"

using std::cout;

MyVector::MyVector(int c) : capacity(c), elements{new int[c]}
{
    cout<<"Constructor MyVector(c) created memory at: "<<elements<<"\n";
}

MyVector::~MyVector()
{
    cout<<"Destructor ~MyVector() deleting memory at: "<<elements<<"\n";
    delete[] elements;
}

