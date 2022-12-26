#include <iostream>

using namespace std;

const int MAX = 205;

int N, M;
int impossiblePairings[MAX][MAX];
int ans;

int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int flavor1, flavor2;
        cin >> flavor1 >> flavor2;

        impossiblePairings[min(flavor1, flavor2)][max(flavor1, flavor2)] = 1;
    }

    for (int i = 1; i <= N - 2; i++) {
        int flavor1 = i;
        for (int j = i + 1; j <= N - 1; j++) {
            int flavor2 = j;
            if (impossiblePairings[flavor1][flavor2] == 1) continue;

            for (int k = j + 1; k <= N; k++) {
                int flavor3 = k;
                if (impossiblePairings[flavor1][flavor3] == 1 || impossiblePairings[flavor2][flavor3] == 1) continue;
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}