#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "vehicle_data.h"
#include "garage_data.h"

using namespace std;

void GarageData::AddVehicle(const VehicleData& vehicle)
{
    vehicles_.push_back(vehicle);
}

void GarageData::ShowAllVehicles() const
{
    cout << left << setw(30) << "Property" << "Details" << endl;
    cout << "===========================================================" << endl;

    for (const VehicleData& car : vehicles_)
    {
        car.PrintInfo();
        cout << "-----------------------------------------------------------" << endl;
    }
}