#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char grid[10][10];
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin >> grid[i][j];
            }
        }

        // Checking red stripes:
        int maxRedCount = 0;
        for (int i = 1; i <= 8; i++) {
            int count = 0;
            for (int j = 1; j <= 8; j++) {
                if (grid[i][j] == 'R') {
                    count++;
                }
            }
            maxRedCount = count > maxRedCount ? count : maxRedCount;
        }

        // Checking blue stripes:
        int maxBlueCount = 0;
        for (int i = 1; i <= 8; i++) {
            int count = 0;
            for (int j = 1; j <= 8; j++) {
                if (grid[j][i] == 'B') {
                    count++;
                }
            }
            maxBlueCount = count > maxBlueCount ? count : maxBlueCount;
        }

        if (maxRedCount == 8) {
            cout << "R\n";
        }
        else {
            cout << "B\n";
        }
    }

    return 0;
}