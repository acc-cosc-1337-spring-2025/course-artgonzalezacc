#include "bank_account_db.h"

void BankAccountDB::get_balance_from_db()
{
    balance = rand() % 10000 + 1;
}