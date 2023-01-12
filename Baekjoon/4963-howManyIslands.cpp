#include <iostream>

using namespace std;

int W, H;
int map[55][55];
int visited[55][55];
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void dfs(int x, int y) {
    visited[x][y] = 1;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < H && ny < W) {
            if (!visited[nx][ny] && map[nx][ny]){
                dfs(nx, ny);
            }
        }
    }
}

void init() {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) visited[i][j] = 0;
    }
}

int main()
{
    while (true) {
        cin >> W >> H;

        if (W == 0 && H == 0) break;

        init();

        int cnt = 0;

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) cin >> map[i][j];
        }
        
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (!visited[i][j] && map[i][j]) {
                    cnt++;
                    dfs(i, j);
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}