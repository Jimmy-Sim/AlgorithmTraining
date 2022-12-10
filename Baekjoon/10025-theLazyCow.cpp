#include <iostream>

using namespace std;

const int MAX = 1000005;

int N, K;
int field[MAX], prefSum[MAX];
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int grass, position;
        cin >> grass >> position;

        field[position] = grass;
        prefSum[position] = grass;
    }

    for (int i = 1; i <= 1000000; i++) prefSum[i] += prefSum[i - 1];

    for (int i = 0; i <= 50; i++) {
        int grassSum;
        int left = i - K, right = i + K;

        if (left <= 0 && right > 1000000) grassSum = prefSum[1000000];
        else if (left <= 0) grassSum = prefSum[right];
        else if (right > 1000000) grassSum = prefSum[1000000] - prefSum[left - 1];
        else grassSum = prefSum[right] - prefSum[left - 1];

        ans = grassSum > ans ? grassSum : ans;
    }

    cout << ans << "\n";

    return 0;
}