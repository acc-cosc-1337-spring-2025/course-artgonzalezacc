//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;

void create_stack_array()
{
    const int SIZE = 3;
    int nums[SIZE]{6, 1, 10};

    cout<<nums[0]<<" "<<&nums[0]<<"\n";
    cout<<nums[1]<<" "<<&nums[1]<<"\n";
    cout<<nums[2]<<" "<<&nums[2]<<"\n";
}

void arrays_and_pointers()
{
    const int SIZE = 3;
    int nums[SIZE]{6, 1, 10};

    cout<<nums<<"\n"; //the name of a stack array is a pointer

    int* num_ptr = nums;
    
    cout<<*num_ptr<<"\n";
    
    num_ptr++; //jump 4 addreses
    cout<<*num_ptr<<"\n";

    num_ptr++; //jump 4 addreses
    cout<<*num_ptr<<"\n";

    num_ptr--;
    cout<<*num_ptr<<"\n";
}