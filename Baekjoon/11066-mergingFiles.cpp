#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int T;
	cin >> T;

    int sum[505] = {}, files[505], dp[505][505];
    
	while (T--) {
        int K;
		cin >> K;
        
		for (int i = 1; i <= K; i++) {
			cin >> files[i];
			sum[i] = sum[i - 1] + files[i];
		}

		for (int i = 1; i <= K; i++) {
			for (int j = 1; j <= K - i; j++) {
				dp[j][i + j] = 1000000000;
				for (int k = j; k < i + j; k++) dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + sum[i + j] - sum[j - 1]);
			}
		}

		cout << dp[1][K] << '\n';

	}

    return 0;
}
