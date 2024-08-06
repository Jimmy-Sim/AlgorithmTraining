#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int limits[105], speeds[105];
    int idx = 1;
    for (int i = 0; i < N; i++) {
        int length, limit;
        cin >> length >> limit;

        for (int j = idx; j < idx + length; j++) limits[j] = limit;
        idx += length;
    }
    idx = 1;
    for (int i = 0; i < M; i++) {
        int length, speed;
        cin >> length >> speed;

        for (int j = idx; j < idx + length; j++) speeds[j] = speed;
        idx += length;
    }

    int maxExceed = 0;
    for (int i = 1; i <= 100; i++) {
        int limit = limits[i], speed = speeds[i];
        maxExceed = max(speed - limit, maxExceed);
    }

    cout << maxExceed << '\n';
    
    return 0;
}
