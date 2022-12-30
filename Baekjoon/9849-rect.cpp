#include <iostream>

using namespace std;

const int MAX = 10005;

int N;
int grid[MAX][MAX];
int ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        for (int j = min(y1, y2); j < max(y1, y2); j++) {
            for (int k = min(x1, x2); k < max(x1, x2); k++) grid[j][k]++;
        }
    }

    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            if (grid[i][j] == N) ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}