#include "function_str.h"

using std::cout;
using std::string;

void string_value_param(string lang)
{
    for(auto &ch: lang) //no & means working with a copy of each lang character
    {
        ch = '.';
    }

    cout<<lang<<"\n";

}

void string_ref_param(std::string &lang)
{
    for(auto &ch: lang) //no & means working with a copy of each lang character
    {
        ch = '.';
    }
}

void string_value_param_while(std::string lang)
{
    auto indx = 0;
    while(indx < lang.length())
    {
        lang[indx] = '.';
        indx++;
    }

}

void string_ref_param_while(std::string &lang)
{
    auto indx = 0;
    while(indx < lang.length())
    {
        lang[indx] = '.';
        indx++;
    }
}

