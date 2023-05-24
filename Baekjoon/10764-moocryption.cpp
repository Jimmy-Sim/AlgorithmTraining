#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    char puzzle[55][55];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> puzzle[i][j];
    }

    int maxCnt = 0;
    for (int i = 0; i < 26; i++) {
        char alph1 = i + 65;
        for (int j = 0; j < 26; j++) {
            if (j == i) continue;

            int alph2 = j + 65, cnt = 0;

            for (int k = 0; k < N; k++) {
                for (int l = 0; l <= M - 3; l++) {
                    if ((puzzle[k][l] == alph1 && puzzle[k][l + 1] == alph2 && puzzle[k][l + 2] == alph2) || (puzzle[k][l] == alph2 && puzzle[k][l + 1] == alph2 && puzzle[k][l + 2] == alph1)) cnt++;
                }
            }
            for (int k = 0; k <= N - 3; k++) {
                for (int l = 0; l < M; l++) {
                    if ((puzzle[k][l] == alph1 && puzzle[k + 1][l] == alph2 && puzzle[k + 2][l] == alph2) || (puzzle[k][l] == alph2 && puzzle[k + 1][l] == alph2 && puzzle[k + 2][l] == alph1)) cnt++;
                }
            }
            for (int k = 0; k <= N - 3; k++) {
                for (int l = 0; l <= M - 3; l++) {
                    if ((puzzle[k][l] == alph1 && puzzle[k + 1][l + 1] == alph2 && puzzle[k + 2][l + 2] == alph2) || (puzzle[k][l] == alph2 && puzzle[k + 1][l + 1] == alph2 && puzzle[k + 2][l + 2] == alph1)) cnt++;
                }
            }
            for (int k = N - 3; k < N; k++) {
                for (int l = 0; l <= M - 3; l++) {
                    if ((puzzle[k][l] == alph1 && puzzle[k - 1][l + 1] == alph2 && puzzle[k - 2][l + 2] == alph2) || (puzzle[k][l] == alph2 && puzzle[k - 1][l + 1] == alph2 && puzzle[k - 2][l + 2] == alph1)) cnt++;
                }
            }

            maxCnt = cnt > maxCnt ? cnt : maxCnt;
        }
    }

    cout << maxCnt << '\n';

    return 0;
}