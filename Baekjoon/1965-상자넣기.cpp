#include <iostream>

using namespace std;

const int MAX = 1000;

int N;
int boxes[MAX];
int DP[MAX];
int ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> boxes[i];

    for (int i = 0; i < N; i++) {
        DP[i] = 1;

        for (int j = 0; j < i; j++) {
            if (boxes[j] < boxes[i]) DP[i] = (DP[j] + 1 > DP[i]) ? DP[j] + 1 : DP[i];
        }

        ans = DP[i] > ans ? DP[i] : ans;
    }

    cout << ans << '\n';

    return 0;
}