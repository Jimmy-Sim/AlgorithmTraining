#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int coins[105];
    for (int i = 0; i < N; i++) cin >> coins[i];
    
    int dp[10005] = {};
    dp[0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = coins[i]; j <= K; j++) dp[j] = dp[j] + dp[j - coins[i]];
    }
    
    cout << dp[K] << '\n';
}
