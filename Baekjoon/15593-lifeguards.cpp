#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    // 2D times:
    /*
    int times[105][1005] = {}, minStart = 1000, maxEnd = 0;
    for (int i = 1; i <= N; i++) {
        int start, end;
        cin >> start >> end;
        
        for (int j = start; j < end; j++) times[i][j] = 1;

        minStart = min(start, minStart);
        maxEnd = max(end, maxEnd);
    }

    int maxCnt = 0;
    for (int i = 1; i <= N; i++) {
        int cnt = 0, checked[1005] = {};
        for (int j = minStart; j < maxEnd; j++) {
            for (int k = 1; k <= N; k++) {
                if (k != i && times[k][j] && !checked[j]) {
                    cnt++;
                    checked[j] = 1;
                }
            }
        }

        maxCnt = max(cnt, maxCnt);
    }

    cout << maxCnt << '\n';
    */

    // 1D times:
    int starts[105], ends[105], times[1005] = {}, minStart = 1000, maxEnd = 0;
    for (int i = 0; i < N; i++) {
        cin >> starts[i] >> ends[i];

        for (int j = starts[i]; j < ends[i]; j++) times[j]++;

        minStart = min(starts[i], minStart);
        maxEnd = max(ends[i], maxEnd);
    }

    int maxCnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = starts[i]; j < ends[i]; j++) times[j]--;

        int cnt = 0;
        for (int j = minStart; j < maxEnd; j++) {
            if (times[j] > 0) cnt++;
        }

        maxCnt = max(cnt, maxCnt);

        for (int j = starts[i]; j < ends[i]; j++) times[j]++;
    }

    cout << maxCnt << '\n';
    
    return 0;
}
