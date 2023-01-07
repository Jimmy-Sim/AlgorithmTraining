#include <iostream>
#include <memory.h>

using namespace std;

const int MAXIMUM = 55;

int N;
int column, row, cabbageCount;
int grid[MAXIMUM][MAXIMUM];
int visited[MAXIMUM][MAXIMUM];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};

void dfs(int x, int y) {
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < row && ny < column) {
            if (!visited[nx][ny] && grid[nx][ny]) dfs(nx, ny);
        }
    }
}

void init()
{
    for(int i = 0; i < MAXIMUM; i++)
    {
        for(int j = 0; j < MAXIMUM; j++)
        {
            grid[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> row >> column >> cabbageCount;

        init();
        for (int j = 0; j < cabbageCount; j++) {
            int x, y;
            cin >> x >> y;
            grid[x][y] = 1;
        }

        int count = 0;
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < column; k++) {
                if (!visited[j][k] && grid[j][k]) {
                    dfs(j, k);
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}