#include <iostream>

using namespace std;

const int MAX = 50;

int K, N;
int sessions[MAX][MAX], check[MAX][MAX];
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> K >> N;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) cin >> sessions[i][j];
    }

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N - 1; j++) {
            int cow1 = sessions[i][j];

            for (int k = j + 1; k < N; k++) {
                int cow2 = sessions[i][k];

                check[cow1][cow2]++;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (check[i][j] == K) ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}