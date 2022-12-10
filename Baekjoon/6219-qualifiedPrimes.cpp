#include <iostream>

using namespace std;

int lowerRange, higherRange;
int containingDigit;
int ans;

int main()
{
    cin >> lowerRange >> higherRange >> containingDigit;

    for (int i = lowerRange; i <= higherRange; i++) {
        int number = i;
        bool isPrime;

        for (int j = 2; j < number; j++) {
            if (number % j == 0) {
                isPrime = false;
                break;
            }
            else isPrime = true;
        }
        if (number == 2) isPrime = true;

        if (isPrime) {
            while (number > 1) {
                if (number % 10 == containingDigit) {
                    ans++;
                    break;
                }
                else number /= 10;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}