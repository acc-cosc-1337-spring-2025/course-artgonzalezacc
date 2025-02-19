//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
*/
int main() 
{
	auto num = 0;
	
	cout<<"Enter a number: ";
	cin>>num;

	auto is_odd = is_number_odd(num);

	if(is_odd)
	{
		cout<<num<<" is odd\n";
	}
	else
	{
		cout<<num<<" is even\n";
	}
	
	return 0;
}