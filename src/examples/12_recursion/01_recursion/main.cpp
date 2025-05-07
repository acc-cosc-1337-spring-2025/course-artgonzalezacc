#include "recursion.h"

using std::cout;

int main() 
{
	cout<<"load to stack 5\n";
	recursive_factorial(5);
	cout<<"unload from stack 5\n";

	return 0;
}