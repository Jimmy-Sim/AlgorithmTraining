#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
char map[30][30];
int visited[30][30];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int ans, cnt, group[1000];

void dfs(int y, int x) {
    cnt++;
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i], nx = x + dx[i];

        if (ny >= 0 && ny < N && nx >= 0 && nx < N) {
            if (!visited[ny][nx] && map[ny][nx] == '1') dfs(ny, nx);
        }
    }
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> map[i][j];
    }

    int x = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cnt = 0;

            if (!visited[i][j] && map[i][j] == '1') {
                ans++;
                dfs(i, j);
                group[x] = cnt;
                x++;
            }
        }
    }

    sort(&group[0], &group[x]);

    cout << ans << '\n';
    for (int i = 0; i < x; i++) cout << group[i] << '\n';

    return 0;
}