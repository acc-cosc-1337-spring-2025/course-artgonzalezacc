#include "temperature_data.h"

using std::vector;

int main()
{
    vector<Temperature> temps{Temperature(1, 99.1), Temperature(2, 98.5), Temperature(3, 100.5)};

    TemperatureData data;

    data.save_temps(temps);

    return 0;
}