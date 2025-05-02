#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

#ifndef __GARAGE_DATA__
#define __GARAGE_DATA__

using namespace std;

class GarageData
{
    private:
        vector<VehicleData> vehicles_;

    public:
        void AddVehicle(const VehicleData& vehicle);
        void ShowAllVehicles() const;
};

#endif // __GARAGE_DATA__