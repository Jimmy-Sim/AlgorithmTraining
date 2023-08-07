#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int mosquitoes[55][55];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> mosquitoes[i][j];
    }

    int maxCnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int cnt1 = mosquitoes[i][j];
            for (int k = j + 1; k <= min(j + M, N - 1); k++) cnt1 += mosquitoes[i][k];
            for (int k = i + 1; k <= min(i + M, N - 1); k++) cnt1 += mosquitoes[k][j];
            for (int k = j - 1; k >= max(j - M, 0); k--) cnt1 += mosquitoes[i][k];
            for (int k = i - 1; k >= max(i - M, 0); k--) cnt1 += mosquitoes[k][j];

            int cnt2 = mosquitoes[i][j];
            for (int k = 1; k <= M; k++) {
                if (i + k < N && j + k < N) cnt2 += mosquitoes[i + k][j + k];
                if (i + k < N && j - k >= 0) cnt2 += mosquitoes[i + k][j - k];
                if (i - k >= 0 && j - k >= 0) cnt2 += mosquitoes[i - k][j - k];
                if (i - k >= 0 && j + k < N) cnt2 += mosquitoes[i - k][j + k];
            }

            maxCnt = max(maxCnt, max(cnt1, cnt2));
        }
    }

    cout << maxCnt << '\n';

    return 0;
}
