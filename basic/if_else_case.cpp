#include <string>
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int age = 33, age_a=0;

    cout << "Hello Miss/Mr!" << endl;
    cout << "I am already " << age << " years old!" << endl;
    cout << "Well, what's your age? ";
    cin >> age_a;
    cout << "Your age is " << age_a << endl;

    // Exercise - if/else cases
    int age_diff = age - age_a;
    if (age_diff > 0) {
        cout << "I am " << age_diff << " years older than you!" << endl;
    } else if (age_diff < 0) {
        cout << "I am " << abs(age_diff) << " years younger than you!" << endl;
    } else {
        cout << "Wow, we are the same age!" << endl;
    }

return 0;
}