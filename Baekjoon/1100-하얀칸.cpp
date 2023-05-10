#include <iostream>

using namespace std;

int main()
{
    char chessboard[10][10];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) cin >> chessboard[i][j];
    }

    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0 && chessboard[i][j] == 'F') cnt++;
            else if (i % 2 == 1 && j % 2 == 1 && chessboard[i][j] == 'F') cnt++;
        }
    }

    cout << cnt << '\n';
    
    return 0;
}