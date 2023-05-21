#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return abs(x) < abs(y);
}

int main()
{
    int T, N;
    cin >> T >> N;

    int cows[50005] = {};
    for (int i = 1; i <= N; i++) cin >> cows[i];

    sort(&cows[1], &cows[N + 1], cmp);

    long long total = 0;
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        total += abs(cows[i] - cows[i - 1]);
        if (total <= T) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}