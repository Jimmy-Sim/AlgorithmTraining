#include <iostream>

using namespace std;

const int MAX = 500005;

int N;
char line[MAX];
int limit = 3, x;
long long ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> line[i];

    for (int i = 0; i < N; i++) {
        long long leftCount = 0, rightCount = 0;

        for (int j = i - 1; j >= 0 && line[i] != line[j]; j--) leftCount++;
        for (int j = i + 1; j < N && line[i] != line[j]; j++) rightCount++;

        ans += leftCount * rightCount;
        ans += max(0LL, leftCount - 1);
        ans += max(0LL, rightCount - 1);
    }

    cout << ans << "\n";

    return 0;
}