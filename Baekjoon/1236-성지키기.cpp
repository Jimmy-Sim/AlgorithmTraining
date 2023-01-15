#include <iostream>
#include <vector>

using namespace std;

int H, W;
char castle[55][55];
int newCastle[55][55];
int ans;

int main()
{
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) cin >> castle[i][j];
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int row = i, col = j;
            
            if (castle[row][col] == 'X') {
                for (int k = 0; k < W; k++) newCastle[row][k] = 1;
                for (int k = 0; k < H; k++) newCastle[k][col] = 1;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (newCastle[i][j] == 0) {
                ans++;
                break;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}