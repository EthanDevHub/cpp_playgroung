#include <string>
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

double CelsiusToFahrenheit(double celsius)
{
    return celsius * 9 / 5 + 32;
}

int main()
{
#if 1
    vector<double> temp_a;
    double input;
    int i = 1;

    cout << "Enter few tempretures in Celsius (enter a non-number to stop):" << endl;
    
    while (cin >> input)
    {
        temp_a.push_back(input);
    }

    for (double num : temp_a)
    {
        cout << "Tempreature "
        << i
        << "\tis Celsius: "
        << num
        << " or Fahrenheit: "
        << CelsiusToFahrenheit(num)
        << endl;

        i++;
    }
#else
    double temp_a[] = {25.5, 27, 29, 23, 30};
    int num_temp = sizeof(temp_a)/sizeof(double);

    for (int i=0; i < num_temp; i++)
    {
        cout << "Tempreature "
             << i
             << "\tis Celsius: "
             << temp_a[i]
             << " or Fahrenheit: "
             << CelsiusToFahrenheit(temp_a[i])
             << endl;
    }
#endif

return 0;
}