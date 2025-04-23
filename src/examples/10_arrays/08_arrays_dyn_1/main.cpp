#include<iostream>
#include "arrays_dyn_1.h"

using std::cout;

int main()
{
	//create memory
	//use memory HOW LONG DO WE NEED THE DATA???????
	///many function calls/code
	//clear/release/delete memory
	int* nums = get_dynamic_memory(3);
	nums[0] = 6;
	nums[1] = 1;
	nums[2] = 10;

	for(auto i=0; i < 3; i++)
	{
		cout<<nums[i]<<"\n";
	}

	nums  = nullptr;
	delete_dynamic_memory(nums);
	   
	return 0;
}