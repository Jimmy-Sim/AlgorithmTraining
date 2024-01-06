#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
	int N;
	cin >> N;

    int dp[1000005];
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;
        
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	cout << dp[N] << '\n';

	return 0;
}
