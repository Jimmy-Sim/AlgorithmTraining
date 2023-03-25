#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxResult = 0;
    a + b + c > maxResult ? maxResult = a + b + c : maxResult;
    a * b * c > maxResult ? maxResult = a * b * c : maxResult;
    a * b + c > maxResult ? maxResult = a * b + c : maxResult;
    a + b * c > maxResult ? maxResult = a + b * c : maxResult;
    (a + b) * c > maxResult ? maxResult = (a + b) * c : maxResult;
    a * (b + c) > maxResult ? maxResult = a * (b + c) : maxResult;

    cout << maxResult << '\n';

    return 0;
}