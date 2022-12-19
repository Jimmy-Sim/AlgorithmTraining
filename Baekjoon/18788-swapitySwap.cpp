#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int A1, A2, B1, B2;
int cows[105], cows_[105];

int main()
{
    cin >> N >> K;
    cin >> A1 >> A2;
    cin >> B1 >> B2;

    for (int i = 1; i <= N; i++) cows[i] = i, cows_[i] = i;
    int cycleCount = 1;
    while (1) {
        cycleCount++;

        reverse(cows_ + A1, cows_ + A2 + 1);
        reverse(cows_ + B1, cows_ + B2 + 1);

        int check = 0;
        for (int i = 1; i <= N; i++) {
            if (cows_[i] == cows[i]) check++;
        }

        if (check == N) break;

        cycleCount++;
    }

    int remainder = K % cycleCount;

    for (int i = 0; i < remainder; i++) {
        reverse(cows + A1, cows + A2 + 1);
        reverse(cows + B1, cows + B2 + 1);
    }

    for (int i = 1; i <= N; i++) cout << cows[i] << "\n";

    return 0;
}