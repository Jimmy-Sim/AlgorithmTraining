#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string number;
    cin >> number;

    int digitCount = number.size(), tenFactor = 1;
    for (int i = 1; i < digitCount; i++) {
        tenFactor *= 10;
    }
    int roundedNumber;
    if (number[1] - 48 < 5) {
        roundedNumber = (number[0] - 48) * tenFactor;
    }
    else {
        roundedNumber = ((number[0] - 48) + 1) * tenFactor;
    }

    cout << roundedNumber << "\n";

    return 0;
}