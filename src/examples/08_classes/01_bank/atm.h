//atm.h
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include<vector>
#include<memory>

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM(BankAccount* b) : account(b){}
    void display_balance();
    void make_deposit();
    void make_withdraw();

private:
    BankAccount* account;
};

#endif

//FREE FUNCTION - NOT PART OF THE BANKACCOUNT CLASS
void display_balance(BankAccount account);
BankAccount get_account();
BankAccount& get_reference_account();
void run_menu();
void display_menu();
void handle_menu_option(ATM& atm, int menu_choice);