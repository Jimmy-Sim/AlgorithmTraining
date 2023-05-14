#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    char puzzle[55][55];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> puzzle[i][j];
    }

    int maxCnt = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (j == i) continue;

            char mAlph = i + 65, oAlph = j + 65;
            cout << mAlph << ' ' << oAlph << '\n';
            int cnt = 0;
            for (int k = 0; k < N; k++) {
                for (int l = 0; l <= M - 3; l++) {
                    if ((puzzle[k][l] == mAlph && puzzle[k][l + 1] == oAlph && puzzle[k][l + 2] == oAlph) || (puzzle[k][l] == oAlph && puzzle[k][l + 1] == oAlph && puzzle[k][l + 2] == mAlph)) cnt++;
                }
            }
            for (int k = 0; k <= N - 3; k++) {
                for (int l = 0; l < M; l++) {
                    if ((puzzle[k][l] == mAlph && puzzle[k + 1][l] == oAlph && puzzle[k + 2][l] == oAlph) || (puzzle[k][l] == oAlph && puzzle[k + 1][l] == oAlph && puzzle[k + 2][l] == mAlph)) cnt++;
                }
            }
            for (int k = 0; k <= N - 3; k++) {
                for (int l = 0; l <= M - 3; l++) {
                    if ((puzzle[k][l] == mAlph && puzzle[k + 1][l + 1] == oAlph && puzzle[k + 2][l + 2] == oAlph) || (puzzle[k][l] == oAlph && puzzle[k + 1][l + 1] == oAlph && puzzle[k + 2][l + 2] == mAlph)) cnt++;
                }
            }
            for (int k = N - 1; k >= N - 3; k++) {
                for (int l = M - 1; l >= M - 4; l++) {
                    if ((puzzle[k][l] == mAlph && puzzle[k + 1][l - 1] == oAlph && puzzle[k + 2][l - 2] == oAlph) || (puzzle[k][l] == oAlph && puzzle[k + 1][l - 1] == oAlph && puzzle[k + 2][l - 2] == mAlph)) cnt++;
                }
            }

            maxCnt = cnt > maxCnt ? cnt : maxCnt;
        }
    }

    cout << maxCnt << '\n';

    return 0;
}