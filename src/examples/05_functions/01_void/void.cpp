#include "void.h"

void use_local_variable()
{
    //global = 20;  generates an error
    auto num = 5;//local variable
}

void use_global_variable()
{
    std::cout<<global<<"\n";
}