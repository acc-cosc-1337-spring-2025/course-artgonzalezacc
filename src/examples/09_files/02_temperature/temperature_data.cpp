//temperature_data.cpp
#include "temperature_data.h"

using std::cout; using std::ofstream;

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