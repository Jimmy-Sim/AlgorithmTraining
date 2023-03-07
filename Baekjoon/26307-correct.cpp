#include <iostream>

using namespace std;

int hour, minute;
int totalMinute;

int main()
{
    cin >> hour >> minute;

    totalMinute = 60 * (hour - 9) + minute;

    cout << totalMinute << '\n';

    return 0;
}