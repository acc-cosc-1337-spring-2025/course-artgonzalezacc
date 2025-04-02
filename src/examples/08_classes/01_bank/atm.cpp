//atm.cpp
#include "atm.h"

using std::cin;
using std::cout;

void ATM::display_balance()
{
    cout<<"Balance: "<<account.get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter deposit amount: ";
    cin>>amount;
    account.deposit(amount);
}

void ATM::make_withdraw()
{
    auto amount = 0;
    cout<<"Enter withdraw amount: ";
    cin>>amount;
    account.withdraw(amount);
}

//FREE FUNCTION - NOT PART OF THE BANKACCOUNT CLASS
void display_balance(BankAccount account)
{
    cout<<"Free function display_balance "<<account.get_balance()<<"\n";
}

BankAccount get_account()
{
    BankAccount account(500);
    return account;
}

BankAccount& get_reference_account()
{
    BankAccount account(500);
    return account;
}