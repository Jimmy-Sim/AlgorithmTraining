#include <iostream>

using namespace std;

double n1, n2, n12;

int main()
{
    cin >> n1 >> n2 >> n12;

    cout << (int)((n1 + 1) * (n2 + 1) / (n12 + 1) - 1) << '\n';

    return 0;
}