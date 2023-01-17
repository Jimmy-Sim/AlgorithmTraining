#include <iostream>
#include <vector>

using namespace std;

const int MAX = 105;

int N;
char square[MAX][MAX];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int humanVisited[MAX][MAX], cowVisited[MAX][MAX];
int humanCount = 0, cowCount = 0;

void humanDFS(int row, int col, int red, int green, int blue) {
    humanVisited[row][col] = 1;

    char color;
    if (red) color = 'R';
    else if (green) color = 'G';
    else color = 'B';

    for (int i = 0; i < 4; i++) {
        int nx = row + dx[i], ny = col + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            if (!humanVisited[nx][ny] && square[nx][ny] == color) humanDFS(nx, ny, red, green, blue);
        }
    }
}

void cowDFS(int row, int col, int redGreen, int blue) {
    cowVisited[row][col] = 1;

    string color;
    if (redGreen) color = "RG";
    else color = 'B';

    for (int i = 0; i < 4; i++) {
        int nx = row + dx[i], ny = col + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            if (!cowVisited[nx][ny] && (square[nx][ny] == color[0] || square[nx][ny] == color[1])) cowDFS(nx, ny, redGreen, blue);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> square[i][j];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!humanVisited[i][j]) {
                humanCount++;

                if (square[i][j] == 'R') humanDFS(i, j, 1, 0, 0);
                else if (square[i][j] == 'G') humanDFS(i, j, 0, 1, 0);
                else humanDFS(i, j, 0, 0, 1);
            }
            if (!cowVisited[i][j]) {
                cowCount++;

                if (square[i][j] == 'R' || square[i][j] == 'G') cowDFS(i, j, 1, 0);
                else cowDFS(i, j, 0, 1);
            }
        }
    }

    cout << humanCount << ' ' << cowCount << '\n';

    return 0;
}