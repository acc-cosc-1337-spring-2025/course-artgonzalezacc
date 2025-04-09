#include<iostream>
#include "dynamic_memory.h"

using std::cout;

int main() 
{

	int* num = get_dynamic_memory_bank_account();
	cout<<*num<<"\n";

	delete num;
	num = nullptr;


	return 0;
}