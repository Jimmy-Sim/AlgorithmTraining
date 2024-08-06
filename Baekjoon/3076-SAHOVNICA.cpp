#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int R, C;
    cin >> R >> C;

    char board1[15][15];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i % 2 == 0 && j % 2 == 0) board1[i][j] = 'X';
            else if (i % 2 == 0 && j % 2 == 1) board1[i][j] = '.';
            else if (i % 2 == 1 && j % 2 == 0) board1[i][j] = '.';
            else board1[i][j] = 'X';
        }
    }

    int A, B;
    cin >> A >> B;

    char board2[105][105];
    for (int i = 0; i < R * A; i++) {
        for (int j = 0; j < C * B; j++) board2[i][j] = board1[i / A][j / B];
    }

    for (int i = 0; i < R * A; i++) {
        for (int j = 0; j < C * B; j++) cout << board2[i][j];
        cout << '\n';
    }
    
    return 0;
}
