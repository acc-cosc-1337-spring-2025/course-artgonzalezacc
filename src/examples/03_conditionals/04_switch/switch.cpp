//write include statement for switch header
#include "switch.h"

using std::string;

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
string menu_option(int option)
{
    string value = "";

    switch (option)//value must evaluate to an int (whole number)
    {
    case 1:
        value = "Option 1";
        break;
    case 2:
        value = "Option 2";
        break;
    case 3:
        value = "Option 3";
        break;
    case 4:
        value = "Option 4";
        break;
    default:
        value = "Invalid Option";
        break;
    }

    return value;
}

