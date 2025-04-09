#include "atm.h"
#include "checking_account.h"
#include "bank_account_db.h"
#include "savings_account.h"
#include <iostream>
#include<memory>

using std::cout; using std::unique_ptr; using std::make_unique;
using std::cin;

int main()
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(500);

	cout<<"Balance: "<<account->get_balance()<<"\n";


	return 0;
}