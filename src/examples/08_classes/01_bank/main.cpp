#include "atm.h"
#include "checking_account.h"
#include "bank_account_db.h"
#include "savings_account.h"
#include <iostream>
#include <time.h>

using std::cout;
using std::cin;

int main()
{
	srand(time(NULL));
	BankAccountDB db;
	BankAccount bad_account = get_reference_account();
	cout<<bad_account.get_balance();

	/*
	BankAccountDB db;

	//variable of a class is equal to  an object in memory
	BankAccount account(db.get_balance());//create our own variable from the newly created data type

	ATM atm(account);

	atm.display_balance();
	atm.make_deposit();
	atm.display_balance();
	atm.make_withdraw();
	atm.display_balance();
	
	
	BankAccount account1 = get_account();
	display_balance(account1);*/

	return 0;
}