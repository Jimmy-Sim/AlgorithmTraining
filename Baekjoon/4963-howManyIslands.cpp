#include <iostream>

using namespace std;

int W, H;
int map[55][55];
int visited[55][55];
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void dfs(int y, int x) {
    visited[y][x] = 1;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < W && ny < H) {
            if (!visited[ny][nx] && map[ny][nx]) dfs(ny, nx);
        }
    }
}

void init() {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            map[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}

int main()
{
    cin >> W >> H;

    while (W != 0 || H != 0) {
        init();

        int cnt = 0;

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) cin >> map[i][j];
        }

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (!visited[j][i] && map[j][i]) {
                    dfs(j, i);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
        
        cin >> W >> H;
    }

    return 0;
}