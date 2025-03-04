#include "reference.h"

void ref_value_vars(int num1, int &num2)
{
    num1 = 10;
    num2 = 20;
}

int get_product(int num1, int num2)
{
    return num1 * num2;
}

int& get_product_ref(int num1, int num2)
{
    auto product = num1 * num2;
    return product;//will generate a memory error - Segmentation FAult
}