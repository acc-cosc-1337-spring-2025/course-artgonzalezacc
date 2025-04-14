#include "atm.h"
#include "checking_account.h"
#include "bank_account_db.h"
#include "savings_account.h"
#include <iostream>
#include<memory>
#include<vector>

using std::cout; using std::unique_ptr; using std::make_unique;
using std::cin; using std::vector;

int main()
{
	vector<unique_ptr<BankAccount>> accounts;
	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>(500);

	cout<<"checking get balance "<<checking->get_balance()<<"\n";

	accounts.push_back(std::move(checking));
	
	cout<<"checking get balance "<<checking->get_balance()<<"\n";


	return 0;
}