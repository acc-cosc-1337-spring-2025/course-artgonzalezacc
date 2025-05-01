//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class MyVector
{
public:
    MyVector(int c);//constructor
    MyVector(const MyVector& v);//copy constructor Rule of 3 Legacy C++ (before 2009)
    MyVector& operator=(const MyVector& v);//copy assignment Rule of 3
    MyVector(MyVector&& v);//Rule 4 of 5 for Modern C++ move constructor
    MyVector& operator=(MyVector&& v1);//Rule 5 of 5 Modern C++ move assignment
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}    
    ~MyVector();//destructor //Rule of 3
private:
    int size{0};//number of elements in the list
    int capacity;//total number of elements
    int* elements;
};

#endif

///FREE FUNCTION NOT PART OF THE MYVECTOR CLASS
MyVector get_my_vector();
