#include "switch.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	auto option = 0;

	cout<<"Enter option number: ";
	cin>>option;

	auto option_value = menu_option(option);

	cout<<"Option: "<<option_value<<"\n";

	return 0;
}