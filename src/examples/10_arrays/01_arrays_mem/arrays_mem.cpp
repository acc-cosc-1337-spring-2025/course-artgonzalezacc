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