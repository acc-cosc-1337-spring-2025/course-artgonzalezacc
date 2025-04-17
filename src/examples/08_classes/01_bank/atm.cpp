//atm.cpp
#include "atm.h"

using std::cin; using std::vector; using std::unique_ptr; using std::make_unique;
using std::cout;

void ATM::display_balance()
{
    cout<<"Balance: "<<account->get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter deposit amount: ";
    cin>>amount;
    account->deposit(amount);
}

void ATM::make_withdraw()
{
    auto amount = 0;
    cout<<"Enter withdraw amount: ";
    cin>>amount;
    account->withdraw(amount);
}

//FREE FUNCTION - NOT PART OF THE BANKACCOUNT CLASS
void display_balance(BankAccount account)
{
    cout<<"Free function display_balance "<<account.get_balance()<<"\n";
}

BankAccount get_account()
{
    BankAccount account(500);
    return account;
}

BankAccount& get_reference_account()
{
    BankAccount account(500);
    return account;
}

void run_menu()
{
    //list of unique ptr to accounts
    auto account_index = 0, bank_menu_choice=0;
    BankAccountDB db;
    vector<Customer> customers;
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    

    auto customer_index = rand() % customers.size();
    cout<<"index: "<<customer_index<<"\n";
    //loop prompt user for checking or savings
    do
    {

        cout<<"Enter 1 for checking 2 for savings";
        cin>>account_index;

        auto* account = customers[customer_index].get_account(account_index-1);
        ATM atm(account);

        //loop display menu handle user options
        do
        {
            display_menu();
            cout<<"Enter menu choice: ";
            cin>>bank_menu_choice;

            handle_menu_option(atm, bank_menu_choice);
            /* code */
        } while (bank_menu_choice != 4);
        
    } while (true);
}

void display_menu()
{
    cout<<"\n ACC Banking\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n";
}

void handle_menu_option(ATM& atm, int menu_choice)
{
    switch ((menu_choice))
    {
    case 1:
        atm.make_deposit();
        break;
    case 2:
        atm.make_withdraw();
        break;
    case 3:
        atm.display_balance();
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    default:
        cout<<"Invalid choice...\n";
        break;
    }
}