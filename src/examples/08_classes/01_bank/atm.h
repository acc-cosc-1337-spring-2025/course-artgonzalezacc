//atm.h
#include "bank_account.h"
#include <iostream>

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM(BankAccount b) : account(b){}
    void display_balance();
    void make_deposit();
    void make_withdraw();

private:
    BankAccount account;
};

#endif
