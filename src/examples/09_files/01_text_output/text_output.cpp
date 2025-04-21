#include "text_output.h"

using std::cout; using std::string;
using std::ofstream; 

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