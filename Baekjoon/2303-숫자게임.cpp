#include <iostream>

using namespace std;

int N;
int numbers[1005][10], highestNumbers[1005];
int maximum, winner;

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 5; j++) cin >> numbers[i][j];

        int max = 0;
        for (int j = 1; j <= 3; j++) {
            for (int k = j + 1; k <= 4; k++) {
                for (int l = k + 1; l <= 5; l++) {
                    int sum = numbers[i][j] + numbers[i][k] + numbers[i][l];
                    int onesDigit = sum % 10;
                    max = onesDigit > max ? onesDigit : max;
                }
            }
        }

        highestNumbers[i] = max;
    }

    for (int i = 1; i <= N; i++) {
        if (highestNumbers[i] >= maximum) {
            maximum = highestNumbers[i];
            winner = i;
        }
    }

    cout << winner << '\n';

    return 0;
}