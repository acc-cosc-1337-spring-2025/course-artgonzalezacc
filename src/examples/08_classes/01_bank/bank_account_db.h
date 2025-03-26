#include<cstdlib>

class BankAccountDB
{
public:
    BankAccountDB(){this->get_balance_from_db();}
    int get_balance(){return balance;}
private:
    int balance;
    void get_balance_from_db();
};