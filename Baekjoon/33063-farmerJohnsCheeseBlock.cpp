#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    static int countX[1005][1005], countY[1005][1005], countZ[1005][1005];
    long long fullX = 0, fullY = 0, fullZ = 0;

    auto increment = [&](int &val, long long &fullCount) {
        if (val == N - 1) fullCount++;
        val++;
    };

    for (int i = 0; i < Q; i++) {
        int x, y, z;
        cin >> x >> y >> z; 

        increment(countX[y][z], fullX);
        increment(countY[x][z], fullY);
        increment(countZ[x][y], fullZ);

        long long ans = fullX + fullY + fullZ;
        cout << ans << '\n';
    }

    return 0;
}
