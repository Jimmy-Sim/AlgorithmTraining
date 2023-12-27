#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int T, K;
    cin >> T >> K;
    
    int prices[105], quantities[105];
    for (int i = 0; i < K; i++) cin >> prices[i] >> quantities[i];
    
    int dp[10005] = {};
    dp[0] = 1;
    for (int i = 0; i < K; i++) {
        for (int j = T; j >= 0; j--) {
            if (dp[j]) {
                for (int k = 1; k <= quantities[i] and j + prices[i] * k <= T; k++) dp[j + prices[i] * k] += dp[j];
            }
        }
    }
    
    cout << dp[T] << '\n';
    
    return 0;
}
