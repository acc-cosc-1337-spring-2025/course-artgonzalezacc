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
	CheckingAccount checking(500);
	BankAccount* account = &checking;
	
	cout<<account->get_balance()<<"\n";//be a checking account 

	SavingsAccount savings(750);
	account = &savings;

	cout<<account->get_balance()<<"\n";//be a savings account 
	cout<<savings.get_balance()<<"\n";

	return 0;
}