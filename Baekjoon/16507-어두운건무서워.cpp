#include <iostream>

using namespace std;

const int MAX = 10005;

int R, C, Q;
int photo[1005][1005], queries[MAX][5];

int main()
{
    cin >> R >> C >> Q;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) cin >> photo[i][j];
    }
    for (int i = 1; i <= Q; i++) cin >> queries[i][1] >> queries[i][2] >> queries[i][3] >> queries[i][4];

    for (int i = 1; i <= R; i++) {
        for (int j = 2; j <= C; j++) photo[i][j] += photo[i][j - 1];
    }

    for (int i = 1; i <= Q; i++) {
        int sum = 0, avg;

        int r1 = queries[i][1], c1 = queries[i][2];
        int r2 = queries[i][3], c2 = queries[i][4];

        int count = (r2 - r1 + 1) * (c2 - c1 + 1);

        for (int j = r1; j <= r2; j++) {
            sum += photo[j][c2];
            sum -= photo[j][c1 - 1];
        }

        avg = sum / count;

        cout << avg << '\n';
    }

    return 0;
}