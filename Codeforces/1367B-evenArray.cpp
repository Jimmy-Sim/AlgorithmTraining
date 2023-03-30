#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int wrongEvenCount = 0, wrongOddCount = 0;
        for (int i = 0; i < n; i++) {
            int number;
            cin >> number;

            if (number % 2 == 0 && number % 2 != i % 2) wrongEvenCount++;
            else if (number % 2 == 1 && number % 2 != i % 2) wrongOddCount++;
        }

        if (wrongEvenCount == wrongOddCount) cout << wrongEvenCount << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}