#include "atm.h"
#include "checking_account.h"
#include "bank_account_db.h"
#include "savings_account.h"
#include <iostream>
#include<memory>
#include<time.h>
#include<vector>

int main()
{
	srand(time(NULL));

	run_menu();

	return 0;
}