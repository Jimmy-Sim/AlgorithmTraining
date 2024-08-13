#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int R, C;
    cin >> R >> C;

    char card[105][105];
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) cin >> card[i][j];
    }
    
    for (int i = 1; i <= R; i++) {
        int idx = 1;
        for (int j = 2 * C; j > C; j--) {
            card[i][j] = card[i][idx];
            idx++;
        }
    }

    int idx = 1;
    for (int i = 2 * R; i > R; i--) {
        for (int j = 1; j <= 2 * C; j++) {
            card[i][j] = card[idx][j];
        }
        idx++;
    }

    int A, B;
    cin >> A >> B;

    if (card[A][B] == '#') card[A][B] = '.';
    else card[A][B] = '#';

    for (int i = 1; i <= 2 * R; i++) {
        for (int j = 1; j <= 2 * C; j++) cout << card[i][j];
        cout << '\n';
    }
    
    return 0;
}
