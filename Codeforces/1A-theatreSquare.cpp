#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double length, width, side;
    cin >> length >> width >> side;

    cout << ceil(length / side) * ceil(width / side) << '\n';

    return 0;
}