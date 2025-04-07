#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{	//references
	int num1 = 10;
	int& num_ref = num1; //take the address of num1
	cout<<"Value of num1 via num_ref "<<num_ref<<"\n";
	cout<<"Value of num11 "<<num1<<"\n";
	num_ref = 30;
	cout<<"Value of num1 via num_ref "<<num_ref<<"\n";
	cout<<"Value of num11 "<<num1<<"\n";

	//pointer
	int* num_ptr = &num1;
	cout<<"Value of num1 via num_ptr "<<*num_ptr<<"\n";
	cout<<"Value of num11 "<<num1<<"\n";
	*num_ptr = 50;
	cout<<"Value of num1 via num_ptr "<<*num_ptr<<"\n";
	cout<<"Value of num11 "<<num1<<"\n\n\n";

	cout<<"Address(Location) of num1: "<<&num1<<"\n";
	cout<<"Address(Location) of num_ptr: "<<&num_ptr<<"\n";
	cout<<"Address that num_ptr point to: "<<num_ptr<<"\n";
	cout<<"Address that num ref references: "<<&num_ref<<"\n";


	
	return 0;
}