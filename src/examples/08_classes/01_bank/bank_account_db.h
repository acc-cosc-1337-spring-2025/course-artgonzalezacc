#include<cstdlib>
#include<iostream>

//header guards
#ifndef BANK_ACCOUNT_DB
#define  BANK_ACCOUNT_DB

class BankAccountDB
{
public:
    BankAccountDB(){}
    int get_balance(){return rand() % 10000 + 1;}    
};
#endif