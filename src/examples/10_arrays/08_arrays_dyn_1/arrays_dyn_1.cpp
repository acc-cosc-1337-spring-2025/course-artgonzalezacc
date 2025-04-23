#include "arrays_dyn_1.h"

using std::cout;

void use_dynamic_memory_array(const int size)
{
    int* nums = new int[size]{6, 1, 10};//create list in heap memory

    cout<<nums[0]<<"\n";
    cout<<nums[1]<<"\n";
    cout<<nums[2]<<"\n";

    delete[] nums;
}

int* get_dynamic_memory(const int size)
{
    int* nums = new int[size];
    cout<<"Created memory at: "<<nums<<"\n";
    return nums;
}

void delete_dynamic_memory(int* nums)
{
    cout<<"Deleting memory at: "<<nums<<"\n";
    delete[] nums;
}