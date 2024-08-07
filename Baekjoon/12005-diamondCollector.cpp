#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int sizes[1005];
    for (int i = 0; i < N; i++) cin >> sizes[i];

    sort(sizes, sizes + N);

    int maxCnt = 0;
    for (int i = 0; i < N - 1; i++) {
        int cnt = 1;
        for (int j = i + 1; j < N; j++) {
            if (sizes[j] - sizes[i] <= K) cnt++;
            else break;
        }

        maxCnt = max(cnt, maxCnt);
    }

    cout << maxCnt << '\n';
    
    return 0;
}
