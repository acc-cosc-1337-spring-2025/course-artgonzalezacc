#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	char letter = 'b';

	auto is_letter_vowel = is_vowel(letter);

	if(is_letter_vowel)
	{
		cout<<letter<<" is vowel\n";
	}

	auto is_letter_consonant = is_consonant(letter);

	if(is_letter_consonant)
	{
		cout<<letter<<" is consonsant\n";
	}

	int num = 100;

	auto is_even = is_number_even(num);

	if(is_even)
	{
		cout<<num<<" is even\n";
	}

	return 0;
}
