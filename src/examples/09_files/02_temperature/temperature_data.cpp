//temperature_data.cpp
#include "temperature_data.h"

using std::cout; using std::ofstream; using std::vector;
using std::ifstream;

void TemperatureData::save_temps(const std::vector<Temperature>& temps)
{
    ofstream file;
    cout<<"Open the file...\n";
    file.open(file_name);

    cout<<"Write to file...\n";

    for(auto temp: temps)
    {
        file<<temp.get_hour();
        file<<" ";
        file<<temp.get_reading();
        file<<"\n";
    }

    cout<<"Close the file..\n";
    file.close();
}

vector<Temperature> TemperatureData::get_temps()
{
    vector<Temperature> temps;
    
    auto hour = 0;
    auto reading = .1;

    ifstream file;

    cout<<"Open the file...\n";
    file.open(file_name);

    cout<<"Read from the file...\n";

    if(file.is_open())
    {
        while(file>>hour>>reading)
        {
            Temperature temp(hour, reading);
            temps.push_back(temp);
        }
    }

    cout<<"Close the file..\n";
    file.close();

    return temps;
}