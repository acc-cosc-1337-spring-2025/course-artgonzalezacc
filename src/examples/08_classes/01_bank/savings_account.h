//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(int b) : BankAccount(b){}
private:

};

#endif