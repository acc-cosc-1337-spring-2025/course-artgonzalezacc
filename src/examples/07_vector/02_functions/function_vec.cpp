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