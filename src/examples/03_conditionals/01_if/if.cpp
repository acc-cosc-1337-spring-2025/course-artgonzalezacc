//write include statement for if header




//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise


bool is_number_in_range(int min_range, int max_range, int num)
{
    bool in_range = false;

    //boolean expression
    in_range = num >= min_range && num <= max_range;

    return in_range;
}

bool is_vowel(char letter)
{
    return letter == 'a' or letter == 'e' || letter == 'i' or letter == 'o' || letter == 'u';
}