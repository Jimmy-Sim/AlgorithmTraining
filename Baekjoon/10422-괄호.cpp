#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int T;
    cin >> T;
    
    long long dp[5005] = {};
    dp[0] = 1;
    for (int i = 2; i <= 5000; i += 2) {
        for (int j = 2; j <= i; j += 2) {
            dp[i] += dp[j - 2] * dp[i - j];
            dp[i] %= 1000000007;
        }
    }
    
	while (T--) {
        int length;
        cin >> length;
        
        cout << dp[length] << '\n';
    }
    
	return 0;
}
