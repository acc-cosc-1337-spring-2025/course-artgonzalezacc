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
	run_menu();

	return 0;
}