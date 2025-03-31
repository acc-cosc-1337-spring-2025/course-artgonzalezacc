#include "bank_account.h"
#include "bank_account_db.h"
#include <iostream>
#include <time.h>

using std::cout;
using std::cin;

int main()
{
	srand(time(NULL));
	BankAccountDB db;

	auto amount = 0;
	//variable of a class is equal to  an object in memory
	BankAccount account(db.get_balance());//create our own variable from the newly created data type
	cout<<"Balance: "<<account.get_balance()<<"\n";

	cout<<"Enter amount to deposit: ";
	cin>>amount;
	account.deposit(amount);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	cout<<"Enter amount to withdraw: ";
	cin>>amount;
	account.withdraw(amount);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}