#include<iostream>

using std::cout;

int main() 
{
	//Create memory
	int* num_ptr = new int(10); //pointer with the keyword new ---> creates memory on the heap

	//use the memory(FOR HOW LONG DO WE NEED THE DATA ON THE HEAP)
	cout<<*num_ptr<<"\n";
	//maybe lots of lines of code follow here; functions class/class function calls

	//WE WILL FORGET TO CLEAR THE MEMORY

	//free/delete the memory--->free up the address(es) that are used with new
	delete num_ptr;
	num_ptr = nullptr;//point to address 0

	return 0;
}