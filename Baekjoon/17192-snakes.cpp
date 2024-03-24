#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int N, K;
	cin >> N >> K;

	int groups[405];
	for (int i = 1; i <= N; i++) cin >> groups[i];

	int maxGroup = -1, space = 0;
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
	for (int i = 1; i <= N; i++) {
		maxGroup = max(maxGroup, groups[i]);
		dp[i][0] = maxGroup * i;

		for (int j = 1; j <= K; j++) {
			dp[i][j] = INT32_MAX;
			
            int size = groups[i];
			for (int l = i - 1; l >= 0; l--) {
				dp[i][j] = min(dp[i][j], dp[l][j - 1] + size * (i - l));
				size = max(size, groups[l]);
			}
		}
        
		space += groups[i];
	}
    
	cout << dp[N][K] - space << '\n';
    
    return 0;
}
