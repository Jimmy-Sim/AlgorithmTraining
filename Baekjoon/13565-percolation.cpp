#include <iostream>

using namespace std;

int N, M;
char grid[1005][1005];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
bool visited[1005][1005], found;

void init() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) visited[i][j] = false;
    }
}

void dfs(int row, int col) {
    if (row == N - 1) {
        found = true;
        return;
    }

    visited[row][col] = true;

    for (int i = 0; i < 4; i++) {
        int nxtRow = row + dx[i], nxtCol = col + dy[i];
        if (nxtRow >= 0 && nxtRow < N && nxtCol >= 0 && nxtCol < M && grid[nxtRow][nxtCol] == '0' && !visited[nxtRow][nxtCol]) dfs(nxtRow, nxtCol);
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> grid[i][j];
    }

    for (int i = 0; i < M; i++) {
        if (grid[0][i] == '0') {
            dfs(0, i);
            if (found) {
                cout << "YES\n";
                break;
            }
            init();
        }
    }

    if (!found) cout << "NO\n";

    return 0;
}