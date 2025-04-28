#include <string>
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;

// Use chrono APIs to get the current time.
time_t getTime()
{
    // Use auto type, let compiler decide the type.
    auto cur_time = chrono::system_clock::now();

    return chrono::system_clock::to_time_t(cur_time);
}

int main()
{
    time_t cur_time = getTime();

    // Exercise - Get current time
    cout << "Current time is "
         << put_time(localtime(&cur_time), "%Y-%m-%d %H:%M:%S")
         << endl;

return 0;
}