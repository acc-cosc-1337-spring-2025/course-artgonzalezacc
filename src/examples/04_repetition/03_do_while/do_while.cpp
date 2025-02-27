#include "do_while.h"

using std::cin;
using std::cout;
using std::setw;

void use_do_while(int num)
{
    do
    {
        cout<<"Hello\n";
        num--;

    } while (num > 0);
    
}

int get_sum_of_squares_do(int num)
{
    auto sum = 0;
        
    do
    {
        sum += num * num;
        num--;
    } while (num > 0);


    return sum;
}

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'y';

    do
    {
        cout<<"Enter y to continue: ";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');
    
}

void display_menu()
{
    cout<<"1-Option 1\n";
    cout<<"2-Option 2\n";
    cout<<"3-Option 3\n";
    cout<<"4-Exit\n";
}

void run_menu()
{
    auto choice = 0;

    do
    {
        display_menu();

        cout<<"Enter menu option ";
        cin>>choice;

        handle_menu_option(choice);

    } while (choice != 4);
    
}

void handle_menu_option(int choice)
{
    switch (choice)
    {
    case 1:
        cout<<"\nYou selected choice 1\n";
        break;
    case 2:
        cout<<"\nYou selected choice 2\n";
        break;
    case 3:
        cout<<"\nYou selected choice 3\n";
        break;
    case 4:
        cout<<"\nExiting...\n";
        break;
    
    default:
        cout<<"\nInvalid menu option\n";
        break;
    }

}

void multiplication_table_do(const int rows, const int cols)
{
    auto r = 0;

    do
    {
        auto c = 0;

        do
        {
            cout<<setw(4)<<(r + 1) * (c + 1);
            c++;
        } while (c < cols);
        
        cout<<"\n";
        r++;

    } while (r < rows);
    
}