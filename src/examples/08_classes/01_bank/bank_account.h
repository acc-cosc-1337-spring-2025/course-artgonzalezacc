//bank_account.h

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount 
{
//access specifier variables/functions    
public://outside code class/functions can use variables and functions that are public
    BankAccount(int b) : balance(b) {}//class constructor
    int get_balance(){return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private://only this class can use variables/functions
    int balance {0};

};

#endif