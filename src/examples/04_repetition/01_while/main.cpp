#include "while.h"

using std::cin; using std::cout;

int main() 
{
	auto num = 0;

	while(num < 1 || num > 10)
	{
		cout<<"Enter a number between 1 and 10: ";
		cin>>num;
	}

	auto result = get_sum_of_squares(num);
	cout<<"Sum of squares: "<<result<<"\n";

	return 0;
}