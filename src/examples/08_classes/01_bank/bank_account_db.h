#include<cstdlib>

//header guards
#ifndef BANK_ACCOUNT_DB
#define  BANK_ACCOUNT_DB

class BankAccountDB
{
public:
    BankAccountDB(){this->get_balance_from_db();}
    int get_balance(){return balance;}
private:
    int balance;
    void get_balance_from_db();
};
#endif