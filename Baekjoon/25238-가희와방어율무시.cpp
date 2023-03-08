#include <iostream>

using namespace std;

double A, B;

int main()
{
    cin >> A >> B;

    A *= ((100 - B) / 100);

    if (A >= 100) cout << 0 << '\n';
    else cout << 1 << '\n';

    return 0;
}