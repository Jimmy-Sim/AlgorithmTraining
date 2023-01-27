#include <iostream>

using namespace std;

int grid[10][10];
int visited[1000005];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int ans;

void dfs(int x, int y) {
    int number;

    for (int i = 0; i < 4; i++) {
        int nx1 = x + dx[i], ny1 = y + dy[i];
        if (nx1 < 0 || nx1 >= 5 || ny1 < 0 || ny1 >= 5) continue;
        
        for (int j = 0; j < 4; j++) {
            int nx2 = nx1 + dx[j], ny2 = ny1 + dy[j];
            if (nx2 < 0 || nx2 >= 5 || ny2 < 0 || ny2 >= 5) continue;
            
            for (int k = 0; k < 4; k++) {
                int nx3 = nx2 + dx[k], ny3 = ny2 + dy[k];
                if (nx3 < 0 || nx3 >= 5 || ny3 < 0 || ny3 >= 5) continue;

                for (int l = 0; l < 4; l++) {
                    int nx4 = nx3 + dx[l], ny4 = ny3 + dy[l];
                    if (nx4 < 0 || nx4 >= 5 || ny4 < 0 || ny4 >= 5) continue;

                    for (int m = 0; m < 4; m++) {
                        int nx5 = nx4 + dx[m], ny5 = ny4 + dy[m];
                        if (nx5 < 0 || nx5 >= 5 || ny5 < 0 || ny5 >= 5) continue;

                        number = 100000 * grid[x][y] + 10000 * grid[nx1][ny1] + 1000 * grid[nx2][ny2] + 100 * grid[nx3][ny3] + 10 * grid[nx4][ny4] + grid[nx5][ny5];

                        if (!visited[number]) {
                            visited[number] = 1;
                            ans++;
                        }
                    }
                }
            }
        }
    }

    if (!visited[number]) {
        visited[number] = 1;
        ans++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) cin >> grid[i][j];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            dfs(i, j);
        }
    }

    cout << ans << '\n';

    return 0;
}