#include <iostream>

using namespace std;

int num1, num2;
int gcf;

int main()
{
    cin >> num1 >> num2;

    for (int i = 1; i <= min(num1, num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) gcf = i;
    }

    cout << gcf << '\n';

    return 0;
}