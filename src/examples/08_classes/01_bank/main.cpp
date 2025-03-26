#include "bank_account.h"
#include <iostream>

using std::cout;

int main()
{   //variable of a class is equal to  an object in memory
	BankAccount account(500);//create our own variable from the newly created data type
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}