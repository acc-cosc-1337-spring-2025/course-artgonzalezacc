#include "function_vec.h"

using std::cout; using std::vector;

void loop_vector_w_while()
{
    vector<double> nums{8.5, 6.1, 10.2};
    auto index = 0;

    while(index < nums.size())
    {
        cout<<nums[index]<<"\n";
        index++;
    }
}

void loop_vector_w_for() 
{
    vector<char> chars{'b', 'z', 'm'};

    for(auto i = 0; i < chars.size(); i++)
    {
        cout<<chars[i]<<"\n";
    }
}

void loop_vector_w_for_range()
{
    vector<int> nums{90, 789, 55};

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }
}