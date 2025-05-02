#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "vehicle_data.h"
#include "garage_data.h"

using namespace std;

int main()
{
    GarageData garage;

    // Backend setting data...
    VehicleData car1("BMW", "330i", 2020, 6, "Black", 26000, "2024/05/05", 22000.5);
    VehicleData car2("Honda", "CRV", 2016, 2, "White", 56000, "2024/07/20", 48000.0);
    VehicleData car3("Land Rover", "Range Rover Evoque", 2021, 9, "Red", 33000, "2024/05/15", 27300.0);

    garage.AddVehicle(car1);
    garage.AddVehicle(car2);
    garage.AddVehicle(car3);
    garage.ShowAllVehicles();

    return 0;
}