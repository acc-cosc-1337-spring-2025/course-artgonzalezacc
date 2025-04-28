//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class MyVector
{
public:
    MyVector(int c);//constructor
    MyVector(const MyVector& v);//copy constructor
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}    
    ~MyVector();//destructor
private:
    int size{0};//number of elements in the list
    int capacity;//total number of elements
    int* elements;
};

#endif
