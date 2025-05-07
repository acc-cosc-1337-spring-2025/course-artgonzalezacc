//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

template<typename T>
class MyVector
{
public:
    MyVector();//constructor default
    MyVector(int c);//constructor
    MyVector(const MyVector<T>& v);//copy constructor Rule of 3 Legacy C++ (before 2009)
    MyVector& operator=(const MyVector<T>& v);//copy assignment Rule of 3
    MyVector(MyVector&& v);//Rule 4 of 5 for Modern C++ move constructor
    MyVector& operator=(MyVector<T>&& v1);//Rule 5 of 5 Modern C++ move assignment
    T& operator[](int index){return elements[index];}
    T& operator[](int index)const{return elements[index];}    
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    void PushBack(T value);
    ~MyVector();//destructor //Rule of 3
private:
    int size{0};//number of elements in the list
    int capacity;//total number of elements
    T* elements{0};
    const int RESERVE_DEFAULT_SIZE{8};//MyVector(), initialize 8 capacity 
    const int RESERVE_DEFAULT_MULTIPLIER{2};//ask for double the memory
    void Reserve(int new_size);
};

#endif

///FREE FUNCTION NOT PART OF THE MYVECTOR CLASS
MyVector<int> get_my_vector();
