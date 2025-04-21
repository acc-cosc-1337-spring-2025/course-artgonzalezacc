#include "text_output.h"

using std::cout; using std::string;
using std::ofstream; using std::ifstream; using std::getline;

void output_data_to_file()
{
    cout<<"Create the file object...\n";
    ofstream my_file;
    cout<<"Open the file\n";
    my_file.open("example.dat");

    cout<<"Write to file...\n";
    my_file<<"Write to file\n";
    my_file<<"Write to file again\n";
    my_file<<"Write to file again...\n";

    my_file.close();
}

void read_data_from_file()
{
    string line;

    cout<<"Create the file object /variable ...\n";
    ifstream my_file;

    cout<<"Open the file..\n";
    my_file.open("example.dat");

    if(my_file.is_open())
    {
        cout<<"Read from the file...\n";
        while (getline(my_file, line))
        {
            cout<<line<<"\n";
        }
    }
    else
    {
        cout<<"Cannot open the file...\n";
    }

    my_file.close();
}