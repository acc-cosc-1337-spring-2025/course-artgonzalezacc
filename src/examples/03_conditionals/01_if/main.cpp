#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	char letter = 'a';

	cout<<is_vowel(letter)<<"\n";
	cout<<is_consonant(letter)<<"\n";

	int num = 100;

	cout<<is_number_even(num)<<"\n";

	return 0;
}
