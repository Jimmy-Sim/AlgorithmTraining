#include <iostream>

using namespace std;

int T;
int num1, num2;
int lcm;

int main()
{
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> num1 >> num2;

        int x = num1, y = num2;
        while (x != y) {
            if (x < y) x += num1;
            else y += num2;
        }

        lcm = x; // x == y;

        cout << lcm << '\n';
    }

    return 0;
}