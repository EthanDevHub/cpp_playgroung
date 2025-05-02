#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "vehicle_data.h"

using namespace std;

VehicleData::VehicleData(string brand, string model, int mfg_year, int mfg_month, string color, double mileage, string service_date, double service_mileage):
    brand_(brand),
    model_(model),
    mfg_year_(mfg_year),
    mfg_month_(mfg_month),
    color_(color),
    mileage_(mileage),
    service_date_(service_date),
    service_mileage_(service_mileage)
{
}

void VehicleData::setBrand(string brand)
{
    brand_ = brand;
}

void VehicleData::setModel(string model)
{
    model_ = model;
}

void VehicleData::setMfgYear(int mfg_year)
{
    mfg_year_ = mfg_year;
}

void VehicleData::setMfgMonth(int mfg_month)
{
    mfg_month_ = mfg_month;
}

void VehicleData::setColor(string color)
{
    color_ = color;
}

void VehicleData::setMileage(double mileage)
{
    mileage_ = mileage;
}

void VehicleData::setServiceDate(string service_date)
{
    service_date_ = service_date;
}

void VehicleData::setServiceMileage(double service_mileage)
{
    service_mileage_ = service_mileage;
}

void VehicleData::PrintInfo() const
{
    cout << left << setw(30) << "Brand" << brand_ << endl;
    cout << left << setw(30) << "Model" << model_ << endl;
    cout << left << setw(30) << "Manufacture Date" << mfg_year_ << "/" << mfg_month_ << endl;
    cout << left << setw(30) << "Color" << color_ << endl;
    cout << left << setw(30) << "ODO (Km)" << mileage_ << " Km" << endl;
    cout << left << setw(30) << "Last Service (Date/Km)" << service_date_ << " (" << service_mileage_ << " Km)" << endl;
    cout << endl;
}