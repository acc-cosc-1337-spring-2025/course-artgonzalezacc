#include "arrays_dyn_1.h"

using std::cout; using std::shared_ptr;

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

int* get_dynamic_memory_array(const int size)
{
    int* nums = new int[size];
    cout<<"Created memory at: "<<nums<<"\n";
    return nums;
}

void delete_dynamic_memory_array(int* nums)
{
    cout<<"Deleting memory at: "<<nums<<"\n";
    delete[] nums;
}

void use_dynamic_memory(const int size)
{
    shared_ptr<int[]> nums(get_dynamic_memory_array(size), delete_dynamic_memory_array);
    nums[0] = 6;
    nums[1] = 1;
    nums[2] = 10;

    cout<<nums[0]<<"\n";
    cout<<nums[1]<<"\n";
    cout<<nums[2]<<"\n";

    cout<<"exiting the use dynamic memory function....\n";
}
