#include <iostream>

using namespace std;

int numerator, denominator;

int main()
{
    cin >> numerator >> denominator;

    while (numerator != 0 && denominator != 0) {
        cout << numerator / denominator << ' ' << numerator % denominator << " / " << denominator << '\n';

        cin >> numerator >> denominator;
    }

    return 0;
}