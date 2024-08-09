#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int R, C;
    cin >> R >> C;

    char map[55][55];
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) cin >> map[i][j];
    }

    int ans[5] = {};
    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            char cur = map[i][j], right = map[i][j + 1], down = map[i + 1][j], rightDown = map[i + 1][j + 1];
            int cnt = 0;
            if (cur != '#' && right != '#' && down != '#' && rightDown != '#') {
                if (cur == 'X') cnt++;
                if (right == 'X') cnt++;
                if (down == 'X') cnt++;
                if (rightDown == 'X') cnt++;
                
                ans[cnt]++;
            }            
        }
    }

    for (int i = 0; i < 5; i++) cout << ans[i] << '\n';
    
    return 0;
}
