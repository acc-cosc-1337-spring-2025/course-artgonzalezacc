#include "ref_pointers.h"

//
void func_params (int num1, int &num2, int* num3)
{
    num1 = 5;
    num2 = 10;
    *num3 = 15;
}

