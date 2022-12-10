#include <iostream>

using namespace std;

int N;
char cows[500005];
long long ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> cows[i];

    for (int i = 0; i < N; i++) {
        int currentCow = cows[i];
        long long leftCount = 0, rightCount = 0;

        for (int j = i - 1; j >= 0; j--) {
            int leftCow = cows[j];

            if (leftCow != currentCow) leftCount++;
            else break;
        }

        for (int j = i + 1; j < N; j++) {
            int rightCow = cows[j];

            if (rightCow != currentCow) rightCount++;
            else break;
        }

        ans += leftCount * rightCount;
        ans += max(0LL, leftCount - 1);
        ans += max(0LL, rightCount - 1);
    }

    cout << ans << "\n";

    return 0;
}