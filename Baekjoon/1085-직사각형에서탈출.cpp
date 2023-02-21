#include <iostream>

using namespace std;

int x, y, w, h;

int main()
{
    cin >> x >> y >> w >> h;

    cout << min(x, min(y, min((w - x), (h - y)))) << '\n';

    return 0;
}