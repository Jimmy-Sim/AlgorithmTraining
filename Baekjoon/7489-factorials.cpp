#include <iostream>

using namespace std;

int T, N;

int main()
{
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;

        int factorialDigit = 1;

        for (int i = 1; i <= N; i++) {
            factorialDigit *= i;

            while (factorialDigit % 10 == 0) factorialDigit /= 10;

            factorialDigit = factorialDigit % 1000;
        }

        factorialDigit = factorialDigit % 10;

        cout << factorialDigit << "\n";
    }

    return 0;
}