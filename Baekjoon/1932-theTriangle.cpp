#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
	cin >> N;
    
    int dp[505][505];
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) cin >> dp[i][j];
	}

	int ans = dp[1][1];
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i + 1; j++) {
			if (j == 1) dp[i][j] += dp[i - 1][j];
			else if (j == i) dp[i][j] += dp[i - 1][j - 1];
			else dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
            
			ans = max(ans, dp[i][j]);
		}
	}
    
	cout << ans << '\n';
    
    return 0;
}
