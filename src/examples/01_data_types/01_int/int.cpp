#include "int.h"

using std::cout;//i will use the cout object --display to screen

/*
Function echo_variable returns the incoming parameter

@param int-integer type
@return return the int parameter
*/

void use_int_data_type()
{
    int num = 5;
    cout<<num;
}

void reassign_int_data_type()
{
    int num = 5;
    cout<<num<<"\n";
    num = 10;
    cout<<num<<"\n";
    num = 15.5;
    cout<<num<<"\n";//truncates numbers to the right of the decimal
}