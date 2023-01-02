#include <iostream>

using namespace std;

int num1, num2;
int gcf, lcm;

int main()
{
    cin >> num1 >> num2;

    // GCF:
    for (int i = 1; i <= min(num1, num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) gcf = i;
    }

    cout << gcf << '\n';

    // LCM:
    int x = num1, y = num2;
    while (x != y) {
        if (x < y) x += num1;
        else y += num2;
    }

    lcm = x; // x == y;

    cout << lcm << '\n';

    return 0;
}