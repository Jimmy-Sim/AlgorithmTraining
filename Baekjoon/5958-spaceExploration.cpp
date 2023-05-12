#include <iostream>

using namespace std;

int N;
char space[1005][1005];
bool visited[1005][1005];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int row, int col) {
    visited[row][col] = true;

    for (int i = 0; i < 4; i++) {
        int nxtRow = row + dx[i], nxtCol = col + dy[i];
        if ((nxtRow >= 0 && nxtRow < N && nxtCol >= 0 && nxtCol < N) && (space[nxtRow][nxtCol] == '*' &&!visited[nxtRow][nxtCol])) dfs(nxtRow, nxtCol);
    }
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> space[i][j];
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (space[i][j] == '*' && !visited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}