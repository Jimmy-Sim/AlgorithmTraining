#include <iostream>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;

    if (N == 2) {
        int num1, num2;
        cin >> num1 >> num2;

        for (int i = 1; i <= min(num1, num2); i++) {
            if (num1 % i == 0 && num2 % i == 0) cout << i << '\n';
        }
    }

    else {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        for (int i = 1; i <= min(num1, min(num2, num3)); i++) {
            if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) cout << i << '\n';
        }
    }

    return 0;
}