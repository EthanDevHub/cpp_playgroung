#include <iostream>
#include <string>
#include <iomanip>

#ifndef __VEHICLE_DATA__
#define __VEHICLE_DATA__

using namespace std;

class VehicleData
{
    private:
        string brand_;
        string model_;
        int mfg_year_;
        int mfg_month_;
        string color_;
        double mileage_;
        string service_date_;
        double service_mileage_;

    public:
        VehicleData(string brand, string model, int mfg_year, int mfg_month, string color, double mileage, string service_date, double service_mileage);
        void setBrand(string brand);
        void setModel(string model);
        void setMfgYear(int mfg_year);
        void setMfgMonth(int mfg_month);
        void setColor(string color);
        void setMileage(double mileag);
        void setServiceDate(string service_date);
        void setServiceMileage(double service_mileage);
        void PrintInfo() const;
};

#endif // __VEHICLE_DATA__