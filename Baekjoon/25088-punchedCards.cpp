#include <iostream>

using namespace std;

int N;
char punchedCard[25][25];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int row, col;
        cin >> row >> col;
        
        for (int j = 1; j <= 2 * row + 1; j += 2) {
            for (int k = 1; k <= 2 * col + 1; k += 2) punchedCard[j][k] = '+';
        }
        for (int j = 1; j <= 2 * row + 1; j += 2) {
            for (int k = 2; k <= 2 * col; k += 2) punchedCard[j][k] = '-';
        }
        for (int j = 2; j <= 2 * row; j += 2) {
            for (int k = 1; k <= 2 * col + 1; k += 2) punchedCard[j][k] = '|';
        }
        for (int j = 2; j <= 2 * row; j += 2) {
            for (int k = 2; k <= 2 * col; k += 2) punchedCard[j][k] = '.';
        }
        punchedCard[1][1] = '.', punchedCard[1][2] = '.', punchedCard[2][1] = '.';

        cout << "Case #" << i << ":\n";
        for (int j = 1; j <= 2 * row + 1; j++) {
            for (int k = 1; k <= 2 * col + 1; k++) cout << punchedCard[j][k];
            cout << '\n';
        }
    }
    
    return 0;
}