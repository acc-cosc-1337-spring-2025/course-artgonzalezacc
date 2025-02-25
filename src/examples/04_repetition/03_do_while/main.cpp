#include "do_while.h"

using std::cin; using std::cout; 

int main() 
{	
	auto num = 0;

	cout<<"Enter a number: ";
	cin>>num;

	auto result = get_sum_of_squares_do(num);

	cout<<"Sum of squares: "<<result<<"\n";
	return 0;
}