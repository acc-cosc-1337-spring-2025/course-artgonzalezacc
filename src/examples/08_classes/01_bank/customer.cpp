//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer(BankAccountDB db)
{
    accounts.push_back(make_unique<CheckingAccount>(db.get_balance()));
    accounts.push_back(make_unique<SavingsAccount>(db.get_balance()));    
}

BankAccount* Customer::get_account(int index)
{
    return accounts[index].get();
}