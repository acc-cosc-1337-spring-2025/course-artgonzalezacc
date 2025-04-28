//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class MyVector
{
public:
    MyVector(int c);//constructor
    ~MyVector();//destructor
private:
    int size{0};//number of elements in the list
    int capacity;//total number of elements
    int* elements;
};

#endif
