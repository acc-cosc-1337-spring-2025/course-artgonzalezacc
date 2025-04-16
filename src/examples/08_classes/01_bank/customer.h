//customer.h
#include<memory>
#include<vector>
#include "bank_account_db.h"
#include "checking_account.h"
#include "savings_account.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    Customer(BankAccountDB db);
    BankAccount* get_account(int index);

private:
    std::vector<std::unique_ptr<BankAccount>> accounts;
};


#endif