#include <iostream>
#include <queue>

using namespace std;

int N, M;
char map[55][55];
int visited[55][55];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void init() {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) visited[i][j] = 0;
    }
}

int bfs(int x, int y) {
    if (map[x][y] == 'W') return 0;
    
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    visited[x][y] = 1;
    while (!q.empty()) {
        int xx = q.front().first, yy = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = xx + dx[i], ny= yy + dy[i];
            if (nx >= 0 && ny >= 0 && nx < N && ny < M && map[nx][ny] == 'L') {
                if (!visited[nx][ny]) {
                    q.push(make_pair(nx,ny));
                    visited[nx][ny] = visited[xx][yy] + 1;
                    cnt = max(cnt, visited[nx][ny]);
                }
            }
        }
    }
    
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
       for (int j = 0; j < M; j++) cin >> map[i][j];
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            ans = max(bfs(i, j), ans);
            
            init();
        }
    }
    
    cout << ans - 1 << '\n';
    
    return 0;
}
