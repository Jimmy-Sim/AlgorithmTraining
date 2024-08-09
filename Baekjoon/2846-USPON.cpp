#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    int points[1005], diff[1005] = {};
    for (int i = 0; i < N; i++) {
        cin >> points[i];

        if (i > 0) diff[i] = points[i] - points[i - 1];
    }

    int climb = 0, maxClimb = 0;
    for (int i = 1; i <= N; i++) {
        if (diff[i] > 0) climb += diff[i];
        else {
            maxClimb = max(climb, maxClimb);
            climb = 0;
        }
    }

    cout << maxClimb << '\n';
    
    return 0;
}
